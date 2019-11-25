<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\streams\_Stream;

use \tink\streams\StreamBase;
use \tink\core\_Future\SyncFuture;
use \php\Boot;
use \tink\core\TypedError;
use \tink\core\_Lazy\LazyConst;
use \tink\streams\Conclusion;
use \tink\core\_Future\FutureObject;

class ErrorStream extends StreamBase {
	/**
	 * @var TypedError
	 */
	public $error;

	/**
	 * @param TypedError $error
	 * 
	 * @return void
	 */
	public function __construct ($error) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:186: characters 5-23
		parent::__construct();
		$this->error = $error;
	}

	/**
	 * @param \Closure $handler
	 * 
	 * @return FutureObject
	 */
	public function forEach ($handler) {
		#/home/jahred/haxelib/tink_streams/0,3,2/src/tink/streams/Stream.hx:192: characters 12-49
		return new SyncFuture(new LazyConst(Conclusion::Failed($this->error)));
	}
}

Boot::registerClass(ErrorStream::class, 'tink.streams._Stream.ErrorStream');
