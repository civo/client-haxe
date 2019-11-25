package civo;

import civo.net.CivoHttp;

/*
  Instances are running virtual servers on the Civo cloud 
  platform. They can be of variable size.
*/

@:expose
class Instances {
  static var path = '/instances';

  static public function available_sizes(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, "sizes", handler);
  }

  static public function create(token: String, params: InstanceParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, params);
  }

  static public function list(token: String, params: ListParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler, params);
  }

  static public function get(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, '$path/$instance_id', handler);
  }

  static public function delete(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$instance_id', handler);
  }

  static public function retag(token: String, instance_id: String, tags: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/tags', handler, {tags: tags});
  }

  static public function hard_reboots(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, '$path/$instance_id/hard_reboots', handler);
  }

  static public function soft_reboots(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, '$path/$instance_id/soft_reboots', handler);
  }

  static public function stop(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/stop', handler);
  }

  static public function start(token: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/start', handler);
  }

  static public function resize(token: String, instance_id: String, size: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/resize', handler, {size: size});
  }

  static public function firewall(token: String, instance_id: String, firewall_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/firewall', handler, {firewall_id: firewall_id});
  }

  static public function move_ip(token: String, instance_id: String, ip_address: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$instance_id/ip/$ip_address', handler);
  }
}

typedef InstanceParams = {
  size: String,               // the name of the size, from the current list, e.g. "g2.small" (required)
  ?count: Int,                // the number of instances to create (optional, default is 1)
  ?hostname: String,          // a fully qualified domain name that should be set as the instance's hostname (required)
  ?reverse_dns: String,       // a fully qualified domain name that should be used as the instance's IP's reverse DNS (optional, uses the hostname if unspecified)
  ?region: String,            // the identifier for the region, from the current region (optional; a random one will be picked by the system)
  ?public_ip: String,         // this should be either none, create or from. If from is specified then the move_ip_from parameter should also be specified (and contain the ID of the instance that will be releasing its IP). As aliases true will be treated the same as create and false will be treated the same as none. If create or true is specified it will automatically allocate an initial public IP address, rather than having to add the first one later (optional; default is create)
  ?network_id: String,        // this must be the ID of the network from the network listing (optional; default network used when not specified)
  ?template_id: String,       // the ID for the template to use to build the instance, from the current templates. Parameter also accepted as template. (optional; but must be specified if no snapshot is specified)
  ?snapshot_id: String,       // the ID for the snapshot to use to build the instance, from your snapshots (optional; but must be specified if no template is specified)
  ?initial_user: String,      // the name of the initial user created on the server (optional; this will default to the template's default_username and fallback to "civo")
  ?ssh_key_id: String,        // the ID of an already uploaded SSH public key to use for login to the default user (optional; if one isn't provided a random password will be set and returned in the initial_password field)
  ?tags: String               // a space separated list of tags, to be used freely as required (optional)
}

typedef ListParams = {
  ?tags: String,              // a space separated list of tags, to be used freely as required. If multiple are supplied, instances must much all tags to be returned (not one or more)
  ?page: Int,                 // which page of results to return (defaults to 1)
  ?per_page: Int              // how many instances to return per page (defaults to 20)
}