# JSAPIPaymentsAppleApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**verifyAppleReceipt**](JSAPIPaymentsAppleApi.md#verifyapplereceipt) | **POST** /payment/provider/apple/receipt | Pay invoice with Apple receipt


# **verifyAppleReceipt**
```objc
-(NSURLSessionTask*) verifyAppleReceiptWithRequest: (JSAPIApplyPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Pay invoice with Apple receipt

Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIApplyPaymentRequest* request = [[JSAPIApplyPaymentRequest alloc] init]; // The request for paying an invoice through an Apple receipt (optional)

JSAPIPaymentsAppleApi*apiInstance = [[JSAPIPaymentsAppleApi alloc] init];

// Pay invoice with Apple receipt
[apiInstance verifyAppleReceiptWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsAppleApi->verifyAppleReceipt: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIApplyPaymentRequest***](JSAPIApplyPaymentRequest.md)| The request for paying an invoice through an Apple receipt | [optional] 

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

