# JSAPISocialFacebookApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**linkAccounts**](JSAPISocialFacebookApi.md#linkaccounts) | **POST** /social/facebook/users | Link facebook account


# **linkAccounts**
```objc
-(NSURLSessionTask*) linkAccountsWithFacebookToken: (JSAPIFacebookToken*) facebookToken
        completionHandler: (void (^)(NSError* error)) handler;
```

Link facebook account

Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
 **facebookToken** | [**JSAPIFacebookToken***](JSAPIFacebookToken*.md)| The token from facebook | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

