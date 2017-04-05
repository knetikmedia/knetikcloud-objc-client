# JSAPIMessagingApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendRawEmail**](JSAPIMessagingApi.md#sendrawemail) | **POST** /messaging/raw-email | Send a raw email to one or more users
[**sendRawSMS**](JSAPIMessagingApi.md#sendrawsms) | **POST** /messaging/raw-sms | Send a raw SMS
[**sendTemplatedEmail**](JSAPIMessagingApi.md#sendtemplatedemail) | **POST** /messaging/templated-email | Send a templated email to one or more users
[**sendTemplatedSMS**](JSAPIMessagingApi.md#sendtemplatedsms) | **POST** /messaging/templated-sms | Send a new templated SMS


# **sendRawEmail**
```objc
-(NSURLSessionTask*) sendRawEmailWithRawEmailResource: (JSAPIRawEmailResource*) rawEmailResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw email to one or more users

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
 **rawEmailResource** | [**JSAPIRawEmailResource***](JSAPIRawEmailResource*.md)| The new raw email to be sent | [optional] 

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
-(NSURLSessionTask*) sendRawSMSWithRawSMSResource: (JSAPIRawSMSResource*) rawSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw SMS

Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
 **rawSMSResource** | [**JSAPIRawSMSResource***](JSAPIRawSMSResource*.md)| The new raw SMS to be sent | [optional] 

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
-(NSURLSessionTask*) sendTemplatedEmailWithMessageResource: (JSAPITemplateEmailResource*) messageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a templated email to one or more users

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
 **messageResource** | [**JSAPITemplateEmailResource***](JSAPITemplateEmailResource*.md)| The new template email to be sent | [optional] 

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
-(NSURLSessionTask*) sendTemplatedSMSWithTemplateSMSResource: (JSAPITemplateSMSResource*) templateSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a new templated SMS

Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
 **templateSMSResource** | [**JSAPITemplateSMSResource***](JSAPITemplateSMSResource*.md)| The new template SMS to be sent | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

