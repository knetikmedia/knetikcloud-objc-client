# SWGUtilMaintenanceApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteMaintenance**](SWGUtilMaintenanceApi.md#deletemaintenance) | **DELETE** /maintenance | Delete maintenance info
[**getMaintenance**](SWGUtilMaintenanceApi.md#getmaintenance) | **GET** /maintenance | Get current maintenance info
[**setMaintenance**](SWGUtilMaintenanceApi.md#setmaintenance) | **POST** /maintenance | Set current maintenance info
[**updateMaintenance**](SWGUtilMaintenanceApi.md#updatemaintenance) | **PUT** /maintenance | Update current maintenance info


# **deleteMaintenance**
```objc
-(NSURLSessionTask*) deleteMaintenanceWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Delete maintenance info

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Delete maintenance info
[apiInstance deleteMaintenanceWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->deleteMaintenance: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMaintenance**
```objc
-(NSURLSessionTask*) getMaintenanceWithCompletionHandler: 
        (void (^)(SWGMaintenance* output, NSError* error)) handler;
```

Get current maintenance info

Get current maintenance info. 404 if no maintenance.

### Example 
```objc


SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Get current maintenance info
[apiInstance getMaintenanceWithCompletionHandler: 
          ^(SWGMaintenance* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->getMaintenance: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setMaintenance**
```objc
-(NSURLSessionTask*) setMaintenanceWithMaintenance: (SWGMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Set current maintenance info

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGMaintenance* maintenance = [[SWGMaintenance alloc] init]; // The maintenance object (optional)

SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Set current maintenance info
[apiInstance setMaintenanceWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->setMaintenance: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**SWGMaintenance***](SWGMaintenance*.md)| The maintenance object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMaintenance**
```objc
-(NSURLSessionTask*) updateMaintenanceWithMaintenance: (SWGMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Update current maintenance info

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGMaintenance* maintenance = [[SWGMaintenance alloc] init]; // The maintenance object (optional)

SWGUtilMaintenanceApi*apiInstance = [[SWGUtilMaintenanceApi alloc] init];

// Update current maintenance info
[apiInstance updateMaintenanceWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUtilMaintenanceApi->updateMaintenance: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**SWGMaintenance***](SWGMaintenance*.md)| The maintenance object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

