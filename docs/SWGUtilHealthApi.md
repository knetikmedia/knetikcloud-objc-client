# SWGUtilHealthApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getHealthInfoUsingGET**](SWGUtilHealthApi.md#gethealthinfousingget) | **GET** /health | Get health info


# **getHealthInfoUsingGET**
```objc
-(NSNumber*) getHealthInfoUsingGETWithCompletionHandler: 
        (void (^)(NSObject* output, NSError* error)) handler;
```

Get health info

### Example 
```objc


SWGUtilHealthApi*apiInstance = [[SWGUtilHealthApi alloc] init];

// Get health info
[apiInstance getHealthInfoUsingGETWithCompletionHandler: 
          ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilHealthApi->getHealthInfoUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSObject***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

