package civo;

import civo.net.CivoHttp;

/*
  To manage the private networks for an account, there are a 
  set of APIs for listing them, as well as adding, renaming 
  and removing them by ID.
*/

@:expose
class Networks {
  static var path = '/networks';

  static public function create(token: String, label: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, {label: label});
  }

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function rename(token: String, network_id: String, label: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$network_id', handler, {label: label});
  }

  static public function delete(token: String, network_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$network_id', handler);
  }
}