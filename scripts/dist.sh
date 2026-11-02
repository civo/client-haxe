#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
VERSION="$(tr -d '[:space:]' < VERSION)"

echo "==> Building all targets (v$VERSION)"
haxe build/nodejs.hxml
haxe build/php.hxml
haxe build/lua.hxml
haxe build/python.hxml
haxe build/cpp.hxml
haxe build/cs.hxml
haxe build/java.hxml

echo "==> Packaging dist/"
rm -rf dist
mkdir -p dist/{nodejs,php,lua,python,cpp,cs,java}

# NodeJS
cp bin/nodejs/civo.js dist/nodejs/
cp packaging/nodejs/package.json dist/nodejs/
cp LICENSE dist/nodejs/
sed -i.bak "s/__VERSION__/$VERSION/g" dist/nodejs/package.json && rm -f dist/nodejs/package.json.bak
cat > dist/nodejs/README.md << EOF
# civo (Node.js) v$VERSION

Haxe-compiled Civo API client.

\`\`\`js
const { Civo } = require('./civo.js');
const civo = new Civo({ token: process.env.CIVO_API_TOKEN, region: 'LON1' });
civo.instances.list((status, body) => console.log(status, body));
\`\`\`
EOF

# PHP
cp -R bin/php/* dist/php/
cp packaging/php/composer.json dist/php/
cp LICENSE dist/php/
sed -i.bak "s/__VERSION__/$VERSION/g" dist/php/composer.json && rm -f dist/php/composer.json.bak
cat > dist/php/README.md << EOF
# civo (PHP) v$VERSION

Haxe-compiled Civo API client. Autoload \`index.php\` / generated classes from this directory.
EOF

# Lua
cp bin/lua/civo.lua dist/lua/
cp LICENSE dist/lua/
cat > dist/lua/README.md << EOF
# civo (Lua) v$VERSION

\`\`\`lua
local Civo = require('civo')
-- see Haxe @:expose exports in civo.lua
\`\`\`
EOF

# Python
cp bin/python/civo.py dist/python/
cp packaging/python/pyproject.toml dist/python/
cp LICENSE dist/python/
sed -i.bak "s/__VERSION__/$VERSION/g" dist/python/pyproject.toml && rm -f dist/python/pyproject.toml.bak
cat > dist/python/README.md << EOF
# civo (Python) v$VERSION

\`\`\`python
# Import the generated module (civo.py)
\`\`\`
EOF

# C++
mkdir -p dist/cpp
cp -R bin/cpp/include dist/cpp/ 2>/dev/null || true
cp -R bin/cpp/src dist/cpp/ 2>/dev/null || true
cp bin/cpp/Build.xml dist/cpp/ 2>/dev/null || true
# Skip copying multi-MB binary by default; document rebuild
cp LICENSE dist/cpp/
cat > dist/cpp/README.md << EOF
# civo (C++) v$VERSION

Generated hxcpp sources. Rebuild with \`haxe build/cpp.hxml\` (requires a C++ toolchain).
EOF

# C#
mkdir -p dist/cs
cp -R bin/cs/src dist/cs/
cp LICENSE dist/cs/
cat > dist/cs/README.md << EOF
# civo (C#) v$VERSION

Generated C# sources (\`-D no-compilation\`). Build with \`dotnet\` / Mono as needed.
EOF

# Java
mkdir -p dist/java
cp -R bin/java/src dist/java/
cp LICENSE dist/java/
cat > dist/java/README.md << EOF
# civo (Java) v$VERSION

Generated Java sources. Compile with javac against a JDK; uses tink_http Std/Socket clients.
EOF

# Root dist note
cat > dist/README.md << EOF
# Civo multi-target artifacts v$VERSION

| Directory | Target |
| --- | --- |
| nodejs/ | Node.js |
| php/ | PHP |
| lua/ | Lua |
| python/ | Python |
| cpp/ | C++ (hxcpp sources) |
| cs/ | C# sources |
| java/ | Java sources |

Shared version: **$VERSION**. Registry publish is out of scope for this pass; use these folders as release candidates.
EOF

echo "==> Done. Artifacts in dist/"
