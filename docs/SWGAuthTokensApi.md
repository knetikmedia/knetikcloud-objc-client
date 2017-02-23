# SWGAuthTokensApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteToken**](SWGAuthTokensApi.md#deletetoken) | **DELETE** /auth/tokens/{username}/{client_id} | Delete a token by username and client id
[**deleteTokens**](SWGAuthTokensApi.md#deletetokens) | **DELETE** /auth/tokens/{username} | Delete all tokens by username
[**getToken**](SWGAuthTokensApi.md#gettoken) | **GET** /auth/tokens/{username}/{client_id} | Get a single token by username and client id
[**getTokens**](SWGAuthTokensApi.md#gettokens) | **GET** /auth/tokens | List usernames and client ids


# **deleteToken**
```objc
-(NSURLSessionTask*) deleteTokenWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a token by username and client id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user
NSString* clientId = @"clientId_example"; // The id of the client

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Delete a token by username and client id
[apiInstance deleteTokenWithUsername:username
              clientId:clientId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->deleteToken: %@", error);
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

# **deleteTokens**
```objc
-(NSURLSessionTask*) deleteTokensWithUsername: (NSString*) username
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all tokens by username

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Delete all tokens by username
[apiInstance deleteTokensWithUsername:username
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->deleteTokens: %@", error);
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

# **getToken**
```objc
-(NSURLSessionTask*) getTokenWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(SWGOauthAccessTokenResource* output, NSError* error)) handler;
```

Get a single token by username and client id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user
NSString* clientId = @"clientId_example"; // The id of the client

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// Get a single token by username and client id
[apiInstance getTokenWithUsername:username
              clientId:clientId
          completionHandler: ^(SWGOauthAccessTokenResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->getToken: %@", error);
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

# **getTokens**
```objc
-(NSURLSessionTask*) getTokensWithFilterClientId: (NSString*) filterClientId
    filterUsername: (NSString*) filterUsername
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceOauthAccessTokenResource_* output, NSError* error)) handler;
```

List usernames and client ids

Token value not shown

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterClientId = @"filterClientId_example"; // Filters for token whose client id matches provided string (optional)
NSString* filterUsername = @"filterUsername_example"; // Filters for token whose username matches provided string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"username:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to username:ASC)

SWGAuthTokensApi*apiInstance = [[SWGAuthTokensApi alloc] init];

// List usernames and client ids
[apiInstance getTokensWithFilterClientId:filterClientId
              filterUsername:filterUsername
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceOauthAccessTokenResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthTokensApi->getTokens: %@", error);
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

[**SWGPageResourceOauthAccessTokenResource_***](SWGPageResourceOauthAccessTokenResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

