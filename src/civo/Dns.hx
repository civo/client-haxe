package civo;

import civo.net.CivoHttp;

/*
  Civo host reverse DNS for all instances automatically. If you'd 
  like to manage forward (normal) DNS for your domains, you can do 
  that for free within your account.

  This API is effectively split in to two parts: 1) Managing domain 
  names themselves, and 2) Managing records within those domain names.

  Civo don't offer registration of domain names, this is purely for 
  hosting the DNS. If you're looking to buy a domain name, Civo 
  recommends [LCN.com](http://lcn.com) for their excellent friendly support and very 
  competitive prices.
*/

@:expose
class Dns {
  static var path = '/dns';

  static public function list_domains(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function create_domain(token: String, name: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, {name: name});
  }

  static public function update_domain(token: String, domain_id: String, domain_name: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$domain_id', handler, {name: domain_name});
  }

  static public function delete_domain(token: String, domain_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$domain_id', handler);
  }

  static public function list_dns(token: String, domain_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, '$path/$domain_id/records', handler);
  }

  static public function create_dns(token: String, domain_id: String, params: DnsParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, '$path/$domain_id/records', handler, params);
  }

  static public function update_dns(token: String, domain_id: String, dns_id: String, params: DnsParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$domain_id/records/$dns_id', handler, params);
  }

  static public function delete_dns(token: String, domain_id: String, dns_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$domain_id/records/$dns_id', handler);
  }
}

typedef DnsParams = {
  type: String,   // the choice of RR type from a, cname, mx or txt
  name: String,   // the portion before the domain name (e.g. www) or an @ for the apex/root domain (you cannot use an A record with an amex/root domain)
  value: String,  // the IP address (A or MX), hostname (CNAME or MX) or text value (TXT) to serve for this record
  ?priority: Int, // useful for MX records only, the priority mail should be attempted it (defaults to 10)
  ?ttl: Int       // how long caching DNS servers should cache this record for, in seconds (the minimum is 600 and the default if unspecified is 600)
}