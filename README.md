# ![Civo](assets/logo.svg) API — Haxe multi-target client

## Introduction

Haxe client for the [Civo](https://www.civo.com) cloud API (`https://api.civo.com/v2`).
One codebase builds reusable libraries for **Node.js, PHP, C++, Lua, Python, C#, and Java**.

Shared version: **1.0.0** (see `VERSION`).

## Requirements

- [Haxe](https://haxe.org) 4.3+
- Dependencies via `haxelib` (local repo under `.haxelib/` is fine):

```bash
haxelib setup .haxelib   # optional local repo
haxelib install tink_http
haxelib install hxnodejs
haxelib install hxcpp hxjava hxcs   # for C++ / Java / C#
```

## Build all targets → `dist/`

```bash
make dist
```

Artifacts land in `dist/<target>/` (each with README + LICENSE). Versioned archives go in `releases/`:

```bash
make releases
```

| Target | Folder | Archive |
| --- | --- | --- |
| Node.js | `dist/nodejs/` | `releases/civo-nodejs-1.0.0.tar.gz` |
| PHP | `dist/php/` | `releases/civo-php-1.0.0.tar.gz` |
| Lua | `dist/lua/` | `releases/civo-lua-1.0.0.tar.gz` |
| Python | `dist/python/` | `releases/civo-python-1.0.0.tar.gz` |
| C++ | `dist/cpp/` (hxcpp sources) | `releases/civo-cpp-1.0.0.tar.gz` |
| C# | `dist/cs/` (generated sources) | `releases/civo-cs-1.0.0.tar.gz` |
| Java | `dist/java/` (generated sources) | `releases/civo-java-1.0.0.tar.gz` |

Single-target example:

```bash
haxe build/nodejs.hxml
```

## Usage (Haxe / Node)

```haxe
var civo = new Civo({ token: Sys.getEnv("CIVO_API_TOKEN"), region: "LON1" });
civo.instances.list(function(status, body) {
  trace(status, body);
});
```

Handlers are `(statusCode:Int, body:Dynamic) -> Void`. JSON bodies are parsed when possible.

## Modules

| Client field | API |
| --- | --- |
| `instances` | Instances, sizes, power/resize/firewall |
| `diskImages` | Disk images |
| `instanceSnapshots` | Per-instance snapshots |
| `snapshotSchedules` | Snapshot schedules |
| `kubernetes` | Clusters, pools, apps, versions |
| `volumes` / `networks` / `firewalls` | Storage & networking |
| `loadBalancers` | VPC load balancers |
| `ips` | Reserved IPs |
| `objectStores` | Object stores + credentials |
| `dns` / `ssh` / `webhooks` | |
| `quota` / `charges` / `regions` | Account |
| `auth` | JWT exchange |

## Breaking changes (1.0)

- Client instance API (`new Civo({token, region})`) instead of token on every static call
- Templates / legacy snapshots / `move_ip` removed
- Region sent as query param (and in JSON body when set)

## License

MIT — see [LICENSE](LICENSE).

## API docs

https://www.civo.com/api
