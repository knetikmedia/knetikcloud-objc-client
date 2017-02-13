# SWGLocationsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCountries**](SWGLocationsApi.md#getcountries) | **GET** /location/countries | Get a list of countries
[**getCountryByGeoLocation**](SWGLocationsApi.md#getcountrybygeolocation) | **GET** /location/geolocation/country | Get the iso3 code of your country
[**getCountryStates**](SWGLocationsApi.md#getcountrystates) | **GET** /location/countries/{country_code_iso3}/states | Get a list of a country&#39;s states
[**getCurrencyByGeoLocation**](SWGLocationsApi.md#getcurrencybygeolocation) | **GET** /location/geolocation/currency | Get the currency information of your country


# **getCountries**
```objc
-(NSURLSessionTask*) getCountriesWithCompletionHandler: 
        (void (^)(NSArray<SWGCountryResource>* output, NSError* error)) handler;
```

Get a list of countries

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of countries
[apiInstance getCountriesWithCompletionHandler: 
          ^(NSArray<SWGCountryResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCountries: %@", error);
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

# **getCountryStates**
```objc
-(NSURLSessionTask*) getCountryStatesWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSArray<SWGStateResource>* output, NSError* error)) handler;
```

Get a list of a country's states

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of a country's states
[apiInstance getCountryStatesWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSArray<SWGStateResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCountryStates: %@", error);
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

