# JSAPIUsersGroupsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMemberToGroup**](JSAPIUsersGroupsApi.md#addmembertogroup) | **POST** /users/groups/{unique_name}/members | Adds a new member to the group
[**addMembersToGroup**](JSAPIUsersGroupsApi.md#addmemberstogroup) | **POST** /users/groups/{unique_name}/members/batch-add | Adds multiple members to the group
[**createGroup**](JSAPIUsersGroupsApi.md#creategroup) | **POST** /users/groups | Create a group
[**createGroupTemplate**](JSAPIUsersGroupsApi.md#creategrouptemplate) | **POST** /users/groups/templates | Create a group template
[**deleteGroup**](JSAPIUsersGroupsApi.md#deletegroup) | **DELETE** /users/groups/{unique_name} | Removes a group from the system IF no resources are attached to it
[**deleteGroupTemplate**](JSAPIUsersGroupsApi.md#deletegrouptemplate) | **DELETE** /users/groups/templates/{id} | Delete a group template
[**getGroup**](JSAPIUsersGroupsApi.md#getgroup) | **GET** /users/groups/{unique_name} | Loads a specific group&#39;s details
[**getGroupMember**](JSAPIUsersGroupsApi.md#getgroupmember) | **GET** /users/groups/{unique_name}/members/{user_id} | Get a user from a group
[**getGroupMembers**](JSAPIUsersGroupsApi.md#getgroupmembers) | **GET** /users/groups/{unique_name}/members | Lists members of the group
[**getGroupTemplate**](JSAPIUsersGroupsApi.md#getgrouptemplate) | **GET** /users/groups/templates/{id} | Get a single group template
[**getGroupTemplates**](JSAPIUsersGroupsApi.md#getgrouptemplates) | **GET** /users/groups/templates | List and search group templates
[**getGroupsForUser**](JSAPIUsersGroupsApi.md#getgroupsforuser) | **GET** /users/{user_id}/groups | List groups a user is in
[**removeGroupMember**](JSAPIUsersGroupsApi.md#removegroupmember) | **DELETE** /users/groups/{unique_name}/members/{user_id} | Removes a user from a group
[**updateGroup**](JSAPIUsersGroupsApi.md#updategroup) | **PUT** /users/groups/{unique_name} | Update a group
[**updateGroupMemberStatus**](JSAPIUsersGroupsApi.md#updategroupmemberstatus) | **PUT** /users/groups/{unique_name}/members/{user_id}/status | Change a user&#39;s status
[**updateGroupTemplate**](JSAPIUsersGroupsApi.md#updategrouptemplate) | **PUT** /users/groups/templates/{id} | Update a group template
[**updateGroups**](JSAPIUsersGroupsApi.md#updategroups) | **GET** /users/groups | List and search groups


# **addMemberToGroup**
```objc
-(NSURLSessionTask*) addMemberToGroupWithUniqueName: (NSString*) uniqueName
    user: (JSAPIGroupMemberResource*) user
        completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;
```

Adds a new member to the group

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
JSAPIGroupMemberResource* user = [[JSAPIGroupMemberResource alloc] init]; // The id and status for a user to add to the group

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Adds a new member to the group
[apiInstance addMemberToGroupWithUniqueName:uniqueName
              user:user
          completionHandler: ^(JSAPIGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->addMemberToGroup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **user** | [**JSAPIGroupMemberResource***](JSAPIGroupMemberResource*.md)| The id and status for a user to add to the group | 

### Return type

[**JSAPIGroupMemberResource***](JSAPIGroupMemberResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addMembersToGroup**
```objc
-(NSURLSessionTask*) addMembersToGroupWithUniqueName: (NSString*) uniqueName
    users: (NSArray<JSAPIGroupMemberResource>*) users
        completionHandler: (void (^)(NSArray<JSAPIGroupMemberResource>* output, NSError* error)) handler;
```

Adds multiple members to the group

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSArray<JSAPIGroupMemberResource>* users = @[[[JSAPIGroupMemberResource alloc] init]]; // The id and status for a list of users to add to the group

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Adds multiple members to the group
[apiInstance addMembersToGroupWithUniqueName:uniqueName
              users:users
          completionHandler: ^(NSArray<JSAPIGroupMemberResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->addMembersToGroup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **users** | [**NSArray&lt;JSAPIGroupMemberResource&gt;***](JSAPIGroupMemberResource.md)| The id and status for a list of users to add to the group | 

### Return type

[**NSArray<JSAPIGroupMemberResource>***](JSAPIGroupMemberResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroup**
```objc
-(NSURLSessionTask*) createGroupWithGroupResource: (JSAPIGroupResource*) groupResource
        completionHandler: (void (^)(JSAPIGroupResource* output, NSError* error)) handler;
```

Create a group

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIGroupResource* groupResource = [[JSAPIGroupResource alloc] init]; // The new group (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Create a group
[apiInstance createGroupWithGroupResource:groupResource
          completionHandler: ^(JSAPIGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->createGroup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupResource** | [**JSAPIGroupResource***](JSAPIGroupResource*.md)| The new group | [optional] 

### Return type

[**JSAPIGroupResource***](JSAPIGroupResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroupTemplate**
```objc
-(NSURLSessionTask*) createGroupTemplateWithGroupTemplateResource: (JSAPITemplateResource*) groupTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a group template

Group Templates define a type of group and the properties they have

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* groupTemplateResource = [[JSAPITemplateResource alloc] init]; // The group template resource object (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Create a group template
[apiInstance createGroupTemplateWithGroupTemplateResource:groupTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->createGroupTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource*.md)| The group template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Removes a group from the system IF no resources are attached to it
[apiInstance deleteGroupWithUniqueName:uniqueName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->deleteGroup: %@", error);
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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Delete a group template
[apiInstance deleteGroupTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->deleteGroupTemplate: %@", error);
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
        completionHandler: (void (^)(JSAPIGroupResource* output, NSError* error)) handler;
```

Loads a specific group's details

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Loads a specific group's details
[apiInstance getGroupWithUniqueName:uniqueName
          completionHandler: ^(JSAPIGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 

### Return type

[**JSAPIGroupResource***](JSAPIGroupResource.md)

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
        completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;
```

Get a user from a group

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Get a user from a group
[apiInstance getGroupMemberWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(JSAPIGroupMemberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupMember: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The id of the user | 

### Return type

[**JSAPIGroupMemberResource***](JSAPIGroupMemberResource.md)

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
        completionHandler: (void (^)(JSAPIPageResourceGroupMemberResource_* output, NSError* error)) handler;
```

Lists members of the group

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Lists members of the group
[apiInstance getGroupMembersWithUniqueName:uniqueName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceGroupMemberResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupMembers: %@", error);
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

[**JSAPIPageResourceGroupMemberResource_***](JSAPIPageResourceGroupMemberResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplate**
```objc
-(NSURLSessionTask*) getGroupTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single group template

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Get a single group template
[apiInstance getGroupTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

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
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search group templates

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// List and search group templates
[apiInstance getGroupTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupTemplates: %@", error);
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

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

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

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// List groups a user is in
[apiInstance getGroupsForUserWithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupsForUser: %@", error);
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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The id of the user to remove

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Removes a user from a group
[apiInstance removeGroupMemberWithUniqueName:uniqueName
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->removeGroupMember: %@", error);
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
    groupResource: (JSAPIGroupResource*) groupResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a group

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
JSAPIGroupResource* groupResource = [[JSAPIGroupResource alloc] init]; // The updated group (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Update a group
[apiInstance updateGroupWithUniqueName:uniqueName
              groupResource:groupResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroup: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **groupResource** | [**JSAPIGroupResource***](JSAPIGroupResource*.md)| The updated group | [optional] 

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
NSString* status = status_example; // The new status for the user

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Change a user's status
[apiInstance updateGroupMemberStatusWithUniqueName:uniqueName
              userId:userId
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroupMemberStatus: %@", error);
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
    groupTemplateResource: (JSAPITemplateResource*) groupTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a group template

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* groupTemplateResource = [[JSAPITemplateResource alloc] init]; // The group template resource object (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Update a group template
[apiInstance updateGroupTemplateWithId:_id
              groupTemplateResource:groupTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroupTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **groupTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource*.md)| The group template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroups**
```objc
-(NSURLSessionTask*) updateGroupsWithFilterTemplate: (NSString*) filterTemplate
    filterMemberCount: (NSString*) filterMemberCount
    filterName: (NSString*) filterName
    filterUniqueName: (NSString*) filterUniqueName
    filterParent: (NSString*) filterParent
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceGroupResource_* output, NSError* error)) handler;
```

List and search groups

### Example 
```objc

NSString* filterTemplate = @"filterTemplate_example"; // Filter for groups using a specific template, by id (optional)
NSString* filterMemberCount = @"filterMemberCount_example"; // Filters groups by member count. Multiple values possible for range search. Format: filter_member_count=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_member_count=GT,14,LT,17 (optional)
NSString* filterName = @"filterName_example"; // Filter for groups with names starting with the given string (optional)
NSString* filterUniqueName = @"filterUniqueName_example"; // Filter for groups whose unique_name starts with provided string (optional)
NSString* filterParent = @"filterParent_example"; // Filter for groups with a specific parent, by unique name (optional)
NSString* filterStatus = @"filterStatus_example"; // Filter for groups with a certain status (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// List and search groups
[apiInstance updateGroupsWithFilterTemplate:filterTemplate
              filterMemberCount:filterMemberCount
              filterName:filterName
              filterUniqueName:filterUniqueName
              filterParent:filterParent
              filterStatus:filterStatus
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroups: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSString***| Filter for groups using a specific template, by id | [optional] 
 **filterMemberCount** | **NSString***| Filters groups by member count. Multiple values possible for range search. Format: filter_member_count&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_member_count&#x3D;GT,14,LT,17 | [optional] 
 **filterName** | **NSString***| Filter for groups with names starting with the given string | [optional] 
 **filterUniqueName** | **NSString***| Filter for groups whose unique_name starts with provided string | [optional] 
 **filterParent** | **NSString***| Filter for groups with a specific parent, by unique name | [optional] 
 **filterStatus** | **NSString***| Filter for groups with a certain status | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**JSAPIPageResourceGroupResource_***](JSAPIPageResourceGroupResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

