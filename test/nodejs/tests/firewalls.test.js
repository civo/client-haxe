import client from '../client';

var fw_id;

describe('Firewalls.create', () => {
  test('it should return a new firewall', done => {
    var civo = client();
    civo.networks.list(function(status, networks) {
      expect(status).toBe(200);
      expect(networks.length).toBeGreaterThan(0);
      var networkId = networks[0].id;
      civo.firewalls.create("my-firewall", networkId, function(status, data) {
        expect(status).toBe(200);
        expect(data).toHaveProperty('id');
        fw_id = data.id;
        expect(data).toHaveProperty('name');
        expect(data.result).toBe('success');
        done();
      });
    });
  });
});

describe('Firewalls.createRule', () => {
  test('it should return new firewall rules', done => {
    client().firewalls.createRule(fw_id, {start_port: 8080}, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      expect(data.start_port).toBe("8080");
      done();
    });
  });
});

describe('Firewalls.rules', () => {
  test('it should return a list of firewall rules', done => {
    client().firewalls.rules(fw_id, function(status, data) {
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
    client().firewalls.list(function(status, data) {
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
    client().firewalls.delete(fw_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
