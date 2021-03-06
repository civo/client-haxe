<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\io\_Source;

use \tink\core\_Future\SyncFuture;
use \haxe\ds\Option;
use \tink\io\SinkObject;
use \php\Boot;
use \tink\streams\_Stream\Regrouper_Impl_;
use \tink\streams\_Stream\Stream_Impl_;
use \tink\streams\RegroupResult;
use \tink\streams\ReductionStep;
use \tink\streams\StreamObject;
use \tink\core\_Lazy\LazyConst;
use \tink\streams\Empty_hx;
use \tink\streams\_Stream\Reducer_Impl_;
use \tink\_Chunk\Chunk_Impl_;
use \tink\core\_Future\FutureObject;

final class Source_Impl_ {
	/**
	 * @var StreamObject
	 */
	static public $EMPTY;

	/**
	 * @param StreamObject $s
	 * 
	 * @return FutureObject
	 */
	public static function concatAll ($s) {
		#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:105: characters 5-93
		return $s->reduce(Chunk_Impl_::$EMPTY, Reducer_Impl_::ofSafe(function ($res, $cur) {
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:105: characters 66-92
			return new SyncFuture(new LazyConst(ReductionStep::Progress(Chunk_Impl_::catChunk($res, $cur))));
		}));
	}

	/**
	 * @param StreamObject $this
	 * @param int $len
	 * 
	 * @return StreamObject
	 */
	public static function limit ($this1, $len) {
		#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:131: characters 5-42
		if ($len === 0) {
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:131: characters 18-42
			return Source_Impl_::$EMPTY;
		}
		#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:132: lines 132-143
		return $this1->regroup(Regrouper_Impl_::ofIgnoranceSync(function ($chunks)  use (&$len) {
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:133: characters 7-43
			if ($len <= 0) {
				#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:133: characters 20-43
				return RegroupResult::Terminated(Option::None());
			}
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:134: characters 7-29
			$chunk = ($chunks->arr[0] ?? null);
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:135: characters 7-33
			$length = $chunk->getLength();
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:136: lines 136-140
			$out = ($len === $length ? RegroupResult::Terminated(Option::Some(Stream_Impl_::single($chunk))) : RegroupResult::Converted(Stream_Impl_::single(($len < $length ? $chunk->slice(0, $len) : $chunk))));
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:141: characters 7-20
			$len -= $length;
			#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:142: characters 7-17
			return $out;
		}));
	}

	/**
	 * @param StreamObject $this
	 * @param SinkObject $target
	 * @param object $options
	 * 
	 * @return FutureObject
	 */
	public static function pipeTo ($this1, $target, $options = null) {
		#/home/jahred/haxelib/tink_io/0,7,1/src/tink/io/Source.hx:108: characters 5-41
		return $target->consume($this1, $options);
	}

	/**
	 * @internal
	 * @access private
	 */
	static public function __hx__init ()
	{
		static $called = false;
		if ($called) return;
		$called = true;


		self::$EMPTY = Empty_hx::$inst;
	}
}

Boot::registerClass(Source_Impl_::class, 'tink.io._Source.Source_Impl_');
Source_Impl_::__hx__init();
