# SWGAccessTokenApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOAuthToken**](SWGAccessTokenApi.md#getoauthtoken) | **POST** /oauth/token | Get access token


# **getOAuthToken**
```objc
-(NSURLSessionTask*) getOAuthTokenWithGrantType: (NSString*) grantType
    clientId: (NSString*) clientId
    clientSecret: (NSString*) clientSecret
    username: (NSString*) username
    password: (NSString*) password
        completionHandler: (void (^)(SWGOAuth2Resource* output, NSError* error)) handler;
```

Get access token

### Example 
```objc

NSString* grantType = @"client_credentials"; // Grant type (default to client_credentials)
NSString* clientId = @"knetik"; // The id of the client (default to knetik)
NSString* clientSecret = @"clientSecret_example"; // The secret key of the client.  Used only with a grant_type of client_credentials (optional)
NSString* username = @"username_example"; // The username of the client.  Used only with a grant_type of password (optional)
NSString* password = @"password_example"; // The password of the client.  Used only with a grant_type of password (optional)

SWGAccessTokenApi*apiInstance = [[SWGAccessTokenApi alloc] init];

// Get access token
[apiInstance getOAuthTokenWithGrantType:grantType
              clientId:clientId
              clientSecret:clientSecret
              username:username
              password:password
          completionHandler: ^(SWGOAuth2Resource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAccessTokenApi->getOAuthToken: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **grantType** | **NSString***| Grant type | [default to client_credentials]
 **clientId** | **NSString***| The id of the client | [default to knetik]
 **clientSecret** | **NSString***| The secret key of the client.  Used only with a grant_type of client_credentials | [optional] 
 **username** | **NSString***| The username of the client.  Used only with a grant_type of password | [optional] 
 **password** | **NSString***| The password of the client.  Used only with a grant_type of password | [optional] 

### Return type

[**SWGOAuth2Resource***](SWGOAuth2Resource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

