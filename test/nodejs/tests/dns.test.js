import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

var domain, domain_id, dns_id;

describe('Dns.list_domains', () => {
  test('it should return a list of domains', done => {
    lib.civo.Dns.list_domains(token(), function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        var dns = data[0];
        expect(dns).toHaveProperty('id');
        expect(dns).toHaveProperty('account_id');
        expect(dns).toHaveProperty('name');
      }
      done();
    });
  });
});

describe('Dns.create_domain', () => {
  test('it should return a newly created domain', done => {
    var name = "my-test-domain.com";
    lib.civo.Dns.create_domain(token(), name, function(status, data) {
      expect(status).toBe(200);
      domain = data;
      expect(data).toHaveProperty('id');
      expect(data).toHaveProperty('name');
      expect(data.result).toBe('success');
      expect(data.name).toBe(name);
      done();
    });
  });
});

describe('Dns.update_domain', () => {
  test('it should modify a domain', done => {
    var name = "my-other-domain.com"
    lib.civo.Dns.update_domain(token(), domain.id, name, function(status, data) {
      expect(status).toBe(200);
      domain = data;
      expect(data).toHaveProperty('id');
      expect(data).toHaveProperty('name');
      expect(data.result).toBe('success');
      expect(data.name).toBe(name);
      done();
    });
  });
});

describe('Dns.delete_domain', () => {
  test('it should delete a domain', done => {
    lib.civo.Dns.delete_domain(token(), domain.id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});

describe('Dns.create_dns', () => {
  test('it should return a newly created dns entry', done => {
    var name = "my-test-domain.com";
    lib.civo.Dns.create_domain(token(), name, function(status, data) {
      expect(status).toBe(200);
      domain_id = data.id;
      var params = {type: 'a', name: 'www', value: '96.0.0.1'};
      lib.civo.Dns.create_dns(token(), domain_id, params, function(status, data) {
        expect(status).toBe(200);
        dns_id = data.id
        expect(data).toHaveProperty('id');
        expect(data.domain_id).toBe(domain_id);
        expect(data.value).toBe('96.0.0.1');
        done();
      });
    });
  });
});

describe('Dns.list_dns', () => {
  test('it should return a list of dns entries', done => {
    lib.civo.Dns.list_dns(token(), domain_id, function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        var dns = data[0];
        expect(dns).toHaveProperty('id');
        expect(dns).toHaveProperty('account_id');
        expect(dns).toHaveProperty('name');
      }
      done();
    });
  });
});

describe('Dns.update_dns', () => {
  test('it should modify a dns entry', done => {
    var name = "my-other-domain.com"
    var params = {value: '96.0.0.2'};
    lib.civo.Dns.update_dns(token(), domain_id, dns_id, params, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
        expect(data.domain_id).toBe(domain_id);
      expect(data.value).toBe('96.0.0.2');
      done();
    });
  });
});

describe('Dns.delete_dns', () => {
  test('it should delete a dns entry', done => {
    lib.civo.Dns.delete_dns(token(), domain_id, dns_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
    lib.civo.Dns.delete_domain(token(), domain_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
