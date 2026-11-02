package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Quota {
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function get(handler:Int->Dynamic->Void):Void {
    CivoHttp.get(client, "/quota", handler);
  }
}
