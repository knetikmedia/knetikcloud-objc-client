# JSAPIPaymentsXsollaApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createXsollaTokenUrl**](JSAPIPaymentsXsollaApi.md#createxsollatokenurl) | **POST** /payment/provider/xsolla/payment | Create a payment token that should be used to forward the user to Xsolla so they can complete payment
[**receiveXsollaNotification**](JSAPIPaymentsXsollaApi.md#receivexsollanotification) | **POST** /payment/provider/xsolla/notifications | Receives payment response from Xsolla


# **createXsollaTokenUrl**
```objc
-(NSURLSessionTask*) createXsollaTokenUrlWithRequest: (JSAPIXsollaPaymentRequest*) request
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a payment token that should be used to forward the user to Xsolla so they can complete payment

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIXsollaPaymentRequest* request = [[JSAPIXsollaPaymentRequest alloc] init]; // The payment request to be sent to XSolla (optional)

JSAPIPaymentsXsollaApi*apiInstance = [[JSAPIPaymentsXsollaApi alloc] init];

// Create a payment token that should be used to forward the user to Xsolla so they can complete payment
[apiInstance createXsollaTokenUrlWithRequest:request
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsXsollaApi->createXsollaTokenUrl: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIXsollaPaymentRequest***](JSAPIXsollaPaymentRequest.md)| The payment request to be sent to XSolla | [optional] 

### Return type

**NSString***

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **receiveXsollaNotification**
```objc
-(NSURLSessionTask*) receiveXsollaNotificationWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Receives payment response from Xsolla

Only used by Xsolla to call back to JSAPI after processing user payment action

### Example 
```objc


JSAPIPaymentsXsollaApi*apiInstance = [[JSAPIPaymentsXsollaApi alloc] init];

// Receives payment response from Xsolla
[apiInstance receiveXsollaNotificationWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsXsollaApi->receiveXsollaNotification: %@", error);
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

