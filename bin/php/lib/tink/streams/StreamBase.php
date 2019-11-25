<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\streams;

use \tink\streams\_Stream\RegroupStream;
use \php\Boot;
use \tink\streams\_Stream\Handler_Impl_;
use \tink\core\_Future\Future_Impl_;
use \php\_Boot\HxException;
use \tink\streams\_Stream\CompoundStream;
use \tink\core\_Future\FutureObject;

class StreamBase implements StreamObject {

	/**
	 * @return void
	 */
	public function __construct () {
	}

	/**
	 * @param \Array_hx $into
	 * 
	 * @return void
	 */
	public function decompose ($into) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:389: lines 389-390
		if (!$this->get_depleted()) {
			#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:390: characters 7-22
			$into->arr[$into->length] = $this;
			++$into->length;
		}
	}

	/**
	 * @param \Closure $handler
	 * 
	 * @return FutureObject
	 */
	public function forEach ($handler) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:414: characters 12-17
		throw new HxException("not implemented");
	}

	/**
	 * @return bool
	 */
	public function get_depleted () {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:333: characters 29-41
		return false;
	}

	/**
	 * @param StreamObject $other
	 * 
	 * @return StreamObject
	 */
	public function prepend ($other) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:380: lines 380-381
		if ($this->get_depleted()) {
			#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:380: characters 21-26
			return $other;
		} else {
			#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:381: characters 12-44
			return CompoundStream::of(\Array_hx::wrap([
				$other,
				$this,
			]));
		}
	}

	/**
	 * @param mixed $initial
	 * @param \Closure $reducer
	 * 
	 * @return FutureObject
	 */
	public function reduce ($initial, $reducer) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:397: lines 397-411
		$_gthis = $this;
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:398: lines 398-411
		return Future_Impl_::async(function ($cb)  use (&$reducer, &$_gthis, &$initial) {
			#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:399: lines 399-410
			$_gthis->forEach(Handler_Impl_::ofUnknown(function ($item)  use (&$reducer, &$initial) {
				#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:400: lines 400-404
				$ret = $reducer($initial, $item)->map(function ($o)  use (&$initial) {
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:401: lines 401-404
					$__hx__switch = ($o->index);
					if ($__hx__switch === 0) {
						#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:402: characters 27-28
						$v = $o->params[0];
						#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:402: characters 31-42
						$initial = $v;
						#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:402: characters 44-50
						return Handled::Resume();
					} else if ($__hx__switch === 1) {
						#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:403: characters 24-25
						$e = $o->params[0];
						#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:403: characters 28-35
						return Handled::Clog($e);
					}
				});
				#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:400: lines 400-404
				return $ret->gather();
			}))->handle(function ($c)  use (&$initial, &$cb) {
				#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:405: lines 405-410
				$__hx__switch = ($c->index);
				if ($__hx__switch === 0) {
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:408: characters 21-22
					$_g3 = $c->params[0];
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:408: characters 25-30
					throw new HxException("assert");
				} else if ($__hx__switch === 1) {
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:409: characters 25-29
					$rest = $c->params[1];
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:409: characters 22-23
					$e1 = $c->params[0];
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:409: characters 32-52
					$cb(Reduction::Crashed($e1, $rest));
				} else if ($__hx__switch === 2) {
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:406: characters 21-22
					$e2 = $c->params[0];
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:406: characters 25-38
					$cb(Reduction::Failed($e2));
				} else if ($__hx__switch === 3) {
					#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:407: characters 24-44
					$cb(Reduction::Reduced($initial));
				}
			});
		}, true);
	}

	/**
	 * @param object $f
	 * 
	 * @return StreamObject
	 */
	public function regroup ($f) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:363: characters 5-38
		return new RegroupStream($this, $f);
	}
}

Boot::registerClass(StreamBase::class, 'tink.streams.StreamBase');
Boot::registerGetters('tink\\streams\\StreamBase', [
	'depleted' => true
]);
