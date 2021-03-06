<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace civo;

use \php\_Boot\HxAnon;
use \php\Boot;
use \civo\net\CivoHttp;

class Networks {
	/**
	 * @var string
	 */
	static public $path = "/networks";

	/**
	 * @param string $token
	 * @param string $label
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function create ($token, $label, $handler) {
		#src/civo/Networks.hx:16: characters 5-56
		CivoHttp::post($token, Networks::$path, $handler, new HxAnon(["label" => $label]));
	}

	/**
	 * @param string $token
	 * @param string $network_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function delete ($token, $network_id, $handler) {
		#src/civo/Networks.hx:28: characters 5-57
		CivoHttp::delete($token, "" . (Networks::$path??'null') . "/" . ($network_id??'null'), $handler);
	}

	/**
	 * @param string $token
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function list ($token, $handler) {
		#src/civo/Networks.hx:20: characters 5-39
		CivoHttp::get($token, Networks::$path, $handler);
	}

	/**
	 * @param string $token
	 * @param string $network_id
	 * @param string $label
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function rename ($token, $network_id, $label, $handler) {
		#src/civo/Networks.hx:24: characters 5-70
		CivoHttp::put($token, "" . (Networks::$path??'null') . "/" . ($network_id??'null'), $handler, new HxAnon(["label" => $label]));
	}
}

Boot::registerClass(Networks::class, 'civo.Networks');
