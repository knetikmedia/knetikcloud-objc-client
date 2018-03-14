# JSAPICurrenciesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCurrency**](JSAPICurrenciesApi.md#createcurrency) | **POST** /currencies | Create a currency
[**deleteCurrency**](JSAPICurrenciesApi.md#deletecurrency) | **DELETE** /currencies/{code} | Delete a currency
[**getCurrencies**](JSAPICurrenciesApi.md#getcurrencies) | **GET** /currencies | List and search currencies
[**getCurrency**](JSAPICurrenciesApi.md#getcurrency) | **GET** /currencies/{code} | Get a single currency
[**updateCurrency**](JSAPICurrenciesApi.md#updatecurrency) | **PUT** /currencies/{code} | Update a currency


# **createCurrency**
```objc
-(NSURLSessionTask*) createCurrencyWithCurrency: (JSAPICurrencyResource*) currency
        completionHandler: (void (^)(JSAPICurrencyResource* output, NSError* error)) handler;
```

Create a currency

<b>Permissions Needed:</b> CURRENCIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICurrencyResource* currency = [[JSAPICurrencyResource alloc] init]; // The currency object (optional)

JSAPICurrenciesApi*apiInstance = [[JSAPICurrenciesApi alloc] init];

// Create a currency
[apiInstance createCurrencyWithCurrency:currency
          completionHandler: ^(JSAPICurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICurrenciesApi->createCurrency: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | [**JSAPICurrencyResource***](JSAPICurrencyResource.md)| The currency object | [optional] 

### Return type

[**JSAPICurrencyResource***](JSAPICurrencyResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCurrency**
```objc
-(NSURLSessionTask*) deleteCurrencyWithCode: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a currency

<b>Permissions Needed:</b> CURRENCIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The currency code

JSAPICurrenciesApi*apiInstance = [[JSAPICurrenciesApi alloc] init];

// Delete a currency
[apiInstance deleteCurrencyWithCode:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICurrenciesApi->deleteCurrency: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrencies**
```objc
-(NSURLSessionTask*) getCurrenciesWithFilterDefault: (NSNumber*) filterDefault
    filterEnabledCurrencies: (NSNumber*) filterEnabledCurrencies
    filterType: (NSString*) filterType
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceCurrencyResource_* output, NSError* error)) handler;
```

List and search currencies

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterDefault = @true; // Filter for the one currency that is set as default (true), or all that are not (false) (optional)
NSNumber* filterEnabledCurrencies = @true; // Filter for alternate currencies setup explicitely in system config (optional)
NSString* filterType = @"filterType_example"; // Filter currencies by type.  Allowable values: ('virtual', 'real') (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

JSAPICurrenciesApi*apiInstance = [[JSAPICurrenciesApi alloc] init];

// List and search currencies
[apiInstance getCurrenciesWithFilterDefault:filterDefault
              filterEnabledCurrencies:filterEnabledCurrencies
              filterType:filterType
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceCurrencyResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICurrenciesApi->getCurrencies: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterDefault** | **NSNumber***| Filter for the one currency that is set as default (true), or all that are not (false) | [optional] 
 **filterEnabledCurrencies** | **NSNumber***| Filter for alternate currencies setup explicitely in system config | [optional] 
 **filterType** | **NSString***| Filter currencies by type.  Allowable values: (&#39;virtual&#39;, &#39;real&#39;) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**JSAPIPageResourceCurrencyResource_***](JSAPIPageResourceCurrencyResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrency**
```objc
-(NSURLSessionTask*) getCurrencyWithCode: (NSString*) code
        completionHandler: (void (^)(JSAPICurrencyResource* output, NSError* error)) handler;
```

Get a single currency

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The currency code

JSAPICurrenciesApi*apiInstance = [[JSAPICurrenciesApi alloc] init];

// Get a single currency
[apiInstance getCurrencyWithCode:code
          completionHandler: ^(JSAPICurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICurrenciesApi->getCurrency: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The currency code | 

### Return type

[**JSAPICurrencyResource***](JSAPICurrencyResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCurrency**
```objc
-(NSURLSessionTask*) updateCurrencyWithCode: (NSString*) code
    currency: (JSAPICurrencyResource*) currency
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a currency

<b>Permissions Needed:</b> CURRENCIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* code = @"code_example"; // The currency code
JSAPICurrencyResource* currency = [[JSAPICurrencyResource alloc] init]; // The currency object (optional)

JSAPICurrenciesApi*apiInstance = [[JSAPICurrenciesApi alloc] init];

// Update a currency
[apiInstance updateCurrencyWithCode:code
              currency:currency
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICurrenciesApi->updateCurrency: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **code** | **NSString***| The currency code | 
 **currency** | [**JSAPICurrencyResource***](JSAPICurrencyResource.md)| The currency object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

