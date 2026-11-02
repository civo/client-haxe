package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class DiskImages {
  static inline var PATH = "/disk_images";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function list(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, PATH, handler, params);
  }

  public function get(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, params);
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, region != null ? {region: region} : {});
  }
}
