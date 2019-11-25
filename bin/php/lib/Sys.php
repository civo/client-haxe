<?php
/**
 * Generated by Haxe 4.0.2
 */

use \php\Boot;
use \php\_Boot\HxString;

/**
 * This class provides access to various base functions of system platforms.
 * Look in the `sys` package for more system APIs.
 */
class Sys {
	/**
	 * Returns the type of the current system. Possible values are:
	 * - `"Windows"`
	 * - `"Linux"`
	 * - `"BSD"`
	 * - `"Mac"`
	 * 
	 * @return string
	 */
	public static function systemName () {
		#/usr/share/haxe/std/php/_std/Sys.hx:79: characters 3-33
		$s = php_uname("s");
		#/usr/share/haxe/std/php/_std/Sys.hx:80: characters 3-26
		$p = HxString::indexOf($s, " ");
		#/usr/share/haxe/std/php/_std/Sys.hx:81: characters 10-39
		if ($p >= 0) {
			#/usr/share/haxe/std/php/_std/Sys.hx:81: characters 20-34
			return mb_substr($s, 0, $p);
		} else {
			#/usr/share/haxe/std/php/_std/Sys.hx:81: characters 37-38
			return $s;
		}
	}
}

Boot::registerClass(Sys::class, 'Sys');
