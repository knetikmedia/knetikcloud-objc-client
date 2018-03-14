# JSAPIPaymentsFattMerchantApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createOrUpdateFattMerchantPaymentMethod**](JSAPIPaymentsFattMerchantApi.md#createorupdatefattmerchantpaymentmethod) | **PUT** /payment/provider/fattmerchant/payment-methods | Create or update a FattMerchant payment method for a user


# **createOrUpdateFattMerchantPaymentMethod**
```objc
-(NSURLSessionTask*) createOrUpdateFattMerchantPaymentMethodWithRequest: (JSAPIFattMerchantPaymentMethodRequest*) request
        completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;
```

Create or update a FattMerchant payment method for a user

Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. <br><br><b>Permissions Needed:</b> FATTMERCHANT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFattMerchantPaymentMethodRequest* request = [[JSAPIFattMerchantPaymentMethodRequest alloc] init]; // Request containing payment method information for user (optional)

JSAPIPaymentsFattMerchantApi*apiInstance = [[JSAPIPaymentsFattMerchantApi alloc] init];

// Create or update a FattMerchant payment method for a user
[apiInstance createOrUpdateFattMerchantPaymentMethodWithRequest:request
          completionHandler: ^(JSAPIPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsFattMerchantApi->createOrUpdateFattMerchantPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIFattMerchantPaymentMethodRequest***](JSAPIFattMerchantPaymentMethodRequest.md)| Request containing payment method information for user | [optional] 

### Return type

[**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

