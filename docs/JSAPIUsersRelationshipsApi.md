# JSAPIUsersRelationshipsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createUserRelationship**](JSAPIUsersRelationshipsApi.md#createuserrelationship) | **POST** /users/relationships | Create a user relationship
[**deleteUserRelationship**](JSAPIUsersRelationshipsApi.md#deleteuserrelationship) | **DELETE** /users/relationships/{id} | Delete a user relationship
[**getUserRelationship**](JSAPIUsersRelationshipsApi.md#getuserrelationship) | **GET** /users/relationships/{id} | Get a user relationship
[**getUserRelationships**](JSAPIUsersRelationshipsApi.md#getuserrelationships) | **GET** /users/relationships | Get a list of user relationships
[**updateUserRelationship**](JSAPIUsersRelationshipsApi.md#updateuserrelationship) | **PUT** /users/relationships/{id} | Update a user relationship


# **createUserRelationship**
```objc
-(NSURLSessionTask*) createUserRelationshipWithRelationship: (JSAPIUserRelationshipResource*) relationship
        completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;
```

Create a user relationship

<b>Permissions Needed:</b> RELATIONSHIPS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIUserRelationshipResource* relationship = [[JSAPIUserRelationshipResource alloc] init]; // The new relationship (optional)

JSAPIUsersRelationshipsApi*apiInstance = [[JSAPIUsersRelationshipsApi alloc] init];

// Create a user relationship
[apiInstance createUserRelationshipWithRelationship:relationship
          completionHandler: ^(JSAPIUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersRelationshipsApi->createUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **relationship** | [**JSAPIUserRelationshipResource***](JSAPIUserRelationshipResource.md)| The new relationship | [optional] 

### Return type

[**JSAPIUserRelationshipResource***](JSAPIUserRelationshipResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteUserRelationship**
```objc
-(NSURLSessionTask*) deleteUserRelationshipWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a user relationship

<b>Permissions Needed:</b> RELATIONSHIPS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship

JSAPIUsersRelationshipsApi*apiInstance = [[JSAPIUsersRelationshipsApi alloc] init];

// Delete a user relationship
[apiInstance deleteUserRelationshipWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersRelationshipsApi->deleteUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the relationship | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRelationship**
```objc
-(NSURLSessionTask*) getUserRelationshipWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;
```

Get a user relationship

<b>Permissions Needed:</b> RELATIONSHIPS_USER or RELATIONSHIPS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship

JSAPIUsersRelationshipsApi*apiInstance = [[JSAPIUsersRelationshipsApi alloc] init];

// Get a user relationship
[apiInstance getUserRelationshipWithId:_id
          completionHandler: ^(JSAPIUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersRelationshipsApi->getUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the relationship | 

### Return type

[**JSAPIUserRelationshipResource***](JSAPIUserRelationshipResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRelationships**
```objc
-(NSURLSessionTask*) getUserRelationshipsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserRelationshipResource_* output, NSError* error)) handler;
```

Get a list of user relationships

<b>Permissions Needed:</b> RELATIONSHIPS_USER or RELATIONSHIPS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIUsersRelationshipsApi*apiInstance = [[JSAPIUsersRelationshipsApi alloc] init];

// Get a list of user relationships
[apiInstance getUserRelationshipsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersRelationshipsApi->getUserRelationships: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceUserRelationshipResource_***](JSAPIPageResourceUserRelationshipResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserRelationship**
```objc
-(NSURLSessionTask*) updateUserRelationshipWithId: (NSNumber*) _id
    relationship: (JSAPIUserRelationshipResource*) relationship
        completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;
```

Update a user relationship

<b>Permissions Needed:</b> RELATIONSHIPS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship
JSAPIUserRelationshipResource* relationship = [[JSAPIUserRelationshipResource alloc] init]; // The new relationship (optional)

JSAPIUsersRelationshipsApi*apiInstance = [[JSAPIUsersRelationshipsApi alloc] init];

// Update a user relationship
[apiInstance updateUserRelationshipWithId:_id
              relationship:relationship
          completionHandler: ^(JSAPIUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersRelationshipsApi->updateUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the relationship | 
 **relationship** | [**JSAPIUserRelationshipResource***](JSAPIUserRelationshipResource.md)| The new relationship | [optional] 

### Return type

[**JSAPIUserRelationshipResource***](JSAPIUserRelationshipResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

