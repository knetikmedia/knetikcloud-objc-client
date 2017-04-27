# JSAPIUtilBatchApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendBatch**](JSAPIUtilBatchApi.md#sendbatch) | **POST** /batch | Request to run API call given the method, content type, path url, and body of request


# **sendBatch**
```objc
-(NSURLSessionTask*) sendBatchWithBatch: (JSAPIBatch*) batch
        completionHandler: (void (^)(NSArray<JSAPIBatchReturn>* output, NSError* error)) handler;
```

Request to run API call given the method, content type, path url, and body of request

### Example 
```objc

JSAPIBatch* batch = [[JSAPIBatch alloc] init]; // The batch object (optional)

JSAPIUtilBatchApi*apiInstance = [[JSAPIUtilBatchApi alloc] init];

// Request to run API call given the method, content type, path url, and body of request
[apiInstance sendBatchWithBatch:batch
          completionHandler: ^(NSArray<JSAPIBatchReturn>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilBatchApi->sendBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **batch** | [**JSAPIBatch***](JSAPIBatch*.md)| The batch object | [optional] 

### Return type

[**NSArray<JSAPIBatchReturn>***](JSAPIBatchReturn.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

