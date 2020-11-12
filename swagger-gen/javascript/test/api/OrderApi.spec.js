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
    instance = new BybitApi.OrderApi();
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

  describe('OrderApi', function() {
    describe('orderCancel', function() {
      it('should call orderCancel successfully', function(done) {
        //uncomment below and update the code to test orderCancel
        //instance.orderCancel(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('orderCancelAll', function() {
      it('should call orderCancelAll successfully', function(done) {
        //uncomment below and update the code to test orderCancelAll
        //instance.orderCancelAll(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('orderGetOrders', function() {
      it('should call orderGetOrders successfully', function(done) {
        //uncomment below and update the code to test orderGetOrders
        //instance.orderGetOrders(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('orderNew', function() {
      it('should call orderNew successfully', function(done) {
        //uncomment below and update the code to test orderNew
        //instance.orderNew(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('orderQuery', function() {
      it('should call orderQuery successfully', function(done) {
        //uncomment below and update the code to test orderQuery
        //instance.orderQuery(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('orderReplace', function() {
      it('should call orderReplace successfully', function(done) {
        //uncomment below and update the code to test orderReplace
        //instance.orderReplace(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
