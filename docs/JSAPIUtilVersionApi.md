# JSAPIUtilVersionApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getVersion**](JSAPIUtilVersionApi.md#getversion) | **GET** /version | Get current version info


# **getVersion**
```objc
-(NSURLSessionTask*) getVersionWithCompletionHandler: 
        (void (^)(JSAPIVersion* output, NSError* error)) handler;
```

Get current version info

### Example 
```objc


JSAPIUtilVersionApi*apiInstance = [[JSAPIUtilVersionApi alloc] init];

// Get current version info
[apiInstance getVersionWithCompletionHandler: 
          ^(JSAPIVersion* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilVersionApi->getVersion: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPIVersion***](JSAPIVersion.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
