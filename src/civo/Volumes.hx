package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Volumes {
  static inline var PATH = "/volumes";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, params);
  }

  public function list(handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, PATH, handler, region != null ? {region: region} : {});
  }

  public function attach(id:String, instanceId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    var params:Dynamic = {instance_id: instanceId};
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.put(client, '$PATH/$id/attach', handler, params);
  }

  public function detach(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/detach', handler, region != null ? {region: region} : {});
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }
}
