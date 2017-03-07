# SWGUsersGroupsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMemberToGroup**](SWGUsersGroupsApi.md#addmembertogroup) | **POST** /users/groups/{unique_name}/members | Adds a new member to the group
[**createGroup**](SWGUsersGroupsApi.md#creategroup) | **POST** /users/groups | Create a group
[**createGroupTemplate**](SWGUsersGroupsApi.md#creategrouptemplate) | **POST** /users/groups/templates | Create a group template
[**deleteGroup**](SWGUsersGroupsApi.md#deletegroup) | **DELETE** /users/groups/{unique_name} | Removes a group from the system IF no resources are attached to it
[**deleteGroupTemplate**](SWGUsersGroupsApi.md#deletegrouptemplate) | **DELETE** /users/groups/templates/{id} | Delete a group template
[**getGroup**](SWGUsersGroupsApi.md#getgroup) | **GET** /users/groups/{unique_name} | Loads a specific group&#39;s details
[**getGroupMember**](SWGUsersGroupsApi.md#getgroupmember) | **GET** /users/groups/{unique_name}/members/{user_id} | Get a user from a group
[**getGroupMembers**](SWGUsersGroupsApi.md#getgroupmembers) | **GET** /users/groups/{unique_name}/members | Lists members of the group
[**getGroupTemplate**](SWGUsersGroupsApi.md#getgrouptemplate) | **GET** /users/groups/templates/{id} | Get a single group template
[**getGroupTemplates**](SWGUsersGroupsApi.md#getgrouptemplates) | **GET** /users/groups/templates | List and search group templates
[**getGroupsForUser**](SWGUsersGroupsApi.md#getgroupsforuser) | **GET** /users/{user_id}/groups | List groups a user is in
[**removeGroupMember**](SWGUsersGroupsApi.md#removegroupmember) | **DELETE** /users/groups/{unique_name}/members/{user_id} | Removes a user from a group
[**updateGroup**](SWGUsersGroupsApi.md#updategroup) | **PUT** /users/groups/{unique_name} | Update a group
[**updateGroupMemberStatus**](SWGUsersGroupsApi.md#updategroupmemberstatus) | **PUT** /users/groups/{unique_name}/members/{user_id}/status | Change a user&#39;s status
[**updateGroupTemplate**](SWGUsersGroupsApi.md#updategrouptemplate) | **PUT** /users/groups/templates/{id} | Update a group template
[**updateGroups**](SWGUsersGroupsApi.md#updategroups) | **GET** /users/groups | List and search groups


# **addMemberToGroup**
```objc
-(NSURLSessionTask*) addMemberToGroupWithUniqueName: (NSString*) uniqueName
    username: (SWGGroupMemberResource*) username
        completionHandler: (void (^)(SWGGroupMemberResource* output, NSError* error)) handler;
```

Adds a new member to the group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
SWGGroupMemberResource* username = [[SWGGroupMemberResource alloc] init]; // The username of a user to add to the group

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Adds a new member to the group
[apiInstance addMemberToGroupWithUniqueName:uniqueName
              username:username
          completionHandler: ^(SWGGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->addMemberToGroup: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroup**
```objc
-(NSURLSessionTask*) createGroupWithGroupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;
```

Create a group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGGroupResource* groupResource = [[SWGGroupResource alloc] init]; // The new group (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Create a group
[apiInstance createGroupWithGroupResource:groupResource
          completionHandler: ^(SWGGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->createGroup: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroupTemplate**
```objc
-(NSURLSessionTask*) createGroupTemplateWithGroupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a group template

Group Templates define a type of group and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* groupTemplateResource = [[SWGTemplateResource alloc] init]; // The group template resource object (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Create a group template
[apiInstance createGroupTemplateWithGroupTemplateResource:groupTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->createGroupTemplate: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroup**
```objc
-(NSURLSessionTask*) deleteGroupWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a group from the system IF no resources are attached to it

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a group from the system IF no resources are attached to it
[apiInstance deleteGroupWithUniqueName:uniqueName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroup: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupTemplate**
```objc
-(NSURLSessionTask*) deleteGroupTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a group template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Delete a group template
[apiInstance deleteGroupTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->deleteGroupTemplate: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroup**
```objc
-(NSURLSessionTask*) getGroupWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;
```

Loads a specific group's details

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Loads a specific group's details
[apiInstance getGroupWithUniqueName:uniqueName
          completionHandler: ^(SWGGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroup: %@", error);
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

# **getGroupMember**
```objc
-(NSURLSessionTask*) getGroupMemberWithUniqueName: (NSString*) uniqueName
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
[apiInstance getGroupMemberWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(SWGGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupMember: %@", error);
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

# **getGroupMembers**
```objc
-(NSURLSessionTask*) getGroupMembersWithUniqueName: (NSString*) uniqueName
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
[apiInstance getGroupMembersWithUniqueName:uniqueName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceGroupMemberResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupMembers: %@", error);
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

# **getGroupTemplate**
```objc
-(NSURLSessionTask*) getGroupTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single group template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Get a single group template
[apiInstance getGroupTemplateWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupTemplate: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplates**
```objc
-(NSURLSessionTask*) getGroupTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search group templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List and search group templates
[apiInstance getGroupTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupTemplates: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupsForUser**
```objc
-(NSURLSessionTask*) getGroupsForUserWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List groups a user is in

### Example 
```objc

NSNumber* userId = @56; // The id of the user

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// List groups a user is in
[apiInstance getGroupsForUserWithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->getGroupsForUser: %@", error);
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

# **removeGroupMember**
```objc
-(NSURLSessionTask*) removeGroupMemberWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user to remove

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Removes a user from a group
[apiInstance removeGroupMemberWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->removeGroupMember: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroup**
```objc
-(NSURLSessionTask*) updateGroupWithUniqueName: (NSString*) uniqueName
    groupResource: (SWGGroupResource*) groupResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a group

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
SWGGroupResource* groupResource = [[SWGGroupResource alloc] init]; // The updated group (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Update a group
[apiInstance updateGroupWithUniqueName:uniqueName
              groupResource:groupResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroup: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupMemberStatus**
```objc
-(NSURLSessionTask*) updateGroupMemberStatusWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (NSString*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's status

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
NSString* status = status_example; // The new status for the user

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Change a user's status
[apiInstance updateGroupMemberStatusWithUniqueName:uniqueName
              userId:userId
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroupMemberStatus: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupTemplate**
```objc
-(NSURLSessionTask*) updateGroupTemplateWithId: (NSString*) _id
    groupTemplateResource: (SWGTemplateResource*) groupTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Update a group template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* groupTemplateResource = [[SWGTemplateResource alloc] init]; // The group template resource object (optional)

SWGUsersGroupsApi*apiInstance = [[SWGUsersGroupsApi alloc] init];

// Update a group template
[apiInstance updateGroupTemplateWithId:_id
              groupTemplateResource:groupTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroupTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **groupTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The group template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroups**
```objc
-(NSURLSessionTask*) updateGroupsWithSize: (NSNumber*) size
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
[apiInstance updateGroupsWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersGroupsApi->updateGroups: %@", error);
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

