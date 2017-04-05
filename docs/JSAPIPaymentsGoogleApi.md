# JSAPIPaymentsGoogleApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**handleGooglePayment**](JSAPIPaymentsGoogleApi.md#handlegooglepayment) | **POST** /payment/provider/google/payments | Mark an invoice paid with Google


# **handleGooglePayment**
```objc
-(NSURLSessionTask*) handleGooglePaymentWithRequest: (JSAPIGooglePaymentRequest*) request
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Mark an invoice paid with Google

Mark an invoice paid with Google. Verifies signature from Google and treats the developerPayload field inside the json payload as the id of the invoice to pay. Returns the transaction ID if successful.

### Example 
```objc

JSAPIGooglePaymentRequest* request = [[JSAPIGooglePaymentRequest alloc] init]; // The request for paying an invoice through a Google in-app payment (optional)

JSAPIPaymentsGoogleApi*apiInstance = [[JSAPIPaymentsGoogleApi alloc] init];

// Mark an invoice paid with Google
[apiInstance handleGooglePaymentWithRequest:request
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsGoogleApi->handleGooglePayment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIGooglePaymentRequest***](JSAPIGooglePaymentRequest*.md)| The request for paying an invoice through a Google in-app payment | [optional] 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

