# SWGAuthClientsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createClient**](SWGAuthClientsApi.md#createclient) | **POST** /auth/clients | Create a new client
[**deleteClient**](SWGAuthClientsApi.md#deleteclient) | **DELETE** /auth/clients/{client_key} | Delete a client
[**getClient**](SWGAuthClientsApi.md#getclient) | **GET** /auth/clients/{client_key} | Get a single client
[**getClientGrantTypes**](SWGAuthClientsApi.md#getclientgranttypes) | **GET** /auth/clients/grant-types | List available client grant types
[**getClients**](SWGAuthClientsApi.md#getclients) | **GET** /auth/clients | List and search clients
[**setClientGrantTypes**](SWGAuthClientsApi.md#setclientgranttypes) | **PUT** /auth/clients/{client_key}/grant-types | Set grant types for a client
[**setClientRedirectUris**](SWGAuthClientsApi.md#setclientredirecturis) | **PUT** /auth/clients/{client_key}/redirect-uris | Set redirect uris for a client
[**updateClient**](SWGAuthClientsApi.md#updateclient) | **PUT** /auth/clients/{client_key} | Update a client


# **createClient**
```objc
-(NSURLSessionTask*) createClientWithClientResource: (SWGClientResource*) clientResource
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Create a new client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGClientResource* clientResource = [[SWGClientResource alloc] init]; // The client resource object (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Create a new client
[apiInstance createClientWithClientResource:clientResource
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->createClient: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteClient**
```objc
-(NSURLSessionTask*) deleteClientWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Delete a client
[apiInstance deleteClientWithClientKey:clientKey
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->deleteClient: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClient**
```objc
-(NSURLSessionTask*) getClientWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Get a single client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Get a single client
[apiInstance getClientWithClientKey:clientKey
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->getClient: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientGrantTypes**
```objc
-(NSURLSessionTask*) getClientGrantTypesWithCompletionHandler: 
        (void (^)(NSArray<SWGGrantTypeResource>* output, NSError* error)) handler;
```

List available client grant types

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// List available client grant types
[apiInstance getClientGrantTypesWithCompletionHandler: 
          ^(NSArray<SWGGrantTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->getClientGrantTypes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGGrantTypeResource>***](SWGGrantTypeResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClients**
```objc
-(NSURLSessionTask*) getClientsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceClientResource_* output, NSError* error)) handler;
```

List and search clients

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// List and search clients
[apiInstance getClientsWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceClientResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->getClients: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setClientGrantTypes**
```objc
-(NSURLSessionTask*) setClientGrantTypesWithClientKey: (NSString*) clientKey
    grantList: (NSArray<NSString*>*) grantList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set grant types for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* grantList = @[[[NSArray<NSString> alloc] init]]; // A list of unique grant types (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Set grant types for a client
[apiInstance setClientGrantTypesWithClientKey:clientKey
              grantList:grantList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->setClientGrantTypes: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setClientRedirectUris**
```objc
-(NSURLSessionTask*) setClientRedirectUrisWithClientKey: (NSString*) clientKey
    redirectList: (NSArray<NSString*>*) redirectList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set redirect uris for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* redirectList = @[[[NSArray<NSString> alloc] init]]; // A list of unique redirect uris (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Set redirect uris for a client
[apiInstance setClientRedirectUrisWithClientKey:clientKey
              redirectList:redirectList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->setClientRedirectUris: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateClient**
```objc
-(NSURLSessionTask*) updateClientWithClientKey: (NSString*) clientKey
    clientResource: (SWGClientResource*) clientResource
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Update a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
SWGClientResource* clientResource = [[SWGClientResource alloc] init]; // The client resource object (optional)

SWGAuthClientsApi*apiInstance = [[SWGAuthClientsApi alloc] init];

// Update a client
[apiInstance updateClientWithClientKey:clientKey
              clientResource:clientResource
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthClientsApi->updateClient: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 
 **clientResource** | [**SWGClientResource***](SWGClientResource*.md)| The client resource object | [optional] 

### Return type

[**SWGClientResource***](SWGClientResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

