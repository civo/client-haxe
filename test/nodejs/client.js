import token from './__config';

const { Civo } = require('../../bin/nodejs/civo.js');

export default () => new Civo({ token: token() });
