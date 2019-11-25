package civo;

import civo.net.CivoHttp;

/*
  To manage the SSH keys for an account that are used for 
  logging in to instances, there are a set of APIs for 
  listing the SSH public keys currently stored, as well 
  as adding and removing them by name.
*/

@:expose
class Ssh {
  static var path = '/sshkeys';

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function get(token: String, ssh_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, '$path/$ssh_id', handler);
  }

  static public function upload(token: String, name: String, public_key: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, {name: name, public_key: public_key});
  }

  static public function update(token: String, ssh_id: String, name: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$ssh_id', handler, {name: name});
  }

  static public function delete(token: String, ssh_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$ssh_id', handler);
  }
}