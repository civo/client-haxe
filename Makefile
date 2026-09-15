.PHONY: dist build clean releases

dist:
	bash scripts/dist.sh

build: dist

releases: dist
	bash scripts/package-releases.sh

clean:
	rm -rf bin/nodejs/* bin/php/* bin/lua/* bin/python/* bin/cpp/* bin/cs/* bin/java/* dist
