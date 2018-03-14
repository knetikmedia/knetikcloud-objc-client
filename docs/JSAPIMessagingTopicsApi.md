# JSAPIMessagingTopicsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**disableTopicSubscriber**](JSAPIMessagingTopicsApi.md#disabletopicsubscriber) | **PUT** /messaging/topics/{id}/subscribers/{user_id}/disabled | Enable or disable messages for a user
[**getTopicSubscriber**](JSAPIMessagingTopicsApi.md#gettopicsubscriber) | **GET** /messaging/topics/{id}/subscribers/{user_id} | Get a subscriber to a topic
[**getUserTopics**](JSAPIMessagingTopicsApi.md#getusertopics) | **GET** /users/{id}/topics | Get all messaging topics for a given user


# **disableTopicSubscriber**
```objc
-(NSURLSessionTask*) disableTopicSubscriberWithId: (NSString*) _id
    userId: (NSString*) userId
    disabled: (JSAPIValueWrapperBoolean_*) disabled
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable messages for a user

Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options. <br><br><b>Permissions Needed:</b> TOPICS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the topic
NSString* userId = @"userId_example"; // The id of the subscriber or 'me'
JSAPIValueWrapperBoolean_* disabled = [[JSAPIValueWrapperBoolean_ alloc] init]; // disabled

JSAPIMessagingTopicsApi*apiInstance = [[JSAPIMessagingTopicsApi alloc] init];

// Enable or disable messages for a user
[apiInstance disableTopicSubscriberWithId:_id
              userId:userId
              disabled:disabled
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingTopicsApi->disableTopicSubscriber: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the topic | 
 **userId** | **NSString***| The id of the subscriber or &#39;me&#39; | 
 **disabled** | [**JSAPIValueWrapperBoolean_***](JSAPIValueWrapperBoolean_.md)| disabled | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTopicSubscriber**
```objc
-(NSURLSessionTask*) getTopicSubscriberWithId: (NSString*) _id
    userId: (NSString*) userId
        completionHandler: (void (^)(JSAPITopicSubscriberResource* output, NSError* error)) handler;
```

Get a subscriber to a topic

<b>Permissions Needed:</b> TOPICS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the topic
NSString* userId = @"userId_example"; // The id of the subscriber or 'me'

JSAPIMessagingTopicsApi*apiInstance = [[JSAPIMessagingTopicsApi alloc] init];

// Get a subscriber to a topic
[apiInstance getTopicSubscriberWithId:_id
              userId:userId
          completionHandler: ^(JSAPITopicSubscriberResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingTopicsApi->getTopicSubscriber: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the topic | 
 **userId** | **NSString***| The id of the subscriber or &#39;me&#39; | 

### Return type

[**JSAPITopicSubscriberResource***](JSAPITopicSubscriberResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserTopics**
```objc
-(NSURLSessionTask*) getUserTopicsWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIPageResourceTopicResource_* output, NSError* error)) handler;
```

Get all messaging topics for a given user

<b>Permissions Needed:</b> TOPICS_ADMIN or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the user or 'me'

JSAPIMessagingTopicsApi*apiInstance = [[JSAPIMessagingTopicsApi alloc] init];

// Get all messaging topics for a given user
[apiInstance getUserTopicsWithId:_id
          completionHandler: ^(JSAPIPageResourceTopicResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMessagingTopicsApi->getUserTopics: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the user or &#39;me&#39; | 

### Return type

[**JSAPIPageResourceTopicResource_***](JSAPIPageResourceTopicResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

