# JSAPILocationsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getCountries**](JSAPILocationsApi.md#getcountries) | **GET** /location/countries | Get a list of countries
[**getCountryByGeoLocation**](JSAPILocationsApi.md#getcountrybygeolocation) | **GET** /location/geolocation/country | Get the iso3 code of your country
[**getCountryStates**](JSAPILocationsApi.md#getcountrystates) | **GET** /location/countries/{country_code_iso3}/states | Get a list of a country&#39;s states
[**getCurrencyByGeoLocation**](JSAPILocationsApi.md#getcurrencybygeolocation) | **GET** /location/geolocation/currency | Get the currency information of your country


# **getCountries**
```objc
-(NSURLSessionTask*) getCountriesWithCompletionHandler: 
        (void (^)(NSArray<JSAPICountryResource>* output, NSError* error)) handler;
```

Get a list of countries

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPILocationsApi*apiInstance = [[JSAPILocationsApi alloc] init];

// Get a list of countries
[apiInstance getCountriesWithCompletionHandler: 
          ^(NSArray<JSAPICountryResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILocationsApi->getCountries: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPICountryResource>***](JSAPICountryResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryByGeoLocation**
```objc
-(NSURLSessionTask*) getCountryByGeoLocationWithCompletionHandler: 
        (void (^)(NSString* output, NSError* error)) handler;
```

Get the iso3 code of your country

Determined by geo ip location. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPILocationsApi*apiInstance = [[JSAPILocationsApi alloc] init];

// Get the iso3 code of your country
[apiInstance getCountryByGeoLocationWithCompletionHandler: 
          ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILocationsApi->getCountryByGeoLocation: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountryStates**
```objc
-(NSURLSessionTask*) getCountryStatesWithCountryCodeIso3: (NSString*) countryCodeIso3
        completionHandler: (void (^)(NSArray<JSAPIStateResource>* output, NSError* error)) handler;
```

Get a list of a country's states

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* countryCodeIso3 = @"countryCodeIso3_example"; // The iso3 code of the country

JSAPILocationsApi*apiInstance = [[JSAPILocationsApi alloc] init];

// Get a list of a country's states
[apiInstance getCountryStatesWithCountryCodeIso3:countryCodeIso3
          completionHandler: ^(NSArray<JSAPIStateResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILocationsApi->getCountryStates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **countryCodeIso3** | **NSString***| The iso3 code of the country | 

### Return type

[**NSArray<JSAPIStateResource>***](JSAPIStateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrencyByGeoLocation**
```objc
-(NSURLSessionTask*) getCurrencyByGeoLocationWithCompletionHandler: 
        (void (^)(JSAPICurrencyResource* output, NSError* error)) handler;
```

Get the currency information of your country

Determined by geo ip location, currency to country mapping and a fallback setting. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPILocationsApi*apiInstance = [[JSAPILocationsApi alloc] init];

// Get the currency information of your country
[apiInstance getCurrencyByGeoLocationWithCompletionHandler: 
          ^(JSAPICurrencyResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILocationsApi->getCurrencyByGeoLocation: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPICurrencyResource***](JSAPICurrencyResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

