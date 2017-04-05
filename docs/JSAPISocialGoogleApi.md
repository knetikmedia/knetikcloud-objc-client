# JSAPISocialGoogleApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**linkAccounts1**](JSAPISocialGoogleApi.md#linkaccounts1) | **POST** /social/google/users | Link facebook account


# **linkAccounts1**
```objc
-(NSURLSessionTask*) linkAccounts1WithFacebookToken: (JSAPIGoogleToken*) facebookToken
        completionHandler: (void (^)(NSError* error)) handler;
```

Link facebook account

Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIGoogleToken* facebookToken = [[JSAPIGoogleToken alloc] init]; // The token from facebook (optional)

JSAPISocialGoogleApi*apiInstance = [[JSAPISocialGoogleApi alloc] init];

// Link facebook account
[apiInstance linkAccounts1WithFacebookToken:facebookToken
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISocialGoogleApi->linkAccounts1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **facebookToken** | [**JSAPIGoogleToken***](JSAPIGoogleToken*.md)| The token from facebook | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

