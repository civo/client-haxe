<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\http\clients;

use \php\Boot;
use \tink\io\WorkerObject;

class SecureSocketClient extends SocketClient {
	/**
	 * @param WorkerObject $worker
	 * 
	 * @return void
	 */
	public function __construct ($worker = null) {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/SecureSocketClient.hx:5: characters 5-18
		parent::__construct($worker);
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/SecureSocketClient.hx:6: characters 5-18
		$this->secure = true;
	}
}

Boot::registerClass(SecureSocketClient::class, 'tink.http.clients.SecureSocketClient');
