<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\io;

use \php\Boot;
use \tink\streams\StreamObject;
use \php\_Boot\HxException;
use \tink\core\_Future\FutureObject;

class SinkBase implements SinkObject {

	/**
	 * @param StreamObject $source
	 * @param object $options
	 * 
	 * @return FutureObject
	 */
	public function consume ($source, $options) {
		#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Sink.hx:109: characters 12-17
		throw new HxException("not implemented");
	}
}

Boot::registerClass(SinkBase::class, 'tink.io.SinkBase');
