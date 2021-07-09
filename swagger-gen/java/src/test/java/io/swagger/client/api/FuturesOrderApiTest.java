/*
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.12
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.api;

import io.swagger.client.ApiException;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.junit.Test;

import java.math.BigDecimal;

/**
 * API tests for FuturesOrderApi
 */
@Ignore
public class FuturesOrderApiTest {

    private final static FuturesOrderApi api = new FuturesOrderApi();

    @BeforeClass
    public static void setUp() {
        // overwrite apiClient here
        // ApiClient apiClient = new ApiClient();
        // apiClient.setBasePath("https://api.bybit.com"); // https://api-testnet.bybit.com
        // apiClient.setApiKey("");
        // apiClient.setSecret("");
        // api.setApiClient(apiClient);
    }

    
    /**
     * Get my active order list.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderCancelTest() throws ApiException {
        String symbol = null;
        String orderId = null;
        String orderLinkId = null;
        Object response = api.futuresOrderCancel(symbol, orderId, orderLinkId);

        // TODO: test validations
    }
    
    /**
     * Get my active order list.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderCancelAllTest() throws ApiException {
        String symbol = null;
        Object response = api.futuresOrderCancelAll(symbol);

        // TODO: test validations
    }
    
    /**
     * Get my active order list.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderGetOrdersTest() throws ApiException {
        String symbol = null;
        BigDecimal limit = null;
        String orderStatus = null;
        String direction = null;
        String cursor = null;
        Object response = api.futuresOrderGetOrders(symbol, limit, orderStatus, direction, cursor);

        // TODO: test validations
    }
    
    /**
     * Place active order
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderNewTest() throws ApiException {
        String side = null;
        String symbol = null;
        String orderType = null;
        BigDecimal qty = null;
        String timeInForce = null;
        Double price = null;
        Double takeProfit = null;
        Double stopLoss = null;
        Boolean reduceOnly = null;
        Boolean closeOnTrigger = null;
        String orderLinkId = null;
        Object response = api.futuresOrderNew(side, symbol, orderType, qty, timeInForce, price, takeProfit, stopLoss, reduceOnly, closeOnTrigger, orderLinkId);

        // TODO: test validations
    }
    
    /**
     * Get my active order list.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderQueryTest() throws ApiException {
        String orderId = null;
        String symbol = null;
        String orderLinkId = null;
        Object response = api.futuresOrderQuery(orderId, symbol, orderLinkId);

        // TODO: test validations
    }
    
    /**
     * Replace active order. Only incomplete orders can be modified. 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresOrderReplaceTest() throws ApiException {
        String symbol = null;
        String orderId = null;
        String orderLinkId = null;
        String pRQty = null;
        String pRPrice = null;
        Object response = api.futuresOrderReplace(symbol, orderId, orderLinkId, pRQty, pRPrice);

        // TODO: test validations
    }
    
}
