<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace civo;

use \php\_Boot\HxAnon;
use \php\Boot;
use \civo\net\CivoHttp;

class Volumes {
	/**
	 * @var string
	 */
	static public $path = "/volumes";

	/**
	 * @param string $token
	 * @param string $volume_id
	 * @param string $instance_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function attach ($token, $volume_id, $instance_id, $handler) {
		#src/civo/Volumes.hx:30: characters 5-88
		CivoHttp::put($token, "" . (Volumes::$path??'null') . "/" . ($volume_id??'null') . "/attach", $handler, new HxAnon(["instance_id" => $instance_id]));
	}

	/**
	 * @param string $token
	 * @param object $params
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function create ($token, $params, $handler) {
		#src/civo/Volumes.hx:18: characters 5-48
		CivoHttp::post($token, Volumes::$path, $handler, $params);
	}

	/**
	 * @param string $token
	 * @param string $volume_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function delete ($token, $volume_id, $handler) {
		#src/civo/Volumes.hx:38: characters 5-56
		CivoHttp::delete($token, "" . (Volumes::$path??'null') . "/" . ($volume_id??'null'), $handler);
	}

	/**
	 * @param string $token
	 * @param string $volume_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function detach ($token, $volume_id, $handler) {
		#src/civo/Volumes.hx:34: characters 5-60
		CivoHttp::put($token, "" . (Volumes::$path??'null') . "/" . ($volume_id??'null') . "/detach", $handler);
	}

	/**
	 * @param string $token
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function list ($token, $handler) {
		#src/civo/Volumes.hx:22: characters 5-39
		CivoHttp::get($token, Volumes::$path, $handler);
	}

	/**
	 * @param string $token
	 * @param string $volume_id
	 * @param int $size_gb
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function resize ($token, $volume_id, $size_gb, $handler) {
		#src/civo/Volumes.hx:26: characters 5-80
		CivoHttp::put($token, "" . (Volumes::$path??'null') . "/" . ($volume_id??'null') . "/resize", $handler, new HxAnon(["size_gb" => $size_gb]));
	}
}

Boot::registerClass(Volumes::class, 'civo.Volumes');
