# JSAPIPaymentsStripeApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createStripePaymentMethod**](JSAPIPaymentsStripeApi.md#createstripepaymentmethod) | **POST** /payment/provider/stripe/payment-methods | Create a Stripe payment method for a user
[**payStripeInvoice**](JSAPIPaymentsStripeApi.md#paystripeinvoice) | **POST** /payment/provider/stripe/payments | Pay with a single use token


# **createStripePaymentMethod**
```objc
-(NSURLSessionTask*) createStripePaymentMethodWithRequest: (JSAPIStripeCreatePaymentMethod*) request
        completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;
```

Create a Stripe payment method for a user

Obtain a token from Stripe, following their examples and documentation. Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> STRIPE_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIStripeCreatePaymentMethod* request = [[JSAPIStripeCreatePaymentMethod alloc] init]; // The request to create a Stripe customer with payment info (optional)

JSAPIPaymentsStripeApi*apiInstance = [[JSAPIPaymentsStripeApi alloc] init];

// Create a Stripe payment method for a user
[apiInstance createStripePaymentMethodWithRequest:request
          completionHandler: ^(JSAPIPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsStripeApi->createStripePaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIStripeCreatePaymentMethod***](JSAPIStripeCreatePaymentMethod.md)| The request to create a Stripe customer with payment info | [optional] 

### Return type

[**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **payStripeInvoice**
```objc
-(NSURLSessionTask*) payStripeInvoiceWithRequest: (JSAPIStripePaymentRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Pay with a single use token

Obtain a token from Stripe, following their examples and documentation. Pays an invoice without creating a payment method. Ensure that Stripe itself has been configured with the webhook so that invoices are marked paid. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIStripePaymentRequest* request = [[JSAPIStripePaymentRequest alloc] init]; // The request to pay an invoice (optional)

JSAPIPaymentsStripeApi*apiInstance = [[JSAPIPaymentsStripeApi alloc] init];

// Pay with a single use token
[apiInstance payStripeInvoiceWithRequest:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsStripeApi->payStripeInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIStripePaymentRequest***](JSAPIStripePaymentRequest.md)| The request to pay an invoice | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

