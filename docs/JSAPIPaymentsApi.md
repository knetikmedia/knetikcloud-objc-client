# JSAPIPaymentsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPaymentMethod**](JSAPIPaymentsApi.md#createpaymentmethod) | **POST** /users/{user_id}/payment-methods | Create a new payment method for a user
[**deletePaymentMethod**](JSAPIPaymentsApi.md#deletepaymentmethod) | **DELETE** /users/{user_id}/payment-methods/{id} | Delete an existing payment method for a user
[**getPaymentMethod**](JSAPIPaymentsApi.md#getpaymentmethod) | **GET** /users/{user_id}/payment-methods/{id} | Get a single payment method for a user
[**getPaymentMethodType**](JSAPIPaymentsApi.md#getpaymentmethodtype) | **GET** /payment/types/{id} | Get a single payment method type
[**getPaymentMethodTypes**](JSAPIPaymentsApi.md#getpaymentmethodtypes) | **GET** /payment/types | Get all payment method types
[**getPaymentMethods**](JSAPIPaymentsApi.md#getpaymentmethods) | **GET** /users/{user_id}/payment-methods | Get all payment methods for a user
[**paymentAuthorization**](JSAPIPaymentsApi.md#paymentauthorization) | **POST** /payment/authorizations | Authorize payment of an invoice for later capture
[**paymentCapture**](JSAPIPaymentsApi.md#paymentcapture) | **POST** /payment/authorizations/{id}/capture | Capture an existing invoice payment authorization
[**updatePaymentMethod**](JSAPIPaymentsApi.md#updatepaymentmethod) | **PUT** /users/{user_id}/payment-methods/{id} | Update an existing payment method for a user


# **createPaymentMethod**
```objc
-(NSURLSessionTask*) createPaymentMethodWithUserId: (NSNumber*) userId
    paymentMethod: (JSAPIPaymentMethodResource*) paymentMethod
        completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;
```

Create a new payment method for a user

<b>Permissions Needed:</b> PAYMENTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being created
JSAPIPaymentMethodResource* paymentMethod = [[JSAPIPaymentMethodResource alloc] init]; // Payment method being created (optional)

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Create a new payment method for a user
[apiInstance createPaymentMethodWithUserId:userId
              paymentMethod:paymentMethod
          completionHandler: ^(JSAPIPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->createPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being created | 
 **paymentMethod** | [**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)| Payment method being created | [optional] 

### Return type

[**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> PAYMENTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being updated
NSNumber* _id = @56; // ID of the payment method being deleted

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Delete an existing payment method for a user
[apiInstance deletePaymentMethodWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->deletePaymentMethod: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethod**
```objc
-(NSURLSessionTask*) getPaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;
```

Get a single payment method for a user

<b>Permissions Needed:</b> PAYMENTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being retrieved
NSNumber* _id = @56; // ID of the payment method being retrieved

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Get a single payment method for a user
[apiInstance getPaymentMethodWithUserId:userId
              _id:_id
          completionHandler: ^(JSAPIPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->getPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being retrieved | 
 **_id** | **NSNumber***| ID of the payment method being retrieved | 

### Return type

[**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethodType**
```objc
-(NSURLSessionTask*) getPaymentMethodTypeWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIPaymentMethodTypeResource* output, NSError* error)) handler;
```

Get a single payment method type

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // ID of the payment method type being retrieved

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Get a single payment method type
[apiInstance getPaymentMethodTypeWithId:_id
          completionHandler: ^(JSAPIPaymentMethodTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->getPaymentMethodType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| ID of the payment method type being retrieved | 

### Return type

[**JSAPIPaymentMethodTypeResource***](JSAPIPaymentMethodTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethodTypes**
```objc
-(NSURLSessionTask*) getPaymentMethodTypesWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourcePaymentMethodTypeResource_* output, NSError* error)) handler;
```

Get all payment method types

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for payment method types whose name matches a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Get all payment method types
[apiInstance getPaymentMethodTypesWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourcePaymentMethodTypeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->getPaymentMethodTypes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filter for payment method types whose name matches a given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourcePaymentMethodTypeResource_***](JSAPIPageResourcePaymentMethodTypeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentMethods**
```objc
-(NSURLSessionTask*) getPaymentMethodsWithUserId: (NSNumber*) userId
    filterName: (NSString*) filterName
    filterPaymentType: (NSString*) filterPaymentType
    filterPaymentMethodTypeId: (NSNumber*) filterPaymentMethodTypeId
    filterPaymentMethodTypeName: (NSString*) filterPaymentMethodTypeName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(NSArray<JSAPIPaymentMethodResource>* output, NSError* error)) handler;
```

Get all payment methods for a user

<b>Permissions Needed:</b> PAYMENTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment methods are being retrieved
NSString* filterName = @"filterName_example"; // Filter for payment methods whose name starts with a given string (optional)
NSString* filterPaymentType = @"filterPaymentType_example"; // Filter for payment methods with a specific payment type (optional)
NSNumber* filterPaymentMethodTypeId = @56; // Filter for payment methods with a specific payment method type by id (optional)
NSString* filterPaymentMethodTypeName = @"filterPaymentMethodTypeName_example"; // Filter for payment methods whose payment method type name starts with a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Get all payment methods for a user
[apiInstance getPaymentMethodsWithUserId:userId
              filterName:filterName
              filterPaymentType:filterPaymentType
              filterPaymentMethodTypeId:filterPaymentMethodTypeId
              filterPaymentMethodTypeName:filterPaymentMethodTypeName
              size:size
              page:page
              order:order
          completionHandler: ^(NSArray<JSAPIPaymentMethodResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->getPaymentMethods: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment methods are being retrieved | 
 **filterName** | **NSString***| Filter for payment methods whose name starts with a given string | [optional] 
 **filterPaymentType** | **NSString***| Filter for payment methods with a specific payment type | [optional] 
 **filterPaymentMethodTypeId** | **NSNumber***| Filter for payment methods with a specific payment method type by id | [optional] 
 **filterPaymentMethodTypeName** | **NSString***| Filter for payment methods whose payment method type name starts with a given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**NSArray<JSAPIPaymentMethodResource>***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **paymentAuthorization**
```objc
-(NSURLSessionTask*) paymentAuthorizationWithRequest: (JSAPIPaymentAuthorizationResource*) request
        completionHandler: (void (^)(JSAPIPaymentAuthorizationResource* output, NSError* error)) handler;
```

Authorize payment of an invoice for later capture

<b>Permissions Needed:</b> PAYMENTS_ADMIN or PAYMENTS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIPaymentAuthorizationResource* request = [[JSAPIPaymentAuthorizationResource alloc] init]; // Payment authorization request (optional)

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Authorize payment of an invoice for later capture
[apiInstance paymentAuthorizationWithRequest:request
          completionHandler: ^(JSAPIPaymentAuthorizationResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->paymentAuthorization: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIPaymentAuthorizationResource***](JSAPIPaymentAuthorizationResource.md)| Payment authorization request | [optional] 

### Return type

[**JSAPIPaymentAuthorizationResource***](JSAPIPaymentAuthorizationResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> PAYMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // ID of the payment authorization to capture

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Capture an existing invoice payment authorization
[apiInstance paymentCaptureWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->paymentCapture: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePaymentMethod**
```objc
-(NSURLSessionTask*) updatePaymentMethodWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    paymentMethod: (JSAPIPaymentMethodResource*) paymentMethod
        completionHandler: (void (^)(JSAPIPaymentMethodResource* output, NSError* error)) handler;
```

Update an existing payment method for a user

<b>Permissions Needed:</b> PAYMENTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // ID of the user for whom the payment method is being updated
NSNumber* _id = @56; // ID of the payment method being updated
JSAPIPaymentMethodResource* paymentMethod = [[JSAPIPaymentMethodResource alloc] init]; // The updated payment method data (optional)

JSAPIPaymentsApi*apiInstance = [[JSAPIPaymentsApi alloc] init];

// Update an existing payment method for a user
[apiInstance updatePaymentMethodWithUserId:userId
              _id:_id
              paymentMethod:paymentMethod
          completionHandler: ^(JSAPIPaymentMethodResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsApi->updatePaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| ID of the user for whom the payment method is being updated | 
 **_id** | **NSNumber***| ID of the payment method being updated | 
 **paymentMethod** | [**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)| The updated payment method data | [optional] 

### Return type

[**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

