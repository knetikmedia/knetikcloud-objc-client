# JSAPITemplatesPropertiesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

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

### Example 
```objc

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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplatePropertyTypes**
```objc
-(NSURLSessionTask*) getTemplatePropertyTypesWithCompletionHandler: 
        (void (^)(NSArray<JSAPIPropertyFieldListResource>* output, NSError* error)) handler;
```

List template property types

### Example 
```objc


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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

