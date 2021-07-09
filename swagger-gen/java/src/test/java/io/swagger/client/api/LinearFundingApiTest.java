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
 * API tests for LinearFundingApi
 */
@Ignore
public class LinearFundingApiTest {

    private final static LinearFundingApi api = new LinearFundingApi();

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
     * Get prev funding
     *
     * This will get prev funding
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void linearFundingMyLastFeeTest() throws ApiException {
        String symbol = null;
        Object response = api.linearFundingMyLastFee(symbol);

        // TODO: test validations
    }
    
    /**
     * Get predicted funding rate and funding fee.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void linearFundingPredictedTest() throws ApiException {
        String symbol = null;
        Object response = api.linearFundingPredicted(symbol);

        // TODO: test validations
    }
    
    /**
     * Get prev funding
     *
     * This will get prev funding rate
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void linearFundingPrevRateTest() throws ApiException {
        String symbol = null;
        Object response = api.linearFundingPrevRate(symbol);

        // TODO: test validations
    }
    
}
