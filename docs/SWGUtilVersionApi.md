# SWGUtilVersionApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUsingGET3**](SWGUtilVersionApi.md#getusingget3) | **GET** /version | Get current version info


# **getUsingGET3**
```objc
-(NSURLSessionTask*) getUsingGET3WithCompletionHandler: 
        (void (^)(SWGVersion* output, NSError* error)) handler;
```

Get current version info

### Example 
```objc


SWGUtilVersionApi*apiInstance = [[SWGUtilVersionApi alloc] init];

// Get current version info
[apiInstance getUsingGET3WithCompletionHandler: 
          ^(SWGVersion* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilVersionApi->getUsingGET3: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGVersion***](SWGVersion.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

