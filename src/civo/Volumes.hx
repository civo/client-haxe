package civo;

import civo.net.CivoHttp;

/*
  We provide a flexible size additional storage service for our 
  Instances called volumes. This creates and attaches an additional 
  virtual disk to the instance, allowing you to put backups or 
  database files on the separate volume and later move the volume 
  to another instance.
*/

@:expose
class Volumes {
  static var path = '/volumes';

  static public function create(token: String, params: VolumeParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.post(token, path, handler, params);
  }

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function resize(token: String, volume_id: String, size_gb: Int, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$volume_id/resize', handler, {size_gb: size_gb});
  }

  static public function attach(token: String, volume_id: String, instance_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$volume_id/attach', handler, {instance_id: instance_id});
  }

  static public function detach(token: String, volume_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$volume_id/detach', handler);
  }

  static public function delete(token: String, volume_id: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$volume_id', handler);
  }
}

typedef VolumeParams = {
  name: String,     // A name that you wish to use to refer to this volume (required)
  size_gb: Int,     // A minimum of 1 and a maximum of your available disk space from your quota specifies the size of the volume in gigabytes (required).
  ?bootable: Bool   // Mark the volume as bootable with a boolean (optional; defaults to false).
}