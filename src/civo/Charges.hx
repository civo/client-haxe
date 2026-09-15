package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Charges {
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  public function list(handler:Int->Dynamic->Void, ?from:String, ?to:String):Void {
    var params:Dynamic = {};
    if (from != null)
      Reflect.setField(params, "from", from);
    if (to != null)
      Reflect.setField(params, "to", to);
    CivoHttp.get(client, "/charges", handler, params);
  }
}
