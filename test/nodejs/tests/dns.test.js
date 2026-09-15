import client from '../client';

var domain, domain_id, dns_id;

describe('Dns.listDomains', () => {
  test('it should return a list of domains', done => {
    client().dns.listDomains(function(status, data) {
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

describe('Dns.createDomain', () => {
  test('it should return a newly created domain', done => {
    var name = "my-test-domain.com";
    client().dns.createDomain(name, function(status, data) {
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

describe('Dns.updateDomain', () => {
  test('it should modify a domain', done => {
    var name = "my-other-domain.com";
    client().dns.updateDomain(domain.id, name, function(status, data) {
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

describe('Dns.deleteDomain', () => {
  test('it should delete a domain', done => {
    client().dns.deleteDomain(domain.id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});

describe('Dns.createRecord', () => {
  test('it should return a newly created dns entry', done => {
    var name = "my-test-domain.com";
    var civo = client();
    civo.dns.createDomain(name, function(status, data) {
      expect(status).toBe(200);
      domain_id = data.id;
      var params = {type: 'a', name: 'www', value: '96.0.0.1'};
      civo.dns.createRecord(domain_id, params, function(status, data) {
        expect(status).toBe(200);
        dns_id = data.id;
        expect(data).toHaveProperty('id');
        expect(data.domain_id).toBe(domain_id);
        expect(data.value).toBe('96.0.0.1');
        done();
      });
    });
  });
});

describe('Dns.listRecords', () => {
  test('it should return a list of dns entries', done => {
    client().dns.listRecords(domain_id, function(status, data) {
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

describe('Dns.updateRecord', () => {
  test('it should modify a dns entry', done => {
    var params = {value: '96.0.0.2'};
    client().dns.updateRecord(domain_id, dns_id, params, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      expect(data.domain_id).toBe(domain_id);
      expect(data.value).toBe('96.0.0.2');
      done();
    });
  });
});

describe('Dns.deleteRecord', () => {
  test('it should delete a dns entry', done => {
    var civo = client();
    civo.dns.deleteRecord(domain_id, dns_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      civo.dns.deleteDomain(domain_id, function(status, data) {
        expect(status).toBe(200);
        expect(data.result).toBe('success');
        done();
      });
    });
  });
});
