package;

import civo.Auth;
import civo.Charges;
import civo.DiskImages;
import civo.Dns;
import civo.Firewalls;
import civo.InstanceSnapshots;
import civo.Instances;
import civo.IPs;
import civo.Kubernetes;
import civo.LoadBalancers;
import civo.Networks;
import civo.ObjectStores;
import civo.Quota;
import civo.Regions;
import civo.SnapshotSchedules;
import civo.Ssh;
import civo.Volumes;
import civo.Webhooks;

typedef CivoOptions = {
  var token:String;
  @:optional var region:String;
}

/**
  Civo cloud API client (`https://api.civo.com/v2`).

  ```haxe
  var civo = new Civo({ token: "...", region: "LON1" });
  civo.instances.list(handler);
  ```
**/
@:expose
class Civo {
  public var token:String;
  public var region:Null<String>;

  public var auth(default, null):Auth;
  public var charges(default, null):Charges;
  public var diskImages(default, null):DiskImages;
  public var dns(default, null):Dns;
  public var firewalls(default, null):Firewalls;
  public var instanceSnapshots(default, null):InstanceSnapshots;
  public var instances(default, null):Instances;
  public var ips(default, null):IPs;
  public var kubernetes(default, null):Kubernetes;
  public var loadBalancers(default, null):LoadBalancers;
  public var networks(default, null):Networks;
  public var objectStores(default, null):ObjectStores;
  public var quota(default, null):Quota;
  public var regions(default, null):Regions;
  public var snapshotSchedules(default, null):SnapshotSchedules;
  public var ssh(default, null):Ssh;
  public var volumes(default, null):Volumes;
  public var webhooks(default, null):Webhooks;

  public function new(opts:CivoOptions) {
    if (opts == null || opts.token == null || opts.token == "")
      throw "Civo requires opts.token";
    this.token = opts.token;
    this.region = opts.region;

    this.auth = new Auth(this);
    this.charges = new Charges(this);
    this.diskImages = new DiskImages(this);
    this.dns = new Dns(this);
    this.firewalls = new Firewalls(this);
    this.instanceSnapshots = new InstanceSnapshots(this);
    this.instances = new Instances(this);
    this.ips = new IPs(this);
    this.kubernetes = new Kubernetes(this);
    this.loadBalancers = new LoadBalancers(this);
    this.networks = new Networks(this);
    this.objectStores = new ObjectStores(this);
    this.quota = new Quota(this);
    this.regions = new Regions(this);
    this.snapshotSchedules = new SnapshotSchedules(this);
    this.ssh = new Ssh(this);
    this.volumes = new Volumes(this);
    this.webhooks = new Webhooks(this);
  }

  static function main() {}
}
