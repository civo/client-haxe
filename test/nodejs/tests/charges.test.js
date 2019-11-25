import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

test('it should return a list of account charges', done => {
  lib.civo.Charges.list(token(), {}, function(status, data) {
    expect(status).toBe(200);
    expect(data).toBeInstanceOf(Array);
    if (data.length > 0) {
      var charge = data[0];
      expect(charge).toHaveProperty("num_hours");
      expect(charge).toHaveProperty("code");
      expect(charge).toHaveProperty("label");
    }
    done();
  });
});