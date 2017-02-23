# SWGUsersApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserTag**](SWGUsersApi.md#addusertag) | **POST** /users/{user_id}/tags | Add a tag to a user
[**createUserTemplate**](SWGUsersApi.md#createusertemplate) | **POST** /users/templates | Create a user template
[**deleteUserTemplate**](SWGUsersApi.md#deleteusertemplate) | **DELETE** /users/templates/{id} | Delete a user template
[**getUser**](SWGUsersApi.md#getuser) | **GET** /users/{id} | Get a single user
[**getUserTags**](SWGUsersApi.md#getusertags) | **GET** /users/{user_id}/tags | List tags for a user
[**getUserTemplate**](SWGUsersApi.md#getusertemplate) | **GET** /users/templates/{id} | Get a single user template
[**getUserTemplates**](SWGUsersApi.md#getusertemplates) | **GET** /users/templates | List and search user templates
[**getUsers**](SWGUsersApi.md#getusers) | **GET** /users | List and search users
[**passwordReset**](SWGUsersApi.md#passwordreset) | **PUT** /users/{id}/password-reset | Choose a new password after a reset
[**registerUser**](SWGUsersApi.md#registeruser) | **POST** /users | Register a new user
[**removeUserTag**](SWGUsersApi.md#removeusertag) | **DELETE** /users/{user_id}/tags/{tag} | Remove a tag from a user
[**setPassword**](SWGUsersApi.md#setpassword) | **PUT** /users/{id}/password | Set a user&#39;s password
[**startPasswordReset**](SWGUsersApi.md#startpasswordreset) | **POST** /users/{id}/password-reset | Reset a user&#39;s password
[**updateUser**](SWGUsersApi.md#updateuser) | **PUT** /users/{id} | Update a user
[**updateUserTemplate**](SWGUsersApi.md#updateusertemplate) | **PUT** /users/templates/{id} | Update a user template


# **addUserTag**
```objc
-(NSURLSessionTask*) addUserTagWithUserId: (NSNumber*) userId
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* tag = tag_example; // tag

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Add a tag to a user
[apiInstance addUserTagWithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->addUserTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **tag** | **NSString***| tag | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createUserTemplate**
```objc
-(NSURLSessionTask*) createUserTemplateWithUserTemplateResource: (SWGTemplateResource*) userTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a user template

User Templates define a type of user and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* userTemplateResource = [[SWGTemplateResource alloc] init]; // The user template resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Create a user template
[apiInstance createUserTemplateWithUserTemplateResource:userTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->createUserTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The user template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

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

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Delete a user template
[apiInstance deleteUserTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->deleteUserTemplate: %@", error);
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

# **getUser**
```objc
-(NSURLSessionTask*) getUserWithId: (NSString*) _id
        completionHandler: (void (^)(SWGUserResource* output, NSError* error)) handler;
```

Get a single user

Additional private info is included as USERS_ADMIN

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Get a single user
[apiInstance getUserWithId:_id
          completionHandler: ^(SWGUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 

### Return type

[**SWGUserResource***](SWGUserResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTags**
```objc
-(NSURLSessionTask*) getUserTagsWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List tags for a user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// List tags for a user
[apiInstance getUserTagsWithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserTags: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTemplate**
```objc
-(NSURLSessionTask*) getUserTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single user template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Get a single user template
[apiInstance getUserTemplateWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserTemplate: %@", error);
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

# **getUserTemplates**
```objc
-(NSURLSessionTask*) getUserTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search user templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// List and search user templates
[apiInstance getUserTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserTemplates: %@", error);
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

[**SWGPageResourceTemplateResource_***](SWGPageResourceTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
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
    filterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceUserBaseResource_* output, NSError* error)) handler;
```

List and search users

Additional private info is included as USERS_ADMIN

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
NSString* filterSearch = @"filterSearch_example"; // Filter for users whose display_name starts with the provided string, or username if display_name is null (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

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
              filterSearch:filterSearch
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceUserBaseResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUsers: %@", error);
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
 **filterSearch** | **NSString***| Filter for users whose display_name starts with the provided string, or username if display_name is null | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceUserBaseResource_***](SWGPageResourceUserBaseResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **passwordReset**
```objc
-(NSURLSessionTask*) passwordResetWithId: (NSNumber*) _id
    varNewPasswordRequest: (SWGNewPasswordRequest*) varNewPasswordRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Choose a new password after a reset

Finish resetting a user's password using the secret provided from the password-reset endpoint.  Password should be in plain text and will be encrypted on receipt. Use SSL for security.

### Example 
```objc

NSNumber* _id = @56; // The id of the user
SWGNewPasswordRequest* varNewPasswordRequest = [[SWGNewPasswordRequest alloc] init]; // The new password request object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Choose a new password after a reset
[apiInstance passwordResetWithId:_id
              varNewPasswordRequest:varNewPasswordRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->passwordReset: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **varNewPasswordRequest** | [**SWGNewPasswordRequest***](SWGNewPasswordRequest*.md)| The new password request object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **registerUser**
```objc
-(NSURLSessionTask*) registerUserWithUserResource: (SWGUserResource*) userResource
        completionHandler: (void (^)(SWGUserResource* output, NSError* error)) handler;
```

Register a new user

Password should be in plain text and will be encrypted on receipt. Use SSL for security

### Example 
```objc

SWGUserResource* userResource = [[SWGUserResource alloc] init]; // The user resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Register a new user
[apiInstance registerUserWithUserResource:userResource
          completionHandler: ^(SWGUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->registerUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userResource** | [**SWGUserResource***](SWGUserResource*.md)| The user resource object | [optional] 

### Return type

[**SWGUserResource***](SWGUserResource.md)

### Authorization

No authorization required

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

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* tag = @"tag_example"; // The tag to remove

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Remove a tag from a user
[apiInstance removeUserTagWithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->removeUserTag: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPassword**
```objc
-(NSURLSessionTask*) setPasswordWithId: (NSNumber*) _id
    password: (NSString*) password
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a user's password

Password should be in plain text and will be encrypted on receipt. Use SSL for security.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
NSString* password = password_example; // The new plain text password (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Set a user's password
[apiInstance setPasswordWithId:_id
              password:password
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->setPassword: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **password** | **NSString***| The new plain text password | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

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

A reset code will be generated and a 'forgot_password' BRE event will be fired with that code; this can be routed to the user as needed and submitted to the 'choose a new password' endpoint.

### Example 
```objc

NSNumber* _id = @56; // The id of the user

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Reset a user's password
[apiInstance startPasswordResetWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->startPasswordReset: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUser**
```objc
-(NSURLSessionTask*) updateUserWithId: (NSString*) _id
    userResource: (SWGUserResource*) userResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a user

Password will not be edited on this endpoint, use password specific endpoints.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'
SWGUserResource* userResource = [[SWGUserResource alloc] init]; // The user resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Update a user
[apiInstance updateUserWithId:_id
              userResource:userResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->updateUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 
 **userResource** | [**SWGUserResource***](SWGUserResource*.md)| The user resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserTemplate**
```objc
-(NSURLSessionTask*) updateUserTemplateWithId: (NSString*) _id
    userTemplateResource: (SWGTemplateResource*) userTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Update a user template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* userTemplateResource = [[SWGTemplateResource alloc] init]; // The user template resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Update a user template
[apiInstance updateUserTemplateWithId:_id
              userTemplateResource:userTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->updateUserTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **userTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The user template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

