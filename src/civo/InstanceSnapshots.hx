package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class InstanceSnapshots {
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function create(instanceId:String, handler:Int->Dynamic->Void, ?params:Dynamic, ?region:String):Void {
    var p:Dynamic = params != null ? params : {};
    if (region != null)
      Reflect.setField(p, "region", region);
    CivoHttp.post(client, '/instances/$instanceId/snapshots', handler, p);
  }

  public function list(instanceId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '/instances/$instanceId/snapshots', handler, region != null ? {region: region} : {});
  }

  public function get(instanceId:String, snapshotId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '/instances/$instanceId/snapshots/$snapshotId', handler, region != null ? {region: region} : {});
  }

  public function update(instanceId:String, snapshotId:String, params:Dynamic, handler:Int->Dynamic->Void, ?region:String):Void {
    if (region != null)
      Reflect.setField(params, "region", region);
    CivoHttp.put(client, '/instances/$instanceId/snapshots/$snapshotId', handler, params);
  }

  public function restore(instanceId:String, snapshotId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.post(client, '/instances/$instanceId/snapshots/$snapshotId/restore', handler, region != null ? {region: region} : {});
  }

  public function delete(instanceId:String, snapshotId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '/instances/$instanceId/snapshots/$snapshotId', handler, region != null ? {region: region} : {});
  }
}
