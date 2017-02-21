# SWGPaymentsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPaymentMethod**](SWGPaymentsApi.md#createpaymentmethod) | **POST** /users/{user_id}/payment-methods | Create a new payment method for a user
[**deletePaymentMethod**](SWGPaymentsApi.md#deletepaymentmethod) | **DELETE** /users/{user_id}/payment-methods/{id} | Delete an existing payment method for a user
[**getPaymentMethod**](SWGPaymentsApi.md#getpaymentmethod) | **GET** /users/{user_id}/payment-methods/{id} | Get a single payment method for a user
[**getPaymentMethods**](SWGPaymentsApi.md#getpaymentmethods) | **GET** /users/{user_id}/payment-methods | Get all payment methods for a user
[**paymentAuthorization**](SWGPaymentsApi.md#paymentauthorization) | **POST** /payment/authorizations | Authorize payment of an invoice for later capture
[**paymentCapture**](SWGPaymentsApi.md#paymentcapture) | **POST** /payment/authorizations/{id}/capture | Capture an existing invoice payment authorization
[**updatePaymentMethod**](SWGPaymentsApi.md#updatepaymentmethod) | **PUT** /users/{user_id}/payment-methods/{id} | Update an existing payment method for a user


# **createPaymentMethod**
```objc
-(NSURLSessionTask*) createPaymentMethodWithUserId: (NSNumber*) userId
    paymentMethod: (SWGPaymentMethodResource*) paymentMethod
        completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;
```

Create a new payment method for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being created
SWGPaymentMethodResource* paymentMethod = [[SWGPaymentMethodResource alloc] init]; // Payment method being created (optional)

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Create a new payment method for a user
[apiInstance createPaymentMethodWithUserId:userId
              paymentMethod:paymentMethod
          completionHandler: ^(SWGPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->createPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being created | 
 **paymentMethod** | [**SWGPaymentMethodResource***](SWGPaymentMethodResource*.md)| Payment method being created | [optional] 

### Return type

[**SWGPaymentMethodResource***](SWGPaymentMethodResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePaymentMethod**
```objc
-(NSURLSessionTask*) deletePaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing payment method for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being updated
NSNumber* _id = @56; // ID of the payment method being deleted

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Delete an existing payment method for a user
[apiInstance deletePaymentMethodWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->deletePaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being updated | 
 **_id** | **NSNumber***| ID of the payment method being deleted | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethod**
```objc
-(NSURLSessionTask*) getPaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;
```

Get a single payment method for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being retrieved
NSNumber* _id = @56; // ID of the payment method being retrieved

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Get a single payment method for a user
[apiInstance getPaymentMethodWithUserId:userId
              _id:_id
          completionHandler: ^(SWGPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->getPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being retrieved | 
 **_id** | **NSNumber***| ID of the payment method being retrieved | 

### Return type

[**SWGPaymentMethodResource***](SWGPaymentMethodResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethods**
```objc
-(NSURLSessionTask*) getPaymentMethodsWithUserId: (NSNumber*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(NSArray<SWGPaymentMethodResource>* output, NSError* error)) handler;
```

Get all payment methods for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment methods are being retrieved
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Get all payment methods for a user
[apiInstance getPaymentMethodsWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(NSArray<SWGPaymentMethodResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->getPaymentMethods: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment methods are being retrieved | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**NSArray<SWGPaymentMethodResource>***](SWGPaymentMethodResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **paymentAuthorization**
```objc
-(NSURLSessionTask*) paymentAuthorizationWithRequest: (SWGPaymentAuthorizationResource*) request
        completionHandler: (void (^)(SWGPaymentAuthorizationResource* output, NSError* error)) handler;
```

Authorize payment of an invoice for later capture

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGPaymentAuthorizationResource* request = [[SWGPaymentAuthorizationResource alloc] init]; // Payment authorization request (optional)

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Authorize payment of an invoice for later capture
[apiInstance paymentAuthorizationWithRequest:request
          completionHandler: ^(SWGPaymentAuthorizationResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->paymentAuthorization: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGPaymentAuthorizationResource***](SWGPaymentAuthorizationResource*.md)| Payment authorization request | [optional] 

### Return type

[**SWGPaymentAuthorizationResource***](SWGPaymentAuthorizationResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **paymentCapture**
```objc
-(NSURLSessionTask*) paymentCaptureWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Capture an existing invoice payment authorization

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // ID of the payment authorization to capture

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Capture an existing invoice payment authorization
[apiInstance paymentCaptureWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->paymentCapture: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| ID of the payment authorization to capture | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePaymentMethod**
```objc
-(NSURLSessionTask*) updatePaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    paymentMethod: (SWGPaymentMethodResource*) paymentMethod
        completionHandler: (void (^)(SWGPaymentMethodResource* output, NSError* error)) handler;
```

Update an existing payment method for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being updated
NSNumber* _id = @56; // ID of the payment method being updated
SWGPaymentMethodResource* paymentMethod = [[SWGPaymentMethodResource alloc] init]; // The updated payment method data (optional)

SWGPaymentsApi*apiInstance = [[SWGPaymentsApi alloc] init];

// Update an existing payment method for a user
[apiInstance updatePaymentMethodWithUserId:userId
              _id:_id
              paymentMethod:paymentMethod
          completionHandler: ^(SWGPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsApi->updatePaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being updated | 
 **_id** | **NSNumber***| ID of the payment method being updated | 
 **paymentMethod** | [**SWGPaymentMethodResource***](SWGPaymentMethodResource*.md)| The updated payment method data | [optional] 

### Return type

[**SWGPaymentMethodResource***](SWGPaymentMethodResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

