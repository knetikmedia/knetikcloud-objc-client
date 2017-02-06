# SWGLocationsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCities**](SWGLocationsApi.md#getcities) | **GET** /location/countries/{country_code_iso3}/states/{state_code}/cities | Get a list of a state&#39;s cities
[**getCountries1**](SWGLocationsApi.md#getcountries1) | **GET** /location/countries | Get a list of countries
[**getCountries2**](SWGLocationsApi.md#getcountries2) | **GET** /location/countries/{country_code_iso3}/states | Get a list of a country&#39;s states
[**getCountryByGeoLocation**](SWGLocationsApi.md#getcountrybygeolocation) | **GET** /location/geolocation/country | Get the iso3 code of your country
[**getCurrencyByGeoLocation**](SWGLocationsApi.md#getcurrencybygeolocation) | **GET** /location/geolocation/currency | Get the currency information of your country


# **getCities**
```objc
-(NSURLSessionTask*) getCitiesWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
        completionHandler: (void (^)(NSArray<SWGCityResource>* output, NSError* error)) handler;
```

Get a list of a state's cities

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country
NSString* stateCode = @"stateCode_example"; // The code of the state

SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of a state's cities
[apiInstance getCitiesWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(NSArray<SWGCityResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCities: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 
 **stateCode** | **NSString***| The code of the state | 

### Return type

[**NSArray<SWGCityResource>***](SWGCityResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountries1**
```objc
-(NSURLSessionTask*) getCountries1WithCompletionHandler: 
        (void (^)(NSArray<SWGCountryResource>* output, NSError* error)) handler;
```

Get a list of countries

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of countries
[apiInstance getCountries1WithCompletionHandler: 
          ^(NSArray<SWGCountryResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCountries1: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGCountryResource>***](SWGCountryResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountries2**
```objc
-(NSURLSessionTask*) getCountries2WithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSArray<SWGStateResource>* output, NSError* error)) handler;
```

Get a list of a country's states

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of a country's states
[apiInstance getCountries2WithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSArray<SWGStateResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCountries2: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 

### Return type

[**NSArray<SWGStateResource>***](SWGStateResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryByGeoLocation**
```objc
-(NSURLSessionTask*) getCountryByGeoLocationWithCompletionHandler: 
        (void (^)(NSString* output, NSError* error)) handler;
```

Get the iso3 code of your country

Determined by geo ip location

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get the iso3 code of your country
[apiInstance getCountryByGeoLocationWithCompletionHandler: 
          ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCountryByGeoLocation: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrencyByGeoLocation**
```objc
-(NSURLSessionTask*) getCurrencyByGeoLocationWithCompletionHandler: 
        (void (^)(SWGCurrencyResource* output, NSError* error)) handler;
```

Get the currency information of your country

Determined by geo ip location, currency to country mapping and a fallback setting

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get the currency information of your country
[apiInstance getCurrencyByGeoLocationWithCompletionHandler: 
          ^(SWGCurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCurrencyByGeoLocation: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGCurrencyResource***](SWGCurrencyResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

