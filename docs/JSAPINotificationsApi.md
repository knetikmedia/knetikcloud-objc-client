# JSAPINotificationsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createNotificationType**](JSAPINotificationsApi.md#createnotificationtype) | **POST** /notifications/types | Create a notification type
[**deleteNotificationType**](JSAPINotificationsApi.md#deletenotificationtype) | **DELETE** /notifications/types/{id} | Delete a notification type
[**getNotificationType**](JSAPINotificationsApi.md#getnotificationtype) | **GET** /notifications/types/{id} | Get a single notification type
[**getNotificationTypes**](JSAPINotificationsApi.md#getnotificationtypes) | **GET** /notifications/types | List and search notification types
[**getUserNotificationInfo**](JSAPINotificationsApi.md#getusernotificationinfo) | **GET** /users/{user_id}/notifications/types/{type_id} | View a user&#39;s notification settings for a type
[**getUserNotificationInfoList**](JSAPINotificationsApi.md#getusernotificationinfolist) | **GET** /users/{user_id}/notifications/types | View a user&#39;s notification settings
[**getUserNotifications**](JSAPINotificationsApi.md#getusernotifications) | **GET** /users/{id}/notifications | Get notifications
[**sendNotification**](JSAPINotificationsApi.md#sendnotification) | **POST** /notifications | Send a notification
[**setUserNotificationStatus**](JSAPINotificationsApi.md#setusernotificationstatus) | **PUT** /users/{user_id}/notifications/{notification_id}/status | Set notification status
[**silenceDirectNotifications**](JSAPINotificationsApi.md#silencedirectnotifications) | **PUT** /users/{user_id}/notifications/types/{type_id}/silenced | Enable or disable direct notifications for a user
[**updateNotificationType**](JSAPINotificationsApi.md#updatenotificationtype) | **PUT** /notifications/types/{id} | Update a notificationType


# **createNotificationType**
```objc
-(NSURLSessionTask*) createNotificationTypeWithNotificationType: (JSAPINotificationTypeResource*) notificationType
        completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;
```

Create a notification type

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPINotificationTypeResource* notificationType = [[JSAPINotificationTypeResource alloc] init]; // notificationType (optional)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Create a notification type
[apiInstance createNotificationTypeWithNotificationType:notificationType
          completionHandler: ^(JSAPINotificationTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->createNotificationType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **notificationType** | [**JSAPINotificationTypeResource***](JSAPINotificationTypeResource.md)| notificationType | [optional] 

### Return type

[**JSAPINotificationTypeResource***](JSAPINotificationTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteNotificationType**
```objc
-(NSURLSessionTask*) deleteNotificationTypeWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a notification type

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // id

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Delete a notification type
[apiInstance deleteNotificationTypeWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->deleteNotificationType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNotificationType**
```objc
-(NSURLSessionTask*) getNotificationTypeWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;
```

Get a single notification type

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // id

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Get a single notification type
[apiInstance getNotificationTypeWithId:_id
          completionHandler: ^(JSAPINotificationTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->getNotificationType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| id | 

### Return type

[**JSAPINotificationTypeResource***](JSAPINotificationTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNotificationTypes**
```objc
-(NSURLSessionTask*) getNotificationTypesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceNotificationTypeResource_* output, NSError* error)) handler;
```

List and search notification types

Get a list of notification type with optional filtering. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

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

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// List and search notification types
[apiInstance getNotificationTypesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceNotificationTypeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->getNotificationTypes: %@", error);
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

[**JSAPIPageResourceNotificationTypeResource_***](JSAPIPageResourceNotificationTypeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserNotificationInfo**
```objc
-(NSURLSessionTask*) getUserNotificationInfoWithTypeId: (NSString*) typeId
    userId: (NSString*) userId
        completionHandler: (void (^)(JSAPINotificationUserTypeResource* output, NSError* error)) handler;
```

View a user's notification settings for a type

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeId = @"typeId_example"; // The id of the topic
NSString* userId = @"userId_example"; // The id of the subscriber or 'me'

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// View a user's notification settings for a type
[apiInstance getUserNotificationInfoWithTypeId:typeId
              userId:userId
          completionHandler: ^(JSAPINotificationUserTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->getUserNotificationInfo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeId** | **NSString***| The id of the topic | 
 **userId** | **NSString***| The id of the subscriber or &#39;me&#39; | 

### Return type

[**JSAPINotificationUserTypeResource***](JSAPINotificationUserTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserNotificationInfoList**
```objc
-(NSURLSessionTask*) getUserNotificationInfoListWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceNotificationUserTypeResource_* output, NSError* error)) handler;
```

View a user's notification settings

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the subscriber or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// View a user's notification settings
[apiInstance getUserNotificationInfoListWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceNotificationUserTypeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->getUserNotificationInfoList: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the subscriber or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceNotificationUserTypeResource_***](JSAPIPageResourceNotificationUserTypeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserNotifications**
```objc
-(NSURLSessionTask*) getUserNotificationsWithId: (NSString*) _id
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserNotificationResource_* output, NSError* error)) handler;
```

Get notifications

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'
NSString* filterStatus = @"filterStatus_example"; // filter for notifications with a given status (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Get notifications
[apiInstance getUserNotificationsWithId:_id
              filterStatus:filterStatus
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserNotificationResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->getUserNotifications: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 
 **filterStatus** | **NSString***| filter for notifications with a given status | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceUserNotificationResource_***](JSAPIPageResourceUserNotificationResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendNotification**
```objc
-(NSURLSessionTask*) sendNotificationWithNotification: (JSAPINotificationResource*) notification
        completionHandler: (void (^)(JSAPINotificationResource* output, NSError* error)) handler;
```

Send a notification

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPINotificationResource* notification = [[JSAPINotificationResource alloc] init]; // notification (optional)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Send a notification
[apiInstance sendNotificationWithNotification:notification
          completionHandler: ^(JSAPINotificationResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->sendNotification: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **notification** | [**JSAPINotificationResource***](JSAPINotificationResource.md)| notification | [optional] 

### Return type

[**JSAPINotificationResource***](JSAPINotificationResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserNotificationStatus**
```objc
-(NSURLSessionTask*) setUserNotificationStatusWithUserId: (NSString*) userId
    notificationId: (NSString*) notificationId
    notification: (JSAPIUserNotificationStatusWrapper*) notification
        completionHandler: (void (^)(NSError* error)) handler;
```

Set notification status

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSString* notificationId = @"notificationId_example"; // The id of the notification
JSAPIUserNotificationStatusWrapper* notification = [[JSAPIUserNotificationStatusWrapper alloc] init]; // status (optional)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Set notification status
[apiInstance setUserNotificationStatusWithUserId:userId
              notificationId:notificationId
              notification:notification
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->setUserNotificationStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **notificationId** | **NSString***| The id of the notification | 
 **notification** | [**JSAPIUserNotificationStatusWrapper***](JSAPIUserNotificationStatusWrapper.md)| status | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **silenceDirectNotifications**
```objc
-(NSURLSessionTask*) silenceDirectNotificationsWithTypeId: (NSString*) typeId
    userId: (NSString*) userId
    silenced: (JSAPIValueWrapperBoolean_*) silenced
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable direct notifications for a user

Allows enabling or disabling messages for a given notification type when sent direct to the user. Notifications can still be retrieved by endpoint. For notifications broadcased to a topic, see the topic service to disable messages for the user there. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeId = @"typeId_example"; // The id of the topic
NSString* userId = @"userId_example"; // The id of the subscriber or 'me'
JSAPIValueWrapperBoolean_* silenced = [[JSAPIValueWrapperBoolean_ alloc] init]; // silenced

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Enable or disable direct notifications for a user
[apiInstance silenceDirectNotificationsWithTypeId:typeId
              userId:userId
              silenced:silenced
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->silenceDirectNotifications: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeId** | **NSString***| The id of the topic | 
 **userId** | **NSString***| The id of the subscriber or &#39;me&#39; | 
 **silenced** | [**JSAPIValueWrapperBoolean_***](JSAPIValueWrapperBoolean_.md)| silenced | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateNotificationType**
```objc
-(NSURLSessionTask*) updateNotificationTypeWithId: (NSString*) _id
    notificationType: (JSAPINotificationTypeResource*) notificationType
        completionHandler: (void (^)(JSAPINotificationTypeResource* output, NSError* error)) handler;
```

Update a notificationType

<b>Permissions Needed:</b> NOTIFICATIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // id
JSAPINotificationTypeResource* notificationType = [[JSAPINotificationTypeResource alloc] init]; // notificationType (optional)

JSAPINotificationsApi*apiInstance = [[JSAPINotificationsApi alloc] init];

// Update a notificationType
[apiInstance updateNotificationTypeWithId:_id
              notificationType:notificationType
          completionHandler: ^(JSAPINotificationTypeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPINotificationsApi->updateNotificationType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| id | 
 **notificationType** | [**JSAPINotificationTypeResource***](JSAPINotificationTypeResource.md)| notificationType | [optional] 

### Return type

[**JSAPINotificationTypeResource***](JSAPINotificationTypeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

