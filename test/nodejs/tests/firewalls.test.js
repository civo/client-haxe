import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

var fw_id;

describe('Firewalls.create', () => {
  test('it should return a new firewall', done => {
    lib.civo.Firewalls.create(token(), "my-firewall", function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      fw_id = data.id;
      expect(data).toHaveProperty('name');
      expect(data.result).toBe('success');
      done();
    });
  });
});

describe('Firewalls.create_rules', () => {
  test('it should return new firewall rules', done => {
    lib.civo.Firewalls.create_rules(token(), fw_id, {start_port: 8080}, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      expect(data.start_port).toBe("8080");
      done();
    });
  });
});

describe('Firewalls.get_rules', () => {
  test('it should return a list of firewall rules', done => {
    lib.civo.Firewalls.get_rules(token(), fw_id, function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        var rule = data[0];
        expect(rule).toHaveProperty('id');
        expect(rule).toHaveProperty('start_port');
      }
      done();
    });
  });
});

describe('Firewalls.list', () => {
  test('it should return a list of firewalls', done => {
    lib.civo.Firewalls.list(token(), function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        var fw = data[0];
        expect(fw).toHaveProperty('id');
        expect(fw).toHaveProperty('name');
      }
      done();
    });
  });
});

describe('Firewalls.delete', () => {
  test('it should delete a firewall', done => {
    lib.civo.Firewalls.delete(token(), fw_id, function(status, data) {
      console.log("deleted");
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});