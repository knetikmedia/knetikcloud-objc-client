# JSAPIUtilHealthApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getHealth**](JSAPIUtilHealthApi.md#gethealth) | **GET** /health | Get health info


# **getHealth**
```objc
-(NSURLSessionTask*) getHealthWithCompletionHandler: 
        (void (^)(NSObject* output, NSError* error)) handler;
```

Get health info

### Example 
```objc


JSAPIUtilHealthApi*apiInstance = [[JSAPIUtilHealthApi alloc] init];

// Get health info
[apiInstance getHealthWithCompletionHandler: 
          ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilHealthApi->getHealth: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

