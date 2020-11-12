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
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.BybitApi) {
      root.BybitApi = {};
    }
    root.BybitApi.Position = factory(root.BybitApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The Position model module.
   * @module model/Position
   * @version 0.2.10
   */

  /**
   * Constructs a new <code>Position</code>.
   * Get my position list.
   * @alias module:model/Position
   * @class
   */
  var exports = function() {
    var _this = this;







  };

  /**
   * Constructs a <code>Position</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Position} obj Optional instance to populate.
   * @return {module:model/Position} The populated <code>Position</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('ret_code')) {
        obj['ret_code'] = ApiClient.convertToType(data['ret_code'], 'Number');
      }
      if (data.hasOwnProperty('ret_msg')) {
        obj['ret_msg'] = ApiClient.convertToType(data['ret_msg'], 'String');
      }
      if (data.hasOwnProperty('ext_code')) {
        obj['ext_code'] = ApiClient.convertToType(data['ext_code'], 'String');
      }
      if (data.hasOwnProperty('ext_info')) {
        obj['ext_info'] = ApiClient.convertToType(data['ext_info'], 'String');
      }
      if (data.hasOwnProperty('result')) {
        obj['result'] = ApiClient.convertToType(data['result'], Object);
      }
      if (data.hasOwnProperty('time_now')) {
        obj['time_now'] = ApiClient.convertToType(data['time_now'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {Number} ret_code
   */
  exports.prototype['ret_code'] = undefined;
  /**
   * @member {String} ret_msg
   */
  exports.prototype['ret_msg'] = undefined;
  /**
   * @member {String} ext_code
   */
  exports.prototype['ext_code'] = undefined;
  /**
   * @member {String} ext_info
   */
  exports.prototype['ext_info'] = undefined;
  /**
   * @member {Object} result
   */
  exports.prototype['result'] = undefined;
  /**
   * @member {String} time_now
   */
  exports.prototype['time_now'] = undefined;



  return exports;
}));


