# SWGLocationsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**citiesUsingGET**](SWGLocationsApi.md#citiesusingget) | **GET** /location/countries/{country_code_iso3}/states/{state_code}/cities | Get a list of a state&#39;s cities
[**countriesUsingGET**](SWGLocationsApi.md#countriesusingget) | **GET** /location/countries | Get a list of countries
[**getCurrencyByGeoLocationUsingGET**](SWGLocationsApi.md#getcurrencybygeolocationusingget) | **GET** /location/geolocation/currency | Get the currency information of your country
[**getGeoLocationCountryUsingGET**](SWGLocationsApi.md#getgeolocationcountryusingget) | **GET** /location/geolocation/country | Get the iso3 code of your country
[**statesUsingGET**](SWGLocationsApi.md#statesusingget) | **GET** /location/countries/{country_code_iso3}/states | Get a list of a country&#39;s states


# **citiesUsingGET**
```objc
-(NSNumber*) citiesUsingGETWithCountryCodeIso3: (NSString*) countryCodeIso3
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
[apiInstance citiesUsingGETWithCountryCodeIso3:countryCodeIso3
              stateCode:stateCode
          completionHandler: ^(NSArray<SWGCityResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->citiesUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **countriesUsingGET**
```objc
-(NSNumber*) countriesUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGCountryResource>* output, NSError* error)) handler;
```

Get a list of countries

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of countries
[apiInstance countriesUsingGETWithCompletionHandler: 
          ^(NSArray<SWGCountryResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->countriesUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrencyByGeoLocationUsingGET**
```objc
-(NSNumber*) getCurrencyByGeoLocationUsingGETWithCompletionHandler: 
        (void (^)(SWGCurrencyResource* output, NSError* error)) handler;
```

Get the currency information of your country

Determined by geo ip location, currency to country mapping and a fallback setting

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get the currency information of your country
[apiInstance getCurrencyByGeoLocationUsingGETWithCompletionHandler: 
          ^(SWGCurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getCurrencyByGeoLocationUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGeoLocationCountryUsingGET**
```objc
-(NSNumber*) getGeoLocationCountryUsingGETWithCompletionHandler: 
        (void (^)(NSString* output, NSError* error)) handler;
```

Get the iso3 code of your country

Determined by geo ip location

### Example 
```objc


SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get the iso3 code of your country
[apiInstance getGeoLocationCountryUsingGETWithCompletionHandler: 
          ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->getGeoLocationCountryUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **statesUsingGET**
```objc
-(NSNumber*) statesUsingGETWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSArray<SWGStateResource>* output, NSError* error)) handler;
```

Get a list of a country's states

### Example 
```objc

NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

SWGLocationsApi*apiInstance = [[SWGLocationsApi alloc] init];

// Get a list of a country's states
[apiInstance statesUsingGETWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSArray<SWGStateResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLocationsApi->statesUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

