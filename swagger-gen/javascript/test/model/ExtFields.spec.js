/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.8
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BybitApi);
  }
}(this, function(expect, BybitApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new BybitApi.ExtFields();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('ExtFields', function() {
    it('should create an instance of ExtFields', function() {
      // uncomment below and update the code to test ExtFields
      //var instance = new BybitApi.ExtFields();
      //expect(instance).to.be.a(BybitApi.ExtFields);
    });

    it('should have the property oReqNum (base name: "o_req_num")', function() {
      // uncomment below and update the code to test the property oReqNum
      //var instance = new BybitApi.ExtFields();
      //expect(instance).to.be();
    });

    it('should have the property xreqType (base name: "xreq_type")', function() {
      // uncomment below and update the code to test the property xreqType
      //var instance = new BybitApi.ExtFields();
      //expect(instance).to.be();
    });

    it('should have the property xreqOffset (base name: "xreq_offset")', function() {
      // uncomment below and update the code to test the property xreqOffset
      //var instance = new BybitApi.ExtFields();
      //expect(instance).to.be();
    });

  });

}));
