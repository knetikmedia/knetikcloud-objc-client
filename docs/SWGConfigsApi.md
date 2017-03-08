# SWGConfigsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createConfig**](SWGConfigsApi.md#createconfig) | **POST** /configs | Create a new config
[**deleteConfig**](SWGConfigsApi.md#deleteconfig) | **DELETE** /configs/{name} | Delete an existing config
[**getConfig**](SWGConfigsApi.md#getconfig) | **GET** /configs/{name} | Get a single config
[**getConfigs**](SWGConfigsApi.md#getconfigs) | **GET** /configs | List and search configs
[**updateConfig**](SWGConfigsApi.md#updateconfig) | **PUT** /configs/{name} | Update an existing config


# **createConfig**
```objc
-(NSURLSessionTask*) createConfigWithConfig: (SWGConfig*) config
        completionHandler: (void (^)(SWGConfig* output, NSError* error)) handler;
```

Create a new config

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGConfig* config = [[SWGConfig alloc] init]; // The config object (optional)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Create a new config
[apiInstance createConfigWithConfig:config
          completionHandler: ^(SWGConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->createConfig: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteConfig**
```objc
-(NSURLSessionTask*) deleteConfigWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing config

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Delete an existing config
[apiInstance deleteConfigWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->deleteConfig: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfig**
```objc
-(NSURLSessionTask*) getConfigWithName: (NSString*) name
        completionHandler: (void (^)(SWGConfig* output, NSError* error)) handler;
```

Get a single config

Only configs that are public readable will be shown without admin access

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Get a single config
[apiInstance getConfigWithName:name
          completionHandler: ^(SWGConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->getConfig: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfigs**
```objc
-(NSURLSessionTask*) getConfigsWithFilterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceConfig_* output, NSError* error)) handler;
```

List and search configs

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for configs whose name contains the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// List and search configs
[apiInstance getConfigsWithFilterSearch:filterSearch
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceConfig_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->getConfigs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for configs whose name contains the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageResourceConfig_***](SWGPageResourceConfig_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateConfig**
```objc
-(NSURLSessionTask*) updateConfigWithName: (NSString*) name
    config: (SWGConfig*) config
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing config

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name
SWGConfig* config = [[SWGConfig alloc] init]; // The config object (optional)

SWGConfigsApi*apiInstance = [[SWGConfigsApi alloc] init];

// Update an existing config
[apiInstance updateConfigWithName:name
              config:config
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGConfigsApi->updateConfig: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

