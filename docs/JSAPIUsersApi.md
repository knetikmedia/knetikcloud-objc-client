# JSAPIUsersApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserTag**](JSAPIUsersApi.md#addusertag) | **POST** /users/{user_id}/tags | Add a tag to a user
[**createUserTemplate**](JSAPIUsersApi.md#createusertemplate) | **POST** /users/templates | Create a user template
[**deleteUserTemplate**](JSAPIUsersApi.md#deleteusertemplate) | **DELETE** /users/templates/{id} | Delete a user template
[**getDirectMessages1**](JSAPIUsersApi.md#getdirectmessages1) | **GET** /users/{recipient_id}/messages | Get a list of direct messages with this user
[**getUser**](JSAPIUsersApi.md#getuser) | **GET** /users/{id} | Get a single user
[**getUserTags**](JSAPIUsersApi.md#getusertags) | **GET** /users/{user_id}/tags | List tags for a user
[**getUserTemplate**](JSAPIUsersApi.md#getusertemplate) | **GET** /users/templates/{id} | Get a single user template
[**getUserTemplates**](JSAPIUsersApi.md#getusertemplates) | **GET** /users/templates | List and search user templates
[**getUsers**](JSAPIUsersApi.md#getusers) | **GET** /users | List and search users
[**passwordReset**](JSAPIUsersApi.md#passwordreset) | **PUT** /users/{id}/password-reset | Choose a new password after a reset
[**postUserMessage**](JSAPIUsersApi.md#postusermessage) | **POST** /users/{recipient_id}/messages | Send a user message
[**registerUser**](JSAPIUsersApi.md#registeruser) | **POST** /users | Register a new user
[**removeUserTag**](JSAPIUsersApi.md#removeusertag) | **DELETE** /users/{user_id}/tags/{tag} | Remove a tag from a user
[**setPassword**](JSAPIUsersApi.md#setpassword) | **PUT** /users/{id}/password | Set a user&#39;s password
[**startPasswordReset**](JSAPIUsersApi.md#startpasswordreset) | **POST** /users/{id}/password-reset | Reset a user&#39;s password
[**submitPasswordReset**](JSAPIUsersApi.md#submitpasswordreset) | **POST** /users/password-reset | Reset a user&#39;s password without user id
[**updateUser**](JSAPIUsersApi.md#updateuser) | **PUT** /users/{id} | Update a user
[**updateUserTemplate**](JSAPIUsersApi.md#updateusertemplate) | **PUT** /users/templates/{id} | Update a user template


# **addUserTag**
```objc
-(NSURLSessionTask*) addUserTagWithUserId: (NSNumber*) userId
    tag: (JSAPIStringWrapper*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a user

<b>Permissions Needed:</b> USERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
JSAPIStringWrapper* tag = [[JSAPIStringWrapper alloc] init]; // tag

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Add a tag to a user
[apiInstance addUserTagWithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->addUserTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **tag** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| tag | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createUserTemplate**
```objc
-(NSURLSessionTask*) createUserTemplateWithUserTemplateResource: (JSAPITemplateResource*) userTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a user template

User Templates define a type of user and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* userTemplateResource = [[JSAPITemplateResource alloc] init]; // The user template resource object (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Create a user template
[apiInstance createUserTemplateWithUserTemplateResource:userTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->createUserTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The user template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteUserTemplate**
```objc
-(NSURLSessionTask*) deleteUserTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a user template

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

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Delete a user template
[apiInstance deleteUserTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->deleteUserTemplate: %@", error);
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

# **getDirectMessages1**
```objc
-(NSURLSessionTask*) getDirectMessages1WithRecipientId: (NSNumber*) recipientId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;
```

Get a list of direct messages with this user

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* recipientId = @56; // The user id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Get a list of direct messages with this user
[apiInstance getDirectMessages1WithRecipientId:recipientId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceChatMessageResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getDirectMessages1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **recipientId** | **NSNumber***| The user id | 
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

# **getUser**
```objc
-(NSURLSessionTask*) getUserWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIUserResource* output, NSError* error)) handler;
```

Get a single user

Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Get a single user
[apiInstance getUserWithId:_id
          completionHandler: ^(JSAPIUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 

### Return type

[**JSAPIUserResource***](JSAPIUserResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTags**
```objc
-(NSURLSessionTask*) getUserTagsWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List tags for a user

<b>Permissions Needed:</b> USERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// List tags for a user
[apiInstance getUserTagsWithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getUserTags: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTemplate**
```objc
-(NSURLSessionTask*) getUserTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single user template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Get a single user template
[apiInstance getUserTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getUserTemplate: %@", error);
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

# **getUserTemplates**
```objc
-(NSURLSessionTask*) getUserTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search user templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or USERS_ADMIN

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

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// List and search user templates
[apiInstance getUserTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getUserTemplates: %@", error);
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

# **getUsers**
```objc
-(NSURLSessionTask*) getUsersWithFilterDisplayname: (NSString*) filterDisplayname
    filterEmail: (NSString*) filterEmail
    filterFirstname: (NSString*) filterFirstname
    filterFullname: (NSString*) filterFullname
    filterLastname: (NSString*) filterLastname
    filterUsername: (NSString*) filterUsername
    filterTag: (NSString*) filterTag
    filterGroup: (NSString*) filterGroup
    filterRole: (NSString*) filterRole
    filterLastActivity: (NSString*) filterLastActivity
    filterIdList: (NSString*) filterIdList
    filterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserBaseResource_* output, NSError* error)) handler;
```

List and search users

Additional private info is included as USERS_ADMIN. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterDisplayname = @"filterDisplayname_example"; // Filter for users whose display name starts with provided string. (optional)
NSString* filterEmail = @"filterEmail_example"; // Filter for users whose email starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterFirstname = @"filterFirstname_example"; // Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterFullname = @"filterFullname_example"; // Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterLastname = @"filterLastname_example"; // Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission (optional)
NSString* filterTag = @"filterTag_example"; // Filter for users who have a given tag (optional)
NSString* filterGroup = @"filterGroup_example"; // Filter for users in a given group, by unique name (optional)
NSString* filterRole = @"filterRole_example"; // Filter for users with a given role (optional)
NSString* filterLastActivity = @"filterLastActivity_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterIdList = @"filterIdList_example"; // A comma separated list of ids. (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for users whose display_name starts with the provided string, or username if display_name is null (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// List and search users
[apiInstance getUsersWithFilterDisplayname:filterDisplayname
              filterEmail:filterEmail
              filterFirstname:filterFirstname
              filterFullname:filterFullname
              filterLastname:filterLastname
              filterUsername:filterUsername
              filterTag:filterTag
              filterGroup:filterGroup
              filterRole:filterRole
              filterLastActivity:filterLastActivity
              filterIdList:filterIdList
              filterSearch:filterSearch
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserBaseResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->getUsers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterDisplayname** | **NSString***| Filter for users whose display name starts with provided string. | [optional] 
 **filterEmail** | **NSString***| Filter for users whose email starts with provided string. Requires USERS_ADMIN permission | [optional] 
 **filterFirstname** | **NSString***| Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission | [optional] 
 **filterFullname** | **NSString***| Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission | [optional] 
 **filterLastname** | **NSString***| Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission | [optional] 
 **filterUsername** | **NSString***| Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission | [optional] 
 **filterTag** | **NSString***| Filter for users who have a given tag | [optional] 
 **filterGroup** | **NSString***| Filter for users in a given group, by unique name | [optional] 
 **filterRole** | **NSString***| Filter for users with a given role | [optional] 
 **filterLastActivity** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterIdList** | **NSString***| A comma separated list of ids. | [optional] 
 **filterSearch** | **NSString***| Filter for users whose display_name starts with the provided string, or username if display_name is null | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceUserBaseResource_***](JSAPIPageResourceUserBaseResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **passwordReset**
```objc
-(NSURLSessionTask*) passwordResetWithId: (NSNumber*) _id
    varNewPasswordRequest: (JSAPINewPasswordRequest*) varNewPasswordRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Choose a new password after a reset

Finish resetting a user's password using the secret provided from the password-reset endpoint.  Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
JSAPINewPasswordRequest* varNewPasswordRequest = [[JSAPINewPasswordRequest alloc] init]; // The new password request object (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Choose a new password after a reset
[apiInstance passwordResetWithId:_id
              varNewPasswordRequest:varNewPasswordRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->passwordReset: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **varNewPasswordRequest** | [**JSAPINewPasswordRequest***](JSAPINewPasswordRequest.md)| The new password request object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postUserMessage**
```objc
-(NSURLSessionTask*) postUserMessageWithRecipientId: (NSNumber*) recipientId
    chatMessageRequest: (JSAPIChatMessageRequest*) chatMessageRequest
        completionHandler: (void (^)(JSAPIChatMessageResource* output, NSError* error)) handler;
```

Send a user message

### Example 
```objc

NSNumber* recipientId = @56; // The user id
JSAPIChatMessageRequest* chatMessageRequest = [[JSAPIChatMessageRequest alloc] init]; // The chat message request (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Send a user message
[apiInstance postUserMessageWithRecipientId:recipientId
              chatMessageRequest:chatMessageRequest
          completionHandler: ^(JSAPIChatMessageResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->postUserMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **recipientId** | **NSNumber***| The user id | 
 **chatMessageRequest** | [**JSAPIChatMessageRequest***](JSAPIChatMessageRequest.md)| The chat message request | [optional] 

### Return type

[**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **registerUser**
```objc
-(NSURLSessionTask*) registerUserWithUserResource: (JSAPIUserResource*) userResource
        completionHandler: (void (^)(JSAPIUserResource* output, NSError* error)) handler;
```

Register a new user

Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIUserResource* userResource = [[JSAPIUserResource alloc] init]; // The user resource object (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Register a new user
[apiInstance registerUserWithUserResource:userResource
          completionHandler: ^(JSAPIUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->registerUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userResource** | [**JSAPIUserResource***](JSAPIUserResource.md)| The user resource object | [optional] 

### Return type

[**JSAPIUserResource***](JSAPIUserResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeUserTag**
```objc
-(NSURLSessionTask*) removeUserTagWithUserId: (NSNumber*) userId
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a tag from a user

<b>Permissions Needed:</b> USERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* tag = @"tag_example"; // The tag to remove

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Remove a tag from a user
[apiInstance removeUserTagWithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->removeUserTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **tag** | **NSString***| The tag to remove | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPassword**
```objc
-(NSURLSessionTask*) setPasswordWithId: (NSNumber*) _id
    password: (JSAPIStringWrapper*) password
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a user's password

Password should be in plain text and will be encrypted on receipt. Use SSL for security. <br><br><b>Permissions Needed:</b> USERS_ADMIN or (USERS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
JSAPIStringWrapper* password = [[JSAPIStringWrapper alloc] init]; // The new plain text password (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Set a user's password
[apiInstance setPasswordWithId:_id
              password:password
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->setPassword: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **password** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The new plain text password | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **startPasswordReset**
```objc
-(NSURLSessionTask*) startPasswordResetWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Reset a user's password

A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Reset a user's password
[apiInstance startPasswordResetWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->startPasswordReset: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submitPasswordReset**
```objc
-(NSURLSessionTask*) submitPasswordResetWithPasswordReset: (JSAPIPasswordResetRequest*) passwordReset
        completionHandler: (void (^)(NSError* error)) handler;
```

Reset a user's password without user id

A reset code will be generated and a 'forgot_password' BRE event will be fired with that code.  The default system rule will send an email to the selected user if an email service has been setup. You can modify that rule in BRE to send an SMS instead or any other type of notification as you see fit.  Must submit their email, username, or mobile phone number. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIPasswordResetRequest* passwordReset = [[JSAPIPasswordResetRequest alloc] init]; // An object containing one of three methods to look up a user (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Reset a user's password without user id
[apiInstance submitPasswordResetWithPasswordReset:passwordReset
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->submitPasswordReset: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **passwordReset** | [**JSAPIPasswordResetRequest***](JSAPIPasswordResetRequest.md)| An object containing one of three methods to look up a user | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUser**
```objc
-(NSURLSessionTask*) updateUserWithId: (NSString*) _id
    userResource: (JSAPIUserResource*) userResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a user

Password will not be edited on this endpoint, use password specific endpoints. <br><br><b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'
JSAPIUserResource* userResource = [[JSAPIUserResource alloc] init]; // The user resource object (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Update a user
[apiInstance updateUserWithId:_id
              userResource:userResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->updateUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 
 **userResource** | [**JSAPIUserResource***](JSAPIUserResource.md)| The user resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserTemplate**
```objc
-(NSURLSessionTask*) updateUserTemplateWithId: (NSString*) _id
    userTemplateResource: (JSAPITemplateResource*) userTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a user template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* userTemplateResource = [[JSAPITemplateResource alloc] init]; // The user template resource object (optional)

JSAPIUsersApi*apiInstance = [[JSAPIUsersApi alloc] init];

// Update a user template
[apiInstance updateUserTemplateWithId:_id
              userTemplateResource:userTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersApi->updateUserTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **userTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The user template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

