package civo;

import civo.net.CivoHttp;

/*
  The system tracks usage of paid service on an hourly basis. 
  It doesn't track how much to charge for any particular product, 
  but it will report for each instance, IP address and snapshot 
  the amount of hours it's in use for.
*/

@:expose
class Charges {
  static var path = '/charges';

  static public function list(token: String, ?dateRange: ChargesParams, handler: Int -> Dynamic -> Void) {
    CivoHttp.get(token, path, handler, dateRange);
  }
}

typedef ChargesParams = {
  ?from: String, // The from date in RFC 3339 format (default to the start of the current month)
  ?to: String    // The to date in RFC 3339 format (defaults to the current time)
}