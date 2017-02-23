# SWGAuthPermissionsApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPermission**](SWGAuthPermissionsApi.md#createpermission) | **POST** /auth/permissions | Create a new permission
[**deletePermission**](SWGAuthPermissionsApi.md#deletepermission) | **DELETE** /auth/permissions/{permission} | Delete a permission
[**getPermission**](SWGAuthPermissionsApi.md#getpermission) | **GET** /auth/permissions/{permission} | Get a single permission
[**getPermissions**](SWGAuthPermissionsApi.md#getpermissions) | **GET** /auth/permissions | List and search permissions
[**updatePermission**](SWGAuthPermissionsApi.md#updatepermission) | **PUT** /auth/permissions/{permission} | Update a permission


# **createPermission**
```objc
-(NSURLSessionTask*) createPermissionWithPermissionResource: (SWGPermissionResource*) permissionResource
        completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;
```

Create a new permission

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGPermissionResource* permissionResource = [[SWGPermissionResource alloc] init]; // The permission resource object (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Create a new permission
[apiInstance createPermissionWithPermissionResource:permissionResource
          completionHandler: ^(SWGPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->createPermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permissionResource** | [**SWGPermissionResource***](SWGPermissionResource*.md)| The permission resource object | [optional] 

### Return type

[**SWGPermissionResource***](SWGPermissionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePermission**
```objc
-(NSURLSessionTask*) deletePermissionWithPermission: (NSString*) permission
    force: (NSNumber*) force
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a permission

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
NSNumber* force = @true; // If true, removes permission assigned to roles (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Delete a permission
[apiInstance deletePermissionWithPermission:permission
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->deletePermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 
 **force** | **NSNumber***| If true, removes permission assigned to roles | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPermission**
```objc
-(NSURLSessionTask*) getPermissionWithPermission: (NSString*) permission
        completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;
```

Get a single permission

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Get a single permission
[apiInstance getPermissionWithPermission:permission
          completionHandler: ^(SWGPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->getPermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 

### Return type

[**SWGPermissionResource***](SWGPermissionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPermissions**
```objc
-(NSURLSessionTask*) getPermissionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourcePermissionResource_* output, NSError* error)) handler;
```

List and search permissions

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"permission:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to permission:ASC)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// List and search permissions
[apiInstance getPermissionsWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourcePermissionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->getPermissions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to permission:ASC]

### Return type

[**SWGPageResourcePermissionResource_***](SWGPageResourcePermissionResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePermission**
```objc
-(NSURLSessionTask*) updatePermissionWithPermission: (NSString*) permission
    permissionResource: (SWGPermissionResource*) permissionResource
        completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;
```

Update a permission

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
SWGPermissionResource* permissionResource = [[SWGPermissionResource alloc] init]; // The permission resource object (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Update a permission
[apiInstance updatePermissionWithPermission:permission
              permissionResource:permissionResource
          completionHandler: ^(SWGPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->updatePermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 
 **permissionResource** | [**SWGPermissionResource***](SWGPermissionResource*.md)| The permission resource object | [optional] 

### Return type

[**SWGPermissionResource***](SWGPermissionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

