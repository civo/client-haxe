<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace haxe;

use \php\_Boot\HxAnon;
use \php\Boot;
use \php\_Boot\HxException;
use \haxe\format\JsonPrinter;

/**
 * Cross-platform JSON API: it will automatically use the optimized native API if available.
 * Use `-D haxeJSON` to force usage of the Haxe implementation even if a native API is found:
 * This will provide extra encoding features such as enums (replaced by their index) and StringMaps.
 * @see https://haxe.org/manual/std-Json.html
 */
class Json {
	/**
	 * @param mixed $value
	 * 
	 * @return mixed
	 */
	public static function convertAfterDecode ($value) {
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:55: lines 55-63
		if (is_object($value)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:56: characters 17-39
			$this1 = [];
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:56: characters 4-40
			$result = $this1;
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:57: characters 4-35
			$data = ((array)($value));
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:58: lines 58-60
			foreach ($data as $key => $value1) {
				#/usr/share/haxe/std/php/_std/haxe/Json.hx:59: characters 5-55
				$result[$key] = Json::convertAfterDecode($value1);
			}
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:62: characters 4-34
			return new HxAnon($result);
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:65: lines 65-72
		if (is_array($value)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:66: characters 17-41
			$this2 = [];
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:66: characters 4-42
			$result1 = $this2;
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:67: lines 67-69
			$collection = $value;
			foreach ($collection as $key1 => $value2) {
				#/usr/share/haxe/std/php/_std/haxe/Json.hx:68: characters 5-45
				$result1[$key1] = Json::convertAfterDecode($value2);
			}

			#/usr/share/haxe/std/php/_std/haxe/Json.hx:71: characters 4-45
			return \Array_hx::wrap($result1);
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:74: characters 3-15
		return $value;
	}

	/**
	 * @param mixed $value
	 * 
	 * @return mixed
	 */
	public static function convertBeforeEncode ($value) {
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:90: lines 90-97
		if (($value instanceof \Array_hx)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:91: characters 17-41
			$this1 = [];
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:91: characters 4-42
			$result = $this1;
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:92: lines 92-94
			$collection = Boot::dynamicField($value, 'arr');
			foreach ($collection as $key => $value1) {
				#/usr/share/haxe/std/php/_std/haxe/Json.hx:93: characters 5-46
				$result[$key] = Json::convertBeforeEncode($value1);
			}

			#/usr/share/haxe/std/php/_std/haxe/Json.hx:96: characters 4-17
			return $result;
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:99: lines 99-106
		if (is_object($value)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:100: characters 4-20
			$result1 = new HxAnon();
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:101: lines 101-103
			$collection1 = $value;
			foreach ($collection1 as $key1 => $value2) {
				#/usr/share/haxe/std/php/_std/haxe/Json.hx:102: characters 21-27
				$tmp = $result1;
				#/usr/share/haxe/std/php/_std/haxe/Json.hx:102: characters 5-72
				$tmp->{$key1} = Json::convertBeforeEncode($value2);
			}

			#/usr/share/haxe/std/php/_std/haxe/Json.hx:105: characters 4-17
			return $result1;
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:108: lines 108-110
		if (is_float($value) && !is_finite($value)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:109: characters 4-15
			return null;
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:112: characters 3-15
		return $value;
	}

	/**
	 * @param string $json
	 * 
	 * @return mixed
	 */
	public static function phpJsonDecode ($json) {
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:47: characters 3-40
		$value = json_decode($json);
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:48: lines 48-50
		if (($value === null) && (json_last_error() !== JSON_ERROR_NONE)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:49: characters 4-9
			throw (is_object($__hx__throw = json_last_error_msg()) && $__hx__throw instanceof \Throwable ? $__hx__throw : new HxException($__hx__throw));
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:51: characters 3-35
		return Json::convertAfterDecode($value);
	}

	/**
	 * @param mixed $value
	 * @param \Closure $replacer
	 * @param string $space
	 * 
	 * @return string
	 */
	public static function phpJsonEncode ($value, $replacer = null, $space = null) {
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:78: lines 78-80
		if ((null !== $replacer) || (null !== $space)) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:79: characters 4-52
			return JsonPrinter::print($value, $replacer, $space);
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:82: characters 3-61
		$json = json_encode(Json::convertBeforeEncode($value));
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:83: lines 83-85
		if (json_last_error() !== JSON_ERROR_NONE) {
			#/usr/share/haxe/std/php/_std/haxe/Json.hx:84: characters 11-16
			throw (is_object($__hx__throw = json_last_error_msg()) && $__hx__throw instanceof \Throwable ? $__hx__throw : new HxException($__hx__throw));
		}
		#/usr/share/haxe/std/php/_std/haxe/Json.hx:86: characters 3-14
		return $json;
	}
}

Boot::registerClass(Json::class, 'haxe.Json');
