# SWGUtilSecurityApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserLocationLogUsingGET**](SWGUtilSecurityApi.md#getuserlocationlogusingget) | **GET** /security/country-log | Returns the authentication log for a user
[**userUsingGET**](SWGUtilSecurityApi.md#userusingget) | **GET** /me | Returns the authentication token details. Use /users endpoint for detailed user&#39;s info


# **getUserLocationLogUsingGET**
```objc
-(NSNumber*) getUserLocationLogUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(SWGPageLocationLogResource_* output, NSError* error)) handler;
```

Returns the authentication log for a user

A log entry is recorded everytime a user requests a new token. Standard pagination available

### Example 
```objc

NSNumber* userId = @56; // The user id (optional)

SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication log for a user
[apiInstance getUserLocationLogUsingGETWithUserId:userId
          completionHandler: ^(SWGPageLocationLogResource_* output, NSError* error) {
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

[**SWGPageLocationLogResource_***](SWGPageLocationLogResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **userUsingGET**
```objc
-(NSNumber*) userUsingGETWithAuthentication: (SWGAuthentication*) authentication
        completionHandler: (void (^)(SWGTokenDetailsResource* output, NSError* error)) handler;
```

Returns the authentication token details. Use /users endpoint for detailed user's info

### Example 
```objc

SWGAuthentication* authentication = [[SWGAuthentication alloc] init]; // The Authentication Object (optional)

SWGUtilSecurityApi*apiInstance = [[SWGUtilSecurityApi alloc] init];

// Returns the authentication token details. Use /users endpoint for detailed user's info
[apiInstance userUsingGETWithAuthentication:authentication
          completionHandler: ^(SWGTokenDetailsResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilSecurityApi->userUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authentication** | [**SWGAuthentication***](SWGAuthentication*.md)| The Authentication Object | [optional] 

### Return type

[**SWGTokenDetailsResource***](SWGTokenDetailsResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

