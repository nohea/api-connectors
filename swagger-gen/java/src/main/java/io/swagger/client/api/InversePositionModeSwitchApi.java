package io.swagger.client.api;

import com.google.gson.reflect.TypeToken;
import io.swagger.client.*;

import java.io.IOException;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


public class InversePositionModeSwitchApi {
    private ApiClient apiClient;

    public InversePositionModeSwitchApi() {
        this(Configuration.getDefaultApiClient());
    }

    public InversePositionModeSwitchApi(ApiClient apiClient) {
        this.apiClient = apiClient;
    }

    public ApiClient getApiClient() {
        return apiClient;
    }

    public void setApiClient(ApiClient apiClient) {
        this.apiClient = apiClient;
    }


    /**
     * Replace active order. Only incomplete orders can be modified.
     *
     * @param symbol Contract type. (required)
     * @param mode Contract type. (required)
     * @return Object
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public Object inversePositionModeSwitchApi(String symbol, Integer mode) throws ApiException {
        ApiResponse<Object> resp = inversePositionModeSwitchApiWithHttpInfo(symbol, mode);
        return resp.getData();
    }


    /**
     * Replace active order. Only incomplete orders can be modified.
     *
     * @param symbol Contract type. (required)
     * @param mode Contract type. (required)
     * @return ApiResponse&lt;Object&gt;
     * @throws ApiException If fail to call the API, e.g. server error or cannot deserialize the response body
     */
    public ApiResponse<Object> inversePositionModeSwitchApiWithHttpInfo(String symbol, Integer mode) throws ApiException {
        com.squareup.okhttp.Call call = inversePositionModeSwitchApiWithHttpInfoValidateBeforeCall(symbol, mode, null, null);
        Type localVarReturnType = new TypeToken<Object>() {
        }.getType();
        return apiClient.execute(call, localVarReturnType);
    }


    @SuppressWarnings("rawtypes")
    private com.squareup.okhttp.Call inversePositionModeSwitchApiWithHttpInfoValidateBeforeCall(String symbol, Integer mode, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {

        if (symbol == null) {
            throw new ApiException("Missing the required parameter 'symbol' when calling inversePositionModeSwitch(Async)");
        }
        if (mode == null) {
            throw new ApiException("Missing the required parameter 'mode' when calling inversePositionModeSwitch(Async)");
        }

        com.squareup.okhttp.Call call = inversePositionModeSwitchCall(symbol, mode, progressListener, progressRequestListener);
        return call;

    }

    @Deprecated
    public com.squareup.okhttp.Call inversePositionModeSwitchCall(String symbol, Integer mode, final ProgressResponseBody.ProgressListener progressListener, final ProgressRequestBody.ProgressRequestListener progressRequestListener) throws ApiException {
        Object localVarPostBody = null;

        // create path and map variables
        String localVarPath = "/v2/private/position/switch-mode";

        List<Pair> localVarQueryParams = new ArrayList<Pair>();
        List<Pair> localVarCollectionQueryParams = new ArrayList<Pair>();

        Map<String, String> localVarHeaderParams = new HashMap<String, String>();

        Map<String, Object> localVarFormParams = new HashMap<String, Object>();
        if (symbol != null)
            localVarFormParams.put("symbol", symbol);
        if (mode != null)
            localVarFormParams.put("mode", mode);
        final String[] localVarAccepts = {
                "application/json"
        };
        final String localVarAccept = apiClient.selectHeaderAccept(localVarAccepts);
        if (localVarAccept != null) localVarHeaderParams.put("Accept", localVarAccept);

        final String[] localVarContentTypes = {
                "application/json", "application/x-www-form-urlencoded"
        };
        final String localVarContentType = apiClient.selectHeaderContentType(localVarContentTypes);
        localVarHeaderParams.put("Content-Type", localVarContentType);

        if (progressListener != null) {
            apiClient.getHttpClient().networkInterceptors().add(new com.squareup.okhttp.Interceptor() {
                @Override
                public com.squareup.okhttp.Response intercept(Chain chain) throws IOException {
                    com.squareup.okhttp.Response originalResponse = chain.proceed(chain.request());
                    return originalResponse.newBuilder()
                            .body(new ProgressResponseBody(originalResponse.body(), progressListener))
                            .build();
                }
            });
        }

        String[] localVarAuthNames = new String[]{"apiKey", "apiSignature", "timestamp"};
        return apiClient.buildCall(localVarPath, "POST", localVarQueryParams, localVarCollectionQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarAuthNames, progressRequestListener);
    }
}
