# JSAPISocialGoogleApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**linkAccounts1**](JSAPISocialGoogleApi.md#linkaccounts1) | **POST** /social/google/users | Link google account


# **linkAccounts1**
```objc
-(NSURLSessionTask*) linkAccounts1WithGoogleToken: (JSAPIGoogleToken*) googleToken
        completionHandler: (void (^)(NSError* error)) handler;
```

Link google account

Links the current user account to a google account, using the acccess token from google. Can also be used to update the access token after it has expired. <br><br><b>Permissions Needed:</b> Non-google user token

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIGoogleToken* googleToken = [[JSAPIGoogleToken alloc] init]; // The token from google (optional)

JSAPISocialGoogleApi*apiInstance = [[JSAPISocialGoogleApi alloc] init];

// Link google account
[apiInstance linkAccounts1WithGoogleToken:googleToken
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISocialGoogleApi->linkAccounts1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **googleToken** | [**JSAPIGoogleToken***](JSAPIGoogleToken.md)| The token from google | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

