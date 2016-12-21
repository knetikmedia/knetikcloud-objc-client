# SWGCurrenciesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCurrencyUsingPOST**](SWGCurrenciesApi.md#createcurrencyusingpost) | **POST** /currencies | Create a currency
[**deleteCurrencyUsingDELETE**](SWGCurrenciesApi.md#deletecurrencyusingdelete) | **DELETE** /currencies/{code} | Delete a currency
[**getCurrenciesUsingGET**](SWGCurrenciesApi.md#getcurrenciesusingget) | **GET** /currencies | List and search currencies
[**getCurrencyUsingGET**](SWGCurrenciesApi.md#getcurrencyusingget) | **GET** /currencies/{code} | Get a single currency
[**updateCurrencyUsingPUT**](SWGCurrenciesApi.md#updatecurrencyusingput) | **PUT** /currencies/{code} | Update a currency


# **createCurrencyUsingPOST**
```objc
-(NSNumber*) createCurrencyUsingPOSTWithCurrency: (SWGCurrencyResource*) currency
        completionHandler: (void (^)(SWGCurrencyResource* output, NSError* error)) handler;
```

Create a currency

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCurrencyResource* currency = [[SWGCurrencyResource alloc] init]; // The currency object (optional)

SWGCurrenciesApi*apiInstance = [[SWGCurrenciesApi alloc] init];

// Create a currency
[apiInstance createCurrencyUsingPOSTWithCurrency:currency
          completionHandler: ^(SWGCurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCurrenciesApi->createCurrencyUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | [**SWGCurrencyResource***](SWGCurrencyResource*.md)| The currency object | [optional] 

### Return type

[**SWGCurrencyResource***](SWGCurrencyResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCurrencyUsingDELETE**
```objc
-(NSNumber*) deleteCurrencyUsingDELETEWithCode: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a currency

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The currency code

SWGCurrenciesApi*apiInstance = [[SWGCurrenciesApi alloc] init];

// Delete a currency
[apiInstance deleteCurrencyUsingDELETEWithCode:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCurrenciesApi->deleteCurrencyUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The currency code | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrenciesUsingGET**
```objc
-(NSNumber*) getCurrenciesUsingGETWithFilterEnabledCurrencies: (NSNumber*) filterEnabledCurrencies
    filterType: (NSString*) filterType
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceCurrencyResource_* output, NSError* error)) handler;
```

List and search currencies

### Example 
```objc

NSNumber* filterEnabledCurrencies = @true; // Filter for alternate currencies setup explicitely in system config (optional)
NSString* filterType = @"filterType_example"; // Filter currencies by type.  Allowable values: ('virtual', 'real') (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGCurrenciesApi*apiInstance = [[SWGCurrenciesApi alloc] init];

// List and search currencies
[apiInstance getCurrenciesUsingGETWithFilterEnabledCurrencies:filterEnabledCurrencies
              filterType:filterType
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCurrencyResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCurrenciesApi->getCurrenciesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEnabledCurrencies** | **NSNumber***| Filter for alternate currencies setup explicitely in system config | [optional] 
 **filterType** | **NSString***| Filter currencies by type.  Allowable values: (&#39;virtual&#39;, &#39;real&#39;) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**SWGPageResourceCurrencyResource_***](SWGPageResourceCurrencyResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrencyUsingGET**
```objc
-(NSNumber*) getCurrencyUsingGETWithCode: (NSString*) code
        completionHandler: (void (^)(SWGCurrencyResource* output, NSError* error)) handler;
```

Get a single currency

### Example 
```objc

NSString* code = @"code_example"; // The currency code

SWGCurrenciesApi*apiInstance = [[SWGCurrenciesApi alloc] init];

// Get a single currency
[apiInstance getCurrencyUsingGETWithCode:code
          completionHandler: ^(SWGCurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCurrenciesApi->getCurrencyUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The currency code | 

### Return type

[**SWGCurrencyResource***](SWGCurrencyResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCurrencyUsingPUT**
```objc
-(NSNumber*) updateCurrencyUsingPUTWithCode: (NSString*) code
    currency: (SWGCurrencyResource*) currency
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a currency

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The currency code
SWGCurrencyResource* currency = [[SWGCurrencyResource alloc] init]; // The currency object (optional)

SWGCurrenciesApi*apiInstance = [[SWGCurrenciesApi alloc] init];

// Update a currency
[apiInstance updateCurrencyUsingPUTWithCode:code
              currency:currency
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCurrenciesApi->updateCurrencyUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The currency code | 
 **currency** | [**SWGCurrencyResource***](SWGCurrencyResource*.md)| The currency object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

