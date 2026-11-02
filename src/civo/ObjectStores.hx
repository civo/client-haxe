package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class ObjectStores {
  static inline var PATH = "/objectstores";
  static inline var CREDS = "/objectstore/credentials";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, params);
  }

  public function list(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, PATH, handler, params);
  }

  public function get(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function update(id:String, params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.patch(client, '$PATH/$id', handler, params);
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function createCredential(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, CREDS, handler, params);
  }

  public function listCredentials(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, CREDS, handler, params);
  }

  public function getCredential(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$CREDS/$id', handler, region != null ? {region: region} : {});
  }

  public function deleteCredential(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$CREDS/$id', handler, region != null ? {region: region} : {});
  }
}
