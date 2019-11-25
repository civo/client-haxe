<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace haxe\ds;

use \php\Boot;
use \haxe\IMap;
use \php\_NativeIndexedArray\NativeIndexedArrayIterator;

/**
 * IntMap allows mapping of Int keys to arbitrary values.
 * See `Map` for documentation details.
 * @see https://haxe.org/manual/std-Map.html
 */
class IntMap implements IMap {
	/**
	 * @var mixed
	 */
	public $data;

	/**
	 * Creates a new IntMap.
	 * 
	 * @return void
	 */
	public function __construct () {
		#/usr/share/haxe/std/php/_std/haxe/ds/IntMap.hx:34: characters 10-34
		$this1 = [];
		#/usr/share/haxe/std/php/_std/haxe/ds/IntMap.hx:34: characters 3-34
		$this->data = $this1;
	}

	/**
	 * See `Map.iterator`
	 * (cs, java) Implementation detail: Do not `set()` any new value while
	 * iterating, as it may cause a resize, which will break iteration.
	 * 
	 * @return object
	 */
	public function iterator () {
		#/usr/share/haxe/std/php/_std/haxe/ds/IntMap.hx:64: characters 10-46
		return new NativeIndexedArrayIterator(array_values($this->data));
	}
}

Boot::registerClass(IntMap::class, 'haxe.ds.IntMap');
