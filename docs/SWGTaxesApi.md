# SWGTaxesApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTaxUsingPOST**](SWGTaxesApi.md#createtaxusingpost) | **POST** /tax/countries/{country_code_iso3}/states | Create a tax
[**deleteTaxUsingDELETE**](SWGTaxesApi.md#deletetaxusingdelete) | **DELETE** /tax/countries/{country_code_iso3} | Delete an existing tax
[**deleteTaxUsingDELETE1**](SWGTaxesApi.md#deletetaxusingdelete1) | **DELETE** /tax/countries/{country_code_iso3}/states/{state_code} | Delete an existing tax
[**getAllTaxesUsingGET**](SWGTaxesApi.md#getalltaxesusingget) | **GET** /tax/states | List and search taxes across all countries
[**getTaxUsingGET**](SWGTaxesApi.md#gettaxusingget) | **GET** /tax/countries/{country_code_iso3} | Get a single tax
[**getTaxUsingGET1**](SWGTaxesApi.md#gettaxusingget1) | **GET** /tax/countries/{country_code_iso3}/states/{state_code} | Get a single tax
[**getTaxesUsingGET**](SWGTaxesApi.md#gettaxesusingget) | **GET** /tax/countries | List and search taxes
[**getTaxesUsingGET1**](SWGTaxesApi.md#gettaxesusingget1) | **GET** /tax/countries/{country_code_iso3}/states | List and search taxes within a country
[**updateTaxUsingPOST**](SWGTaxesApi.md#updatetaxusingpost) | **POST** /tax/countries | Create a tax
[**updateTaxUsingPUT**](SWGTaxesApi.md#updatetaxusingput) | **PUT** /tax/countries/{country_code_iso3} | Create or update a tax
[**updateTaxUsingPUT1**](SWGTaxesApi.md#updatetaxusingput1) | **PUT** /tax/countries/{country_code_iso3}/states/{state_code} | Create or update a tax


# **createTaxUsingPOST**
```objc
-(NSNumber*) createTaxUsingPOSTWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGStateTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create a tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
SWGStateTaxResource* taxResource = [[SWGStateTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create a tax
[apiInstance createTaxUsingPOSTWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->createTaxUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTaxUsingDELETE**
```objc
-(NSNumber*) deleteTaxUsingDELETEWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Delete an existing tax
[apiInstance deleteTaxUsingDELETEWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->deleteTaxUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTaxUsingDELETE1**
```objc
-(NSNumber*) deleteTaxUsingDELETE1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Delete an existing tax
[apiInstance deleteTaxUsingDELETE1WithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->deleteTaxUsingDELETE1: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllTaxesUsingGET**
```objc
-(NSNumber*) getAllTaxesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes across all countries

Get a list of taxes

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes across all countries
[apiInstance getAllTaxesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getAllTaxesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageStateTaxResource_***](SWGPageStateTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTaxUsingGET**
```objc
-(NSNumber*) getTaxUsingGETWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(SWGCountryTaxResource* output, NSError* error)) handler;
```

Get a single tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Get a single tax
[apiInstance getTaxUsingGETWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(SWGCountryTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getTaxUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTaxUsingGET1**
```objc
-(NSNumber*) getTaxUsingGET1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(SWGStateTaxResource* output, NSError* error)) handler;
```

Get a single tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Get a single tax
[apiInstance getTaxUsingGET1WithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(SWGStateTaxResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getTaxUsingGET1: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTaxesUsingGET**
```objc
-(NSNumber*) getTaxesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageCountryTaxResource_* output, NSError* error)) handler;
```

List and search taxes

Get a list of taxes

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes
[apiInstance getTaxesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageCountryTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getTaxesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageCountryTaxResource_***](SWGPageCountryTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTaxesUsingGET1**
```objc
-(NSNumber*) getTaxesUsingGET1WithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageStateTaxResource_* output, NSError* error)) handler;
```

List and search taxes within a country

Get a list of taxes

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// List and search taxes within a country
[apiInstance getTaxesUsingGET1WithCountryCodeIso3:countryCodeIso3
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageStateTaxResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->getTaxesUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageStateTaxResource_***](SWGPageStateTaxResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTaxUsingPOST**
```objc
-(NSNumber*) updateTaxUsingPOSTWithTaxResource: (SWGCountryTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create a tax

### Example 
```objc

SWGCountryTaxResource* taxResource = [[SWGCountryTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create a tax
[apiInstance updateTaxUsingPOSTWithTaxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->updateTaxUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTaxUsingPUT**
```objc
-(NSNumber*) updateTaxUsingPUTWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (SWGCountryTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create or update a tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
SWGCountryTaxResource* taxResource = [[SWGCountryTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create or update a tax
[apiInstance updateTaxUsingPUTWithCountryCodeIso3:countryCodeIso3
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->updateTaxUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTaxUsingPUT1**
```objc
-(NSNumber*) updateTaxUsingPUT1WithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (SWGStateTaxResource*) taxResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Create or update a tax

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state
SWGStateTaxResource* taxResource = [[SWGStateTaxResource alloc] init]; // The tax object (optional)

SWGTaxesApi*apiInstance = [[SWGTaxesApi alloc] init];

// Create or update a tax
[apiInstance updateTaxUsingPUT1WithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
              taxResource:taxResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGTaxesApi->updateTaxUsingPUT1: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

