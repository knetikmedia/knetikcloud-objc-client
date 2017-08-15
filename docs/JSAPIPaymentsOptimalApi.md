# JSAPIPaymentsOptimalApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**silentPostOptimal**](JSAPIPaymentsOptimalApi.md#silentpostoptimal) | **POST** /payment/provider/optimal/silent | Initiate silent post with Optimal


# **silentPostOptimal**
```objc
-(NSURLSessionTask*) silentPostOptimalWithRequest: (JSAPIOptimalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Initiate silent post with Optimal

Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details.

### Example 
```objc

JSAPIOptimalPaymentRequest* request = [[JSAPIOptimalPaymentRequest alloc] init]; // The payment request to initiate (optional)

JSAPIPaymentsOptimalApi*apiInstance = [[JSAPIPaymentsOptimalApi alloc] init];

// Initiate silent post with Optimal
[apiInstance silentPostOptimalWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsOptimalApi->silentPostOptimal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIOptimalPaymentRequest***](JSAPIOptimalPaymentRequest.md)| The payment request to initiate | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

