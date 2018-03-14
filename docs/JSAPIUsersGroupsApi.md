# JSAPIUsersGroupsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMemberToGroup**](JSAPIUsersGroupsApi.md#addmembertogroup) | **POST** /users/groups/{unique_name}/members | Adds a new member to the group
[**addMembersToGroup**](JSAPIUsersGroupsApi.md#addmemberstogroup) | **POST** /users/groups/{unique_name}/members/batch-add | Adds multiple members to the group
[**createGroup**](JSAPIUsersGroupsApi.md#creategroup) | **POST** /users/groups | Create a group
[**createGroupMemberTemplate**](JSAPIUsersGroupsApi.md#creategroupmembertemplate) | **POST** /users/groups/members/templates | Create an group member template
[**createGroupTemplate**](JSAPIUsersGroupsApi.md#creategrouptemplate) | **POST** /users/groups/templates | Create a group template
[**deleteGroup**](JSAPIUsersGroupsApi.md#deletegroup) | **DELETE** /users/groups/{unique_name} | Removes a group from the system
[**deleteGroupMemberTemplate**](JSAPIUsersGroupsApi.md#deletegroupmembertemplate) | **DELETE** /users/groups/members/templates/{id} | Delete an group member template
[**deleteGroupTemplate**](JSAPIUsersGroupsApi.md#deletegrouptemplate) | **DELETE** /users/groups/templates/{id} | Delete a group template
[**disableGroupNotification**](JSAPIUsersGroupsApi.md#disablegroupnotification) | **PUT** /users/groups/{unique_name}/members/{user_id}/messages/disabled | Enable or disable notification of group messages
[**getGroup**](JSAPIUsersGroupsApi.md#getgroup) | **GET** /users/groups/{unique_name} | Loads a specific group&#39;s details
[**getGroupAncestors**](JSAPIUsersGroupsApi.md#getgroupancestors) | **GET** /users/groups/{unique_name}/ancestors | Get group ancestors
[**getGroupMember**](JSAPIUsersGroupsApi.md#getgroupmember) | **GET** /users/groups/{unique_name}/members/{user_id} | Get a user from a group
[**getGroupMemberTemplate**](JSAPIUsersGroupsApi.md#getgroupmembertemplate) | **GET** /users/groups/members/templates/{id} | Get a single group member template
[**getGroupMemberTemplates**](JSAPIUsersGroupsApi.md#getgroupmembertemplates) | **GET** /users/groups/members/templates | List and search group member templates
[**getGroupMembers**](JSAPIUsersGroupsApi.md#getgroupmembers) | **GET** /users/groups/{unique_name}/members | Lists members of the group
[**getGroupMessages**](JSAPIUsersGroupsApi.md#getgroupmessages) | **GET** /users/groups/{unique_name}/messages | Get a list of group messages
[**getGroupTemplate**](JSAPIUsersGroupsApi.md#getgrouptemplate) | **GET** /users/groups/templates/{id} | Get a single group template
[**getGroupTemplates**](JSAPIUsersGroupsApi.md#getgrouptemplates) | **GET** /users/groups/templates | List and search group templates
[**getGroupsForUser**](JSAPIUsersGroupsApi.md#getgroupsforuser) | **GET** /users/{user_id}/groups | List groups a user is in
[**listGroups**](JSAPIUsersGroupsApi.md#listgroups) | **GET** /users/groups | List and search groups
[**postGroupMessage**](JSAPIUsersGroupsApi.md#postgroupmessage) | **POST** /users/groups/{unique_name}/messages | Send a group message
[**removeGroupMember**](JSAPIUsersGroupsApi.md#removegroupmember) | **DELETE** /users/groups/{unique_name}/members/{user_id} | Removes a user from a group
[**updateGroup**](JSAPIUsersGroupsApi.md#updategroup) | **PUT** /users/groups/{unique_name} | Update a group
[**updateGroupMemberProperties**](JSAPIUsersGroupsApi.md#updategroupmemberproperties) | **PUT** /users/groups/{unique_name}/members/{user_id}/order | Change a user&#39;s order
[**updateGroupMemberProperties1**](JSAPIUsersGroupsApi.md#updategroupmemberproperties1) | **PUT** /users/groups/{unique_name}/members/{user_id}/properties | Change a user&#39;s membership properties
[**updateGroupMemberStatus**](JSAPIUsersGroupsApi.md#updategroupmemberstatus) | **PUT** /users/groups/{unique_name}/members/{user_id}/status | Change a user&#39;s status
[**updateGroupMemberTemplate**](JSAPIUsersGroupsApi.md#updategroupmembertemplate) | **PUT** /users/groups/members/templates/{id} | Update an group member template
[**updateGroupTemplate**](JSAPIUsersGroupsApi.md#updategrouptemplate) | **PUT** /users/groups/templates/{id} | Update a group template


# **addMemberToGroup**
```objc
-(NSURLSessionTask*) addMemberToGroupWithUniqueName: (NSString*) uniqueName
    user: (JSAPIGroupMemberResource*) user
        completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;
```

Adds a new member to the group

<b>Permissions Needed:</b> GROUP_ADMIN or self if open

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **user** | [**JSAPIGroupMemberResource***](JSAPIGroupMemberResource.md)| The id and status for a user to add to the group | 

### Return type

[**JSAPIGroupMemberResource***](JSAPIGroupMemberResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **groupResource** | [**JSAPIGroupResource***](JSAPIGroupResource.md)| The new group | [optional] 

### Return type

[**JSAPIGroupResource***](JSAPIGroupResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createGroupMemberTemplate**
```objc
-(NSURLSessionTask*) createGroupMemberTemplateWithGroupMemberTemplateResource: (JSAPITemplateResource*) groupMemberTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create an group member template

GroupMember Templates define a type of group member and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* groupMemberTemplateResource = [[JSAPITemplateResource alloc] init]; // The group member template resource object (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Create an group member template
[apiInstance createGroupMemberTemplateWithGroupMemberTemplateResource:groupMemberTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->createGroupMemberTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupMemberTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The group member template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

Group Templates define a type of group and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **groupTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The group template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroup**
```objc
-(NSURLSessionTask*) deleteGroupWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a group from the system

All groups listing this as the parent are also removed and users are in turn removed from this and those groups. This may result in users no longer being in this group's parent if they were not added to it directly as well. <br><br><b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Removes a group from the system
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupMemberTemplate**
```objc
-(NSURLSessionTask*) deleteGroupMemberTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an group member template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Delete an group member template
[apiInstance deleteGroupMemberTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->deleteGroupMemberTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupTemplate**
```objc
-(NSURLSessionTask*) deleteGroupTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a group template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **disableGroupNotification**
```objc
-(NSURLSessionTask*) disableGroupNotificationWithUniqueName: (NSString*) uniqueName
    userId: (NSString*) userId
    disabled: (JSAPIValueWrapperBoolean_*) disabled
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable notification of group messages

<b>Permissions Needed:</b> TOPICS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSString* userId = @"userId_example"; // The user id of the member or 'me'
JSAPIValueWrapperBoolean_* disabled = [[JSAPIValueWrapperBoolean_ alloc] init]; // disabled

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Enable or disable notification of group messages
[apiInstance disableGroupNotificationWithUniqueName:uniqueName
              userId:userId
              disabled:disabled
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->disableGroupNotification: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSString***| The user id of the member or &#39;me&#39; | 
 **disabled** | [**JSAPIValueWrapperBoolean_***](JSAPIValueWrapperBoolean_.md)| disabled | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupAncestors**
```objc
-(NSURLSessionTask*) getGroupAncestorsWithUniqueName: (NSString*) uniqueName
        completionHandler: (void (^)(NSArray<JSAPIGroupResource>* output, NSError* error)) handler;
```

Get group ancestors

Returns a list of ancestor groups in reverse order (parent, then grandparent, etc). <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Get group ancestors
[apiInstance getGroupAncestorsWithUniqueName:uniqueName
          completionHandler: ^(NSArray<JSAPIGroupResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupAncestors: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 

### Return type

[**NSArray<JSAPIGroupResource>***](JSAPIGroupResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupMember**
```objc
-(NSURLSessionTask*) getGroupMemberWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
        completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;
```

Get a user from a group

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupMemberTemplate**
```objc
-(NSURLSessionTask*) getGroupMemberTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single group member template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Get a single group member template
[apiInstance getGroupMemberTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupMemberTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupMemberTemplates**
```objc
-(NSURLSessionTask*) getGroupMemberTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search group member templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// List and search group member templates
[apiInstance getGroupMemberTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupMemberTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
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

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to order:ASC)

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
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to order:ASC]

### Return type

[**JSAPIPageResourceGroupMemberResource_***](JSAPIPageResourceGroupMemberResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupMessages**
```objc
-(NSURLSessionTask*) getGroupMessagesWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;
```

Get a list of group messages

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Get a list of group messages
[apiInstance getGroupMessagesWithUniqueName:uniqueName
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceChatMessageResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->getGroupMessages: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceChatMessageResource_***](JSAPIPageResourceChatMessageResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupTemplate**
```objc
-(NSURLSessionTask*) getGroupTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single group template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
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

<b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupsForUser**
```objc
-(NSURLSessionTask*) getGroupsForUserWithUserId: (NSNumber*) userId
    filterChildren: (NSNumber*) filterChildren
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List groups a user is in

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* filterChildren = @true; // Whether to limit group list to children of groups only. If true, shows only groups with parents. If false, shows only groups with no parent. (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// List groups a user is in
[apiInstance getGroupsForUserWithUserId:userId
              filterChildren:filterChildren
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
 **filterChildren** | **NSNumber***| Whether to limit group list to children of groups only. If true, shows only groups with parents. If false, shows only groups with no parent. | [optional] 

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listGroups**
```objc
-(NSURLSessionTask*) listGroupsWithFilterTemplate: (NSString*) filterTemplate
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

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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
[apiInstance listGroupsWithFilterTemplate:filterTemplate
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
                            NSLog(@"Error calling JSAPIUsersGroupsApi->listGroups: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postGroupMessage**
```objc
-(NSURLSessionTask*) postGroupMessageWithUniqueName: (NSString*) uniqueName
    chatMessageRequest: (JSAPIChatMessageRequest*) chatMessageRequest
        completionHandler: (void (^)(JSAPIChatMessageResource* output, NSError* error)) handler;
```

Send a group message

### Example 
```objc

NSString* uniqueName = @"uniqueName_example"; // The group unique name
JSAPIChatMessageRequest* chatMessageRequest = [[JSAPIChatMessageRequest alloc] init]; // The chat message request (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Send a group message
[apiInstance postGroupMessageWithUniqueName:uniqueName
              chatMessageRequest:chatMessageRequest
          completionHandler: ^(JSAPIChatMessageResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->postGroupMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **chatMessageRequest** | [**JSAPIChatMessageRequest***](JSAPIChatMessageRequest.md)| The chat message request | [optional] 

### Return type

[**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)

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

<b>Permissions Needed:</b> GROUP_ADMIN or self if open

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroup**
```objc
-(NSURLSessionTask*) updateGroupWithUniqueName: (NSString*) uniqueName
    groupResource: (JSAPIGroupResource*) groupResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a group

If adding/removing/changing parent, user membership in group/new parent groups may be modified. The parent being removed will remove members from this sub group unless they were added explicitly to the parent and the new parent will gain members unless they were already a part of it. <br><br><b>Permissions Needed:</b> GROUP_ADMIN or admin of the group

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **groupResource** | [**JSAPIGroupResource***](JSAPIGroupResource.md)| The updated group | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupMemberProperties**
```objc
-(NSURLSessionTask*) updateGroupMemberPropertiesWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    order: (JSAPIStringWrapper*) order
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's order

<b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
JSAPIStringWrapper* order = [[JSAPIStringWrapper alloc] init]; // The new order for the membership

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Change a user's order
[apiInstance updateGroupMemberPropertiesWithUniqueName:uniqueName
              userId:userId
              order:order
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroupMemberProperties: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The user id of the member to modify | 
 **order** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The new order for the membership | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupMemberProperties1**
```objc
-(NSURLSessionTask*) updateGroupMemberProperties1WithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    properties: (NSObject*) properties
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's membership properties

<b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
NSObject* properties = NULL; // The new properties for the membership

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Change a user's membership properties
[apiInstance updateGroupMemberProperties1WithUniqueName:uniqueName
              userId:userId
              properties:properties
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroupMemberProperties1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uniqueName** | **NSString***| The group unique name | 
 **userId** | **NSNumber***| The user id of the member to modify | 
 **properties** | **NSObject***| The new properties for the membership | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupMemberStatus**
```objc
-(NSURLSessionTask*) updateGroupMemberStatusWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (JSAPIGroupMemberStatusWrapper*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Change a user's status

<b>Permissions Needed:</b> GROUP_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* uniqueName = @"uniqueName_example"; // The group unique name
NSNumber* userId = @56; // The user id of the member to modify
JSAPIGroupMemberStatusWrapper* status = [[JSAPIGroupMemberStatusWrapper alloc] init]; // The new status for the user

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
 **status** | [**JSAPIGroupMemberStatusWrapper***](JSAPIGroupMemberStatusWrapper.md)| The new status for the user | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupMemberTemplate**
```objc
-(NSURLSessionTask*) updateGroupMemberTemplateWithId: (NSString*) _id
    groupMemberTemplateResource: (JSAPITemplateResource*) groupMemberTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an group member template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* groupMemberTemplateResource = [[JSAPITemplateResource alloc] init]; // The group member template resource object (optional)

JSAPIUsersGroupsApi*apiInstance = [[JSAPIUsersGroupsApi alloc] init];

// Update an group member template
[apiInstance updateGroupMemberTemplateWithId:_id
              groupMemberTemplateResource:groupMemberTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersGroupsApi->updateGroupMemberTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **groupMemberTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The group member template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **groupTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The group template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

