package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class IPs {
  static inline var PATH = "/ips";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function list(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, PATH, handler, params);
  }

  public function create(name:String, handler:Int->Dynamic->Void, ?region:String):Void {
    var params:Dynamic = {name: name};
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.post(client, PATH, handler, params);
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

  public function actions(id:String, params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.post(client, '$PATH/$id/actions', handler, params);
  }

  public function assign(id:String, assignToId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    actions(id, {action: "assign", assign_to_id: assignToId}, handler, region);
  }

  public function unassign(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    actions(id, {action: "unassign"}, handler, region);
  }
}
