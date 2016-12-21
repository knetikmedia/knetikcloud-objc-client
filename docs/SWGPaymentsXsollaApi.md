# SWGPaymentsXsollaApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTokenUrlUsingPOST**](SWGPaymentsXsollaApi.md#createtokenurlusingpost) | **POST** /payment/provider/xsolla/payment | Create a payment token that should be used to forward the user to Xsolla so they can complete payment
[**receiveNotificationUsingPOST**](SWGPaymentsXsollaApi.md#receivenotificationusingpost) | **POST** /payment/provider/xsolla/notifications | Receives payment response from Xsolla


# **createTokenUrlUsingPOST**
```objc
-(NSNumber*) createTokenUrlUsingPOSTWithRequest: (SWGXsollaPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a payment token that should be used to forward the user to Xsolla so they can complete payment

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGXsollaPaymentRequest* request = [[SWGXsollaPaymentRequest alloc] init]; // The payment request to be sent to XSolla (optional)

SWGPaymentsXsollaApi*apiInstance = [[SWGPaymentsXsollaApi alloc] init];

// Create a payment token that should be used to forward the user to Xsolla so they can complete payment
[apiInstance createTokenUrlUsingPOSTWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsXsollaApi->createTokenUrlUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGXsollaPaymentRequest***](SWGXsollaPaymentRequest*.md)| The payment request to be sent to XSolla | [optional] 

### Return type

**NSString***

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **receiveNotificationUsingPOST**
```objc
-(NSNumber*) receiveNotificationUsingPOSTWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Receives payment response from Xsolla

Only used by XSolla to call back to JSAPI after processing user payment action

### Example 
```objc


SWGPaymentsXsollaApi*apiInstance = [[SWGPaymentsXsollaApi alloc] init];

// Receives payment response from Xsolla
[apiInstance receiveNotificationUsingPOSTWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsXsollaApi->receiveNotificationUsingPOST: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

