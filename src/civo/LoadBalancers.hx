package civo;

import civo.net.CivoHttp;

/*
  If you want to create a load balancer for your instances, to 
  spread your web traffic between them then you can easily launch 
  a managed load balancer service on Civo. The pricing is described 
  on their pricing page.
*/

@:expose
class LoadBalancers {
  static var path = '/loadbalancers';

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function create(token: String, params: LoadBalancerParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, params);
  }

  static public function update(token: String, lb_id: String, params: LoadBalancerParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$lb_id', handler, params);
  }

  static public function delete(token: String, lb_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$lb_id', handler);
  }
}

typedef LoadBalancerParams = {
  backends: Array<String>,            // a list of backend instances, each containing an instance_id, protocol (http or https) and port
  ?hostname: String,                  // the hostname to receive traffic for, e.g. "www.example.com" (optional: sets hostname to loadbalancer-uuid.civo.com if blank)
  ?protocol: String,                  // either http or https. If you specify https then you must also provide the next two fields, the default is "http"
  ?tls_certificate: String,           // if your protocol is https then you should send the TLS certificate in Base64-encoded PEM format
  ?tls_key: String,                   // if your protocol is https then you should send the TLS private key in Base64-encoded PEM format
  ?port: String,                      // you can listen on any port, the default is "80" to match the default protocol of "http", if not you must specify it here (commonly 80 for HTTP or 443 for HTTPS)
  ?max_request_size: Int,             // the size in megabytes of the maximum request content that will be accepted, defaults to 20
  ?policy: String,                    // one of: least_conn (sends new requests to the least busy server), random (sends new requests to a random backend), round_robin (sends new requests to the next backend in order), ip_hash (sends requests from a given IP address to the same backend), default is "random"
  ?health_check_path: String,         // what URL should be used on the backends to determine if it's OK (2xx/3xx status), defaults to "/"
  ?fail_timeout: Int,                 // how long to wait in seconds before determining a backend has failed, defaults to 30
  ?max_conns: Int,                    // how many concurrent connections can each backend handle, defaults to 10
  ?ignore_invalid_backend_tls: Bool   // should self-signed/invalid certificates be ignored from the backend servers, defaults to true
}