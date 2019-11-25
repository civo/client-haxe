package civo.net;

import tink.http.Client.*;
import tink.http.Method;
import tink.http.Request;
import tink.http.Header;

@:timeout(20000)
@:expose
class CivoHttp {
  public static function url(path) {
    return "https://api.civo.com/v2" + path;
  }

  public static function get(token: String, path: String, handler: Int -> Dynamic -> Void, ?params: Null<Dynamic>) {
    return request(GET, token, path, handler, params);
  }

  public static function put(token: String, path: String, handler: Int -> Dynamic -> Void, ?params: Null<Dynamic>) {
    return request(PUT, token, path, handler, params);
  }

  public static function post(token: String, path: String, handler: Int -> Dynamic -> Void, ?params: Null<Dynamic>) {
    return request(POST, token, path, handler, params);
  }

  public static function delete(token: String, path: String, handler: Int -> Dynamic -> Void, ?params: Null<Dynamic>) {
    return request(DELETE, token, path, handler, params);
  }

  public static function request(method: Method, token: String, path: String, handler: Int -> Dynamic -> Void, ?params: Null<Dynamic>) {
    var uri = url(path);

    var body = params != null ? haxe.Json.stringify(params) : "";
    var headers = [
        new HeaderField('Content-Type', 'application/json'),
        new HeaderField('Content-Length', body.length),
        new HeaderField('Authorization', 'Bearer ${token}')
      ];

    return fetch(uri, {
        method: method,
        headers: headers,
        body: body
      }).all().handle(function(o) {
        switch o {
          case Success(res):
            var body: String = (res.body != null && res.body != '') ? haxe.Json.parse(res.body.toString()) : null;
            handler(res.header.statusCode, body);
          case Failure(res):
            var body: String = (res.data != null && res.data != '') ? haxe.Json.parse(res.data) : res.message;
            handler(res.code, body);
        }
      });
  }
}