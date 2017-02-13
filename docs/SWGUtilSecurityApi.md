# SWGUtilSecurityApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserLocationLog**](SWGUtilSecurityApi.md#getuserlocationlog) | **GET** /security/country-log | Returns the authentication log for a user
[**getUserTokenDetails**](SWGUtilSecurityApi.md#getusertokendetails) | **GET** /me | Returns the authentication token details. Use /users endpoint for detailed user&#39;s info


# **getUserLocationLog**
```objc
-(NSURLSessionTask*) getUserLocationLogWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(SWGPageResourceLocationLogResource_* output, NSError* error)) handler;
```

Returns the authentication log for a user

A log entry is recorded everytime a user requests a new token. Standard pagination available

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id (optional)

SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication log for a user
[apiInstance getUserLocationLogWithUserId:userId
          completionHandler: ^(SWGPageResourceLocationLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilSecurityApi->getUserLocationLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user id | [optional] 

### Return type

[**SWGPageResourceLocationLogResource_***](SWGPageResourceLocationLogResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTokenDetails**
```objc
-(NSURLSessionTask*) getUserTokenDetailsWithCompletionHandler: 
        (void (^)(SWGTokenDetailsResource* output, NSError* error)) handler;
```

Returns the authentication token details. Use /users endpoint for detailed user's info

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication token details. Use /users endpoint for detailed user's info
[apiInstance getUserTokenDetailsWithCompletionHandler: 
          ^(SWGTokenDetailsResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilSecurityApi->getUserTokenDetails: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGTokenDetailsResource***](SWGTokenDetailsResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

