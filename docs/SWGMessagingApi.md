# SWGMessagingApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendRawEmailUsingPOST**](SWGMessagingApi.md#sendrawemailusingpost) | **POST** /messaging/raw-email | Send a raw email to one or more users
[**sendRawSMSUsingPOST**](SWGMessagingApi.md#sendrawsmsusingpost) | **POST** /messaging/raw-sms | Send a raw SMS
[**sendRawSMSUsingPOST1**](SWGMessagingApi.md#sendrawsmsusingpost1) | **POST** /messaging/templated-sms | Send a new templated SMS
[**sendTemplateEmailUsingPOST**](SWGMessagingApi.md#sendtemplateemailusingpost) | **POST** /messaging/templated-email | Send a templated email to one or more users


# **sendRawEmailUsingPOST**
```objc
-(NSNumber*) sendRawEmailUsingPOSTWithRawEmailResource: (SWGRawEmailResource*) rawEmailResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw email to one or more users

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRawEmailResource* rawEmailResource = [[SWGRawEmailResource alloc] init]; // The new raw email to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a raw email to one or more users
[apiInstance sendRawEmailUsingPOSTWithRawEmailResource:rawEmailResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendRawEmailUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawSMSUsingPOST**
```objc
-(NSNumber*) sendRawSMSUsingPOSTWithRawSMSResource: (SWGRawSMSResource*) rawSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a raw SMS

Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRawSMSResource* rawSMSResource = [[SWGRawSMSResource alloc] init]; // The new raw SMS to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a raw SMS
[apiInstance sendRawSMSUsingPOSTWithRawSMSResource:rawSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendRawSMSUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendRawSMSUsingPOST1**
```objc
-(NSNumber*) sendRawSMSUsingPOST1WithTemplateSMSResource: (SWGTemplateSMSResource*) templateSMSResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a new templated SMS

Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateSMSResource* templateSMSResource = [[SWGTemplateSMSResource alloc] init]; // The new template SMS to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a new templated SMS
[apiInstance sendRawSMSUsingPOST1WithTemplateSMSResource:templateSMSResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendRawSMSUsingPOST1: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendTemplateEmailUsingPOST**
```objc
-(NSNumber*) sendTemplateEmailUsingPOSTWithMessageResource: (SWGTemplateEmailResource*) messageResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Send a templated email to one or more users

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateEmailResource* messageResource = [[SWGTemplateEmailResource alloc] init]; // The new template email to be sent (optional)

SWGMessagingApi*apiInstance = [[SWGMessagingApi alloc] init];

// Send a templated email to one or more users
[apiInstance sendTemplateEmailUsingPOSTWithMessageResource:messageResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMessagingApi->sendTemplateEmailUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

