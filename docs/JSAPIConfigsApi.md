# JSAPIConfigsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createConfig**](JSAPIConfigsApi.md#createconfig) | **POST** /configs | Create a new config
[**deleteConfig**](JSAPIConfigsApi.md#deleteconfig) | **DELETE** /configs/{name} | Delete an existing config
[**getConfig**](JSAPIConfigsApi.md#getconfig) | **GET** /configs/{name} | Get a single config
[**getConfigs**](JSAPIConfigsApi.md#getconfigs) | **GET** /configs | List and search configs
[**updateConfig**](JSAPIConfigsApi.md#updateconfig) | **PUT** /configs/{name} | Update an existing config


# **createConfig**
```objc
-(NSURLSessionTask*) createConfigWithConfig: (JSAPIConfig*) config
        completionHandler: (void (^)(JSAPIConfig* output, NSError* error)) handler;
```

Create a new config

<b>Permissions Needed:</b> CONFIGS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIConfig* config = [[JSAPIConfig alloc] init]; // The config object (optional)

JSAPIConfigsApi*apiInstance = [[JSAPIConfigsApi alloc] init];

// Create a new config
[apiInstance createConfigWithConfig:config
          completionHandler: ^(JSAPIConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIConfigsApi->createConfig: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **config** | [**JSAPIConfig***](JSAPIConfig.md)| The config object | [optional] 

### Return type

[**JSAPIConfig***](JSAPIConfig.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> CONFIGS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name

JSAPIConfigsApi*apiInstance = [[JSAPIConfigsApi alloc] init];

// Delete an existing config
[apiInstance deleteConfigWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIConfigsApi->deleteConfig: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfig**
```objc
-(NSURLSessionTask*) getConfigWithName: (NSString*) name
        completionHandler: (void (^)(JSAPIConfig* output, NSError* error)) handler;
```

Get a single config

Only configs that are public readable will be shown without admin access. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name

JSAPIConfigsApi*apiInstance = [[JSAPIConfigsApi alloc] init];

// Get a single config
[apiInstance getConfigWithName:name
          completionHandler: ^(JSAPIConfig* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIConfigsApi->getConfig: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The config name | 

### Return type

[**JSAPIConfig***](JSAPIConfig.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getConfigs**
```objc
-(NSURLSessionTask*) getConfigsWithFilterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceConfig_* output, NSError* error)) handler;
```

List and search configs

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for configs whose name contains the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIConfigsApi*apiInstance = [[JSAPIConfigsApi alloc] init];

// List and search configs
[apiInstance getConfigsWithFilterSearch:filterSearch
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceConfig_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIConfigsApi->getConfigs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for configs whose name contains the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceConfig_***](JSAPIPageResourceConfig_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateConfig**
```objc
-(NSURLSessionTask*) updateConfigWithName: (NSString*) name
    config: (JSAPIConfig*) config
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing config

<b>Permissions Needed:</b> CONFIGS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The config name
JSAPIConfig* config = [[JSAPIConfig alloc] init]; // The config object (optional)

JSAPIConfigsApi*apiInstance = [[JSAPIConfigsApi alloc] init];

// Update an existing config
[apiInstance updateConfigWithName:name
              config:config
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIConfigsApi->updateConfig: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The config name | 
 **config** | [**JSAPIConfig***](JSAPIConfig.md)| The config object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

