import client from '../client';

var instance_id, size, disk_image_id;

describe('Instances.availableSizes', () => {
  test('it should return a list of available sizes', done => {
    client().instances.availableSizes(function(status, data) {
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
    var civo = client();
    var host = "my-test.com";
    civo.diskImages.list(function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0)
        disk_image_id = data[0].id;
      civo.instances.create({
        size: size.name,
        hostname: host,
        disk_image: disk_image_id
      }, function(status, data) {
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
    client().instances.list(function(status, data) {
      expect(status).toBe(200);
      expect(data.page).toBe(1);
      expect(data.per_page).toBe(20);
      done();
    }, {tags: ""});
  });
});

describe('Instances.get', () => {
  test('it should return an instance', done => {
    client().instances.get(instance_id, function(status, data) {
      expect(status).toBe(200);
      expect(data).toHaveProperty('id');
      expect(data.id).toBe(instance_id);
      done();
    });
  });
});

describe('Instances.delete', () => {
  test('it should delete an instance', done => {
    client().instances.delete(instance_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
