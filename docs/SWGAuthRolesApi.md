# SWGAuthRolesApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRole**](SWGAuthRolesApi.md#createrole) | **POST** /auth/roles | Create a new role
[**deleteRole**](SWGAuthRolesApi.md#deleterole) | **DELETE** /auth/roles/{role} | Delete a role
[**getClientRoles**](SWGAuthRolesApi.md#getclientroles) | **GET** /auth/clients/{client_key}/roles | Get roles for a client
[**getRole**](SWGAuthRolesApi.md#getrole) | **GET** /auth/roles/{role} | Get a single role
[**getRoles**](SWGAuthRolesApi.md#getroles) | **GET** /auth/roles | List and search roles
[**getUserRoles**](SWGAuthRolesApi.md#getuserroles) | **GET** /auth/users/{user_id}/roles | Get roles for a user
[**setClientRoles**](SWGAuthRolesApi.md#setclientroles) | **PUT** /auth/clients/{client_key}/roles | Set roles for a client
[**setPermissionsForRole**](SWGAuthRolesApi.md#setpermissionsforrole) | **PUT** /auth/roles/{role}/permissions | Set permissions for a role
[**setUserRoles**](SWGAuthRolesApi.md#setuserroles) | **PUT** /auth/users/{user_id}/roles | Set roles for a user
[**updateRole**](SWGAuthRolesApi.md#updaterole) | **PUT** /auth/roles/{role} | Update a role


# **createRole**
```objc
-(NSURLSessionTask*) createRoleWithRoleResource: (SWGRoleResource*) roleResource
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Create a new role

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRoleResource* roleResource = [[SWGRoleResource alloc] init]; // The role resource object (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Create a new role
[apiInstance createRoleWithRoleResource:roleResource
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->createRole: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRole**
```objc
-(NSURLSessionTask*) deleteRoleWithRole: (NSString*) role
    force: (NSNumber*) force
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a role

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
NSNumber* force = @true; // If true, removes role from users/clients (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Delete a role
[apiInstance deleteRoleWithRole:role
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->deleteRole: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientRoles**
```objc
-(NSURLSessionTask*) getClientRolesWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;
```

Get roles for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The client key

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get roles for a client
[apiInstance getClientRolesWithClientKey:clientKey
          completionHandler: ^(NSArray<SWGRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getClientRoles: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRole**
```objc
-(NSURLSessionTask*) getRoleWithRole: (NSString*) role
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Get a single role

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get a single role
[apiInstance getRoleWithRole:role
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getRole: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRoles**
```objc
-(NSURLSessionTask*) getRolesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceRoleResource_* output, NSError* error)) handler;
```

List and search roles

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// List and search roles
[apiInstance getRolesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceRoleResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**SWGPageResourceRoleResource_***](SWGPageResourceRoleResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRoles**
```objc
-(NSURLSessionTask*) getUserRolesWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;
```

Get roles for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Get roles for a user
[apiInstance getUserRolesWithUserId:userId
          completionHandler: ^(NSArray<SWGRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->getUserRoles: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setClientRoles**
```objc
-(NSURLSessionTask*) setClientRolesWithClientKey: (NSString*) clientKey
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(SWGClientResource* output, NSError* error)) handler;
```

Set roles for a client

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The client key
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set roles for a client
[apiInstance setClientRolesWithClientKey:clientKey
              rolesList:rolesList
          completionHandler: ^(SWGClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->setClientRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The client key | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

[**SWGClientResource***](SWGClientResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPermissionsForRole**
```objc
-(NSURLSessionTask*) setPermissionsForRoleWithRole: (NSString*) role
    permissionsList: (NSArray<NSString*>*) permissionsList
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Set permissions for a role

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
NSArray<NSString*>* permissionsList = @[[[NSArray<NSString> alloc] init]]; // The list of unique permissions (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set permissions for a role
[apiInstance setPermissionsForRoleWithRole:role
              permissionsList:permissionsList
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->setPermissionsForRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **permissionsList** | **NSArray&lt;NSString*&gt;***| The list of unique permissions | [optional] 

### Return type

[**SWGRoleResource***](SWGRoleResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserRoles**
```objc
-(NSURLSessionTask*) setUserRolesWithUserId: (NSNumber*) userId
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(SWGUserResource* output, NSError* error)) handler;
```

Set roles for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Set roles for a user
[apiInstance setUserRolesWithUserId:userId
              rolesList:rolesList
          completionHandler: ^(SWGUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->setUserRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

[**SWGUserResource***](SWGUserResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRole**
```objc
-(NSURLSessionTask*) updateRoleWithRole: (NSString*) role
    roleResource: (SWGRoleResource*) roleResource
        completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;
```

Update a role

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
SWGRoleResource* roleResource = [[SWGRoleResource alloc] init]; // The role resource object (optional)

SWGAuthRolesApi*apiInstance = [[SWGAuthRolesApi alloc] init];

// Update a role
[apiInstance updateRoleWithRole:role
              roleResource:roleResource
          completionHandler: ^(SWGRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAuthRolesApi->updateRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **roleResource** | [**SWGRoleResource***](SWGRoleResource*.md)| The role resource object | [optional] 

### Return type

[**SWGRoleResource***](SWGRoleResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

