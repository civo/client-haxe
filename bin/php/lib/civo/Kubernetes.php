<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace civo;

use \php\_Boot\HxAnon;
use \php\Boot;
use \civo\net\CivoHttp;

class Kubernetes {
	/**
	 * @var string
	 */
	static public $apps = "/kubernetes/applications";
	/**
	 * @var string
	 */
	static public $path = "/kubernetes/clusters";

	/**
	 * @param string $token
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function applications ($token, $handler) {
		#src/civo/Kubernetes.hx:32: characters 5-39
		CivoHttp::get($token, Kubernetes::$apps, $handler);
	}

	/**
	 * @param string $token
	 * @param object $params
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function create ($token, $params, $handler) {
		#src/civo/Kubernetes.hx:16: characters 5-48
		CivoHttp::post($token, Kubernetes::$path, $handler, $params);
	}

	/**
	 * @param string $token
	 * @param string $kubernetes_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function delete ($token, $kubernetes_id, $handler) {
		#src/civo/Kubernetes.hx:36: characters 5-60
		CivoHttp::delete($token, "" . (Kubernetes::$path??'null') . "/" . ($kubernetes_id??'null'), $handler);
	}

	/**
	 * @param string $token
	 * @param string $kubernetes_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function get ($token, $kubernetes_id, $handler) {
		#src/civo/Kubernetes.hx:24: characters 5-57
		CivoHttp::get($token, "" . (Kubernetes::$path??'null') . "/" . ($kubernetes_id??'null'), $handler);
	}

	/**
	 * @param string $token
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function list ($token, $handler) {
		#src/civo/Kubernetes.hx:20: characters 5-39
		CivoHttp::get($token, Kubernetes::$path, $handler);
	}

	/**
	 * @param string $token
	 * @param string $kubernetes_id
	 * @param string $hostname
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function recycle ($token, $kubernetes_id, $hostname, $handler) {
		#src/civo/Kubernetes.hx:40: characters 5-88
		CivoHttp::post($token, "" . (Kubernetes::$path??'null') . "/" . ($kubernetes_id??'null') . "/recycle", $handler, new HxAnon(["hostname" => $hostname]));
	}

	/**
	 * @param string $token
	 * @param string $kubernetes_id
	 * @param object $params
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function update ($token, $kubernetes_id, $params, $handler) {
		#src/civo/Kubernetes.hx:28: characters 5-57
		CivoHttp::put($token, "" . (Kubernetes::$path??'null') . "/" . ($kubernetes_id??'null'), $handler);
	}
}

Boot::registerClass(Kubernetes::class, 'civo.Kubernetes');
