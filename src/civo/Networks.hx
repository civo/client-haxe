package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Networks {
  static inline var PATH = "/networks";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(label:String, handler:Int->Dynamic->Void, ?opts:Dynamic):Void {
    var params:Dynamic = opts != null ? opts : {};
    Reflect.setField(params, "label", label);
    CivoHttp.post(client, PATH, handler, params);
  }

  public function list(handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, PATH, handler, region != null ? {region: region} : {});
  }

  public function get(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function rename(id:String, label:String, handler:Int->Dynamic->Void, ?region:String):Void {
    var params:Dynamic = {label: label};
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.put(client, '$PATH/$id', handler, params);
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }
}
