import client from '../client';

var k3s_id;
var params = {name: 'my_k3s', num_target_nodes: 1, target_nodes_size: 'g2.xsmall'};

describe('Kubernetes.create', () => {
  test('it should return details of a new cluster', done => {
    client().kubernetes.create(params, function(status, data) {
      expect(status).toBe(200);
      k3s_id = data.id;
      expect(data.name).toBe(params.name);
      expect(data.num_target_nodes).toBe(params.num_target_nodes);
      expect(data.target_nodes_size).toBe(params.target_nodes_size);
      done();
    });
  });
});

describe('Kubernetes.applications', () => {
  test('it should return list of applications', done => {
    client().kubernetes.applications(function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Array);
      if (data.length > 0) {
        var item = data[0];
        expect(item).toHaveProperty('name');
        expect(item).toHaveProperty('title');
        expect(item).toHaveProperty('version');
      }
      done();
    });
  });
});

describe('Kubernetes.list', () => {
  test('it should return a list of clusters', done => {
    client().kubernetes.list(function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Object);
      done();
    });
  });
});

describe('Kubernetes.delete', () => {
  test('it should delete a cluster', done => {
    if (!k3s_id) {
      done();
      return;
    }
    client().kubernetes.delete(k3s_id, function(status, data) {
      expect(status).toBe(200);
      expect(data.result).toBe('success');
      done();
    });
  });
});
