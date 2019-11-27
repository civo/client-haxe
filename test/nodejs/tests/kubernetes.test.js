import lib from "../../../bin/nodejs/main.js";
import token from '../__config';

var k3s_id;
var params = {name: 'my_k3s', num_target_nodes: 1, target_nodes_size: 'g2.xsmall'};

describe('Kubernetes.create', () => {
  test('it should return details of a new cluster', done => {
    lib.civo.Kubernetes.create(token(), params, function(status, data) {
      expect(status).toBe(200);
      var k3s_id = data.id;
      expect(data.name).toBe(params.name);
      expect(data.num_target_nodes).toBe(params.num_target_nodes);
      expect(data.target_nodes_size).toBe(params.target_nodes_size);
      done();
    });
  });
});

describe('Kubernetes.applications', () => {
  test('it should return list of applications', done => {
    lib.civo.Kubernetes.applications(token(), function(status, data) {
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
    lib.civo.Kubernetes.list(token(), function(status, data) {
      expect(status).toBe(200);
      expect(data).toBeInstanceOf(Object);
      var k3s = data[k3s_id];
      expect(k3s).toHaveProperty('page');
      expect(k3s).toHaveProperty('per_page');
      done();
    });
  });
});

// describe('Kubernetes.get', () => {
//   test('it should return a cluster', done => {
//     lib.civo.Kubernetes.get(token(), k3s_id, function(status, data) {
//       console.log(data);
//       expect(status).toBe(200);
//       expect(data.name).toBe(params.name);
//       expect(data.num_target_nodes).toBe(params.num_target_nodes);
//       done();
//     });
//   });
// });

// describe('Kubernetes.update', () => {
//   var new_params = {name: 'new_k3s'};
//   test('it should update a cluster', done => {
//     lib.civo.Kubernetes.update(token(), k3s_id, new_params, function(status, data) {
//       console.log(data);
//       expect(status).toBe(200);
//       expect(data.name).toBe(new_params.name);
//       expect(data.num_target_nodes).toBe(params.num_target_nodes);
//       done();
//     });
//   });
// });

// describe('Kubernetes.delete', () => {
//   test('it should delete a cluster', done => {
//     lib.civo.Kubernetes.delete(token(), k3s_id, function(status, data) {
//       console.log(data);
//       expect(status).toBe(200);
//       expect(data.result).toBe('success');
//       done();
//     });
//   });
// });
