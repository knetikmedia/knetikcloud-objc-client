# JSAPITemplatesPropertiesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTemplatePropertyType**](JSAPITemplatesPropertiesApi.md#gettemplatepropertytype) | **GET** /templates/properties/{type} | Get details for a template property type
[**getTemplatePropertyTypes**](JSAPITemplatesPropertiesApi.md#gettemplatepropertytypes) | **GET** /templates/properties | List template property types


# **getTemplatePropertyType**
```objc
-(NSURLSessionTask*) getTemplatePropertyTypeWithType: (NSString*) type
        completionHandler: (void (^)(JSAPIPropertyFieldListResource* output, NSError* error)) handler;
```

Get details for a template property type

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // type

JSAPITemplatesPropertiesApi*apiInstance = [[JSAPITemplatesPropertiesApi alloc] init];

// Get details for a template property type
[apiInstance getTemplatePropertyTypeWithType:type
          completionHandler: ^(JSAPIPropertyFieldListResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesPropertiesApi->getTemplatePropertyType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| type | 

### Return type

[**JSAPIPropertyFieldListResource***](JSAPIPropertyFieldListResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplatePropertyTypes**
```objc
-(NSURLSessionTask*) getTemplatePropertyTypesWithCompletionHandler: 
        (void (^)(NSArray<JSAPIPropertyFieldListResource>* output, NSError* error)) handler;
```

List template property types

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPITemplatesPropertiesApi*apiInstance = [[JSAPITemplatesPropertiesApi alloc] init];

// List template property types
[apiInstance getTemplatePropertyTypesWithCompletionHandler: 
          ^(NSArray<JSAPIPropertyFieldListResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPITemplatesPropertiesApi->getTemplatePropertyTypes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPIPropertyFieldListResource>***](JSAPIPropertyFieldListResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

