package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Firewalls {
  static inline var PATH = "/firewalls";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(name:String, networkId:String, handler:Int->Dynamic->Void, ?region:String, ?extra:Dynamic):Void {
    var params:Dynamic = extra != null ? extra : {};
    Reflect.setField(params, "name", name);
    Reflect.setField(params, "network_id", networkId);
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

  public function createRule(firewallId:String, params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, '$PATH/$firewallId/rules', handler, params);
  }

  public function rules(firewallId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$firewallId/rules', handler, region != null ? {region: region} : {});
  }

  public function updateRule(firewallId:String, ruleId:String, params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.put(client, '$PATH/$firewallId/rules/$ruleId', handler, params);
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function deleteRule(firewallId:String, ruleId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$firewallId/rules/$ruleId', handler, region != null ? {region: region} : {});
  }
}
