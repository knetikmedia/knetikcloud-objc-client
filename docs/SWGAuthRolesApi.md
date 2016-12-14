# SWGAuthRolesApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**assignClientRolesUsingPUT**](SWGAuthRolesApi.md#assignclientrolesusingput) | **PUT** /auth/clients/{client_key}/roles | Set roles for a client
[**assignPermissionsUsingPUT**](SWGAuthRolesApi.md#assignpermissionsusingput) | **PUT** /auth/roles/{role}/permissions | Set permissions for a role
[**assignUserRolesExternalUsingPUT**](SWGAuthRolesApi.md#assignuserrolesexternalusingput) | **PUT** /auth/users/{user_id}/roles | Set roles for a user
[**createRoleUsingPOST**](SWGAuthRolesApi.md#createroleusingpost) | **POST** /auth/roles | Create a new role
[**deleteRoleUsingDELETE**](SWGAuthRolesApi.md#deleteroleusingdelete) | **DELETE** /auth/roles/{role} | Delete a role
[**getClientRolesUsingGET**](SWGAuthRolesApi.md#getclientrolesusingget) | **GET** /auth/clients/{client_key}/roles | Get roles for a client
[**getRoleUsingGET**](SWGAuthRolesApi.md#getroleusingget) | **GET** /auth/roles/{role} | Get a single role
[**getRolesUsingGET**](SWGAuthRolesApi.md#getrolesusingget) | **GET** /auth/roles | List and search roles
[**getUserRolesUsingGET**](SWGAuthRolesApi.md#getuserrolesusingget) | **GET** /auth/users/{user_id}/roles | Get roles for a user
[**updateRoleUsingPUT**](SWGAuthRolesApi.md#updateroleusingput) | **PUT** /auth/roles/{role} | Update a role


# **assignClientRolesUsingPUT**
```objc
-(NSNumber*) assignClientRolesUsingPUTWithClientKey: (NSString*) clientKey
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set roles for a client

### Example 
```objc

NSString* clientKey = @"clientKey_example"; // The client key
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set roles for a client
[apiInstance assignClientRolesUsingPUTWithClientKey:clientKey
              rolesList:rolesList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->assignClientRolesUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The client key | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **assignPermissionsUsingPUT**
```objc
-(NSNumber*) assignPermissionsUsingPUTWithRole: (NSString*) role
    permissionsList: (NSArray<NSString*>*) permissionsList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set permissions for a role

### Example 
```objc

NSString* role = @"role_example"; // The role value
NSArray<NSString*>* permissionsList = @[[[NSArray<NSString> alloc] init]]; // The list of unique permissions (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set permissions for a role
[apiInstance assignPermissionsUsingPUTWithRole:role
              permissionsList:permissionsList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->assignPermissionsUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **permissionsList** | **NSArray&lt;NSString*&gt;***| The list of unique permissions | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **assignUserRolesExternalUsingPUT**
```objc
-(NSNumber*) assignUserRolesExternalUsingPUTWithUserId: (NSNumber*) userId
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(NSError* error)) handler;
```

Set roles for a user

### Example 
```objc

NSNumber* userId = @56; // The user's id
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set roles for a user
[apiInstance assignUserRolesExternalUsingPUTWithUserId:userId
              rolesList:rolesList
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->assignUserRolesExternalUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createRoleUsingPOST**
```objc
-(NSNumber*) createRoleUsingPOSTWithRoleResource: (SWGRoleResource*) roleResource
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Create a new role

### Example 
```objc

SWGRoleResource* roleResource = [[SWGRoleResource alloc] init]; // The role resource object (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Create a new role
[apiInstance createRoleUsingPOSTWithRoleResource:roleResource
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->createRoleUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **roleResource** | [**SWGRoleResource***](SWGRoleResource*.md)| The role resource object | [optional] 

### Return type

[**SWGRoleResource***](SWGRoleResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRoleUsingDELETE**
```objc
-(NSNumber*) deleteRoleUsingDELETEWithRole: (NSString*) role
    force: (NSNumber*) force
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a role

### Example 
```objc

NSString* role = @"role_example"; // The role value
NSNumber* force = @true; // If true, removes role from users/clients (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Delete a role
[apiInstance deleteRoleUsingDELETEWithRole:role
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->deleteRoleUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **force** | **NSNumber***| If true, removes role from users/clients | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientRolesUsingGET**
```objc
-(NSNumber*) getClientRolesUsingGETWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;
```

Get roles for a client

### Example 
```objc

NSString* clientKey = @"clientKey_example"; // The client key

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get roles for a client
[apiInstance getClientRolesUsingGETWithClientKey:clientKey
          completionHandler: ^(NSArray<SWGRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getClientRolesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The client key | 

### Return type

[**NSArray<SWGRoleResource>***](SWGRoleResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRoleUsingGET**
```objc
-(NSNumber*) getRoleUsingGETWithRole: (NSString*) role
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Get a single role

### Example 
```objc

NSString* role = @"role_example"; // The role value

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get a single role
[apiInstance getRoleUsingGETWithRole:role
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getRoleUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 

### Return type

[**SWGRoleResource***](SWGRoleResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRolesUsingGET**
```objc
-(NSNumber*) getRolesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageRoleResource_* output, NSError* error)) handler;
```

List and search roles

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// List and search roles
[apiInstance getRolesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageRoleResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getRolesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageRoleResource_***](SWGPageRoleResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRolesUsingGET**
```objc
-(NSNumber*) getUserRolesUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;
```

Get roles for a user

### Example 
```objc

NSNumber* userId = @56; // The user's id

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get roles for a user
[apiInstance getUserRolesUsingGETWithUserId:userId
          completionHandler: ^(NSArray<SWGRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getUserRolesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 

### Return type

[**NSArray<SWGRoleResource>***](SWGRoleResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRoleUsingPUT**
```objc
-(NSNumber*) updateRoleUsingPUTWithRole: (NSString*) role
    roleResource: (SWGRoleResource*) roleResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a role

### Example 
```objc

NSString* role = @"role_example"; // The role value
SWGRoleResource* roleResource = [[SWGRoleResource alloc] init]; // The role resource object (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Update a role
[apiInstance updateRoleUsingPUTWithRole:role
              roleResource:roleResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->updateRoleUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **roleResource** | [**SWGRoleResource***](SWGRoleResource*.md)| The role resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

