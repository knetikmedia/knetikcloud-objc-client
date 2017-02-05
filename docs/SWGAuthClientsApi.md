# SWGAuthClientsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**assignClientGrantTypesUsingPUT**](SWGAuthClientsApi.md#assignclientgranttypesusingput) | **PUT** /auth/clients/{client_key}/grant-types | Set grant types for a client
[**assignClientRedirectUrisUsingPUT**](SWGAuthClientsApi.md#assignclientredirecturisusingput) | **PUT** /auth/clients/{client_key}/redirect-uris | Set redirect uris for a client
[**createClientUsingPOST**](SWGAuthClientsApi.md#createclientusingpost) | **POST** /auth/clients | Create a new client
[**deleteClientUsingDELETE**](SWGAuthClientsApi.md#deleteclientusingdelete) | **DELETE** /auth/clients/{client_key} | Delete a client
[**getClientUsingGET**](SWGAuthClientsApi.md#getclientusingget) | **GET** /auth/clients/{client_key} | Get a single client
[**getClientsUsingGET**](SWGAuthClientsApi.md#getclientsusingget) | **GET** /auth/clients | List and search clients
[**listAvailableGrantTypesUsingGET**](SWGAuthClientsApi.md#listavailablegranttypesusingget) | **GET** /auth/clients/grant-types | List available client grant types
[**updateClientUsingPUT**](SWGAuthClientsApi.md#updateclientusingput) | **PUT** /auth/clients/{client_key} | Update a client


# **assignClientGrantTypesUsingPUT**
```objc
-(NSURLSessionTask*) assignClientGrantTypesUsingPUTWithClientKey: (NSString*) clientKey
    grantList: (NSArray<NSString*>*) grantList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set grant types for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* grantList = @[[[NSArray<NSString> alloc] init]]; // A list of unique grant types (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Set grant types for a client
[apiInstance assignClientGrantTypesUsingPUTWithClientKey:clientKey
              grantList:grantList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->assignClientGrantTypesUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 
 **grantList** | **NSArray&lt;NSString*&gt;***| A list of unique grant types | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **assignClientRedirectUrisUsingPUT**
```objc
-(NSURLSessionTask*) assignClientRedirectUrisUsingPUTWithClientKey: (NSString*) clientKey
    redirectList: (NSArray<NSString*>*) redirectList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set redirect uris for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* redirectList = @[[[NSArray<NSString> alloc] init]]; // A list of unique redirect uris (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Set redirect uris for a client
[apiInstance assignClientRedirectUrisUsingPUTWithClientKey:clientKey
              redirectList:redirectList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->assignClientRedirectUrisUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 
 **redirectList** | **NSArray&lt;NSString*&gt;***| A list of unique redirect uris | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createClientUsingPOST**
```objc
-(NSURLSessionTask*) createClientUsingPOSTWithClientResource: (SWGClientResource*) clientResource
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Create a new client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGClientResource* clientResource = [[SWGClientResource alloc] init]; // The client resource object (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Create a new client
[apiInstance createClientUsingPOSTWithClientResource:clientResource
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->createClientUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientResource** | [**SWGClientResource***](SWGClientResource*.md)| The client resource object | [optional] 

### Return type

[**SWGClientResource***](SWGClientResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteClientUsingDELETE**
```objc
-(NSURLSessionTask*) deleteClientUsingDELETEWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Delete a client
[apiInstance deleteClientUsingDELETEWithClientKey:clientKey
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->deleteClientUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientUsingGET**
```objc
-(NSURLSessionTask*) getClientUsingGETWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Get a single client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Get a single client
[apiInstance getClientUsingGETWithClientKey:clientKey
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->getClientUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 

### Return type

[**SWGClientResource***](SWGClientResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientsUsingGET**
```objc
-(NSURLSessionTask*) getClientsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceClientResource_* output, NSError* error)) handler;
```

List and search clients

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// List and search clients
[apiInstance getClientsUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceClientResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->getClientsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceClientResource_***](SWGPageResourceClientResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listAvailableGrantTypesUsingGET**
```objc
-(NSURLSessionTask*) listAvailableGrantTypesUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGGrantTypeResource>* output, NSError* error)) handler;
```

List available client grant types

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// List available client grant types
[apiInstance listAvailableGrantTypesUsingGETWithCompletionHandler: 
          ^(NSArray<SWGGrantTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->listAvailableGrantTypesUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGGrantTypeResource>***](SWGGrantTypeResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateClientUsingPUT**
```objc
-(NSURLSessionTask*) updateClientUsingPUTWithClientKey: (NSString*) clientKey
    clientResource: (SWGClientResource*) clientResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
SWGClientResource* clientResource = [[SWGClientResource alloc] init]; // The client resource object (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Update a client
[apiInstance updateClientUsingPUTWithClientKey:clientKey
              clientResource:clientResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->updateClientUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 
 **clientResource** | [**SWGClientResource***](SWGClientResource*.md)| The client resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

