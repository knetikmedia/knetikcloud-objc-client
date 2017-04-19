# JSAPIUtilSecurityApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserLocationLog**](JSAPIUtilSecurityApi.md#getuserlocationlog) | **GET** /security/country-log | Returns the authentication log for a user
[**getUserTokenDetails**](JSAPIUtilSecurityApi.md#getusertokendetails) | **GET** /me | Returns the authentication token details. Use /users endpoint for detailed user&#39;s info


# **getUserLocationLog**
```objc
-(NSURLSessionTask*) getUserLocationLogWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(JSAPIPageResourceLocationLogResource_* output, NSError* error)) handler;
```

Returns the authentication log for a user

A log entry is recorded everytime a user requests a new token. Standard pagination available

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id (optional)

JSAPIUtilSecurityApi*apiInstance = [[JSAPIUtilSecurityApi alloc] init];

// Returns the authentication log for a user
[apiInstance getUserLocationLogWithUserId:userId
          completionHandler: ^(JSAPIPageResourceLocationLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilSecurityApi->getUserLocationLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user id | [optional] 

### Return type

[**JSAPIPageResourceLocationLogResource_***](JSAPIPageResourceLocationLogResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTokenDetails**
```objc
-(NSURLSessionTask*) getUserTokenDetailsWithCompletionHandler: 
        (void (^)(JSAPITokenDetailsResource* output, NSError* error)) handler;
```

Returns the authentication token details. Use /users endpoint for detailed user's info

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIUtilSecurityApi*apiInstance = [[JSAPIUtilSecurityApi alloc] init];

// Returns the authentication token details. Use /users endpoint for detailed user's info
[apiInstance getUserTokenDetailsWithCompletionHandler: 
          ^(JSAPITokenDetailsResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilSecurityApi->getUserTokenDetails: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPITokenDetailsResource***](JSAPITokenDetailsResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

