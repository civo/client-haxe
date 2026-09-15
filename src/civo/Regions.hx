package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Regions {
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function list(handler:Int->Dynamic->Void):Void {
    CivoHttp.get(client, "/regions", handler);
  }
}
