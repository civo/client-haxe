<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\core\_Future;

use \php\Boot;
use \tink\core\LinkObject;
use \tink\core\_Callback\Callback_Impl_;
use \tink\core\FutureTrigger;

class SimpleFuture implements FutureObject {
	/**
	 * @var \Closure
	 */
	public $f;
	/**
	 * @var FutureObject
	 */
	public $gathered;

	/**
	 * @param \Closure $f
	 * 
	 * @return void
	 */
	public function __construct ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:265: characters 5-15
		$this->f = $f;
	}

	/**
	 * @return FutureObject
	 */
	public function eager () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:284: characters 5-24
		$ret = ($this->gathered !== null ? $this->gathered : $this->gathered = FutureTrigger::gatherFuture($this));
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:285: characters 5-31
		$ret->handle(Callback_Impl_::fromNiladic(function () {
		}));
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:286: characters 5-15
		return $ret;
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function flatMap ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:276: characters 27-33
		$f1 = $f;
		$_gthis = $this;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:276: characters 5-34
		return Future_Impl_::flatten(new SimpleFuture(function ($cb)  use (&$f1, &$_gthis) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:276: characters 27-33
			return ($_gthis->f)(function ($v)  use (&$f1, &$cb) {
				$tmp = $f1($v);
				Callback_Impl_::invoke($cb, $tmp);
			});
		}));
	}

	/**
	 * @return FutureObject
	 */
	public function gather () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:280: lines 280-281
		if ($this->gathered !== null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:280: characters 29-37
			return $this->gathered;
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:281: characters 12-67
			return $this->gathered = FutureTrigger::gatherFuture($this);
		}
	}

	/**
	 * @param \Closure $callback
	 * 
	 * @return LinkObject
	 */
	public function handle ($callback) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:268: characters 5-23
		return ($this->f)($callback);
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function map ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:270: lines 270-273
		$_gthis = $this;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:271: lines 271-273
		return new SimpleFuture(function ($cb)  use (&$f, &$_gthis) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:272: characters 7-50
			return ($_gthis->f)(function ($v)  use (&$f, &$cb) {
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:272: characters 44-48
				$tmp = $f($v);
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:272: characters 34-49
				Callback_Impl_::invoke($cb, $tmp);
			});
		});
	}
}

Boot::registerClass(SimpleFuture::class, 'tink.core._Future.SimpleFuture');
