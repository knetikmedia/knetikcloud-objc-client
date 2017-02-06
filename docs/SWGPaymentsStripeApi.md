# SWGPaymentsStripeApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createStripePaymentMethod**](SWGPaymentsStripeApi.md#createstripepaymentmethod) | **POST** /payment/provider/stripe/payment-methods | Create a Stripe payment method for a user
[**payStripeInvoice**](SWGPaymentsStripeApi.md#paystripeinvoice) | **POST** /payment/provider/stripe/payments | Pay with a single use token


# **createStripePaymentMethod**
```objc
-(NSURLSessionTask*) createStripePaymentMethodWithRequest: (SWGStripeCreatePaymentMethod*) request
        completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;
```

Create a Stripe payment method for a user

Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGStripeCreatePaymentMethod* request = [[SWGStripeCreatePaymentMethod alloc] init]; // The request to create a Stripe customer with payment info (optional)

SWGPaymentsStripeApi*apiInstance = [[SWGPaymentsStripeApi alloc] init];

// Create a Stripe payment method for a user
[apiInstance createStripePaymentMethodWithRequest:request
          completionHandler: ^(SWGPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsStripeApi->createStripePaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGStripeCreatePaymentMethod***](SWGStripeCreatePaymentMethod*.md)| The request to create a Stripe customer with payment info | [optional] 

### Return type

[**SWGPaymentMethodResource***](SWGPaymentMethodResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **payStripeInvoice**
```objc
-(NSURLSessionTask*) payStripeInvoiceWithRequest: (SWGStripePaymentRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Pay with a single use token

### Example 
```objc

SWGStripePaymentRequest* request = [[SWGStripePaymentRequest alloc] init]; // The request to pay an invoice (optional)

SWGPaymentsStripeApi*apiInstance = [[SWGPaymentsStripeApi alloc] init];

// Pay with a single use token
[apiInstance payStripeInvoiceWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsStripeApi->payStripeInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGStripePaymentRequest***](SWGStripePaymentRequest*.md)| The request to pay an invoice | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

