# JSAPISocialFacebookApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**linkAccounts**](JSAPISocialFacebookApi.md#linkaccounts) | **POST** /social/facebook/users | Link facebook account


# **linkAccounts**
```objc
-(NSURLSessionTask*) linkAccountsWithFacebookToken: (JSAPIFacebookToken*) facebookToken
        completionHandler: (void (^)(NSError* error)) handler;
```

Link facebook account

Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired. <br><br><b>Permissions Needed:</b> Non-facebook user token

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFacebookToken* facebookToken = [[JSAPIFacebookToken alloc] init]; // The token from facebook (optional)

JSAPISocialFacebookApi*apiInstance = [[JSAPISocialFacebookApi alloc] init];

// Link facebook account
[apiInstance linkAccountsWithFacebookToken:facebookToken
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISocialFacebookApi->linkAccounts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **facebookToken** | [**JSAPIFacebookToken***](JSAPIFacebookToken.md)| The token from facebook | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

