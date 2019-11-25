package civo;

import civo.net.CivoHttp;

/*
  Our quotas (and therefore our pricing), are based on a 
  combined allocation of CPU, RAM and disk. All customers 
  start on a basic quota level and after a period of proving 
  that the quota is being handled correctly or after a call 
  to our offices, we can increase this quota.
*/

@:expose
class Quota {
  static var path = '/quota';

  static public function get(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }
}