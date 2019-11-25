<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\http;

use \php\_Boot\HxAnon;
use \php\Boot;
use \tink\core\TypedError;
use \tink\core\Outcome;

class Header {
	/**
	 * @var \Array_hx
	 */
	public $fields;

	/**
	 * @param \Array_hx $fields
	 * 
	 * @return void
	 */
	public function __construct ($fields = null) {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:70: lines 70-73
		$tmp = null;
		if ($fields === null) {
			$tmp = new \Array_hx();
		} else {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:72: characters 12-13
			$v = $fields;
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:70: lines 70-73
			$tmp = $v;
		}
		$this->fields = $tmp;
	}

	/**
	 *  Get a header
	 *  @param name - Header name to retrieve
	 *  @return `Success(header)` if there is exactly one entry of the given header name, `Failure(err)` otherwise
	 * 
	 * @param string $name
	 * 
	 * @return Outcome
	 */
	public function byName ($name) {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:89: characters 19-28
		$_g = $this->get($name);
		$__hx__switch = ($_g->length);
		if ($__hx__switch === 0) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:91: characters 9-70
			return Outcome::Failure(new TypedError(422, "No " . ($name??'null') . " header found", new HxAnon([
				"fileName" => "tink/http/Header.hx",
				"lineNumber" => 91,
				"className" => "tink.http.Header",
				"methodName" => "byName",
			])));
		} else if ($__hx__switch === 1) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:92: characters 13-14
			$v = ($_g->arr[0] ?? null);
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:93: characters 9-19
			return Outcome::Success($v);
		} else {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:94: characters 12-13
			$v1 = $_g;
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:95: characters 9-85
			return Outcome::Failure(new TypedError(422, "Multiple entries for " . ($name??'null') . " header", new HxAnon([
				"fileName" => "tink/http/Header.hx",
				"lineNumber" => 95,
				"className" => "tink.http.Header",
				"methodName" => "byName",
			])));
		}
	}

	/**
	 *  Get all headers of the given name
	 *  @param name - Header name to retrieve
	 *  @return Array of headers of the given name
	 * 
	 * @param string $name
	 * 
	 * @return \Array_hx
	 */
	public function get ($name) {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 12-59
		$_g = new \Array_hx();
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 13-58
		$_g1 = 0;
		$_g2 = $this->fields;
		while ($_g1 < $_g2->length) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 18-19
			$f = ($_g2->arr[$_g1] ?? null);
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 13-58
			++$_g1;
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 31-58
			if ($f->name === $name) {
				#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 51-58
				$_g->arr[$_g->length] = $f->value;
				++$_g->length;
			}
		}

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:81: characters 12-59
		return $_g;
	}

	/**
	 *  Get content length. Assumes zero if content-length header is missing
	 * 
	 * @return Outcome
	 */
	public function getContentLength () {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:119: characters 19-41
		$_g = $this->byName("content-length");
		$__hx__switch = ($_g->index);
		if ($__hx__switch === 0) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:120: characters 20-35
			$_hx_tmp = \Std::parseInt($_g->params[0]);
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:120: lines 120-121
			if ($_hx_tmp === null) {
				#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:120: characters 46-118
				return Outcome::Failure(new TypedError(422, "Invalid Content-Length Header", new HxAnon([
					"fileName" => "tink/http/Header.hx",
					"lineNumber" => 120,
					"className" => "tink.http.Header",
					"methodName" => "getContentLength",
				])));
			} else {
				#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:121: characters 39-40
				$v = $_hx_tmp;
				#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:121: characters 43-53
				return Outcome::Success($v);
			}
		} else if ($__hx__switch === 1) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:122: characters 20-21
			$e = $_g->params[0];
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:122: characters 24-34
			return Outcome::Failure($e);
		}
	}

	/**
	 * @return string
	 */
	public function toString () {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 12-44
		$_g = new \Array_hx();
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 13-43
		$_g1 = 0;
		$_g2 = $this->fields;
		while ($_g1 < $_g2->length) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 18-19
			$f = ($_g2->arr[$_g1] ?? null);
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 13-43
			++$_g1;
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 31-43
			$x = $f->toString();
			$_g->arr[$_g->length] = $x;
			++$_g->length;

		}

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/Header.hx:143: characters 5-84
		return ($_g->join("\x0D\x0A")??'null') . "\x0D\x0A" . "\x0D\x0A";
	}

	public function __toString() {
		return $this->toString();
	}
}

Boot::registerClass(Header::class, 'tink.http.Header');
