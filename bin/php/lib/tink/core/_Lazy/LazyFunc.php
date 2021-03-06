<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\core\_Lazy;

use \php\Boot;

class LazyFunc implements LazyObject {
	/**
	 * @var \Closure
	 */
	public $f;
	/**
	 * @var mixed
	 */
	public $result;

	/**
	 * @param \Closure $f
	 * 
	 * @return void
	 */
	public function __construct ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:49: characters 26-36
		$this->f = $f;
	}

	/**
	 * @return mixed
	 */
	public function get () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:53: lines 53-58
		if ($this->f !== null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:55: characters 7-19
			$this->result = ($this->f)();
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:56: characters 7-15
			$this->f = null;
		}
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:59: characters 5-18
		return $this->result;
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return LazyObject
	 */
	public function map ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:62: lines 62-63
		$_gthis = $this;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:63: characters 5-53
		return new LazyFunc(function ()  use (&$f, &$_gthis) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:63: characters 46-51
			$tmp = $_gthis->get();
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Lazy.hx:63: characters 37-52
			return $f($tmp);
		});
	}
}

Boot::registerClass(LazyFunc::class, 'tink.core._Lazy.LazyFunc');
