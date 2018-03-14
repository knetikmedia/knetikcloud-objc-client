# JSAPIUtilMaintenanceApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteMaintenance**](JSAPIUtilMaintenanceApi.md#deletemaintenance) | **DELETE** /maintenance | Delete maintenance info
[**getMaintenance**](JSAPIUtilMaintenanceApi.md#getmaintenance) | **GET** /maintenance | Get current maintenance info
[**setMaintenance**](JSAPIUtilMaintenanceApi.md#setmaintenance) | **POST** /maintenance | Set current maintenance info
[**updateMaintenance**](JSAPIUtilMaintenanceApi.md#updatemaintenance) | **PUT** /maintenance | Update current maintenance info


# **deleteMaintenance**
```objc
-(NSURLSessionTask*) deleteMaintenanceWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Delete maintenance info

<b>Permissions Needed:</b> MAINTENANCE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIUtilMaintenanceApi*apiInstance = [[JSAPIUtilMaintenanceApi alloc] init];

// Delete maintenance info
[apiInstance deleteMaintenanceWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilMaintenanceApi->deleteMaintenance: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMaintenance**
```objc
-(NSURLSessionTask*) getMaintenanceWithCompletionHandler: 
        (void (^)(JSAPIMaintenance* output, NSError* error)) handler;
```

Get current maintenance info

Get current maintenance info. 404 if no maintenance. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIUtilMaintenanceApi*apiInstance = [[JSAPIUtilMaintenanceApi alloc] init];

// Get current maintenance info
[apiInstance getMaintenanceWithCompletionHandler: 
          ^(JSAPIMaintenance* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilMaintenanceApi->getMaintenance: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPIMaintenance***](JSAPIMaintenance.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setMaintenance**
```objc
-(NSURLSessionTask*) setMaintenanceWithMaintenance: (JSAPIMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Set current maintenance info

<b>Permissions Needed:</b> MAINTENANCE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMaintenance* maintenance = [[JSAPIMaintenance alloc] init]; // The maintenance object (optional)

JSAPIUtilMaintenanceApi*apiInstance = [[JSAPIUtilMaintenanceApi alloc] init];

// Set current maintenance info
[apiInstance setMaintenanceWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilMaintenanceApi->setMaintenance: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**JSAPIMaintenance***](JSAPIMaintenance.md)| The maintenance object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMaintenance**
```objc
-(NSURLSessionTask*) updateMaintenanceWithMaintenance: (JSAPIMaintenance*) maintenance
        completionHandler: (void (^)(NSError* error)) handler;
```

Update current maintenance info

<b>Permissions Needed:</b> MAINTENANCE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMaintenance* maintenance = [[JSAPIMaintenance alloc] init]; // The maintenance object (optional)

JSAPIUtilMaintenanceApi*apiInstance = [[JSAPIUtilMaintenanceApi alloc] init];

// Update current maintenance info
[apiInstance updateMaintenanceWithMaintenance:maintenance
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilMaintenanceApi->updateMaintenance: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **maintenance** | [**JSAPIMaintenance***](JSAPIMaintenance.md)| The maintenance object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

