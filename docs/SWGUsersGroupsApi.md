# SWGUsersGroupsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addGroupUsingPOST**](SWGUsersGroupsApi.md#addgroupusingpost) | **POST** /users/groups | Adds a new group in the system
[**addMemberUsingPOST**](SWGUsersGroupsApi.md#addmemberusingpost) | **POST** /users/groups/{unique_name}/members | Adds a new member to the group
[**createGroupTemplateUsingPOST**](SWGUsersGroupsApi.md#creategrouptemplateusingpost) | **POST** /users/groups/templates | Create a group template
[**deleteGroupMemberUsingDELETE**](SWGUsersGroupsApi.md#deletegroupmemberusingdelete) | **DELETE** /users/groups/{unique_name}/members/{user_id} | Removes a user from a group
[**deleteGroupTemplateUsingDELETE**](SWGUsersGroupsApi.md#deletegrouptemplateusingdelete) | **DELETE** /users/groups/templates/{id} | Delete a group template
[**deleteGroupUsingDELETE**](SWGUsersGroupsApi.md#deletegroupusingdelete) | **DELETE** /users/groups/{unique_name} | Removes a group from the system IF no resources are attached to it
[**getGroupListUsingGET**](SWGUsersGroupsApi.md#getgrouplistusingget) | **GET** /users/{user_id}/groups | List groups a user is in
[**getGroupMemberUsingGET**](SWGUsersGroupsApi.md#getgroupmemberusingget) | **GET** /users/groups/{unique_name}/members/{user_id} | Get a user from a group
[**getGroupTemplateUsingGET**](SWGUsersGroupsApi.md#getgrouptemplateusingget) | **GET** /users/groups/templates/{id} | Get a single group template
[**getGroupTemplatesUsingGET**](SWGUsersGroupsApi.md#getgrouptemplatesusingget) | **GET** /users/groups/templates | List and search group templates
[**getGroupUsingGET**](SWGUsersGroupsApi.md#getgroupusingget) | **GET** /users/groups/{unique_name} | Loads a specific group&#39;s details
[**searchGroupsUsingGET**](SWGUsersGroupsApi.md#searchgroupsusingget) | **GET** /users/groups/{unique_name}/members | Lists members of the group
[**searchGroupsUsingGET1**](SWGUsersGroupsApi.md#searchgroupsusingget1) | **GET** /users/groups | List and search groups
[**updateGroupTemplateUsingPUT**](SWGUsersGroupsApi.md#updategrouptemplateusingput) | **PUT** /users/groups/templates/{id} | Update a group template
[**updateGroupUsingPUT**](SWGUsersGroupsApi.md#updategroupusingput) | **PUT** /users/groups/{unique_name} | Modifies a group&#39;s details
[**updateMemberStatusUsingPUT**](SWGUsersGroupsApi.md#updatememberstatususingput) | **PUT** /users/groups/{unique_name}/members/{user_id}/status | Change a user&#39;s status


# **addGroupUsingPOST**
```objc
-(NSURLSessionTask*) addGroupUsingPOSTWithGroupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;
```

Adds a new group in the system

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGGroupResource* groupResource = [[SWGGroupResource alloc] init]; // The new group (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Adds a new group in the system
[apiInstance addGroupUsingPOSTWithGroupResource:groupResource
          completionHandler: ^(SWGGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->addGroupUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupResource** | [**SWGGroupResource***](SWGGroupResource*.md)| The new group | [optional] 

### Return type

[**SWGGroupResource***](SWGGroupResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addMemberUsingPOST**
```objc
-(NSURLSessionTask*) addMemberUsingPOSTWithUniqueName: (NSString*) uniqueName
    username: (SWGGroupMemberResource*) username
        completionHandler: (void (^)(SWGGroupMemberResource* output, NSError* error)) handler;
```

Adds a new member to the group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
SWGGroupMemberResource* username = [[SWGGroupMemberResource alloc] init]; // The username of a user to add to the group

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Adds a new member to the group
[apiInstance addMemberUsingPOSTWithUniqueName:uniqueName
              username:username
          completionHandler: ^(SWGGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->addMemberUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **username** | [**SWGGroupMemberResource***](SWGGroupMemberResource*.md)| The username of a user to add to the group | 

### Return type

[**SWGGroupMemberResource***](SWGGroupMemberResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroupTemplateUsingPOST**
```objc
-(NSURLSessionTask*) createGroupTemplateUsingPOSTWithGroupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a group template

Group Templates define a type of group and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* groupTemplateResource = [[SWGTemplateResource alloc] init]; // The group template resource object (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Create a group template
[apiInstance createGroupTemplateUsingPOSTWithGroupTemplateResource:groupTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->createGroupTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The group template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupMemberUsingDELETE**
```objc
-(NSURLSessionTask*) deleteGroupMemberUsingDELETEWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user to remove

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a user from a group
[apiInstance deleteGroupMemberUsingDELETEWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroupMemberUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The id of the user to remove | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupTemplateUsingDELETE**
```objc
-(NSURLSessionTask*) deleteGroupTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a group template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Delete a group template
[apiInstance deleteGroupTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroupTemplateUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupUsingDELETE**
```objc
-(NSURLSessionTask*) deleteGroupUsingDELETEWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a group from the system IF no resources are attached to it

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a group from the system IF no resources are attached to it
[apiInstance deleteGroupUsingDELETEWithUniqueName:uniqueName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroupUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupListUsingGET**
```objc
-(NSURLSessionTask*) getGroupListUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List groups a user is in

### Example 
```objc

NSNumber* userId = @56; // The id of the user

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List groups a user is in
[apiInstance getGroupListUsingGETWithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupListUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 

### Return type

**NSArray<NSString*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupMemberUsingGET**
```objc
-(NSURLSessionTask*) getGroupMemberUsingGETWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
        completionHandler: (void (^)(SWGGroupMemberResource* output, NSError* error)) handler;
```

Get a user from a group

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Get a user from a group
[apiInstance getGroupMemberUsingGETWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(SWGGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupMemberUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The id of the user | 

### Return type

[**SWGGroupMemberResource***](SWGGroupMemberResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplateUsingGET**
```objc
-(NSURLSessionTask*) getGroupTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single group template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Get a single group template
[apiInstance getGroupTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupTemplateUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplatesUsingGET**
```objc
-(NSURLSessionTask*) getGroupTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search group templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List and search group templates
[apiInstance getGroupTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupTemplatesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceTemplateResource_***](SWGPageResourceTemplateResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupUsingGET**
```objc
-(NSURLSessionTask*) getGroupUsingGETWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;
```

Loads a specific group's details

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Loads a specific group's details
[apiInstance getGroupUsingGETWithUniqueName:uniqueName
          completionHandler: ^(SWGGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 

### Return type

[**SWGGroupResource***](SWGGroupResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchGroupsUsingGET**
```objc
-(NSURLSessionTask*) searchGroupsUsingGETWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceGroupMemberResource_* output, NSError* error)) handler;
```

Lists members of the group

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Lists members of the group
[apiInstance searchGroupsUsingGETWithUniqueName:uniqueName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceGroupMemberResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->searchGroupsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceGroupMemberResource_***](SWGPageResourceGroupMemberResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchGroupsUsingGET1**
```objc
-(NSURLSessionTask*) searchGroupsUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceGroupResource_* output, NSError* error)) handler;
```

List and search groups

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List and search groups
[apiInstance searchGroupsUsingGET1WithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->searchGroupsUsingGET1: %@", error);
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

[**SWGPageResourceGroupResource_***](SWGPageResourceGroupResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupTemplateUsingPUT**
```objc
-(NSURLSessionTask*) updateGroupTemplateUsingPUTWithId: (NSString*) _id
    groupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a group template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* groupTemplateResource = [[SWGTemplateResource alloc] init]; // The group template resource object (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Update a group template
[apiInstance updateGroupTemplateUsingPUTWithId:_id
              groupTemplateResource:groupTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroupTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **groupTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The group template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupUsingPUT**
```objc
-(NSURLSessionTask*) updateGroupUsingPUTWithUniqueName: (NSString*) uniqueName
    groupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies a group's details

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
SWGGroupResource* groupResource = [[SWGGroupResource alloc] init]; // The updated group (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Modifies a group's details
[apiInstance updateGroupUsingPUTWithUniqueName:uniqueName
              groupResource:groupResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroupUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **groupResource** | [**SWGGroupResource***](SWGGroupResource*.md)| The updated group | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMemberStatusUsingPUT**
```objc
-(NSURLSessionTask*) updateMemberStatusUsingPUTWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (NSString*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's status

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
NSString* status = status_example; // The new status for the user

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Change a user's status
[apiInstance updateMemberStatusUsingPUTWithUniqueName:uniqueName
              userId:userId
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateMemberStatusUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The user id of the member to modify | 
 **status** | **NSString***| The new status for the user | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

