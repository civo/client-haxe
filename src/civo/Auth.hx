package civo;

import Civo;
import civo.net.CivoHttp;

@:expose
class Auth {
  var client:Civo;

  public function new(client:Civo) {
    this.client = client;
  }

  /** Exchange API key for a short-lived JWT (`POST /v2/auth/exchange`). */
  public function exchangeToken(handler:Int->Dynamic->Void):Void {
    CivoHttp.post(client, "/auth/exchange", handler, {});
  }
}
