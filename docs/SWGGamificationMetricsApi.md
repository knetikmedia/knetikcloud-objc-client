# SWGGamificationMetricsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMetricUsingPOST**](SWGGamificationMetricsApi.md#addmetricusingpost) | **POST** /metrics | Add a metric


# **addMetricUsingPOST**
```objc
-(NSNumber*) addMetricUsingPOSTWithMetric: (SWGMetricResource*) metric
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a metric

Post a new score/stat for an activity occurrence without ending the occurrence itself

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGMetricResource* metric = [[SWGMetricResource alloc] init]; // The new metric (optional)

SWGGamificationMetricsApi*apiInstance = [[SWGGamificationMetricsApi alloc] init];

// Add a metric
[apiInstance addMetricUsingPOSTWithMetric:metric
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationMetricsApi->addMetricUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric** | [**SWGMetricResource***](SWGMetricResource*.md)| The new metric | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

