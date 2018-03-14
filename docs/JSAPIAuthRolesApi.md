# JSAPIAuthRolesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRole**](JSAPIAuthRolesApi.md#createrole) | **POST** /auth/roles | Create a new role
[**deleteRole**](JSAPIAuthRolesApi.md#deleterole) | **DELETE** /auth/roles/{role} | Delete a role
[**getClientRoles**](JSAPIAuthRolesApi.md#getclientroles) | **GET** /auth/clients/{client_key}/roles | Get roles for a client
[**getRole**](JSAPIAuthRolesApi.md#getrole) | **GET** /auth/roles/{role} | Get a single role
[**getRoles**](JSAPIAuthRolesApi.md#getroles) | **GET** /auth/roles | List and search roles
[**getUserRoles**](JSAPIAuthRolesApi.md#getuserroles) | **GET** /auth/users/{user_id}/roles | Get roles for a user
[**setClientRoles**](JSAPIAuthRolesApi.md#setclientroles) | **PUT** /auth/clients/{client_key}/roles | Set roles for a client
[**setPermissionsForRole**](JSAPIAuthRolesApi.md#setpermissionsforrole) | **PUT** /auth/roles/{role}/permissions | Set permissions for a role
[**setUserRoles**](JSAPIAuthRolesApi.md#setuserroles) | **PUT** /auth/users/{user_id}/roles | Set roles for a user
[**updateRole**](JSAPIAuthRolesApi.md#updaterole) | **PUT** /auth/roles/{role} | Update a role


# **createRole**
```objc
-(NSURLSessionTask*) createRoleWithRoleResource: (JSAPIRoleResource*) roleResource
        completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;
```

Create a new role

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIRoleResource* roleResource = [[JSAPIRoleResource alloc] init]; // The role resource object (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Create a new role
[apiInstance createRoleWithRoleResource:roleResource
          completionHandler: ^(JSAPIRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->createRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **roleResource** | [**JSAPIRoleResource***](JSAPIRoleResource.md)| The role resource object | [optional] 

### Return type

[**JSAPIRoleResource***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
NSNumber* force = @true; // If true, removes role from users/clients (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Delete a role
[apiInstance deleteRoleWithRole:role
              force:force
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->deleteRole: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getClientRoles**
```objc
-(NSURLSessionTask*) getClientRolesWithClientKey: (NSString*) clientKey
        completionHandler: (void (^)(NSArray<JSAPIRoleResource>* output, NSError* error)) handler;
```

Get roles for a client

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The client key

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Get roles for a client
[apiInstance getClientRolesWithClientKey:clientKey
          completionHandler: ^(NSArray<JSAPIRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->getClientRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The client key | 

### Return type

[**NSArray<JSAPIRoleResource>***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRole**
```objc
-(NSURLSessionTask*) getRoleWithRole: (NSString*) role
        completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;
```

Get a single role

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Get a single role
[apiInstance getRoleWithRole:role
          completionHandler: ^(JSAPIRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->getRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 

### Return type

[**JSAPIRoleResource***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRoles**
```objc
-(NSURLSessionTask*) getRolesWithFilterName: (NSString*) filterName
    filterRole: (NSString*) filterRole
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceRoleResource_* output, NSError* error)) handler;
```

List and search roles

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for roles that have a name starting with specified string (optional)
NSString* filterRole = @"filterRole_example"; // Filter for roles that have a role starting with specified string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// List and search roles
[apiInstance getRolesWithFilterName:filterName
              filterRole:filterRole
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceRoleResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->getRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filter for roles that have a name starting with specified string | [optional] 
 **filterRole** | **NSString***| Filter for roles that have a role starting with specified string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceRoleResource_***](JSAPIPageResourceRoleResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRoles**
```objc
-(NSURLSessionTask*) getUserRolesWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<JSAPIRoleResource>* output, NSError* error)) handler;
```

Get roles for a user

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Get roles for a user
[apiInstance getUserRolesWithUserId:userId
          completionHandler: ^(NSArray<JSAPIRoleResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->getUserRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 

### Return type

[**NSArray<JSAPIRoleResource>***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setClientRoles**
```objc
-(NSURLSessionTask*) setClientRolesWithClientKey: (NSString*) clientKey
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler;
```

Set roles for a client

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* clientKey = @"clientKey_example"; // The client key
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Set roles for a client
[apiInstance setClientRolesWithClientKey:clientKey
              rolesList:rolesList
          completionHandler: ^(JSAPIClientResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->setClientRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **clientKey** | **NSString***| The client key | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

[**JSAPIClientResource***](JSAPIClientResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPermissionsForRole**
```objc
-(NSURLSessionTask*) setPermissionsForRoleWithRole: (NSString*) role
    permissionsList: (NSArray<NSString*>*) permissionsList
        completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;
```

Set permissions for a role

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
NSArray<NSString*>* permissionsList = @[[[NSArray<NSString> alloc] init]]; // The list of unique permissions (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Set permissions for a role
[apiInstance setPermissionsForRoleWithRole:role
              permissionsList:permissionsList
          completionHandler: ^(JSAPIRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->setPermissionsForRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **permissionsList** | **NSArray&lt;NSString*&gt;***| The list of unique permissions | [optional] 

### Return type

[**JSAPIRoleResource***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserRoles**
```objc
-(NSURLSessionTask*) setUserRolesWithUserId: (NSNumber*) userId
    rolesList: (NSArray<NSString*>*) rolesList
        completionHandler: (void (^)(JSAPIUserResource* output, NSError* error)) handler;
```

Set roles for a user

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSArray<NSString*>* rolesList = @[[[NSArray<NSString> alloc] init]]; // The list of unique roles (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Set roles for a user
[apiInstance setUserRolesWithUserId:userId
              rolesList:rolesList
          completionHandler: ^(JSAPIUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->setUserRoles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **rolesList** | **NSArray&lt;NSString*&gt;***| The list of unique roles | [optional] 

### Return type

[**JSAPIUserResource***](JSAPIUserResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRole**
```objc
-(NSURLSessionTask*) updateRoleWithRole: (NSString*) role
    roleResource: (JSAPIRoleResource*) roleResource
        completionHandler: (void (^)(JSAPIRoleResource* output, NSError* error)) handler;
```

Update a role

<b>Permissions Needed:</b> ROLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* role = @"role_example"; // The role value
JSAPIRoleResource* roleResource = [[JSAPIRoleResource alloc] init]; // The role resource object (optional)

JSAPIAuthRolesApi*apiInstance = [[JSAPIAuthRolesApi alloc] init];

// Update a role
[apiInstance updateRoleWithRole:role
              roleResource:roleResource
          completionHandler: ^(JSAPIRoleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAuthRolesApi->updateRole: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **role** | **NSString***| The role value | 
 **roleResource** | [**JSAPIRoleResource***](JSAPIRoleResource.md)| The role resource object | [optional] 

### Return type

[**JSAPIRoleResource***](JSAPIRoleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

