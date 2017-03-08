# SWGPaymentsPayPalClassicApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPayPalBillingAgreementUrl**](SWGPaymentsPayPalClassicApi.md#createpaypalbillingagreementurl) | **POST** /payment/provider/paypal/classic/agreements/start | Create a PayPal Classic billing agreement for the user
[**createPayPalExpressCheckout**](SWGPaymentsPayPalClassicApi.md#createpaypalexpresscheckout) | **POST** /payment/provider/paypal/classic/checkout/start | Create a payment token for PayPal express checkout
[**finalizePayPalBillingAgreement**](SWGPaymentsPayPalClassicApi.md#finalizepaypalbillingagreement) | **POST** /payment/provider/paypal/classic/agreements/finish | Finalizes a billing agreement after the user has accepted through PayPal
[**finalizePayPalCheckout**](SWGPaymentsPayPalClassicApi.md#finalizepaypalcheckout) | **POST** /payment/provider/paypal/classic/checkout/finish | Finalizes a payment after the user has completed checkout with PayPal


# **createPayPalBillingAgreementUrl**
```objc
-(NSURLSessionTask*) createPayPalBillingAgreementUrlWithRequest: (SWGCreateBillingAgreementRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a PayPal Classic billing agreement for the user

Returns the token that should be used to forward the user to PayPal so they can accept the agreement.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCreateBillingAgreementRequest* request = [[SWGCreateBillingAgreementRequest alloc] init]; // The request to create a PayPal billing agreement (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Create a PayPal Classic billing agreement for the user
[apiInstance createPayPalBillingAgreementUrlWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->createPayPalBillingAgreementUrl: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPayPalExpressCheckout**
```objc
-(NSURLSessionTask*) createPayPalExpressCheckoutWithRequest: (SWGCreatePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a payment token for PayPal express checkout

Returns the token that should be used to forward the user to PayPal so they can complete the checkout.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCreatePayPalPaymentRequest* request = [[SWGCreatePayPalPaymentRequest alloc] init]; // The request to create a PayPal payment token (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Create a payment token for PayPal express checkout
[apiInstance createPayPalExpressCheckoutWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->createPayPalExpressCheckout: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizePayPalBillingAgreement**
```objc
-(NSURLSessionTask*) finalizePayPalBillingAgreementWithRequest: (SWGFinalizeBillingAgreementRequest*) request
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Finalizes a billing agreement after the user has accepted through PayPal

Returns the ID of the new payment method created for the user for the billing agreement.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGFinalizeBillingAgreementRequest* request = [[SWGFinalizeBillingAgreementRequest alloc] init]; // The request to finalize a PayPal billing agreement (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Finalizes a billing agreement after the user has accepted through PayPal
[apiInstance finalizePayPalBillingAgreementWithRequest:request
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->finalizePayPalBillingAgreement: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizePayPalCheckout**
```objc
-(NSURLSessionTask*) finalizePayPalCheckoutWithRequest: (SWGFinalizePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Finalizes a payment after the user has completed checkout with PayPal

The invoice will be marked paid/failed by asynchronous IPN callback.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGFinalizePayPalPaymentRequest* request = [[SWGFinalizePayPalPaymentRequest alloc] init]; // The request to finalize the payment (optional)

SWGPaymentsPayPalClassicApi*apiInstance = [[SWGPaymentsPayPalClassicApi alloc] init];

// Finalizes a payment after the user has completed checkout with PayPal
[apiInstance finalizePayPalCheckoutWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsPayPalClassicApi->finalizePayPalCheckout: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

