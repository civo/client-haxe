<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace civo;

use \php\Boot;
use \civo\net\CivoHttp;

class Charges {
	/**
	 * @var string
	 */
	static public $path = "/charges";

	/**
	 * @param string $token
	 * @param object $dateRange
	 * @param \Closure $handler
	 * 
	 * @return void
	 */
	public static function list ($token, $dateRange = null, $handler) {
		#src/civo/Charges.hx:17: characters 5-50
		CivoHttp::get($token, Charges::$path, $handler, $dateRange);
	}
}

Boot::registerClass(Charges::class, 'civo.Charges');
