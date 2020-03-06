/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ConditionalApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_ConditionalApi_H_
#define IO_SWAGGER_CLIENT_API_ConditionalApi_H_


#include "../ApiClient.h"

#include "Object.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  ConditionalApi
{
public:
    ConditionalApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ConditionalApi();
    /// <summary>
    /// Cancel conditional order.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="stopOrderId">Order ID of conditional order.</param>
    pplx::task<std::shared_ptr<Object>> conditional_cancel(
        utility::string_t stopOrderId
    );
    /// <summary>
    /// Cancel conditional order.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="symbol">Contract type.</param>
    pplx::task<std::shared_ptr<Object>> conditional_cancelAll(
        utility::string_t symbol
    );
    /// <summary>
    /// Get my conditional order list.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="stopOrderId">Order ID of conditional order. (optional)</param>
    /// <param name="orderLinkId">Agency customized order ID. (optional)</param>
    /// <param name="symbol">Contract type. Default BTCUSD. (optional)</param>
    /// <param name="order">Sort orders by creation date (optional)</param>
    /// <param name="page">Page. Default getting first page data (optional)</param>
    /// <param name="limit">Limit for data size per page, max size is 50. Default as showing 20 pieces of data per page. (optional)</param>
    pplx::task<std::shared_ptr<Object>> conditional_getOrders(
        boost::optional<utility::string_t> stopOrderId,
        boost::optional<utility::string_t> orderLinkId,
        boost::optional<utility::string_t> symbol,
        boost::optional<utility::string_t> order,
        boost::optional<double> page,
        boost::optional<double> limit
    );
    /// <summary>
    /// Place a new conditional order.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="side">Side.</param>
    /// <param name="symbol">Contract type.</param>
    /// <param name="orderType">Conditional order type.</param>
    /// <param name="qty">Order quantity.</param>
    /// <param name="basePrice">Send current market price. It will be used to compare with the value of &#39;stop_px&#39;, to decide whether your conditional order will be triggered by crossing trigger price from upper side or lower side. Mainly used to identify the expected direction of the current conditional order..</param>
    /// <param name="stopPx">Trigger price.</param>
    /// <param name="timeInForce">Time in force.</param>
    /// <param name="price">Execution price for conditional order (optional)</param>
    /// <param name="triggerBy">Trigger price type. Default LastPrice. (optional)</param>
    /// <param name="closeOnTrigger">close on trigger. (optional)</param>
    /// <param name="orderLinkId">Customized order ID, maximum length at 36 characters, and order ID under the same agency has to be unique.. (optional)</param>
    pplx::task<std::shared_ptr<Object>> conditional_new(
        utility::string_t side,
        utility::string_t symbol,
        utility::string_t orderType,
        double qty,
        double basePrice,
        double stopPx,
        utility::string_t timeInForce,
        boost::optional<double> price,
        boost::optional<utility::string_t> triggerBy,
        boost::optional<bool> closeOnTrigger,
        boost::optional<utility::string_t> orderLinkId
    );
    /// <summary>
    /// Replace conditional order. Only incomplete orders can be modified. 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="symbol">Contract type.</param>
    /// <param name="stopOrderId">Stop order ID. (optional)</param>
    /// <param name="orderId">Stop order ID. (optional)</param>
    /// <param name="pRQty">Order quantity. (optional)</param>
    /// <param name="pRPrice">Order price. (optional)</param>
    /// <param name="pRTriggerPrice">Trigger price. (optional)</param>
    pplx::task<std::shared_ptr<Object>> conditional_replace(
        utility::string_t symbol,
        boost::optional<utility::string_t> stopOrderId,
        boost::optional<utility::string_t> orderId,
        boost::optional<double> pRQty,
        boost::optional<double> pRPrice,
        boost::optional<double> pRTriggerPrice
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_ConditionalApi_H_ */

