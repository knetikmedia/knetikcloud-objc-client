# JSAPIChatApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**acknowledgeChatMessage**](JSAPIChatApi.md#acknowledgechatmessage) | **PUT** /chat/threads/{id}/acknowledge | Acknowledge number of messages in a thread
[**addChatMessageBlacklist**](JSAPIChatApi.md#addchatmessageblacklist) | **POST** /chat/users/{id}/blacklist/{blacklisted_user_id} | Add a user to a chat message blacklist
[**deleteChatMessage**](JSAPIChatApi.md#deletechatmessage) | **DELETE** /chat/messages/{id} | Delete a message
[**editChatMessage**](JSAPIChatApi.md#editchatmessage) | **PUT** /chat/messages/{id} | Edit your message
[**getChatMessage**](JSAPIChatApi.md#getchatmessage) | **GET** /chat/messages/{id} | Get a message
[**getChatMessageBlacklist**](JSAPIChatApi.md#getchatmessageblacklist) | **GET** /chat/users/{id}/blacklist | Get a list of blocked users for chat messaging
[**getChatThreads**](JSAPIChatApi.md#getchatthreads) | **GET** /chat/threads | List your threads
[**getDirectMessages**](JSAPIChatApi.md#getdirectmessages) | **GET** /chat/users/{id}/messages | List messages with a user
[**getThreadMessages**](JSAPIChatApi.md#getthreadmessages) | **GET** /chat/threads/{id}/messages | List messages in a thread
[**getTopicMessages**](JSAPIChatApi.md#gettopicmessages) | **GET** /chat/topics/{id}/messages | List messages in a topic
[**removeChatBlacklist**](JSAPIChatApi.md#removechatblacklist) | **DELETE** /chat/users/{id}/blacklist/{blacklisted_user_id} | Remove a user from a blacklist
[**sendMessage**](JSAPIChatApi.md#sendmessage) | **POST** /chat/messages | Send a message


# **acknowledgeChatMessage**
```objc
-(NSURLSessionTask*) acknowledgeChatMessageWithId: (NSString*) _id
    readCount: (NSNumber*) readCount
        completionHandler: (void (^)(NSError* error)) handler;
```

Acknowledge number of messages in a thread

<b>Permissions Needed:</b> owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The thread id
NSNumber* readCount = 56; // The amount of messages read (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Acknowledge number of messages in a thread
[apiInstance acknowledgeChatMessageWithId:_id
              readCount:readCount
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->acknowledgeChatMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The thread id | 
 **readCount** | **NSNumber***| The amount of messages read | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addChatMessageBlacklist**
```objc
-(NSURLSessionTask*) addChatMessageBlacklistWithBlacklistedUserId: (NSNumber*) blacklistedUserId
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a user to a chat message blacklist

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* blacklistedUserId = @56; // The user id to blacklist
NSString* _id = @"_id_example"; // The user id or 'me'

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Add a user to a chat message blacklist
[apiInstance addChatMessageBlacklistWithBlacklistedUserId:blacklistedUserId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->addChatMessageBlacklist: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **blacklistedUserId** | **NSNumber***| The user id to blacklist | 
 **_id** | **NSString***| The user id or &#39;me&#39; | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChatMessage**
```objc
-(NSURLSessionTask*) deleteChatMessageWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a message

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message id

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Delete a message
[apiInstance deleteChatMessageWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->deleteChatMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **editChatMessage**
```objc
-(NSURLSessionTask*) editChatMessageWithId: (NSString*) _id
    chatMessageResource: (JSAPIChatMessageResource*) chatMessageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Edit your message

<b>Permissions Needed:</b> owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message id
JSAPIChatMessageResource* chatMessageResource = [[JSAPIChatMessageResource alloc] init]; // The chat message resource (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Edit your message
[apiInstance editChatMessageWithId:_id
              chatMessageResource:chatMessageResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->editChatMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message id | 
 **chatMessageResource** | [**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)| The chat message resource | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChatMessage**
```objc
-(NSURLSessionTask*) getChatMessageWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIChatMessageResource* output, NSError* error)) handler;
```

Get a message

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message id

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Get a message
[apiInstance getChatMessageWithId:_id
          completionHandler: ^(JSAPIChatMessageResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getChatMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message id | 

### Return type

[**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChatMessageBlacklist**
```objc
-(NSURLSessionTask*) getChatMessageBlacklistWithId: (NSString*) _id
        completionHandler: (void (^)(NSArray<JSAPIChatBlacklistResource>* output, NSError* error)) handler;
```

Get a list of blocked users for chat messaging

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The user id or 'me'

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Get a list of blocked users for chat messaging
[apiInstance getChatMessageBlacklistWithId:_id
          completionHandler: ^(NSArray<JSAPIChatBlacklistResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getChatMessageBlacklist: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The user id or &#39;me&#39; | 

### Return type

[**NSArray<JSAPIChatBlacklistResource>***](JSAPIChatBlacklistResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChatThreads**
```objc
-(NSURLSessionTask*) getChatThreadsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChatUserThreadResource_* output, NSError* error)) handler;
```

List your threads

<b>Permissions Needed:</b> owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// List your threads
[apiInstance getChatThreadsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChatUserThreadResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getChatThreads: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceChatUserThreadResource_***](JSAPIPageResourceChatUserThreadResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDirectMessages**
```objc
-(NSURLSessionTask*) getDirectMessagesWithId: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;
```

List messages with a user

<b>Permissions Needed:</b> owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The user id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// List messages with a user
[apiInstance getDirectMessagesWithId:_id
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChatMessageResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getDirectMessages: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The user id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceChatMessageResource_***](JSAPIPageResourceChatMessageResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getThreadMessages**
```objc
-(NSURLSessionTask*) getThreadMessagesWithId: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;
```

List messages in a thread

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The thread id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// List messages in a thread
[apiInstance getThreadMessagesWithId:_id
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChatMessageResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getThreadMessages: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The thread id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceChatMessageResource_***](JSAPIPageResourceChatMessageResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTopicMessages**
```objc
-(NSURLSessionTask*) getTopicMessagesWithId: (NSString*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;
```

List messages in a topic

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The topic id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// List messages in a topic
[apiInstance getTopicMessagesWithId:_id
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChatMessageResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->getTopicMessages: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The topic id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceChatMessageResource_***](JSAPIPageResourceChatMessageResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeChatBlacklist**
```objc
-(NSURLSessionTask*) removeChatBlacklistWithBlacklistedUserId: (NSNumber*) blacklistedUserId
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a user from a blacklist

<b>Permissions Needed:</b> CHAT_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* blacklistedUserId = @56; // The user id to blacklist
NSString* _id = @"_id_example"; // The user id or 'me'

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Remove a user from a blacklist
[apiInstance removeChatBlacklistWithBlacklistedUserId:blacklistedUserId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->removeChatBlacklist: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **blacklistedUserId** | **NSNumber***| The user id to blacklist | 
 **_id** | **NSString***| The user id or &#39;me&#39; | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendMessage**
```objc
-(NSURLSessionTask*) sendMessageWithChatMessageResource: (JSAPIChatMessageResource*) chatMessageResource
        completionHandler: (void (^)(JSAPIChatMessageResource* output, NSError* error)) handler;
```

Send a message

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIChatMessageResource* chatMessageResource = [[JSAPIChatMessageResource alloc] init]; // The chat message resource (optional)

JSAPIChatApi*apiInstance = [[JSAPIChatApi alloc] init];

// Send a message
[apiInstance sendMessageWithChatMessageResource:chatMessageResource
          completionHandler: ^(JSAPIChatMessageResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIChatApi->sendMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chatMessageResource** | [**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)| The chat message resource | [optional] 

### Return type

[**JSAPIChatMessageResource***](JSAPIChatMessageResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

