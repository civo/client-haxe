<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace _Array;

use \php\Boot;
use \php\_Boot\HxClosure;

class ArrayIterator {
	/**
	 * @var \Array_hx
	 */
	public $arr;
	/**
	 * @var int
	 */
	public $idx;

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return void
	 */
	public function __construct ($arr) {
		#/usr/share/haxe/std/php/_std/Array.hx:244: characters 3-17
		$this->arr = $arr;
		#/usr/share/haxe/std/php/_std/Array.hx:245: characters 3-10
		$this->idx = 0;
	}

	/**
	 * @param string $method
	 * 
	 * @return HxClosure
	 */
	public function __get ($method) {
		#/usr/share/haxe/std/php/_std/Array.hx:259: lines 259-262
		if ($method === "hasNext" || $method === "next") {
			#/usr/share/haxe/std/php/_std/Array.hx:260: characters 28-54
			$target = $this;
			if (is_string($target)) {
				return Boot::getStaticClosure($target, $method);
			} else {
				return Boot::getInstanceClosure($target, $method);
			}
		} else {
			#/usr/share/haxe/std/php/_std/Array.hx:261: characters 12-16
			return null;
		}
	}

	/**
	 * @return bool
	 */
	public function hasNext () {
		#/usr/share/haxe/std/php/_std/Array.hx:249: characters 3-26
		return $this->idx < $this->arr->length;
	}

	/**
	 * @return mixed
	 */
	public function next () {
		#/usr/share/haxe/std/php/_std/Array.hx:253: characters 3-20
		return ($this->arr->arr[$this->idx++] ?? null);
	}
}

Boot::registerClass(ArrayIterator::class, '_Array.ArrayIterator');
