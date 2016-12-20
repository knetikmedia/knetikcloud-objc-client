# SWGAuthTokensApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteTokenUsingDELETE**](SWGAuthTokensApi.md#deletetokenusingdelete) | **DELETE** /auth/tokens/{username} | Delete all tokens by username
[**deleteTokenWithClientIdUsingDELETE**](SWGAuthTokensApi.md#deletetokenwithclientidusingdelete) | **DELETE** /auth/tokens/{username}/{client_id} | Delete a token by username and client id
[**getTokenByUserUsingGET**](SWGAuthTokensApi.md#gettokenbyuserusingget) | **GET** /auth/tokens/{username}/{client_id} | Get a single token by username and client id
[**getTokensUsingGET**](SWGAuthTokensApi.md#gettokensusingget) | **GET** /auth/tokens | List usernames and client ids


# **deleteTokenUsingDELETE**
```objc
-(NSNumber*) deleteTokenUsingDELETEWithUsername: (NSString*) username
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all tokens by username

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Delete all tokens by username
[apiInstance deleteTokenUsingDELETEWithUsername:username
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->deleteTokenUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **username** | **NSString***| The username of the user | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTokenWithClientIdUsingDELETE**
```objc
-(NSNumber*) deleteTokenWithClientIdUsingDELETEWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a token by username and client id

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user
NSString* clientId = @"clientId_example"; // The id of the client

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Delete a token by username and client id
[apiInstance deleteTokenWithClientIdUsingDELETEWithUsername:username
              clientId:clientId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->deleteTokenWithClientIdUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **username** | **NSString***| The username of the user | 
 **clientId** | **NSString***| The id of the client | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTokenByUserUsingGET**
```objc
-(NSNumber*) getTokenByUserUsingGETWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(SWGOauthAccessTokenResource* output, NSError* error)) handler;
```

Get a single token by username and client id

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user
NSString* clientId = @"clientId_example"; // The id of the client

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Get a single token by username and client id
[apiInstance getTokenByUserUsingGETWithUsername:username
              clientId:clientId
          completionHandler: ^(SWGOauthAccessTokenResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->getTokenByUserUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **username** | **NSString***| The username of the user | 
 **clientId** | **NSString***| The id of the client | 

### Return type

[**SWGOauthAccessTokenResource***](SWGOauthAccessTokenResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTokensUsingGET**
```objc
-(NSNumber*) getTokensUsingGETWithFilterClientId: (NSString*) filterClientId
    filterUsername: (NSString*) filterUsername
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageOauthAccessTokenResource_* output, NSError* error)) handler;
```

List usernames and client ids

Token value not shown

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterClientId = @"filterClientId_example"; // Filters for token whose client id matches provided string (optional)
NSString* filterUsername = @"filterUsername_example"; // Filters for token whose username matches provided string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"username:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to username:ASC)

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// List usernames and client ids
[apiInstance getTokensUsingGETWithFilterClientId:filterClientId
              filterUsername:filterUsername
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageOauthAccessTokenResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->getTokensUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterClientId** | **NSString***| Filters for token whose client id matches provided string | [optional] 
 **filterUsername** | **NSString***| Filters for token whose username matches provided string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to username:ASC]

### Return type

[**SWGPageOauthAccessTokenResource_***](SWGPageOauthAccessTokenResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

