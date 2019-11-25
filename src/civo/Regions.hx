package civo;

import civo.net.CivoHttp;

/*
  Civo will be hosted in multiple datacentres (a.k.a. regions), 
  with more coming online all the time. You can choose when 
  creating an instance which region to have it hosted in 
  (necessary if you want to share a private network between 
  your instances) - or you can leave it for Civo to allocate 
  you to a region if you don't care.
*/

@:expose
class Regions {
  static var path = '/regions';

  static public function available_regions(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }
}