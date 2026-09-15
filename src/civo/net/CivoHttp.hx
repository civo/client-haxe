package civo.net;

import Civo;
import tink.http.Client.*;
import tink.http.Method;
import tink.http.Header;

/**
  Shared HTTP transport for the Civo API.
  Region is always sent as a query param when known, and kept in JSON bodies.
**/
@:expose
class CivoHttp {
  public static function url(path:String, ?query:Map<String, String>):String {
    var base = "https://api.civo.com/v2" + path;
    if (query == null || !query.keys().hasNext())
      return base;
    var parts = [];
    for (k in query.keys()) {
      var v = query.get(k);
      if (v != null && v != "")
        parts.push(StringTools.urlEncode(k) + "=" + StringTools.urlEncode(v));
    }
    if (parts.length == 0)
      return base;
    return base + "?" + parts.join("&");
  }

  public static function get(client:Civo, path:String, handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    request(GET, client, path, handler, params, false);
  }

  public static function post(client:Civo, path:String, handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    request(POST, client, path, handler, params, true);
  }

  public static function put(client:Civo, path:String, handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    request(PUT, client, path, handler, params, true);
  }

  public static function patch(client:Civo, path:String, handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    request(PATCH, client, path, handler, params, true);
  }

  public static function delete(client:Civo, path:String, handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    request(DELETE, client, path, handler, params, false);
  }

  static function request(
    method:Method,
    client:Civo,
    path:String,
    handler:Int->Dynamic->Void,
    params:Dynamic,
    asJsonBody:Bool
  ):Void {
    if (client == null || client.token == null || client.token == "")
      throw "Civo client requires a non-empty token";

    var cleaned = clean(params);
    var region = field(cleaned, "region");
    if (region == null || region == "")
      region = client.region;

    if (region != null && region != "" && (cleaned == null || field(cleaned, "region") == null)) {
      if (cleaned == null)
        cleaned = {};
      Reflect.setField(cleaned, "region", region);
    }

    var query = new Map<String, String>();
    var bodyObj:Dynamic = null;
    var bodyStr = "";

    if (asJsonBody) {
      if (region != null && region != "")
        query.set("region", Std.string(region));
      bodyObj = cleaned;
      bodyStr = bodyObj != null ? haxe.Json.stringify(bodyObj) : "";
    } else {
      // GET / DELETE: all params as query
      if (cleaned != null) {
        for (k in Reflect.fields(cleaned)) {
          var v = Reflect.field(cleaned, k);
          if (v != null)
            query.set(k, Std.string(v));
        }
      }
      if (region != null && region != "" && !query.exists("region"))
        query.set("region", Std.string(region));
    }

    var uri = url(path, query);
    var headers = [
      new HeaderField("Content-Type", "application/json"),
      new HeaderField("Content-Length", Std.string(bodyStr.length)),
      new HeaderField("Authorization", 'Bearer ${client.token}')
    ];

    fetch(uri, {
      method: method,
      headers: headers,
      body: bodyStr
    }).all().handle(function(o) {
      switch o {
        case Success(res):
          handler(res.header.statusCode, decodeBody(res.body != null ? res.body.toString() : null));
        case Failure(err):
          var raw:Dynamic = null;
          if (err.data != null)
            raw = decodeBody(Std.string(err.data));
          else
            raw = err.message;
          handler(err.code, raw);
      }
    });
  }

  static function decodeBody(raw:Null<String>):Dynamic {
    if (raw == null || raw == "")
      return null;
    try {
      return haxe.Json.parse(raw);
    } catch (e:Dynamic) {
      return raw;
    }
  }

  static function clean(params:Dynamic):Dynamic {
    if (params == null)
      return null;
    var out:Dynamic = {};
    var any = false;
    for (k in Reflect.fields(params)) {
      var v = Reflect.field(params, k);
      if (v != null) {
        Reflect.setField(out, k, v);
        any = true;
      }
    }
    return any ? out : null;
  }

  static function field(o:Dynamic, name:String):Dynamic {
    if (o == null)
      return null;
    return Reflect.field(o, name);
  }
}
