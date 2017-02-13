# SWGTaxesApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCountryTax**](SWGTaxesApi.md#createcountrytax) | **POST** /tax/countries | Create a country tax
[**createStateTax**](SWGTaxesApi.md#createstatetax) | **POST** /tax/countries/{country_code_iso3}/states | Create a state tax
[**deleteCountryTax**](SWGTaxesApi.md#deletecountrytax) | **DELETE** /tax/countries/{country_code_iso3} | Delete an existing tax
[**deleteStateTax**](SWGTaxesApi.md#deletestatetax) | **DELETE** /tax/countries/{country_code_iso3}/states/{state_code} | Delete an existing state tax
[**getCountryTax**](SWGTaxesApi.md#getcountrytax) | **GET** /tax/countries/{country_code_iso3} | Get a single tax
[**getCountryTaxes**](SWGTaxesApi.md#getcountrytaxes) | **GET** /tax/countries | List and search taxes
[**getStateTax**](SWGTaxesApi.md#getstatetax) | **GET** /tax/countries/{country_code_iso3}/states/{state_code} | Get a single state tax
[**getStateTaxesForCountries**](SWGTaxesApi.md#getstatetaxesforcountries) | **GET** /tax/states | List and search taxes across all countries
[**getStateTaxesForCountry**](SWGTaxesApi.md#getstatetaxesforcountry) | **GET** /tax/countries/{country_code_iso3}/states | List and search taxes within a country
[**updateCountryTax**](SWGTaxesApi.md#updatecountrytax) | **PUT** /tax/countries/{country_code_iso3} | Create or update a tax
[**updateStateTax**](SWGTaxesApi.md#updatestatetax) | **PUT** /tax/countries/{country_code_iso3}/states/{state_code} | Create or update a state tax


# **createCountryTax**
```objc
-(NSURLSessionTask*) createCountryTaxWithTaxResource: (SWGCountryTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create a country tax

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCountryTaxResource* taxResource = [[SWGCountryTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create a country tax
[apiInstance createCountryTaxWithTaxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->createCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **taxResource** | [**SWGCountryTaxResource***](SWGCountryTaxResource*.md)| The tax object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createStateTax**
```objc
-(NSURLSessionTask*) createStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGStateTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create a state tax

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
SWGStateTaxResource* taxResource = [[SWGStateTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create a state tax
[apiInstance createStateTaxWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->createStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **taxResource** | [**SWGStateTaxResource***](SWGStateTaxResource*.md)| The tax object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

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

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Delete an existing tax
[apiInstance deleteCountryTaxWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->deleteCountryTax: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteStateTax**
```objc
-(NSURLSessionTask*) deleteStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing state tax

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Delete an existing state tax
[apiInstance deleteStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->deleteStateTax: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryTax**
```objc
-(NSURLSessionTask*) getCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(SWGCountryTaxResource* output, NSError* error)) handler;
```

Get a single tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Get a single tax
[apiInstance getCountryTaxWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(SWGCountryTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 

### Return type

[**SWGCountryTaxResource***](SWGCountryTaxResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryTaxes**
```objc
-(NSURLSessionTask*) getCountryTaxesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceCountryTaxResource_* output, NSError* error)) handler;
```

List and search taxes

Get a list of taxes

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes
[apiInstance getCountryTaxesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCountryTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getCountryTaxes: %@", error);
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

[**SWGPageResourceCountryTaxResource_***](SWGPageResourceCountryTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTax**
```objc
-(NSURLSessionTask*) getStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(SWGStateTaxResource* output, NSError* error)) handler;
```

Get a single state tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Get a single state tax
[apiInstance getStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(SWGStateTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 

### Return type

[**SWGStateTaxResource***](SWGStateTaxResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTaxesForCountries**
```objc
-(NSURLSessionTask*) getStateTaxesForCountriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes across all countries

Get a list of taxes

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes across all countries
[apiInstance getStateTaxesForCountriesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getStateTaxesForCountries: %@", error);
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

[**SWGPageResourceStateTaxResource_***](SWGPageResourceStateTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStateTaxesForCountry**
```objc
-(NSURLSessionTask*) getStateTaxesForCountryWithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes within a country

Get a list of taxes

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes within a country
[apiInstance getStateTaxesForCountryWithCountryCodeIso3:countryCodeIso3
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getStateTaxesForCountry: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**SWGPageResourceStateTaxResource_***](SWGPageResourceStateTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCountryTax**
```objc
-(NSURLSessionTask*) updateCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGCountryTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create or update a tax

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
SWGCountryTaxResource* taxResource = [[SWGCountryTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create or update a tax
[apiInstance updateCountryTaxWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->updateCountryTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **taxResource** | [**SWGCountryTaxResource***](SWGCountryTaxResource*.md)| The tax object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateStateTax**
```objc
-(NSURLSessionTask*) updateStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (SWGStateTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create or update a state tax

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state
SWGStateTaxResource* taxResource = [[SWGStateTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create or update a state tax
[apiInstance updateStateTaxWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->updateStateTax: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 
 **taxResource** | [**SWGStateTaxResource***](SWGStateTaxResource*.md)| The tax object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

