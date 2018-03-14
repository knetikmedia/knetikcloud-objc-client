# JSAPIMessagingApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**compileMessageTemplate**](JSAPIMessagingApi.md#compilemessagetemplate) | **POST** /messaging/templates/compilations | Compile a message template
[**createMessageTemplate**](JSAPIMessagingApi.md#createmessagetemplate) | **POST** /messaging/templates | Create a message template
[**deleteMessageTemplate**](JSAPIMessagingApi.md#deletemessagetemplate) | **DELETE** /messaging/templates/{id} | Delete an existing message template
[**getMessageTemplate**](JSAPIMessagingApi.md#getmessagetemplate) | **GET** /messaging/templates/{id} | Get a single message template
[**getMessageTemplates**](JSAPIMessagingApi.md#getmessagetemplates) | **GET** /messaging/templates | List and search message templates
[**sendMessage**](JSAPIMessagingApi.md#sendmessage) | **POST** /messaging/message | Send a message
[**sendRawEmail**](JSAPIMessagingApi.md#sendrawemail) | **POST** /messaging/raw-email | Send a raw email to one or more users
[**sendRawPush**](JSAPIMessagingApi.md#sendrawpush) | **POST** /messaging/raw-push | Send a raw push notification
[**sendRawSMS**](JSAPIMessagingApi.md#sendrawsms) | **POST** /messaging/raw-sms | Send a raw SMS
[**sendTemplatedEmail**](JSAPIMessagingApi.md#sendtemplatedemail) | **POST** /messaging/templated-email | Send a templated email to one or more users
[**sendTemplatedPush**](JSAPIMessagingApi.md#sendtemplatedpush) | **POST** /messaging/templated-push | Send a templated push notification
[**sendTemplatedSMS**](JSAPIMessagingApi.md#sendtemplatedsms) | **POST** /messaging/templated-sms | Send a new templated SMS
[**sendWebsocket**](JSAPIMessagingApi.md#sendwebsocket) | **POST** /messaging/websocket-message | Send a websocket message
[**updateMessageTemplate**](JSAPIMessagingApi.md#updatemessagetemplate) | **PUT** /messaging/templates/{id} | Update an existing message template


# **compileMessageTemplate**
```objc
-(NSURLSessionTask*) compileMessageTemplateWithRequest: (JSAPIMessageTemplateBulkRequest*) request
        completionHandler: (void (^)(NSDictionary<NSString*, NSString*>* output, NSError* error)) handler;
```

Compile a message template

Processes a set of input data against the template and returnes the compiled result. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMessageTemplateBulkRequest* request = [[JSAPIMessageTemplateBulkRequest alloc] init]; // request (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Compile a message template
[apiInstance compileMessageTemplateWithRequest:request
          completionHandler: ^(NSDictionary<NSString*, NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->compileMessageTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIMessageTemplateBulkRequest***](JSAPIMessageTemplateBulkRequest.md)| request | [optional] 

### Return type

**NSDictionary<NSString*, NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createMessageTemplate**
```objc
-(NSURLSessionTask*) createMessageTemplateWithMessageTemplate: (JSAPIMessageTemplateResource*) messageTemplate
        completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;
```

Create a message template

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMessageTemplateResource* messageTemplate = [[JSAPIMessageTemplateResource alloc] init]; // The new template email to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Create a message template
[apiInstance createMessageTemplateWithMessageTemplate:messageTemplate
          completionHandler: ^(JSAPIMessageTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->createMessageTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **messageTemplate** | [**JSAPIMessageTemplateResource***](JSAPIMessageTemplateResource.md)| The new template email to be sent | [optional] 

### Return type

[**JSAPIMessageTemplateResource***](JSAPIMessageTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteMessageTemplate**
```objc
-(NSURLSessionTask*) deleteMessageTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing message template

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message_template id

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Delete an existing message template
[apiInstance deleteMessageTemplateWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->deleteMessageTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message_template id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMessageTemplate**
```objc
-(NSURLSessionTask*) getMessageTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;
```

Get a single message template

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message_template id

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Get a single message template
[apiInstance getMessageTemplateWithId:_id
          completionHandler: ^(JSAPIMessageTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->getMessageTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message_template id | 

### Return type

[**JSAPIMessageTemplateResource***](JSAPIMessageTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMessageTemplates**
```objc
-(NSURLSessionTask*) getMessageTemplatesWithFilterTagset: (NSString*) filterTagset
    filterTagIntersection: (NSString*) filterTagIntersection
    filterTagExclusion: (NSString*) filterTagExclusion
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceMessageTemplateResource_* output, NSError* error)) handler;
```

List and search message templates

Get a list of message templates with optional filtering. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTagset = @"filterTagset_example"; // Filter for message templates with at least one of a specified set of tags (separated by comma) (optional)
NSString* filterTagIntersection = @"filterTagIntersection_example"; // Filter for message templates with all of a specified set of tags (separated by comma) (optional)
NSString* filterTagExclusion = @"filterTagExclusion_example"; // Filter for message templates with none of a specified set of tags (separated by comma) (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// List and search message templates
[apiInstance getMessageTemplatesWithFilterTagset:filterTagset
              filterTagIntersection:filterTagIntersection
              filterTagExclusion:filterTagExclusion
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceMessageTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->getMessageTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTagset** | **NSString***| Filter for message templates with at least one of a specified set of tags (separated by comma) | [optional] 
 **filterTagIntersection** | **NSString***| Filter for message templates with all of a specified set of tags (separated by comma) | [optional] 
 **filterTagExclusion** | **NSString***| Filter for message templates with none of a specified set of tags (separated by comma) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceMessageTemplateResource_***](JSAPIPageResourceMessageTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendMessage**
```objc
-(NSURLSessionTask*) sendMessageWithMessageResource: (JSAPIMessageResource*) messageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a message

Sends a message with one or more formats to one or more users. Fill in any message formats desired (email, sms, websockets) and each user will recieve all valid formats. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIMessageResource* messageResource = [[JSAPIMessageResource alloc] init]; // The message to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a message
[apiInstance sendMessageWithMessageResource:messageResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendMessage: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **messageResource** | [**JSAPIMessageResource***](JSAPIMessageResource.md)| The message to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawEmail**
```objc
-(NSURLSessionTask*) sendRawEmailWithRawEmailResource: (JSAPIRawEmailResource*) rawEmailResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw email to one or more users

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIRawEmailResource* rawEmailResource = [[JSAPIRawEmailResource alloc] init]; // The new raw email to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a raw email to one or more users
[apiInstance sendRawEmailWithRawEmailResource:rawEmailResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendRawEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rawEmailResource** | [**JSAPIRawEmailResource***](JSAPIRawEmailResource.md)| The new raw email to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawPush**
```objc
-(NSURLSessionTask*) sendRawPushWithRawPushResource: (JSAPIRawPushResource*) rawPushResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw push notification

Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIRawPushResource* rawPushResource = [[JSAPIRawPushResource alloc] init]; // The new raw push notification to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a raw push notification
[apiInstance sendRawPushWithRawPushResource:rawPushResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendRawPush: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rawPushResource** | [**JSAPIRawPushResource***](JSAPIRawPushResource.md)| The new raw push notification to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawSMS**
```objc
-(NSURLSessionTask*) sendRawSMSWithRawSMSResource: (JSAPIRawSMSResource*) rawSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw SMS

Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIRawSMSResource* rawSMSResource = [[JSAPIRawSMSResource alloc] init]; // The new raw SMS to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a raw SMS
[apiInstance sendRawSMSWithRawSMSResource:rawSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendRawSMS: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rawSMSResource** | [**JSAPIRawSMSResource***](JSAPIRawSMSResource.md)| The new raw SMS to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplatedEmail**
```objc
-(NSURLSessionTask*) sendTemplatedEmailWithMessageResource: (JSAPITemplateEmailResource*) messageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a templated email to one or more users

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateEmailResource* messageResource = [[JSAPITemplateEmailResource alloc] init]; // The new template email to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a templated email to one or more users
[apiInstance sendTemplatedEmailWithMessageResource:messageResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendTemplatedEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **messageResource** | [**JSAPITemplateEmailResource***](JSAPITemplateEmailResource.md)| The new template email to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplatedPush**
```objc
-(NSURLSessionTask*) sendTemplatedPushWithTemplatePushResource: (JSAPITemplatePushResource*) templatePushResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a templated push notification

Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplatePushResource* templatePushResource = [[JSAPITemplatePushResource alloc] init]; // The new templated push notification to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a templated push notification
[apiInstance sendTemplatedPushWithTemplatePushResource:templatePushResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendTemplatedPush: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templatePushResource** | [**JSAPITemplatePushResource***](JSAPITemplatePushResource.md)| The new templated push notification to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplatedSMS**
```objc
-(NSURLSessionTask*) sendTemplatedSMSWithTemplateSMSResource: (JSAPITemplateSMSResource*) templateSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a new templated SMS

Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateSMSResource* templateSMSResource = [[JSAPITemplateSMSResource alloc] init]; // The new template SMS to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a new templated SMS
[apiInstance sendTemplatedSMSWithTemplateSMSResource:templateSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendTemplatedSMS: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateSMSResource** | [**JSAPITemplateSMSResource***](JSAPITemplateSMSResource.md)| The new template SMS to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendWebsocket**
```objc
-(NSURLSessionTask*) sendWebsocketWithWebsocketResource: (JSAPIWebsocketMessageResource*) websocketResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a websocket message

Sends a websocket message to one or more users. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIWebsocketMessageResource* websocketResource = [[JSAPIWebsocketMessageResource alloc] init]; // The new websocket message to be sent (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Send a websocket message
[apiInstance sendWebsocketWithWebsocketResource:websocketResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->sendWebsocket: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **websocketResource** | [**JSAPIWebsocketMessageResource***](JSAPIWebsocketMessageResource.md)| The new websocket message to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMessageTemplate**
```objc
-(NSURLSessionTask*) updateMessageTemplateWithId: (NSString*) _id
    messageTemplateResource: (JSAPIMessageTemplateResource*) messageTemplateResource
        completionHandler: (void (^)(JSAPIMessageTemplateResource* output, NSError* error)) handler;
```

Update an existing message template

<b>Permissions Needed:</b> MESSAGING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The message_template id
JSAPIMessageTemplateResource* messageTemplateResource = [[JSAPIMessageTemplateResource alloc] init]; // The message template (optional)

JSAPIMessagingApi*apiInstance = [[JSAPIMessagingApi alloc] init];

// Update an existing message template
[apiInstance updateMessageTemplateWithId:_id
              messageTemplateResource:messageTemplateResource
          completionHandler: ^(JSAPIMessageTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingApi->updateMessageTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The message_template id | 
 **messageTemplateResource** | [**JSAPIMessageTemplateResource***](JSAPIMessageTemplateResource.md)| The message template | [optional] 

### Return type

[**JSAPIMessageTemplateResource***](JSAPIMessageTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

