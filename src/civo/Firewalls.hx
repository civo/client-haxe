package civo;

import civo.net.CivoHttp;

@:expose
class Firewalls {
  static var path = '/firewalls';

  static public function create(token: String, name: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, {name: name});
  }

  static public function create_rules(token: String, firewall_id: String, params: FirewallParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, '$path/$firewall_id/rules', handler, params);
  }

  static public function get_rules(token: String, firewall_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, '$path/$firewall_id/rules', handler);
  }

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function delete(token: String, firewall_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$firewall_id', handler);
  }

  static public function delete_rule(token: String, firewall_id: String, rule_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$firewall_id/rules/$rule_id', handler);
  }
}

typedef FirewallParams = {
  start_port: Int,    // the start of the port range to configure for this rule (or the single port if required)
  ?end_port: Int,     // the end of the port range (this is optional, by default it will only apply to the single port listed in start_port)
  ?protocol: String,  // the protocol choice from tcp, udp or icmp (the default if unspecified is tcp)
  ?cidr: String,      // the IP address of the other end (i.e. not your instance) to affect, or a valid network CIDR (defaults to being globally applied, i.e. 0.0.0.0/0)
  ?direction: String, // will this rule affect inbound or outbound traffic (by default this is inbound)
  ?label: String      // a string that will be the displayed name/reference for this rule (optional)
}