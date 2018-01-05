# JSAPIGamificationMetricsApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

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

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

