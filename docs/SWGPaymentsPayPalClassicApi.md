# SWGPaymentsPayPalClassicApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBillingAgreementUrlUsingPOST**](SWGPaymentsPayPalClassicApi.md#createbillingagreementurlusingpost) | **POST** /payment/provider/paypal/classic/agreements/start | Create a PayPal Classic billing agreement for the user
[**expressCheckoutUsingPOST**](SWGPaymentsPayPalClassicApi.md#expresscheckoutusingpost) | **POST** /payment/provider/paypal/classic/checkout/start | Create a payment token for PayPal express checkout
[**finalizeBillingAgreementUsingPOST**](SWGPaymentsPayPalClassicApi.md#finalizebillingagreementusingpost) | **POST** /payment/provider/paypal/classic/agreements/finish | Finalizes a billing agreement after the user has accepted through PayPal
[**finalizeCheckoutUsingPOST**](SWGPaymentsPayPalClassicApi.md#finalizecheckoutusingpost) | **POST** /payment/provider/paypal/classic/checkout/finish | Finalizes a payment after the user has completed checkout with PayPal


# **createBillingAgreementUrlUsingPOST**
```objc
-(NSNumber*) createBillingAgreementUrlUsingPOSTWithRequest: (SWGCreateBillingAgreementRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a PayPal Classic billing agreement for the user

Returns the token that should be used to forward the user to PayPal so they can accept the agreement.

### Example 
```objc

SWGCreateBillingAgreementRequest* request = [[SWGCreateBillingAgreementRequest alloc] init]; // The request to create a PayPal billing agreement (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Create a PayPal Classic billing agreement for the user
[apiInstance createBillingAgreementUrlUsingPOSTWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->createBillingAgreementUrlUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGCreateBillingAgreementRequest***](SWGCreateBillingAgreementRequest*.md)| The request to create a PayPal billing agreement | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **expressCheckoutUsingPOST**
```objc
-(NSNumber*) expressCheckoutUsingPOSTWithRequest: (SWGCreatePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a payment token for PayPal express checkout

Returns the token that should be used to forward the user to PayPal so they can complete the checkout.

### Example 
```objc

SWGCreatePayPalPaymentRequest* request = [[SWGCreatePayPalPaymentRequest alloc] init]; // The request to create a PayPal payment token (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Create a payment token for PayPal express checkout
[apiInstance expressCheckoutUsingPOSTWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->expressCheckoutUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGCreatePayPalPaymentRequest***](SWGCreatePayPalPaymentRequest*.md)| The request to create a PayPal payment token | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizeBillingAgreementUsingPOST**
```objc
-(NSNumber*) finalizeBillingAgreementUsingPOSTWithRequest: (SWGFinalizeBillingAgreementRequest*) request
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Finalizes a billing agreement after the user has accepted through PayPal

Returns the ID of the new payment method created for the user for the billing agreement.

### Example 
```objc

SWGFinalizeBillingAgreementRequest* request = [[SWGFinalizeBillingAgreementRequest alloc] init]; // The request to finalize a PayPal billing agreement (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Finalizes a billing agreement after the user has accepted through PayPal
[apiInstance finalizeBillingAgreementUsingPOSTWithRequest:request
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->finalizeBillingAgreementUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGFinalizeBillingAgreementRequest***](SWGFinalizeBillingAgreementRequest*.md)| The request to finalize a PayPal billing agreement | [optional] 

### Return type

**NSNumber***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizeCheckoutUsingPOST**
```objc
-(NSNumber*) finalizeCheckoutUsingPOSTWithRequest: (SWGFinalizePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Finalizes a payment after the user has completed checkout with PayPal

The invoice will be marked paid/failed by asynchronous IPN callback.

### Example 
```objc

SWGFinalizePayPalPaymentRequest* request = [[SWGFinalizePayPalPaymentRequest alloc] init]; // The request to finalize the payment (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Finalizes a payment after the user has completed checkout with PayPal
[apiInstance finalizeCheckoutUsingPOSTWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->finalizeCheckoutUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGFinalizePayPalPaymentRequest***](SWGFinalizePayPalPaymentRequest*.md)| The request to finalize the payment | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

