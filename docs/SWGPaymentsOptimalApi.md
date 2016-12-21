# SWGPaymentsOptimalApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**silentPostUsingPOST**](SWGPaymentsOptimalApi.md#silentpostusingpost) | **POST** /payment/provider/optimal/silent | Initiate silent post with Optimal


# **silentPostUsingPOST**
```objc
-(NSNumber*) silentPostUsingPOSTWithRequest: (SWGOptimalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Initiate silent post with Optimal

Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGOptimalPaymentRequest* request = [[SWGOptimalPaymentRequest alloc] init]; // The payment request to initiate (optional)

SWGPaymentsOptimalApi*apiInstance = [[SWGPaymentsOptimalApi alloc] init];

// Initiate silent post with Optimal
[apiInstance silentPostUsingPOSTWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsOptimalApi->silentPostUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

