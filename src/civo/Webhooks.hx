package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Webhooks {
  static inline var PATH = "/webhooks";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function list(handler:Int->Dynamic->Void):Void {
    CivoHttp.get(client, PATH, handler);
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, params);
  }

  public function update(id:String, params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.put(client, '$PATH/$id', handler, params);
  }

  public function test(id:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, '$PATH/$id/test', handler, {});
  }

  public function delete(id:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.delete(client, '$PATH/$id', handler);
  }
}
