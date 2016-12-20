# SWGConfigsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createConfigUsingPOST**](SWGConfigsApi.md#createconfigusingpost) | **POST** /configs | Create a new config
[**deleteConfigUsingDELETE**](SWGConfigsApi.md#deleteconfigusingdelete) | **DELETE** /configs/{name} | Delete an existing config
[**getConfigUsingGET**](SWGConfigsApi.md#getconfigusingget) | **GET** /configs/{name} | Get a single config
[**getConfigsUsingGET**](SWGConfigsApi.md#getconfigsusingget) | **GET** /configs | List and search configs
[**updateConfigUsingPUT**](SWGConfigsApi.md#updateconfigusingput) | **PUT** /configs/{name} | Update an existing config


# **createConfigUsingPOST**
```objc
-(NSNumber*) createConfigUsingPOSTWithConfig: (SWGConfig*) config
        completionHandler: (void (^)(SWGConfig* output, NSError* error)) handler;
```

Create a new config

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGConfig* config = [[SWGConfig alloc] init]; // The config object (optional)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Create a new config
[apiInstance createConfigUsingPOSTWithConfig:config
          completionHandler: ^(SWGConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->createConfigUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **config** | [**SWGConfig***](SWGConfig*.md)| The config object | [optional] 

### Return type

[**SWGConfig***](SWGConfig.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteConfigUsingDELETE**
```objc
-(NSNumber*) deleteConfigUsingDELETEWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing config

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Delete an existing config
[apiInstance deleteConfigUsingDELETEWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->deleteConfigUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The config name | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfigUsingGET**
```objc
-(NSNumber*) getConfigUsingGETWithName: (NSString*) name
        completionHandler: (void (^)(SWGConfig* output, NSError* error)) handler;
```

Get a single config

Only configs that are public readable will be shown without admin access

### Example 
```objc

NSString* name = @"name_example"; // The config name

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Get a single config
[apiInstance getConfigUsingGETWithName:name
          completionHandler: ^(SWGConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->getConfigUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The config name | 

### Return type

[**SWGConfig***](SWGConfig.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfigsUsingGET**
```objc
-(NSNumber*) getConfigsUsingGETWithFilterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageConfig_* output, NSError* error)) handler;
```

List and search configs

### Example 
```objc

NSString* filterSearch = @"filterSearch_example"; // Filter for configs whose name contains the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// List and search configs
[apiInstance getConfigsUsingGETWithFilterSearch:filterSearch
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageConfig_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->getConfigsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for configs whose name contains the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageConfig_***](SWGPageConfig_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateConfigUsingPUT**
```objc
-(NSNumber*) updateConfigUsingPUTWithName: (NSString*) name
    config: (SWGConfig*) config
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing config

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name
SWGConfig* config = [[SWGConfig alloc] init]; // The config object (optional)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Update an existing config
[apiInstance updateConfigUsingPUTWithName:name
              config:config
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->updateConfigUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The config name | 
 **config** | [**SWGConfig***](SWGConfig*.md)| The config object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

