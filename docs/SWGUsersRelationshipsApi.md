# SWGUsersRelationshipsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createUserRelationship**](SWGUsersRelationshipsApi.md#createuserrelationship) | **POST** /users/relationships | Create a user relationship
[**deleteUserRelationship**](SWGUsersRelationshipsApi.md#deleteuserrelationship) | **DELETE** /users/relationships/{id} | Delete a user relationship
[**getUserRelationship**](SWGUsersRelationshipsApi.md#getuserrelationship) | **GET** /users/relationships/{id} | Get a user relationship
[**getUserRelationships**](SWGUsersRelationshipsApi.md#getuserrelationships) | **GET** /users/relationships | Get a list of user relationships
[**updateUserRelationship**](SWGUsersRelationshipsApi.md#updateuserrelationship) | **PUT** /users/relationships/{id} | Update a user relationship


# **createUserRelationship**
```objc
-(NSURLSessionTask*) createUserRelationshipWithRelationship: (SWGUserRelationshipResource*) relationship
        completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;
```

Create a user relationship

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGUserRelationshipResource* relationship = [[SWGUserRelationshipResource alloc] init]; // The new relationship (optional)

SWGUsersRelationshipsApi*apiInstance = [[SWGUsersRelationshipsApi alloc] init];

// Create a user relationship
[apiInstance createUserRelationshipWithRelationship:relationship
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->createUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **relationship** | [**SWGUserRelationshipResource***](SWGUserRelationshipResource*.md)| The new relationship | [optional] 

### Return type

[**SWGUserRelationshipResource***](SWGUserRelationshipResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

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

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship

SWGUsersRelationshipsApi*apiInstance = [[SWGUsersRelationshipsApi alloc] init];

// Delete a user relationship
[apiInstance deleteUserRelationshipWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->deleteUserRelationship: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRelationship**
```objc
-(NSURLSessionTask*) getUserRelationshipWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;
```

Get a user relationship

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship

SWGUsersRelationshipsApi*apiInstance = [[SWGUsersRelationshipsApi alloc] init];

// Get a user relationship
[apiInstance getUserRelationshipWithId:_id
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->getUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the relationship | 

### Return type

[**SWGUserRelationshipResource***](SWGUserRelationshipResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserRelationships**
```objc
-(NSURLSessionTask*) getUserRelationshipsWithCompletionHandler: 
        (void (^)(SWGPageResourceUserRelationshipResource_* output, NSError* error)) handler;
```

Get a list of user relationships

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGUsersRelationshipsApi*apiInstance = [[SWGUsersRelationshipsApi alloc] init];

// Get a list of user relationships
[apiInstance getUserRelationshipsWithCompletionHandler: 
          ^(SWGPageResourceUserRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->getUserRelationships: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGPageResourceUserRelationshipResource_***](SWGPageResourceUserRelationshipResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserRelationship**
```objc
-(NSURLSessionTask*) updateUserRelationshipWithId: (NSNumber*) _id
    relationship: (SWGUserRelationshipResource*) relationship
        completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;
```

Update a user relationship

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the relationship
SWGUserRelationshipResource* relationship = [[SWGUserRelationshipResource alloc] init]; // The new relationship (optional)

SWGUsersRelationshipsApi*apiInstance = [[SWGUsersRelationshipsApi alloc] init];

// Update a user relationship
[apiInstance updateUserRelationshipWithId:_id
              relationship:relationship
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->updateUserRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the relationship | 
 **relationship** | [**SWGUserRelationshipResource***](SWGUserRelationshipResource*.md)| The new relationship | [optional] 

### Return type

[**SWGUserRelationshipResource***](SWGUserRelationshipResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

