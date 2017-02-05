# SWGUsersRelationshipsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addRelationshipUsingPOST**](SWGUsersRelationshipsApi.md#addrelationshipusingpost) | **POST** /users/relationships | Create a user relationship
[**deleteRelationshipUsingDELETE**](SWGUsersRelationshipsApi.md#deleterelationshipusingdelete) | **DELETE** /users/relationships/{id} | Delete a user relationship
[**getRelationshipUsingGET**](SWGUsersRelationshipsApi.md#getrelationshipusingget) | **GET** /users/relationships/{id} | Get a user relationship
[**getRelationshipsUsingGET**](SWGUsersRelationshipsApi.md#getrelationshipsusingget) | **GET** /users/relationships | Get a list of user relationships
[**updateRelationshipUsingPUT**](SWGUsersRelationshipsApi.md#updaterelationshipusingput) | **PUT** /users/relationships/{id} | Update a user relationship


# **addRelationshipUsingPOST**
```objc
-(NSURLSessionTask*) addRelationshipUsingPOSTWithRelationship: (SWGUserRelationshipResource*) relationship
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
[apiInstance addRelationshipUsingPOSTWithRelationship:relationship
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->addRelationshipUsingPOST: %@", error);
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

# **deleteRelationshipUsingDELETE**
```objc
-(NSURLSessionTask*) deleteRelationshipUsingDELETEWithId: (NSNumber*) _id
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
[apiInstance deleteRelationshipUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->deleteRelationshipUsingDELETE: %@", error);
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

# **getRelationshipUsingGET**
```objc
-(NSURLSessionTask*) getRelationshipUsingGETWithId: (NSNumber*) _id
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
[apiInstance getRelationshipUsingGETWithId:_id
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->getRelationshipUsingGET: %@", error);
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

# **getRelationshipsUsingGET**
```objc
-(NSURLSessionTask*) getRelationshipsUsingGETWithCompletionHandler: 
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
[apiInstance getRelationshipsUsingGETWithCompletionHandler: 
          ^(SWGPageResourceUserRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->getRelationshipsUsingGET: %@", error);
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

# **updateRelationshipUsingPUT**
```objc
-(NSURLSessionTask*) updateRelationshipUsingPUTWithId: (NSNumber*) _id
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
[apiInstance updateRelationshipUsingPUTWithId:_id
              relationship:relationship
          completionHandler: ^(SWGUserRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersRelationshipsApi->updateRelationshipUsingPUT: %@", error);
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

