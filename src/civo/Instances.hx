package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Instances {
  static inline var PATH = "/instances";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function availableSizes(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, "/sizes", handler, params);
  }

  public function create(params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, params);
  }

  public function list(handler:Int->Dynamic->Void, ?params:Dynamic):Void {
    CivoHttp.get(client, PATH, handler, params);
  }

  public function get(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.get(client, '$PATH/$id', handler, regionParams(region));
  }

  public function delete(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.delete(client, '$PATH/$id', handler, regionParams(region));
  }

  public function retag(id:String, tags:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/tags', handler, merge(region, {tags: tags}));
  }

  public function hardReboots(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.post(client, '$PATH/$id/hard_reboots', handler, regionParams(region));
  }

  public function softReboots(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.post(client, '$PATH/$id/soft_reboots', handler, regionParams(region));
  }

  public function stop(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/stop', handler, regionParams(region));
  }

  public function start(id:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/start', handler, regionParams(region));
  }

  public function resize(id:String, size:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/resize', handler, merge(region, {size: size}));
  }

  public function firewall(id:String, firewallId:String, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/firewall', handler, merge(region, {firewall_id: firewallId}));
  }

  public function allowedIps(id:String, ips:Array<String>, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/allowed_ips', handler, merge(region, {allowed_ips: ips}));
  }

  public function networkBandwidthLimit(id:String, limit:Int, handler:Int->Dynamic->Void, ?region:String):Void {
    CivoHttp.put(client, '$PATH/$id/network_bandwidth_limit', handler, merge(region, {network_bandwidth_limit: limit}));
  }

  static function regionParams(?region:String):Dynamic {
    return region != null ? {region: region} : {};
  }

  static function merge(?region:String, params:Dynamic):Dynamic {
    if (region != null)
      Reflect.setField(params, "region", region);
    return params;
  }
}
