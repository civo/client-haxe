package civo;

import civo.net.CivoHttp;

/*
  Civo provides a backup service for Instances called snapshots. This takes 
  an exact copy of the instance's virtual hard drive. At any point an 
  instance can be restored to the state it was in when the snapshot was made. 
  These snapshots can also be used to build a new instance to scale 
  identically configured infrastructure.

  As snapshot storage is chargeable, at any time these can be deleted. They 
  can also be scheduled rather than immediately created, and if desired 
  repeated at the same schedule each week (although the repeated snapshot 
  will overwrite itself each week not keep multiple weekly snapshots).
*/

@:expose
class Snapshots {
  static var path = '/snapshots';

  static public function create(token: String, name: String, params: SnapshotParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.put(token, '$path/$name', handler, params);
  }

  static public function list(token: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler);
  }

  static public function delete(token: String, name: String, handler: Int -> Dynamic -> Void) {
    CivoHttp.delete(token, '$path/$name', handler);
  }
}

typedef SnapshotParams = {
  instance_id: String,      // The ID of the instance to snapshot
  ?safe: Bool,              // If true the instance will be shut down during the snapshot to ensure all files are in a consistent state (e.g. database tables aren't in the middle of being optimised and hence risking corruption). The default is false so you experience no interruption of service, but a small risk of corruption.
  ?cron_timing: String      // If a valid cron string is passed, the snapshot will be saved as an automated snapshot, continuing to automatically update based on the schedule of the cron sequence provided. The default is nil meaning the snapshot will be saved as a one-off snapshot.
}