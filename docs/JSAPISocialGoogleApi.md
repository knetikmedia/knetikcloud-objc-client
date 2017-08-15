# JSAPISocialGoogleApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**linkAccounts1**](JSAPISocialGoogleApi.md#linkaccounts1) | **POST** /social/google/users | Link google account


# **linkAccounts1**
```objc
-(NSURLSessionTask*) linkAccounts1WithGoogleToken: (JSAPIGoogleToken*) googleToken
        completionHandler: (void (^)(NSError* error)) handler;
```

Link google account

Links the current user account to a google account, using the acccess token from google. Can also be used to update the access token after it has expired.

### Example 
```objc

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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

