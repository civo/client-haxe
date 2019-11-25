<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace civo;

use \php\Boot;
use \civo\net\CivoHttp;

class Templates {
	/**
	 * @var string
	 */
	static public $path = "/templates";

	/**
	 * @param string $token
	 * @param object $params
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function create ($token, $params, $handler) {
		#src/civo/Templates.hx:17: characters 5-48
		CivoHttp::post($token, Templates::$path, $handler, $params);
	}

	/**
	 * @param string $token
	 * @param string $template_id
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function delete ($token, $template_id, $handler) {
		#src/civo/Templates.hx:29: characters 5-58
		CivoHttp::delete($token, "" . (Templates::$path??'null') . "/" . ($template_id??'null'), $handler);
	}

	/**
	 * @param string $token
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function list ($token, $handler) {
		#src/civo/Templates.hx:25: characters 5-39
		CivoHttp::get($token, Templates::$path, $handler);
	}

	/**
	 * @param string $token
	 * @param string $template_id
	 * @param object $params
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function update ($token, $template_id, $params, $handler) {
		#src/civo/Templates.hx:21: characters 5-63
		CivoHttp::put($token, "" . (Templates::$path??'null') . "/" . ($template_id??'null'), $handler, $params);
	}
}

Boot::registerClass(Templates::class, 'civo.Templates');
