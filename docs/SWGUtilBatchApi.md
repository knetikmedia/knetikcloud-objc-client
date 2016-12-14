# SWGUtilBatchApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBatchPOSTUsingPOST**](SWGUtilBatchApi.md#getbatchpostusingpost) | **POST** /batch | Request to run API call given the method, content type, path url, and body of request


# **getBatchPOSTUsingPOST**
```objc
-(NSNumber*) getBatchPOSTUsingPOSTWithBatch: (SWGBatch*) batch
        completionHandler: (void (^)(NSError* error)) handler;
```

Request to run API call given the method, content type, path url, and body of request

### Example 
```objc

SWGBatch* batch = [[SWGBatch alloc] init]; // The batch object (optional)

SWGUtilBatchApi*apiInstance = [[SWGUtilBatchApi alloc] init];

// Request to run API call given the method, content type, path url, and body of request
[apiInstance getBatchPOSTUsingPOSTWithBatch:batch
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilBatchApi->getBatchPOSTUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **batch** | [**SWGBatch***](SWGBatch*.md)| The batch object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

