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

/**
 * API tests for LinearMarketApi
 */
@Ignore
public class LinearMarketApiTest {

    private final static LinearMarketApi api = new LinearMarketApi();

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
     * Get recent trades
     *
     * This will get recent trades
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void linearMarketTradingTest() throws ApiException {
        String symbol = null;
        String limit = null;
        Object response = api.linearMarketTrading(symbol, limit);

        // TODO: test validations
    }
    
}
