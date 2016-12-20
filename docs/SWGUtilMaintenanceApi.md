# SWGUtilMaintenanceApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteUsingDELETE1**](SWGUtilMaintenanceApi.md#deleteusingdelete1) | **DELETE** /maintenance | Remove maintenance info
[**getUsingGET1**](SWGUtilMaintenanceApi.md#getusingget1) | **GET** /maintenance | Get current maintenance info
[**postUsingPOST**](SWGUtilMaintenanceApi.md#postusingpost) | **POST** /maintenance | Set current maintenance info
[**postUsingPUT**](SWGUtilMaintenanceApi.md#postusingput) | **PUT** /maintenance | Set current maintenance info


# **deleteUsingDELETE1**
```objc
-(NSNumber*) deleteUsingDELETE1WithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Remove maintenance info

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Remove maintenance info
[apiInstance deleteUsingDELETE1WithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->deleteUsingDELETE1: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsingGET1**
```objc
-(NSNumber*) getUsingGET1WithCompletionHandler: 
        (void (^)(SWGMaintenance* output, NSError* error)) handler;
```

Get current maintenance info

Get current maintenance info. 404 if no maintenance.

### Example 
```objc


SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Get current maintenance info
[apiInstance getUsingGET1WithCompletionHandler: 
          ^(SWGMaintenance* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->getUsingGET1: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGMaintenance***](SWGMaintenance.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postUsingPOST**
```objc
-(NSNumber*) postUsingPOSTWithMaintenance: (SWGMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Set current maintenance info

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGMaintenance* maintenance = [[SWGMaintenance alloc] init]; // The Maintenance Object (optional)

SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Set current maintenance info
[apiInstance postUsingPOSTWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->postUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**SWGMaintenance***](SWGMaintenance*.md)| The Maintenance Object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postUsingPUT**
```objc
-(NSNumber*) postUsingPUTWithMaintenance: (SWGMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Set current maintenance info

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGMaintenance* maintenance = [[SWGMaintenance alloc] init]; // The Maintenance Object (optional)

SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Set current maintenance info
[apiInstance postUsingPUTWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->postUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**SWGMaintenance***](SWGMaintenance*.md)| The Maintenance Object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

