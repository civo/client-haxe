<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\core\_Future;

use \php\Boot;
use \tink\core\LinkObject;
use \tink\core\_Callback\Callback_Impl_;
use \tink\core\FutureTrigger;

class NestedFuture implements FutureObject {
	/**
	 * @var FutureObject
	 */
	public $gathered;
	/**
	 * @var FutureObject
	 */
	public $outer;

	/**
	 * @param FutureObject $outer
	 * 
	 * @return void
	 */
	public function __construct ($outer) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:295: characters 5-23
		$this->outer = $outer;
	}

	/**
	 * @return FutureObject
	 */
	public function eager () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:309: characters 5-24
		$ret = ($this->gathered !== null ? $this->gathered : $this->gathered = FutureTrigger::gatherFuture($this));
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:310: characters 5-31
		$ret->handle(Callback_Impl_::fromNiladic(function () {
		}));
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:311: characters 5-15
		return $ret;
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function flatMap ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:301: characters 12-67
		$ret = $this->outer->flatMap(function ($inner)  use (&$f) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:301: characters 50-66
			$ret1 = $inner->flatMap($f);
			return $ret1->gather();
		});
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:301: characters 12-67
		return $ret->gather();
	}

	/**
	 * @return FutureObject
	 */
	public function gather () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:305: lines 305-306
		if ($this->gathered !== null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:305: characters 29-37
			return $this->gathered;
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:306: characters 12-67
			return $this->gathered = FutureTrigger::gatherFuture($this);
		}
	}

	/**
	 * @param \Closure $cb
	 * 
	 * @return LinkObject
	 */
	public function handle ($cb) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:315: characters 5-20
		$ret = null;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:316: lines 316-318
		$ret = $this->outer->handle(function ($inner)  use (&$ret, &$cb) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:317: characters 7-62
			$ret = $inner->handle(function ($result)  use (&$cb) {
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:317: characters 44-61
				Callback_Impl_::invoke($cb, $result);
			});
		});
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:319: characters 5-15
		return $ret;
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function map ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:298: characters 12-63
		$ret = $this->outer->flatMap(function ($inner)  use (&$f) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:298: characters 50-62
			$ret1 = $inner->map($f);
			return $ret1->gather();
		});
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:298: characters 12-63
		return $ret->gather();
	}
}

Boot::registerClass(NestedFuture::class, 'tink.core._Future.NestedFuture');
