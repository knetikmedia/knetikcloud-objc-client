# JSAPIAuthClientsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createClient**](JSAPIAuthClientsApi.md#createclient) | **POST** /auth/clients | Create a new client
[**deleteClient**](JSAPIAuthClientsApi.md#deleteclient) | **DELETE** /auth/clients/{client_key} | Delete a client
[**getClient**](JSAPIAuthClientsApi.md#getclient) | **GET** /auth/clients/{client_key} | Get a single client
[**getClientGrantTypes**](JSAPIAuthClientsApi.md#getclientgranttypes) | **GET** /auth/clients/grant-types | List available client grant types
[**getClients**](JSAPIAuthClientsApi.md#getclients) | **GET** /auth/clients | List and search clients
[**setClientGrantTypes**](JSAPIAuthClientsApi.md#setclientgranttypes) | **PUT** /auth/clients/{client_key}/grant-types | Set grant types for a client
[**setClientRedirectUris**](JSAPIAuthClientsApi.md#setclientredirecturis) | **PUT** /auth/clients/{client_key}/redirect-uris | Set redirect uris for a client
[**updateClient**](JSAPIAuthClientsApi.md#updateclient) | **PUT** /auth/clients/{client_key} | Update a client


# **createClient**
```objc
-(NSURLSessionTask*) createClientWithClientResource: (JSAPIClientResource*) clientResource
        completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;
```

Create a new client

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIClientResource* clientResource = [[JSAPIClientResource alloc] init]; // The client resource object (optional)

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Create a new client
[apiInstance createClientWithClientResource:clientResource
          completionHandler: ^(JSAPIClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->createClient: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientResource** | [**JSAPIClientResource***](JSAPIClientResource.md)| The client resource object | [optional] 

### Return type

[**JSAPIClientResource***](JSAPIClientResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Delete a client
[apiInstance deleteClientWithClientKey:clientKey
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->deleteClient: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClient**
```objc
-(NSURLSessionTask*) getClientWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;
```

Get a single client

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Get a single client
[apiInstance getClientWithClientKey:clientKey
          completionHandler: ^(JSAPIClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->getClient: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 

### Return type

[**JSAPIClientResource***](JSAPIClientResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientGrantTypes**
```objc
-(NSURLSessionTask*) getClientGrantTypesWithCompletionHandler: 
        (void (^)(NSArray<JSAPIGrantTypeResource>* output, NSError* error)) handler;
```

List available client grant types

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// List available client grant types
[apiInstance getClientGrantTypesWithCompletionHandler: 
          ^(NSArray<JSAPIGrantTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->getClientGrantTypes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPIGrantTypeResource>***](JSAPIGrantTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClients**
```objc
-(NSURLSessionTask*) getClientsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceClientResource_* output, NSError* error)) handler;
```

List and search clients

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// List and search clients
[apiInstance getClientsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceClientResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->getClients: %@", error);
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

[**JSAPIPageResourceClientResource_***](JSAPIPageResourceClientResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setClientGrantTypes**
```objc
-(NSURLSessionTask*) setClientGrantTypesWithClientKey: (NSString*) clientKey
    grantList: (NSArray<NSString*>*) grantList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set grant types for a client

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* grantList = @[[[NSArray<NSString> alloc] init]]; // A list of unique grant types (optional)

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Set grant types for a client
[apiInstance setClientGrantTypesWithClientKey:clientKey
              grantList:grantList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->setClientGrantTypes: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
NSArray<NSString*>* redirectList = @[[[NSArray<NSString> alloc] init]]; // A list of unique redirect uris (optional)

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Set redirect uris for a client
[apiInstance setClientRedirectUrisWithClientKey:clientKey
              redirectList:redirectList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->setClientRedirectUris: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateClient**
```objc
-(NSURLSessionTask*) updateClientWithClientKey: (NSString*) clientKey
    clientResource: (JSAPIClientResource*) clientResource
        completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;
```

Update a client

<b>Permissions Needed:</b> CLIENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The key of the client
JSAPIClientResource* clientResource = [[JSAPIClientResource alloc] init]; // The client resource object (optional)

JSAPIAuthClientsApi*apiInstance = [[JSAPIAuthClientsApi alloc] init];

// Update a client
[apiInstance updateClientWithClientKey:clientKey
              clientResource:clientResource
          completionHandler: ^(JSAPIClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthClientsApi->updateClient: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The key of the client | 
 **clientResource** | [**JSAPIClientResource***](JSAPIClientResource.md)| The client resource object | [optional] 

### Return type

[**JSAPIClientResource***](JSAPIClientResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

