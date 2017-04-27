# JSAPIAuthPermissionsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPermission**](JSAPIAuthPermissionsApi.md#createpermission) | **POST** /auth/permissions | Create a new permission
[**deletePermission**](JSAPIAuthPermissionsApi.md#deletepermission) | **DELETE** /auth/permissions/{permission} | Delete a permission
[**getPermission**](JSAPIAuthPermissionsApi.md#getpermission) | **GET** /auth/permissions/{permission} | Get a single permission
[**getPermissions**](JSAPIAuthPermissionsApi.md#getpermissions) | **GET** /auth/permissions | List and search permissions
[**updatePermission**](JSAPIAuthPermissionsApi.md#updatepermission) | **PUT** /auth/permissions/{permission} | Update a permission


# **createPermission**
```objc
-(NSURLSessionTask*) createPermissionWithPermissionResource: (JSAPIPermissionResource*) permissionResource
        completionHandler: (void (^)(JSAPIPermissionResource* output, NSError* error)) handler;
```

Create a new permission

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIPermissionResource* permissionResource = [[JSAPIPermissionResource alloc] init]; // The permission resource object (optional)

JSAPIAuthPermissionsApi*apiInstance = [[JSAPIAuthPermissionsApi alloc] init];

// Create a new permission
[apiInstance createPermissionWithPermissionResource:permissionResource
          completionHandler: ^(JSAPIPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthPermissionsApi->createPermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permissionResource** | [**JSAPIPermissionResource***](JSAPIPermissionResource*.md)| The permission resource object | [optional] 

### Return type

[**JSAPIPermissionResource***](JSAPIPermissionResource.md)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
NSNumber* force = @true; // If true, removes permission assigned to roles (optional)

JSAPIAuthPermissionsApi*apiInstance = [[JSAPIAuthPermissionsApi alloc] init];

// Delete a permission
[apiInstance deletePermissionWithPermission:permission
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthPermissionsApi->deletePermission: %@", error);
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
        completionHandler: (void (^)(JSAPIPermissionResource* output, NSError* error)) handler;
```

Get a single permission

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value

JSAPIAuthPermissionsApi*apiInstance = [[JSAPIAuthPermissionsApi alloc] init];

// Get a single permission
[apiInstance getPermissionWithPermission:permission
          completionHandler: ^(JSAPIPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthPermissionsApi->getPermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 

### Return type

[**JSAPIPermissionResource***](JSAPIPermissionResource.md)

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
        completionHandler: (void (^)(JSAPIPageResourcePermissionResource_* output, NSError* error)) handler;
```

List and search permissions

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"permission:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to permission:ASC)

JSAPIAuthPermissionsApi*apiInstance = [[JSAPIAuthPermissionsApi alloc] init];

// List and search permissions
[apiInstance getPermissionsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourcePermissionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthPermissionsApi->getPermissions: %@", error);
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

[**JSAPIPageResourcePermissionResource_***](JSAPIPageResourcePermissionResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePermission**
```objc
-(NSURLSessionTask*) updatePermissionWithPermission: (NSString*) permission
    permissionResource: (JSAPIPermissionResource*) permissionResource
        completionHandler: (void (^)(JSAPIPermissionResource* output, NSError* error)) handler;
```

Update a permission

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
JSAPIPermissionResource* permissionResource = [[JSAPIPermissionResource alloc] init]; // The permission resource object (optional)

JSAPIAuthPermissionsApi*apiInstance = [[JSAPIAuthPermissionsApi alloc] init];

// Update a permission
[apiInstance updatePermissionWithPermission:permission
              permissionResource:permissionResource
          completionHandler: ^(JSAPIPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthPermissionsApi->updatePermission: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 
 **permissionResource** | [**JSAPIPermissionResource***](JSAPIPermissionResource*.md)| The permission resource object | [optional] 

### Return type

[**JSAPIPermissionResource***](JSAPIPermissionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

