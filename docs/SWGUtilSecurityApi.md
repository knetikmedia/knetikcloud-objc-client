# SWGUtilSecurityApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserLocationLogUsingGET**](SWGUtilSecurityApi.md#getuserlocationlogusingget) | **GET** /security/country-log | Returns the authentication log for a user
[**userUsingGET**](SWGUtilSecurityApi.md#userusingget) | **GET** /me | Returns the authentication token details. Use /users endpoint for detailed user&#39;s info


# **getUserLocationLogUsingGET**
```objc
-(NSNumber*) getUserLocationLogUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(SWGPageResourceLocationLogResource_* output, NSError* error)) handler;
```

Returns the authentication log for a user

A log entry is recorded everytime a user requests a new token. Standard pagination available

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id (optional)

SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication log for a user
[apiInstance getUserLocationLogUsingGETWithUserId:userId
          completionHandler: ^(SWGPageResourceLocationLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilSecurityApi->getUserLocationLogUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **userUsingGET**
```objc
-(NSNumber*) userUsingGETWithCompletionHandler: 
        (void (^)(SWGTokenDetailsResource* output, NSError* error)) handler;
```

Returns the authentication token details. Use /users endpoint for detailed user's info

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication token details. Use /users endpoint for detailed user's info
[apiInstance userUsingGETWithCompletionHandler: 
          ^(SWGTokenDetailsResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilSecurityApi->userUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGTokenDetailsResource***](SWGTokenDetailsResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

