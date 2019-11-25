<?php
/**
 * Generated by Haxe 4.0.2
 */

namespace tink\http\clients;

use \php\_Boot\HxAnon;
use \tink\core\_Future\SyncFuture;
use \tink\io\RealSourceTools;
use \php\Boot;
use \tink\io\std\InputSource;
use \tink\http\IncomingResponse;
use \tink\io\_Source\Source_Impl_;
use \sys\io\Process;
use \tink\streams\StreamObject;
use \tink\io\_Worker\Worker_Impl_;
use \tink\core\Outcome;
use \tink\http\ResponseHeaderBase;
use \tink\core\_Lazy\LazyConst;
use \php\_Boot\HxClosure;
use \tink\_Url\Url_Impl_;
use \tink\http\ClientObject;
use \tink\core\_Promise\Promise_Impl_;
use \tink\io\_Sink\SinkYielding_Impl_;
use \haxe\io\Bytes;
use \tink\http\OutgoingRequest;
use \tink\core\_Future\FutureObject;
use \_Array\ArrayIterator;

class CurlClient implements ClientObject {
	/**
	 * @var \Closure
	 */
	public $curl;
	/**
	 * @var string
	 */
	public $protocol;

	/**
	 * @param \Closure $curl
	 * 
	 * @return void
	 */
	public function __construct ($curl = null) {
		if (!$this->__hx__default__curl) {
			$this->__hx__default__curl = new HxClosure($this, 'curl');
			if ($this->curl === null) $this->curl = $this->__hx__default__curl;
		}
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:15: characters 26-30
		$this->protocol = "http";
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:18: characters 5-38
		if ($curl !== null) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:18: characters 22-38
			$this->curl = $curl;
		}
	}

	/**
	 * @param \Array_hx $args
	 * @param StreamObject $body
	 * 
	 * @return StreamObject
	 */
	public function curl ($args, $body)
	{
		if ($this->curl !== $this->__hx__default__curl) return call_user_func_array($this->curl, func_get_args());
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:50: characters 7-33
		$args->arr[$args->length] = "--data-binary";
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:51: characters 7-22
		$args->arr[$args->length] = "@-";
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:52: characters 7-110
		$process = new Process("curl", $args);
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:53: characters 7-94
		$sink = SinkYielding_Impl_::ofOutput("stdin", $process->stdin);
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:54: characters 7-45
		Source_Impl_::pipeTo($body, $sink, new HxAnon(["end" => true]))->eager();
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:55: characters 22-94
		$input = $process->stdout;
		$options = null;
		if ($options === null) {
			$options = new HxAnon();
		}
		$tmp = Worker_Impl_::ensure($options->worker);
		$_g = $options->chunkSize;
		$tmp1 = null;
		if ($_g === null) {
			$tmp1 = 65536;
		} else {
			$v = $_g;
			$tmp1 = $v;
		}
		return new InputSource("stdout", $input, $tmp, Bytes::alloc($tmp1), 0);
	}
	protected $__hx__default__curl;

	/**
	 * @param OutgoingRequest $req
	 * 
	 * @return FutureObject
	 */
	public function request ($req) {
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:22: characters 5-19
		$args = new \Array_hx();
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:24: characters 5-21
		$args->arr[$args->length] = "-is";
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:26: characters 5-20
		$args->arr[$args->length] = "-X";
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:27: characters 5-33
		$args->arr[$args->length] = $req->header->method;
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:29: characters 12-31
		$__hx__switch = ($req->header->protocol);
		if ($__hx__switch === "HTTP/1.0") {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:30: characters 21-43
			$args->arr[$args->length] = "--http1.0";
			++$args->length;
		} else if ($__hx__switch === "HTTP/1.1") {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:31: characters 21-43
			$args->arr[$args->length] = "--http1.1";
			++$args->length;
		} else if ($__hx__switch === "HTTP/2") {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:32: characters 19-39
			$args->arr[$args->length] = "--http2";
			++$args->length;
		} else {
		}
		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:36: characters 19-29
		$header = new ArrayIterator($req->header->fields);
		while ($header->hasNext()) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:36: lines 36-39
			$header1 = $header->next();
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:37: characters 7-22
			$args->arr[$args->length] = "-H";
			++$args->length;

			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:38: characters 7-51
			$args->arr[$args->length] = "" . ($header1->name??'null') . ": " . ($header1->value??'null');
			++$args->length;

		}

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:41: characters 5-30
		$x = Url_Impl_::toString($req->header->url);
		$args->arr[$args->length] = $x;
		++$args->length;

		#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:43: lines 43-45
		return Promise_Impl_::next(RealSourceTools::parse($this->curl($args, $req->body), ResponseHeaderBase::parser()), function ($p) {
			#/home/jahred/haxelib/tink_http/0,9,1/src/tink/http/clients/CurlClient.hx:45: characters 26-63
			return new SyncFuture(new LazyConst(Outcome::Success(new IncomingResponse($p->a, $p->b))));
		});
	}
}

Boot::registerClass(CurlClient::class, 'tink.http.clients.CurlClient');
