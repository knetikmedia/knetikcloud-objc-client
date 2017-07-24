# JSAPIGamificationMetricsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMetric**](JSAPIGamificationMetricsApi.md#addmetric) | **POST** /metrics | Add a metric


# **addMetric**
```objc
-(NSURLSessionTask*) addMetricWithMetric: (JSAPIMetricResource*) metric
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a metric

Post a new score/stat for an activity occurrence without ending the occurrence itself

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMetricResource* metric = [[JSAPIMetricResource alloc] init]; // The new metric (optional)

JSAPIGamificationMetricsApi*apiInstance = [[JSAPIGamificationMetricsApi alloc] init];

// Add a metric
[apiInstance addMetricWithMetric:metric
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationMetricsApi->addMetric: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric** | [**JSAPIMetricResource***](JSAPIMetricResource.md)| The new metric | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

