import client from '../client';

test('it should return a list of account charges', done => {
  client().charges.list(function(status, data) {
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
