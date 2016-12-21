# SWGUsersApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addTagUsingPOST1**](SWGUsersApi.md#addtagusingpost1) | **POST** /users/{user_id}/tags | Add a tag to a user
[**createUserTemplateUsingPOST**](SWGUsersApi.md#createusertemplateusingpost) | **POST** /users/templates | Create a user template
[**deleteUserTemplateUsingDELETE**](SWGUsersApi.md#deleteusertemplateusingdelete) | **DELETE** /users/templates/{id} | Delete a user template
[**doPasswordResetUsingPUT**](SWGUsersApi.md#dopasswordresetusingput) | **PUT** /users/{id}/password-reset | Choose a new password after a reset
[**getTagsUsingGET3**](SWGUsersApi.md#gettagsusingget3) | **GET** /users/{user_id}/tags | List tags for a user
[**getUserTemplateUsingGET**](SWGUsersApi.md#getusertemplateusingget) | **GET** /users/templates/{id} | Get a single user template
[**getUserTemplatesUsingGET**](SWGUsersApi.md#getusertemplatesusingget) | **GET** /users/templates | List and search user templates
[**getUserUsingGET**](SWGUsersApi.md#getuserusingget) | **GET** /users/{id} | Get a single user
[**getUsersUsingGET**](SWGUsersApi.md#getusersusingget) | **GET** /users | List and search users
[**initiatePasswordResetUsingPOST**](SWGUsersApi.md#initiatepasswordresetusingpost) | **POST** /users/{id}/password-reset | Reset a user&#39;s password
[**registerUserUsingPOST**](SWGUsersApi.md#registeruserusingpost) | **POST** /users | Register a new user
[**removeTagUsingDELETE1**](SWGUsersApi.md#removetagusingdelete1) | **DELETE** /users/{user_id}/tags/{tag} | Remove a tag from a user
[**setPasswordUsingPUT**](SWGUsersApi.md#setpasswordusingput) | **PUT** /users/{id}/password | Set a user&#39;s password
[**updateUserTemplateUsingPUT**](SWGUsersApi.md#updateusertemplateusingput) | **PUT** /users/templates/{id} | Update a user template
[**updateUserUsingPUT**](SWGUsersApi.md#updateuserusingput) | **PUT** /users/{id} | Update a user&#39;s info


# **addTagUsingPOST1**
```objc
-(NSNumber*) addTagUsingPOST1WithUserId: (NSNumber*) userId
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a user

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* tag = tag_example; // tag

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Add a tag to a user
[apiInstance addTagUsingPOST1WithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->addTagUsingPOST1: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createUserTemplateUsingPOST**
```objc
-(NSNumber*) createUserTemplateUsingPOSTWithUserTemplateResource: (SWGTemplateResource*) userTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a user template

User Templates define a type of user and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* userTemplateResource = [[SWGTemplateResource alloc] init]; // The user template resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Create a user template
[apiInstance createUserTemplateUsingPOSTWithUserTemplateResource:userTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->createUserTemplateUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteUserTemplateUsingDELETE**
```objc
-(NSNumber*) deleteUserTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a user template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Delete a user template
[apiInstance deleteUserTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->deleteUserTemplateUsingDELETE: %@", error);
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

# **doPasswordResetUsingPUT**
```objc
-(NSNumber*) doPasswordResetUsingPUTWithId: (NSNumber*) _id
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
[apiInstance doPasswordResetUsingPUTWithId:_id
              varNewPasswordRequest:varNewPasswordRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->doPasswordResetUsingPUT: %@", error);
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

# **getTagsUsingGET3**
```objc
-(NSNumber*) getTagsUsingGET3WithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List tags for a user

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// List tags for a user
[apiInstance getTagsUsingGET3WithUserId:userId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getTagsUsingGET3: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTemplateUsingGET**
```objc
-(NSNumber*) getUserTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single user template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Get a single user template
[apiInstance getUserTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserTemplateUsingGET: %@", error);
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

# **getUserTemplatesUsingGET**
```objc
-(NSNumber*) getUserTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search user templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// List and search user templates
[apiInstance getUserTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserTemplatesUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserUsingGET**
```objc
-(NSNumber*) getUserUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGUserResource* output, NSError* error)) handler;
```

Get a single user

Additional private info is included as USERS_ADMIN

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Get a single user
[apiInstance getUserUsingGETWithId:_id
          completionHandler: ^(SWGUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUserUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersUsingGET**
```objc
-(NSNumber*) getUsersUsingGETWithFilterDisplayname: (NSString*) filterDisplayname
    filterEmail: (NSString*) filterEmail
    filterFirstname: (NSString*) filterFirstname
    filterFullname: (NSString*) filterFullname
    filterLastname: (NSString*) filterLastname
    filterUsername: (NSString*) filterUsername
    filterTag: (NSString*) filterTag
    filterGroup: (NSString*) filterGroup
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceUserBaseResource_* output, NSError* error)) handler;
```

List and search users

Additional private info is included as USERS_ADMIN

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterDisplayname = @"filterDisplayname_example"; // Filter for users whose display name starts with provided string. (optional)
NSString* filterEmail = @"filterEmail_example"; // Filter for users whose email starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterFirstname = @"filterFirstname_example"; // Filter for users whose first name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterFullname = @"filterFullname_example"; // Filter for users whose full name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterLastname = @"filterLastname_example"; // Filter for users whose last name starts with provided string. Requires USERS_ADMIN permission (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter for users whose username starts with the provided string. Requires USERS_ADMIN permission (optional)
NSString* filterTag = @"filterTag_example"; // Filter for users who have a given tag (optional)
NSString* filterGroup = @"filterGroup_example"; // Filter for users in a given group, by unique name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// List and search users
[apiInstance getUsersUsingGETWithFilterDisplayname:filterDisplayname
              filterEmail:filterEmail
              filterFirstname:filterFirstname
              filterFullname:filterFullname
              filterLastname:filterLastname
              filterUsername:filterUsername
              filterTag:filterTag
              filterGroup:filterGroup
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceUserBaseResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->getUsersUsingGET: %@", error);
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
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceUserBaseResource_***](SWGPageResourceUserBaseResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **initiatePasswordResetUsingPOST**
```objc
-(NSNumber*) initiatePasswordResetUsingPOSTWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Reset a user's password

A reset code will be generated and a 'forgot_password' BRE event will be fired with that code; this can be routed to the user as needed and submitted to the 'choose a new password' endpoint.

### Example 
```objc

NSNumber* _id = @56; // The id of the user

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Reset a user's password
[apiInstance initiatePasswordResetUsingPOSTWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->initiatePasswordResetUsingPOST: %@", error);
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

# **registerUserUsingPOST**
```objc
-(NSNumber*) registerUserUsingPOSTWithUserResource: (SWGUserResource*) userResource
        completionHandler: (void (^)(SWGUserResource* output, NSError* error)) handler;
```

Register a new user

Password should be in plain text and will be encrypted on receipt. Use SSL for security

### Example 
```objc

SWGUserResource* userResource = [[SWGUserResource alloc] init]; // The user resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Register a new user
[apiInstance registerUserUsingPOSTWithUserResource:userResource
          completionHandler: ^(SWGUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->registerUserUsingPOST: %@", error);
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

# **removeTagUsingDELETE1**
```objc
-(NSNumber*) removeTagUsingDELETE1WithUserId: (NSNumber*) userId
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a tag from a user

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* tag = @"tag_example"; // The tag to remove

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Remove a tag from a user
[apiInstance removeTagUsingDELETE1WithUserId:userId
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->removeTagUsingDELETE1: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPasswordUsingPUT**
```objc
-(NSNumber*) setPasswordUsingPUTWithId: (NSNumber*) _id
    password: (NSString*) password
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a user's password

Password should be in plain text and will be encrypted on receipt. Use SSL for security.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
NSString* password = password_example; // The new plain text password (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Set a user's password
[apiInstance setPasswordUsingPUTWithId:_id
              password:password
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->setPasswordUsingPUT: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserTemplateUsingPUT**
```objc
-(NSNumber*) updateUserTemplateUsingPUTWithId: (NSString*) _id
    userTemplateResource: (SWGTemplateResource*) userTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a user template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* userTemplateResource = [[SWGTemplateResource alloc] init]; // The user template resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Update a user template
[apiInstance updateUserTemplateUsingPUTWithId:_id
              userTemplateResource:userTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->updateUserTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **userTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The user template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserUsingPUT**
```objc
-(NSNumber*) updateUserUsingPUTWithId: (NSString*) _id
    userResource: (SWGUserResource*) userResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a user's info

Password will not be edited on this endpoint, use password specific endpoints.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'
SWGUserResource* userResource = [[SWGUserResource alloc] init]; // The user resource object (optional)

SWGUsersApi*apiInstance = [[SWGUsersApi alloc] init];

// Update a user's info
[apiInstance updateUserUsingPUTWithId:_id
              userResource:userResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersApi->updateUserUsingPUT: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

