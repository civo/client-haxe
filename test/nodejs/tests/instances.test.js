import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

var instance_id, size;

describe('Instances.available_size', () => {
  test('it should return a list of available sizes', done => {
    lib.civo.Instances.available_sizes(token(), function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        size = data[0];
        expect(size).toHaveProperty('id');
        expect(size).toHaveProperty('name');
        expect(size.cpu_cores).toBe(1);
      }
      done();
    });
  });
});

describe('Instances.create', () => {
  test('it should return a new instance', done => {
    var host = "my-test.com", tmpl_id;
    lib.civo.Templates.list(token(), function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0)
        tmpl_id = data[0].id;
      lib.civo.Instances.create(token(), {size: size.name, hostname: host, template_id: tmpl_id}, function(status, data) {
        expect(status).toBe(200);
        expect(data).toHaveProperty('id');
        instance_id = data.id;
        done();
      });
    });
  });
});

describe('Instances.list', () => {
  test('it should return a list of instances', done => {
    lib.civo.Instances.list(token(), {tags: ""}, function(status, data) {
      expect(status).toBe(200);
      expect(data.page).toBe(1);
      expect(data.per_page).toBe(20);
      done();
    });
  });
});

describe('Instances.get', () => {
  test('it should return an instance', done => {
    lib.civo.Instances.get(token(), instance_id, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      expect(data.id).toBe(instance_id);
      done();
    });
  });
});

describe('Instances.delete', () => {
  test('it should delete an instance', done => {
    lib.civo.Instances.delete(token(), instance_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
