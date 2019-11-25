<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\core;

use \tink\core\_Future\SyncFuture;
use \php\Boot;
use \tink\core\_Future\SimpleFuture;
use \tink\core\_Callback\Callback_Impl_;
use \tink\core\_Callback\CallbackList_Impl_;
use \tink\core\_Lazy\LazyConst;
use \tink\core\_Future\FutureObject;

class FutureTrigger implements FutureObject {
	/**
	 * @var \Array_hx
	 */
	public $list;
	/**
	 * @var mixed
	 */
	public $result;

	/**
	 * @param FutureObject $f
	 * 
	 * @return FutureObject
	 */
	public static function gatherFuture ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:367: characters 5-19
		$op = null;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:368: lines 368-375
		$this1 = new SimpleFuture(function ($cb)  use (&$op, &$f) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:369: lines 369-373
			if ($op === null) {
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:370: characters 9-33
				$op = new FutureTrigger();
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:371: characters 9-29
				$f->handle(Boot::getInstanceClosure($op, 'trigger'));
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:372: characters 9-17
				$f = null;
			}
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:374: characters 7-27
			return $op->handle($cb);
		});
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:368: lines 368-375
		return $this1;
	}

	/**
	 * @return void
	 */
	public function __construct () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:328: characters 17-35
		$this1 = new \Array_hx();
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:328: characters 5-35
		$this->list = $this1;
	}

	/**
	 * @return FutureTrigger
	 */
	public function eager () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:361: characters 5-16
		return $this;
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function flatMap ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:349: characters 19-23
		$_g = $this->list;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:350: lines 350-354
		if ($_g === null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:350: characters 18-27
			return $f($this->result);
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:351: characters 12-13
			$v = $_g;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:352: characters 9-39
			$ret = new FutureTrigger();
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:353: characters 9-56
			CallbackList_Impl_::add($this->list, function ($v1)  use (&$f, &$ret) {
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:353: characters 31-55
				$f($v1)->handle(Boot::getInstanceClosure($ret, 'trigger'));
			});
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:354: characters 9-12
			return $ret;
		}
	}

	/**
	 * @return FutureTrigger
	 */
	public function gather () {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:358: characters 5-16
		return $this;
	}

	/**
	 * @param \Closure $callback
	 * 
	 * @return LinkObject
	 */
	public function handle ($callback) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:331: characters 19-23
		$_g = $this->list;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:332: lines 332-336
		if ($_g === null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:333: characters 9-32
			Callback_Impl_::invoke($callback, $this->result);
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:334: characters 9-13
			return null;
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:335: characters 12-13
			$v = $_g;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:336: characters 9-24
			return CallbackList_Impl_::add($v, $callback);
		}
	}

	/**
	 * @param \Closure $f
	 * 
	 * @return FutureObject
	 */
	public function map ($f) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:340: characters 19-23
		$_g = $this->list;
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:341: lines 341-345
		if ($_g === null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:341: characters 18-40
			return new SyncFuture(new LazyConst($f($this->result)));
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:342: characters 12-13
			$v = $_g;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:343: characters 9-39
			$ret = new FutureTrigger();
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:344: characters 9-49
			CallbackList_Impl_::add($this->list, function ($v1)  use (&$f, &$ret) {
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:344: characters 43-47
				$tmp = $f($v1);
				#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:344: characters 31-48
				$ret->trigger($tmp);
			});
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:345: characters 9-12
			return $ret;
		}
	}

	/**
	 *  Triggers a value for this future
	 * 
	 * @param mixed $result
	 * 
	 * @return bool
	 */
	public function trigger ($result) {
		#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:383: lines 383-391
		if ($this->list === null) {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:383: characters 25-30
			return false;
		} else {
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:385: characters 9-30
			$list = $this->list;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:386: characters 9-25
			$this->list = null;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:387: characters 9-29
			$this->result = $result;
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:388: characters 9-28
			CallbackList_Impl_::invoke($list, $result);
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:389: characters 9-21
			CallbackList_Impl_::clear($list);
			#/home/jahred/haxelib/tink_core/1,23,0/src/tink/core/Future.hx:390: characters 9-13
			return true;
		}
	}
}

Boot::registerClass(FutureTrigger::class, 'tink.core.FutureTrigger');
