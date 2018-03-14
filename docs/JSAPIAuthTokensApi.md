# JSAPIAuthTokensApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteTokens**](JSAPIAuthTokensApi.md#deletetokens) | **DELETE** /auth/tokens | Delete tokens by username, client id, or both
[**getToken**](JSAPIAuthTokensApi.md#gettoken) | **GET** /auth/tokens/{username}/{client_id} | Get a single token by username and client id
[**getTokens**](JSAPIAuthTokensApi.md#gettokens) | **GET** /auth/tokens | List usernames and client ids


# **deleteTokens**
```objc
-(NSURLSessionTask*) deleteTokensWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete tokens by username, client id, or both

<b>Permissions Needed:</b> TOKENS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user (optional)
NSString* clientId = @"clientId_example"; // The id of the client (optional)

JSAPIAuthTokensApi*apiInstance = [[JSAPIAuthTokensApi alloc] init];

// Delete tokens by username, client id, or both
[apiInstance deleteTokensWithUsername:username
              clientId:clientId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTokensApi->deleteTokens: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **username** | **NSString***| The username of the user | [optional] 
 **clientId** | **NSString***| The id of the client | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getToken**
```objc
-(NSURLSessionTask*) getTokenWithUsername: (NSString*) username
    clientId: (NSString*) clientId
        completionHandler: (void (^)(JSAPIOauthAccessTokenResource* output, NSError* error)) handler;
```

Get a single token by username and client id

<b>Permissions Needed:</b> TOKENS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* username = @"username_example"; // The username of the user
NSString* clientId = @"clientId_example"; // The id of the client

JSAPIAuthTokensApi*apiInstance = [[JSAPIAuthTokensApi alloc] init];

// Get a single token by username and client id
[apiInstance getTokenWithUsername:username
              clientId:clientId
          completionHandler: ^(JSAPIOauthAccessTokenResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTokensApi->getToken: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **username** | **NSString***| The username of the user | 
 **clientId** | **NSString***| The id of the client | 

### Return type

[**JSAPIOauthAccessTokenResource***](JSAPIOauthAccessTokenResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTokens**
```objc
-(NSURLSessionTask*) getTokensWithFilterClientId: (NSString*) filterClientId
    filterUsername: (NSString*) filterUsername
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceOauthAccessTokenResource_* output, NSError* error)) handler;
```

List usernames and client ids

Token value not shown. <br><br><b>Permissions Needed:</b> TOKENS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterClientId = @"filterClientId_example"; // Filters for token whose client id matches provided string (optional)
NSString* filterUsername = @"filterUsername_example"; // Filters for token whose username matches provided string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIAuthTokensApi*apiInstance = [[JSAPIAuthTokensApi alloc] init];

// List usernames and client ids
[apiInstance getTokensWithFilterClientId:filterClientId
              filterUsername:filterUsername
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceOauthAccessTokenResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthTokensApi->getTokens: %@", error);
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
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceOauthAccessTokenResource_***](JSAPIPageResourceOauthAccessTokenResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

