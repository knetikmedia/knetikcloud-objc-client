# SWGPaymentsAppleApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**verifyReceiptUsingPOST**](SWGPaymentsAppleApi.md#verifyreceiptusingpost) | **POST** /payment/provider/apple/receipt | Pay invoice with Apple receipt


# **verifyReceiptUsingPOST**
```objc
-(NSNumber*) verifyReceiptUsingPOSTWithRequest: (SWGApplyPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Pay invoice with Apple receipt

Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful.

### Example 
```objc

SWGApplyPaymentRequest* request = [[SWGApplyPaymentRequest alloc] init]; // The request for paying an invoice through an Apple receipt (optional)

SWGPaymentsAppleApi*apiInstance = [[SWGPaymentsAppleApi alloc] init];

// Pay invoice with Apple receipt
[apiInstance verifyReceiptUsingPOSTWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsAppleApi->verifyReceiptUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGApplyPaymentRequest***](SWGApplyPaymentRequest*.md)| The request for paying an invoice through an Apple receipt | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

