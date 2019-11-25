package civo;

import civo.net.CivoHttp;

/*
  Kubernetes clusters are a number of instances on the Civo 
  cloud platform running the Kubernetes cloud orchestration platform.
*/

@:expose
class Kubernetes {
  static var path = "/kubernetes/clusters";
  static var apps = "/kubernetes/applications";

  static public function create(token: String, params: KubernetesParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, params);
  }

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function get(token: String, kubernetes_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, '$path/$kubernetes_id', handler);
  }

  static public function update(token: String, kubernetes_id: String, params: UpdateKubernetesParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$kubernetes_id', handler);
  }

  static public function applications(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, apps, handler);
  }

  static public function delete(token: String, kubernetes_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$kubernetes_id', handler);
  }

  static public function recycle(token: String, kubernetes_id: String, hostname: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, '$path/$kubernetes_id/recycle', handler, {hostname: hostname});
  }
}

typedef KubernetesParams = {
  name: String,                 // a name for your cluster, must be unique within your account (required)
  ?num_target_nodes: Int,       // the number of instances to create (optional, the default at the time of writing is 3)
  ?target_nodes_size: String,   // the size of each node (optional, the default is currently g2.small)
  ?kubernetes_version: String,  // the version of k3s to install (optional, the default is currently the latest available)
  ?tags: String                 // a space separated list of tags, to be used freely as required (optional)
}

typedef UpdateKubernetesParams = {
  name: String,                 // a name for your cluster, must be unique within your account (required)
  ?num_target_nodes: Int,       // the number of instances to create (optional, the default at the time of writing is 3)
  ?applications: String         // a comma separated list of applications to install. Spaces within application names are fine, but shouldn't be either side of the comma.
}