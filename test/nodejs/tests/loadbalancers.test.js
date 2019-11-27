import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

var lb_id;

describe('LoadBalancers.create', () => {
  test('it should return a new loadbalancer', done => {
    lib.civo.Instances.list(token(), {tags: ""}, function(status, data) {
      if (data.items.length > 0) {
        var item = data.items[0], backend = {instance_id: item.id, protocol: "http", port: 80};
        lib.civo.LoadBalancers.create(token(), {backends: [backend]}, function(status, data) {
          expect(status).toBe(200);
          expect(data).toHaveProperty('id');
          lb_id = data.id;
          done();
        });
      }
    });
  });
});

describe('LoadBalancers.update', () => {
  test('it should update a loadbalancer', done => {
    lib.civo.LoadBalancers.update(token(), lb_id, {hostname: "test.com"}, function(status, data) {
      console.log(data);
      expect(status).toBe(200);
      done();
    });
  });
});

describe('LoadBalancers.list', () => {
  test('it should list all available loadbalancers', done => {
    lib.civo.LoadBalancers.list(token(), function(status, data) {
      console.log(data);
      expect(status).toBe(200);
      done();
    });
  });
});

describe('LoadBalancers.delete', () => {
  test('it should delete a loadbalancer', done => {
    lib.civo.LoadBalancers.delete(token(), lb_id, function(status, data) {
      console.log(data);
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});

