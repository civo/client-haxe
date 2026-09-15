package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Dns {
  static inline var PATH = "/dns";
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function listDomains(handler:Int->Dynamic->Void):Void {
    CivoHttp.get(client, PATH, handler);
  }

  public function createDomain(name:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, PATH, handler, {name: name});
  }

  public function updateDomain(id:String, name:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.put(client, '$PATH/$id', handler, {name: name});
  }

  public function deleteDomain(id:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.delete(client, '$PATH/$id', handler);
  }

  public function listRecords(domainId:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.get(client, '$PATH/$domainId/records', handler);
  }

  public function createRecord(domainId:String, params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, '$PATH/$domainId/records', handler, params);
  }

  public function updateRecord(domainId:String, id:String, params:Dynamic, handler:Int->Dynamic->Void):Void {
    CivoHttp.put(client, '$PATH/$domainId/records/$id', handler, params);
  }

  public function deleteRecord(domainId:String, id:String, handler:Int->Dynamic->Void):Void {
    CivoHttp.delete(client, '$PATH/$domainId/records/$id', handler);
  }
}
