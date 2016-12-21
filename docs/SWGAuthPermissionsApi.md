# SWGAuthPermissionsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createPermissionUsingPOST**](SWGAuthPermissionsApi.md#createpermissionusingpost) | **POST** /auth/permissions | Create a new permission
[**deletePermissionUsingDELETE**](SWGAuthPermissionsApi.md#deletepermissionusingdelete) | **DELETE** /auth/permissions/{permission} | Delete a permission
[**getPermissionUsingGET**](SWGAuthPermissionsApi.md#getpermissionusingget) | **GET** /auth/permissions/{permission} | Get a single permission
[**getPermissionUsingGET1**](SWGAuthPermissionsApi.md#getpermissionusingget1) | **GET** /auth/permissions | List and search permissions
[**updatePermissionUsingPUT**](SWGAuthPermissionsApi.md#updatepermissionusingput) | **PUT** /auth/permissions/{permission} | Update a permission


# **createPermissionUsingPOST**
```objc
-(NSNumber*) createPermissionUsingPOSTWithPermissionResource: (SWGPermissionResource*) permissionResource
        completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;
```

Create a new permission

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGPermissionResource* permissionResource = [[SWGPermissionResource alloc] init]; // The permission resource object (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Create a new permission
[apiInstance createPermissionUsingPOSTWithPermissionResource:permissionResource
          completionHandler: ^(SWGPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->createPermissionUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePermissionUsingDELETE**
```objc
-(NSNumber*) deletePermissionUsingDELETEWithPermission: (NSString*) permission
    force: (NSNumber*) force
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a permission

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
NSNumber* force = @true; // If true, removes permission assigned to roles (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Delete a permission
[apiInstance deletePermissionUsingDELETEWithPermission:permission
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->deletePermissionUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPermissionUsingGET**
```objc
-(NSNumber*) getPermissionUsingGETWithPermission: (NSString*) permission
        completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;
```

Get a single permission

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Get a single permission
[apiInstance getPermissionUsingGETWithPermission:permission
          completionHandler: ^(SWGPermissionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->getPermissionUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPermissionUsingGET1**
```objc
-(NSNumber*) getPermissionUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourcePermissionResource_* output, NSError* error)) handler;
```

List and search permissions

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"permission:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to permission:ASC)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// List and search permissions
[apiInstance getPermissionUsingGET1WithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourcePermissionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->getPermissionUsingGET1: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePermissionUsingPUT**
```objc
-(NSNumber*) updatePermissionUsingPUTWithPermission: (NSString*) permission
    permissionResource: (SWGPermissionResource*) permissionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a permission

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* permission = @"permission_example"; // The permission value
SWGPermissionResource* permissionResource = [[SWGPermissionResource alloc] init]; // The permission resource object (optional)

SWGAuthPermissionsApi*apiInstance = [[SWGAuthPermissionsApi alloc] init];

// Update a permission
[apiInstance updatePermissionUsingPUTWithPermission:permission
              permissionResource:permissionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthPermissionsApi->updatePermissionUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **permission** | **NSString***| The permission value | 
 **permissionResource** | [**SWGPermissionResource***](SWGPermissionResource*.md)| The permission resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

