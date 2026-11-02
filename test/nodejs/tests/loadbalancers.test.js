import client from '../client';

var lb_id;

describe('LoadBalancers.create', () => {
  test('it should return a new loadbalancer', done => {
    var civo = client();
    civo.instances.list(function(status, data) {
      if (data.items && data.items.length > 0) {
        var item = data.items[0];
        var backend = {instance_id: item.id, protocol: "http", port: 80};
        civo.loadBalancers.create({backends: [backend]}, function(status, data) {
          expect(status).toBe(200);
          expect(data).toHaveProperty('id');
          lb_id = data.id;
          done();
        });
      } else {
        done();
      }
    }, {tags: ""});
  });
});

describe('LoadBalancers.update', () => {
  test('it should update a loadbalancer', done => {
    if (!lb_id) {
      done();
      return;
    }
    client().loadBalancers.update(lb_id, {hostname: "test.com"}, function(status, data) {
      expect(status).toBe(200);
      done();
    });
  });
});

describe('LoadBalancers.list', () => {
  test('it should list all available loadbalancers', done => {
    client().loadBalancers.list(function(status, data) {
      expect(status).toBe(200);
      done();
    });
  });
});

describe('LoadBalancers.delete', () => {
  test('it should delete a loadbalancer', done => {
    if (!lb_id) {
      done();
      return;
    }
    client().loadBalancers.delete(lb_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
