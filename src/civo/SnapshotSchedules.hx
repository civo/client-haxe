package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class SnapshotSchedules {
  static inline var PATH = "/resourcesnapshotschedules";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.post(client, PATH, handler, params);
  }

  public function list(handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, PATH, handler, region != null ? {region: region} : {});
  }

  public function get(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function update(id:String, params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.put(client, '$PATH/$id', handler, params);
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }
}
