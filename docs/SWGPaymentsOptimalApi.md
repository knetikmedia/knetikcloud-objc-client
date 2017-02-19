# SWGPaymentsOptimalApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**silentPostOptimal**](SWGPaymentsOptimalApi.md#silentpostoptimal) | **POST** /payment/provider/optimal/silent | Initiate silent post with Optimal


# **silentPostOptimal**
```objc
-(NSURLSessionTask*) silentPostOptimalWithRequest: (SWGOptimalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Initiate silent post with Optimal

Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGOptimalPaymentRequest* request = [[SWGOptimalPaymentRequest alloc] init]; // The payment request to initiate (optional)

SWGPaymentsOptimalApi*apiInstance = [[SWGPaymentsOptimalApi alloc] init];

// Initiate silent post with Optimal
[apiInstance silentPostOptimalWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsOptimalApi->silentPostOptimal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGOptimalPaymentRequest***](SWGOptimalPaymentRequest*.md)| The payment request to initiate | [optional] 

### Return type

**NSString***

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

