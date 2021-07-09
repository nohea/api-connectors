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

import com.alibaba.fastjson.JSON;
import io.swagger.client.ApiClient;
import io.swagger.client.ApiException;
import org.junit.BeforeClass;
import org.junit.Test;

import java.math.BigDecimal;
import java.util.Map;

/**
 * API tests for OrderApi
 */

public class OrderApiTest {

    private final static OrderApi api = new OrderApi();
    private String orderId;
    private String symbol = "BTCUSD";
//    private static String api_key = "";
//    private static String secret = "";
    private static String api_key = "Your Apikey";
    private static String secret = "Your secret";


    @BeforeClass
    public static void setUp() {
        // overwrite apiClient here
        ApiClient apiClient = new ApiClient();
        apiClient.setBasePath("https://api.bybit.com"); // https://api-testnet.bybit.com
        apiClient.setApiKey(api_key);
        apiClient.setSecret(secret);
        api.setApiClient(apiClient);
    }


    /**
     * Get my active order list.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderCancelTest() throws ApiException {
        String symbol = null;
        String orderId = null;
        String orderLinkId = null;
        Object response = api.orderCancel(symbol, orderId, orderLinkId);

        // TODO: test validations
    }

    /**
     * Get my active order list.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderCancelAllTest() throws ApiException {
        String symbol = null;
        Object response = api.orderCancelAll(symbol);

        // TODO: test validations
    }

    /**
     * Get my active order list.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderGetOrdersTest() throws ApiException {
        String symbol = null;
        BigDecimal limit = null;
        String orderStatus = null;
        String direction = null;
        String cursor = null;
        Object response = api.orderGetOrders(symbol, limit, orderStatus, direction, cursor);

        // TODO: test validations
    }

    /**
     * Place active order
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderNewTest() throws ApiException {
        String side = "Buy";
//        String symbol = "BTCUSD";
        String orderType = "Limit";
        String qty = "1";
        String timeInForce = "GoodTillCancel";
        Double price = 31000D;
        Double takeProfit = 33000D;
        Double stopLoss = 30200D;
        Boolean reduceOnly = null;
        Boolean closeOnTrigger = null;
        String orderLinkId = null;
        Object response = api.orderNew(side, symbol, orderType, qty, timeInForce, price, takeProfit, stopLoss, reduceOnly, closeOnTrigger, orderLinkId);
        // TODO: test validations
        //create order
        System.out.println("Create order ——->>>>>>> result= " + JSON.toJSON(response).toString());

        Map<String, Object> resultJson = JSON.parseObject(JSON.toJSON(response).toString());
        String responseOrderId = "";
        if (resultJson != null) {
            String responseStatus = resultJson.get("ret_msg").toString();
            System.out.println("responseStatus = " + responseStatus);
            for (String key : resultJson.keySet()) {
                if (key.equals("result")) {
                    Map<String, String> result = (Map<String, String>) resultJson.get(key);
                    if (!result.get("order_id").equals("")) {
                        responseOrderId = result.get("order_id");
                    }
                }
            }

            if (responseStatus.equals("OK") && responseOrderId != null && !responseOrderId.equals("")) {
                orderId = responseOrderId;
                System.out.println("orderId = " + orderId);
                try {
                    // Wait 5000 milliseconds
//                    new Thread().sleep(5000);

                    //update order
//                    orderReplaceTestDemo(orderId, symbol, new BigDecimal(11));

//                    new Thread().sleep(5000);
                    //cancel order
//                    orderCancelTest(orderId, symbol);

                } catch (Exception e) {
                    e.printStackTrace();
                }

            }

        }
    }



    /**
     * Get my active order list.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderQueryTest() throws ApiException {
        String orderId = null;
        String symbol = null;
        String orderLinkId = null;
        Object response = api.orderQuery(orderId, symbol, orderLinkId);

        // TODO: test validations
    }

    /**
     * Replace active order. Only incomplete orders can be modified.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void orderReplaceTest() throws ApiException {
        String symbol = null;
        String orderId = null;
        String orderLinkId = null;
        String pRQty = null;
        String pRPrice = null;
        Object response = api.orderReplace(symbol, orderId, orderLinkId, pRQty, pRPrice);

        // TODO: test validations
    }

}
