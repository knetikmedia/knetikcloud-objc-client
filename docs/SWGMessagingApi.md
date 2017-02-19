# SWGMessagingApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendRawEmail**](SWGMessagingApi.md#sendrawemail) | **POST** /messaging/raw-email | Send a raw email to one or more users
[**sendRawSMS**](SWGMessagingApi.md#sendrawsms) | **POST** /messaging/raw-sms | Send a raw SMS
[**sendTemplatedEmail**](SWGMessagingApi.md#sendtemplatedemail) | **POST** /messaging/templated-email | Send a templated email to one or more users
[**sendTemplatedSMS**](SWGMessagingApi.md#sendtemplatedsms) | **POST** /messaging/templated-sms | Send a new templated SMS


# **sendRawEmail**
```objc
-(NSURLSessionTask*) sendRawEmailWithRawEmailResource: (SWGRawEmailResource*) rawEmailResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw email to one or more users

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRawEmailResource* rawEmailResource = [[SWGRawEmailResource alloc] init]; // The new raw email to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a raw email to one or more users
[apiInstance sendRawEmailWithRawEmailResource:rawEmailResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendRawEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rawEmailResource** | [**SWGRawEmailResource***](SWGRawEmailResource*.md)| The new raw email to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawSMS**
```objc
-(NSURLSessionTask*) sendRawSMSWithRawSMSResource: (SWGRawSMSResource*) rawSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw SMS

Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRawSMSResource* rawSMSResource = [[SWGRawSMSResource alloc] init]; // The new raw SMS to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a raw SMS
[apiInstance sendRawSMSWithRawSMSResource:rawSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendRawSMS: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rawSMSResource** | [**SWGRawSMSResource***](SWGRawSMSResource*.md)| The new raw SMS to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplatedEmail**
```objc
-(NSURLSessionTask*) sendTemplatedEmailWithMessageResource: (SWGTemplateEmailResource*) messageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a templated email to one or more users

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateEmailResource* messageResource = [[SWGTemplateEmailResource alloc] init]; // The new template email to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a templated email to one or more users
[apiInstance sendTemplatedEmailWithMessageResource:messageResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendTemplatedEmail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **messageResource** | [**SWGTemplateEmailResource***](SWGTemplateEmailResource*.md)| The new template email to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplatedSMS**
```objc
-(NSURLSessionTask*) sendTemplatedSMSWithTemplateSMSResource: (SWGTemplateSMSResource*) templateSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a new templated SMS

Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateSMSResource* templateSMSResource = [[SWGTemplateSMSResource alloc] init]; // The new template SMS to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a new templated SMS
[apiInstance sendTemplatedSMSWithTemplateSMSResource:templateSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendTemplatedSMS: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateSMSResource** | [**SWGTemplateSMSResource***](SWGTemplateSMSResource*.md)| The new template SMS to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

