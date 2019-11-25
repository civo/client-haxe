<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\io;

use \php\Boot;
use \tink\core\TypedError;
use \tink\streams\StreamObject;
use \php\_Boot\HxEnum;

class PipeResult extends HxEnum {
	/**
	 * @return PipeResult
	 */
	static public function AllWritten () {
		static $inst = null;
		if (!$inst) $inst = new PipeResult('AllWritten', 0, []);
		return $inst;
	}

	/**
	 * @param mixed $result
	 * @param StreamObject $rest
	 * 
	 * @return PipeResult
	 */
	static public function SinkEnded ($result, $rest) {
		return new PipeResult('SinkEnded', 1, [$result, $rest]);
	}

	/**
	 * @param TypedError $e
	 * @param StreamObject $rest
	 * 
	 * @return PipeResult
	 */
	static public function SinkFailed ($e, $rest) {
		return new PipeResult('SinkFailed', 2, [$e, $rest]);
	}

	/**
	 * @param TypedError $e
	 * 
	 * @return PipeResult
	 */
	static public function SourceFailed ($e) {
		return new PipeResult('SourceFailed', 3, [$e]);
	}

	/**
	 * Returns array of (constructorIndex => constructorName)
	 *
	 * @return string[]
	 */
	static public function __hx__list () {
		return [
			0 => 'AllWritten',
			1 => 'SinkEnded',
			2 => 'SinkFailed',
			3 => 'SourceFailed',
		];
	}

	/**
	 * Returns array of (constructorName => parametersCount)
	 *
	 * @return int[]
	 */
	static public function __hx__paramsCount () {
		return [
			'AllWritten' => 0,
			'SinkEnded' => 2,
			'SinkFailed' => 2,
			'SourceFailed' => 1,
		];
	}
}

Boot::registerClass(PipeResult::class, 'tink.io.PipeResult');
