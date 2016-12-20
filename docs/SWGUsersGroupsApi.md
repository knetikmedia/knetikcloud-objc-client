# SWGUsersGroupsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addGroupUsingPOST**](SWGUsersGroupsApi.md#addgroupusingpost) | **POST** /users/groups | Adds a new group in the system
[**addMemberUsingPOST**](SWGUsersGroupsApi.md#addmemberusingpost) | **POST** /users/groups/{unique_name}/members | Adds a new member to the group
[**createGroupTemplateUsingPOST**](SWGUsersGroupsApi.md#creategrouptemplateusingpost) | **POST** /users/groups/templates | Create a group template
[**deleteGroupTemplateUsingDELETE**](SWGUsersGroupsApi.md#deletegrouptemplateusingdelete) | **DELETE** /users/groups/templates/{id} | Delete a group template
[**deleteGroupUsingDELETE**](SWGUsersGroupsApi.md#deletegroupusingdelete) | **DELETE** /users/groups/{unique_name}/members/{user_id} | Removes a user from a group
[**deleteGroupUsingDELETE1**](SWGUsersGroupsApi.md#deletegroupusingdelete1) | **DELETE** /users/groups/{unique_name} | Removes a group from the system IF no resources are attached to it
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
-(NSNumber*) addGroupUsingPOSTWithGroupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;
```

Adds a new group in the system

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addMemberUsingPOST**
```objc
-(NSNumber*) addMemberUsingPOSTWithUniqueName: (NSString*) uniqueName
    username: (SWGGroupMemberResource*) username
        completionHandler: (void (^)(SWGGroupMemberResource* output, NSError* error)) handler;
```

Adds a new member to the group

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroupTemplateUsingPOST**
```objc
-(NSNumber*) createGroupTemplateUsingPOSTWithGroupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a group template

Group Templates define a type of group and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupTemplateUsingDELETE**
```objc
-(NSNumber*) deleteGroupTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a group template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupUsingDELETE**
```objc
-(NSNumber*) deleteGroupUsingDELETEWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a group

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user to remove

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a user from a group
[apiInstance deleteGroupUsingDELETEWithUniqueName:uniqueName
              userId:userId
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
 **userId** | **NSNumber***| The id of the user to remove | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupUsingDELETE1**
```objc
-(NSNumber*) deleteGroupUsingDELETE1WithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a group from the system IF no resources are attached to it

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a group from the system IF no resources are attached to it
[apiInstance deleteGroupUsingDELETE1WithUniqueName:uniqueName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroupUsingDELETE1: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplateUsingGET**
```objc
-(NSNumber*) getGroupTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single group template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplatesUsingGET**
```objc
-(NSNumber*) getGroupTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageTemplateResource_* output, NSError* error)) handler;
```

List and search group templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List and search group templates
[apiInstance getGroupTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageTemplateResource_* output, NSError* error) {
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

[**SWGPageTemplateResource_***](SWGPageTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupUsingGET**
```objc
-(NSNumber*) getGroupUsingGETWithUniqueName: (NSString*) uniqueName
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchGroupsUsingGET**
```objc
-(NSNumber*) searchGroupsUsingGETWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageGroupMemberResource_* output, NSError* error)) handler;
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
          completionHandler: ^(SWGPageGroupMemberResource_* output, NSError* error) {
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

[**SWGPageGroupMemberResource_***](SWGPageGroupMemberResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchGroupsUsingGET1**
```objc
-(NSNumber*) searchGroupsUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageGroupResource_* output, NSError* error)) handler;
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
          completionHandler: ^(SWGPageGroupResource_* output, NSError* error) {
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

[**SWGPageGroupResource_***](SWGPageGroupResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupTemplateUsingPUT**
```objc
-(NSNumber*) updateGroupTemplateUsingPUTWithId: (NSString*) _id
    groupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a group template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupUsingPUT**
```objc
-(NSNumber*) updateGroupUsingPUTWithUniqueName: (NSString*) uniqueName
    groupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies a group's details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMemberStatusUsingPUT**
```objc
-(NSNumber*) updateMemberStatusUsingPUTWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (NSString*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's status

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

