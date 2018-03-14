# JSAPIPaymentsPayPalClassicApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPayPalBillingAgreementUrl**](JSAPIPaymentsPayPalClassicApi.md#createpaypalbillingagreementurl) | **POST** /payment/provider/paypal/classic/agreements/start | Create a PayPal Classic billing agreement for the user
[**createPayPalExpressCheckout**](JSAPIPaymentsPayPalClassicApi.md#createpaypalexpresscheckout) | **POST** /payment/provider/paypal/classic/checkout/start | Create a payment token for PayPal express checkout
[**finalizePayPalBillingAgreement**](JSAPIPaymentsPayPalClassicApi.md#finalizepaypalbillingagreement) | **POST** /payment/provider/paypal/classic/agreements/finish | Finalizes a billing agreement after the user has accepted through PayPal
[**finalizePayPalCheckout**](JSAPIPaymentsPayPalClassicApi.md#finalizepaypalcheckout) | **POST** /payment/provider/paypal/classic/checkout/finish | Finalizes a payment after the user has completed checkout with PayPal


# **createPayPalBillingAgreementUrl**
```objc
-(NSURLSessionTask*) createPayPalBillingAgreementUrlWithRequest: (JSAPICreateBillingAgreementRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a PayPal Classic billing agreement for the user

Returns the token that should be used to forward the user to PayPal so they can accept the agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICreateBillingAgreementRequest* request = [[JSAPICreateBillingAgreementRequest alloc] init]; // The request to create a PayPal billing agreement (optional)

JSAPIPaymentsPayPalClassicApi*apiInstance = [[JSAPIPaymentsPayPalClassicApi alloc] init];

// Create a PayPal Classic billing agreement for the user
[apiInstance createPayPalBillingAgreementUrlWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsPayPalClassicApi->createPayPalBillingAgreementUrl: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPICreateBillingAgreementRequest***](JSAPICreateBillingAgreementRequest.md)| The request to create a PayPal billing agreement | [optional] 

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPayPalExpressCheckout**
```objc
-(NSURLSessionTask*) createPayPalExpressCheckoutWithRequest: (JSAPICreatePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a payment token for PayPal express checkout

Returns the token that should be used to forward the user to PayPal so they can complete the checkout. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICreatePayPalPaymentRequest* request = [[JSAPICreatePayPalPaymentRequest alloc] init]; // The request to create a PayPal payment token (optional)

JSAPIPaymentsPayPalClassicApi*apiInstance = [[JSAPIPaymentsPayPalClassicApi alloc] init];

// Create a payment token for PayPal express checkout
[apiInstance createPayPalExpressCheckoutWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsPayPalClassicApi->createPayPalExpressCheckout: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPICreatePayPalPaymentRequest***](JSAPICreatePayPalPaymentRequest.md)| The request to create a PayPal payment token | [optional] 

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizePayPalBillingAgreement**
```objc
-(NSURLSessionTask*) finalizePayPalBillingAgreementWithRequest: (JSAPIFinalizeBillingAgreementRequest*) request
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Finalizes a billing agreement after the user has accepted through PayPal

Returns the ID of the new payment method created for the user for the billing agreement. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFinalizeBillingAgreementRequest* request = [[JSAPIFinalizeBillingAgreementRequest alloc] init]; // The request to finalize a PayPal billing agreement (optional)

JSAPIPaymentsPayPalClassicApi*apiInstance = [[JSAPIPaymentsPayPalClassicApi alloc] init];

// Finalizes a billing agreement after the user has accepted through PayPal
[apiInstance finalizePayPalBillingAgreementWithRequest:request
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsPayPalClassicApi->finalizePayPalBillingAgreement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIFinalizeBillingAgreementRequest***](JSAPIFinalizeBillingAgreementRequest.md)| The request to finalize a PayPal billing agreement | [optional] 

### Return type

**NSNumber***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **finalizePayPalCheckout**
```objc
-(NSURLSessionTask*) finalizePayPalCheckoutWithRequest: (JSAPIFinalizePayPalPaymentRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Finalizes a payment after the user has completed checkout with PayPal

The invoice will be marked paid/failed by asynchronous IPN callback. <br><br><b>Permissions Needed:</b> PAYPAL_CLASSIC_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFinalizePayPalPaymentRequest* request = [[JSAPIFinalizePayPalPaymentRequest alloc] init]; // The request to finalize the payment (optional)

JSAPIPaymentsPayPalClassicApi*apiInstance = [[JSAPIPaymentsPayPalClassicApi alloc] init];

// Finalizes a payment after the user has completed checkout with PayPal
[apiInstance finalizePayPalCheckoutWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsPayPalClassicApi->finalizePayPalCheckout: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIFinalizePayPalPaymentRequest***](JSAPIFinalizePayPalPaymentRequest.md)| The request to finalize the payment | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

