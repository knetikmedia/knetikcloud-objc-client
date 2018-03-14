# JSAPITaxesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCountryTax**](JSAPITaxesApi.md#createcountrytax) | **POST** /tax/countries | Create a country tax
[**createStateTax**](JSAPITaxesApi.md#createstatetax) | **POST** /tax/countries/{country_code_iso3}/states | Create a state tax
[**deleteCountryTax**](JSAPITaxesApi.md#deletecountrytax) | **DELETE** /tax/countries/{country_code_iso3} | Delete an existing tax
[**deleteStateTax**](JSAPITaxesApi.md#deletestatetax) | **DELETE** /tax/countries/{country_code_iso3}/states/{state_code} | Delete an existing state tax
[**getCountryTax**](JSAPITaxesApi.md#getcountrytax) | **GET** /tax/countries/{country_code_iso3} | Get a single tax
[**getCountryTaxes**](JSAPITaxesApi.md#getcountrytaxes) | **GET** /tax/countries | List and search taxes
[**getStateTax**](JSAPITaxesApi.md#getstatetax) | **GET** /tax/countries/{country_code_iso3}/states/{state_code} | Get a single state tax
[**getStateTaxesForCountries**](JSAPITaxesApi.md#getstatetaxesforcountries) | **GET** /tax/states | List and search taxes across all countries
[**getStateTaxesForCountry**](JSAPITaxesApi.md#getstatetaxesforcountry) | **GET** /tax/countries/{country_code_iso3}/states | List and search taxes within a country
[**updateCountryTax**](JSAPITaxesApi.md#updatecountrytax) | **PUT** /tax/countries/{country_code_iso3} | Create or update a tax
[**updateStateTax**](JSAPITaxesApi.md#updatestatetax) | **PUT** /tax/countries/{country_code_iso3}/states/{state_code} | Create or update a state tax


# **createCountryTax**
```objc
-(NSURLSessionTask*) createCountryTaxWithTaxResource: (JSAPICountryTaxResource*) taxResource
        completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;
```

Create a country tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICountryTaxResource* taxResource = [[JSAPICountryTaxResource alloc] init]; // The tax object (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Create a country tax
[apiInstance createCountryTaxWithTaxResource:taxResource
          completionHandler: ^(JSAPICountryTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->createCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **taxResource** | [**JSAPICountryTaxResource***](JSAPICountryTaxResource.md)| The tax object | [optional] 

### Return type

[**JSAPICountryTaxResource***](JSAPICountryTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createStateTax**
```objc
-(NSURLSessionTask*) createStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPIStateTaxResource*) taxResource
        completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;
```

Create a state tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
JSAPIStateTaxResource* taxResource = [[JSAPIStateTaxResource alloc] init]; // The tax object (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Create a state tax
[apiInstance createStateTaxWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(JSAPIStateTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->createStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **taxResource** | [**JSAPIStateTaxResource***](JSAPIStateTaxResource.md)| The tax object | [optional] 

### Return type

[**JSAPIStateTaxResource***](JSAPIStateTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCountryTax**
```objc
-(NSURLSessionTask*) deleteCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Delete an existing tax
[apiInstance deleteCountryTaxWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->deleteCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteStateTax**
```objc
-(NSURLSessionTask*) deleteStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing state tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Delete an existing state tax
[apiInstance deleteStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->deleteStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryTax**
```objc
-(NSURLSessionTask*) getCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;
```

Get a single tax

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Get a single tax
[apiInstance getCountryTaxWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(JSAPICountryTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->getCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 

### Return type

[**JSAPICountryTaxResource***](JSAPICountryTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryTaxes**
```objc
-(NSURLSessionTask*) getCountryTaxesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceCountryTaxResource_* output, NSError* error)) handler;
```

List and search taxes

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// List and search taxes
[apiInstance getCountryTaxesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceCountryTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->getCountryTaxes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**JSAPIPageResourceCountryTaxResource_***](JSAPIPageResourceCountryTaxResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTax**
```objc
-(NSURLSessionTask*) getStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;
```

Get a single state tax

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Get a single state tax
[apiInstance getStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(JSAPIStateTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->getStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 

### Return type

[**JSAPIStateTaxResource***](JSAPIStateTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTaxesForCountries**
```objc
-(NSURLSessionTask*) getStateTaxesForCountriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes across all countries

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// List and search taxes across all countries
[apiInstance getStateTaxesForCountriesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->getStateTaxesForCountries: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceStateTaxResource_***](JSAPIPageResourceStateTaxResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTaxesForCountry**
```objc
-(NSURLSessionTask*) getStateTaxesForCountryWithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes within a country

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// List and search taxes within a country
[apiInstance getStateTaxesForCountryWithCountryCodeIso3:countryCodeIso3
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->getStateTaxesForCountry: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceStateTaxResource_***](JSAPIPageResourceStateTaxResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCountryTax**
```objc
-(NSURLSessionTask*) updateCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPICountryTaxResource*) taxResource
        completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler;
```

Create or update a tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
JSAPICountryTaxResource* taxResource = [[JSAPICountryTaxResource alloc] init]; // The tax object (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Create or update a tax
[apiInstance updateCountryTaxWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(JSAPICountryTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->updateCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **taxResource** | [**JSAPICountryTaxResource***](JSAPICountryTaxResource.md)| The tax object | [optional] 

### Return type

[**JSAPICountryTaxResource***](JSAPICountryTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateStateTax**
```objc
-(NSURLSessionTask*) updateStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (JSAPIStateTaxResource*) taxResource
        completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler;
```

Create or update a state tax

<b>Permissions Needed:</b> TAX_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state
JSAPIStateTaxResource* taxResource = [[JSAPIStateTaxResource alloc] init]; // The tax object (optional)

JSAPITaxesApi*apiInstance = [[JSAPITaxesApi alloc] init];

// Create or update a state tax
[apiInstance updateStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
              taxResource:taxResource
          completionHandler: ^(JSAPIStateTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITaxesApi->updateStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 
 **taxResource** | [**JSAPIStateTaxResource***](JSAPIStateTaxResource.md)| The tax object | [optional] 

### Return type

[**JSAPIStateTaxResource***](JSAPIStateTaxResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

