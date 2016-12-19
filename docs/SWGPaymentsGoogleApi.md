# SWGPaymentsGoogleApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**handlePaymentUsingPOST**](SWGPaymentsGoogleApi.md#handlepaymentusingpost) | **POST** /payment/provider/google/payments | Mark an invoice paid with Google


# **handlePaymentUsingPOST**
```objc
-(NSNumber*) handlePaymentUsingPOSTWithRequest: (SWGGooglePaymentRequest*) request
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Mark an invoice paid with Google

Mark an invoice paid with Google. Verifies signature from Google and treats the developerPayload field inside the json payload as the id of the invoice to pay. Returns the transaction ID if successful.

### Example 
```objc

SWGGooglePaymentRequest* request = [[SWGGooglePaymentRequest alloc] init]; // The request for paying an invoice through a Google in-app payment (optional)

SWGPaymentsGoogleApi*apiInstance = [[SWGPaymentsGoogleApi alloc] init];

// Mark an invoice paid with Google
[apiInstance handlePaymentUsingPOSTWithRequest:request
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsGoogleApi->handlePaymentUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGGooglePaymentRequest***](SWGGooglePaymentRequest*.md)| The request for paying an invoice through a Google in-app payment | [optional] 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

