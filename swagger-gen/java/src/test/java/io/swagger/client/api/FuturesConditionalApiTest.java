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
 * API tests for FuturesConditionalApi
 */
@Ignore
public class FuturesConditionalApiTest {

    private final static FuturesConditionalApi api = new FuturesConditionalApi();

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
     * Cancel conditional order.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalCancelTest() throws ApiException {
        String symbol = null;
        String stopOrderId = null;
        String orderLinkId = null;
        Object response = api.futuresConditionalCancel(symbol, stopOrderId, orderLinkId);

        // TODO: test validations
    }
    
    /**
     * Cancel conditional order.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalCancelAllTest() throws ApiException {
        String symbol = null;
        Object response = api.futuresConditionalCancelAll(symbol);

        // TODO: test validations
    }
    
    /**
     * Get my conditional order list.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalGetOrdersTest() throws ApiException {
        String symbol = null;
        String stopOrderStatus = null;
        BigDecimal limit = null;
        String direction = null;
        String cursor = null;
        Object response = api.futuresConditionalGetOrders(symbol, stopOrderStatus, limit, direction, cursor);

        // TODO: test validations
    }
    
    /**
     * Place a new conditional order.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalNewTest() throws ApiException {
        String side = null;
        String symbol = null;
        String orderType = null;
        String qty = null;
        String basePrice = null;
        String stopPx = null;
        String timeInForce = null;
        String price = null;
        String triggerBy = null;
        Boolean closeOnTrigger = null;
        String orderLinkId = null;
        Object response = api.futuresConditionalNew(side, symbol, orderType, qty, basePrice, stopPx, timeInForce, price, triggerBy, closeOnTrigger, orderLinkId);

        // TODO: test validations
    }
    
    /**
     * Query real-time stop order information.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalQueryTest() throws ApiException {
        String stopOrderId = null;
        String orderLinkId = null;
        String symbol = null;
        Object response = api.futuresConditionalQuery(stopOrderId, orderLinkId, symbol);

        // TODO: test validations
    }
    
    /**
     * Replace conditional order. Only incomplete orders can be modified. 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void futuresConditionalReplaceTest() throws ApiException {
        String symbol = null;
        String stopOrderId = null;
        String orderLinkId = null;
        String pRQty = null;
        String pRPrice = null;
        String pRTriggerPrice = null;
        Object response = api.futuresConditionalReplace(symbol, stopOrderId, orderLinkId, pRQty, pRPrice, pRTriggerPrice);

        // TODO: test validations
    }
    
}
