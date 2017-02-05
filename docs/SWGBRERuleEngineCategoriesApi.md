# SWGBRERuleEngineCategoriesApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTemplateUsingPOST1**](SWGBRERuleEngineCategoriesApi.md#createtemplateusingpost1) | **POST** /bre/categories/templates | Create a BRE category template
[**deleteTemplateUsingDELETE**](SWGBRERuleEngineCategoriesApi.md#deletetemplateusingdelete) | **DELETE** /bre/categories/templates/{id} | Delete a BRE category template
[**getCategoriesUsingGET**](SWGBRERuleEngineCategoriesApi.md#getcategoriesusingget) | **GET** /bre/categories | List categories
[**getCategoryUsingGET**](SWGBRERuleEngineCategoriesApi.md#getcategoryusingget) | **GET** /bre/categories/{name} | Get a single category
[**getTemplateUsingGET**](SWGBRERuleEngineCategoriesApi.md#gettemplateusingget) | **GET** /bre/categories/templates/{id} | Get a single BRE category template
[**getTemplatesUsingGET**](SWGBRERuleEngineCategoriesApi.md#gettemplatesusingget) | **GET** /bre/categories/templates | List and search BRE category templates
[**updateCategoryUsingPUT**](SWGBRERuleEngineCategoriesApi.md#updatecategoryusingput) | **PUT** /bre/categories/{name} | Update a category
[**updateTemplateUsingPUT1**](SWGBRERuleEngineCategoriesApi.md#updatetemplateusingput1) | **PUT** /bre/categories/templates/{id} | Update a BRE category template


# **createTemplateUsingPOST1**
```objc
-(NSURLSessionTask*) createTemplateUsingPOST1WithTemplate: (SWGTemplateResource*) template
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a BRE category template

Templates define a type of BRE category and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The category template to create (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Create a BRE category template
[apiInstance createTemplateUsingPOST1WithTemplate:template
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->createTemplateUsingPOST1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The category template to create | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTemplateUsingDELETE**
```objc
-(NSURLSessionTask*) deleteTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a BRE category template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Delete a BRE category template
[apiInstance deleteTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->deleteTemplateUsingDELETE: %@", error);
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

# **getCategoriesUsingGET**
```objc
-(NSURLSessionTask*) getCategoriesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBreCategoryResource_* output, NSError* error)) handler;
```

List categories

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// List categories
[apiInstance getCategoriesUsingGETWithSize:size
              page:page
          completionHandler: ^(SWGPageResourceBreCategoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getCategoriesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceBreCategoryResource_***](SWGPageResourceBreCategoryResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCategoryUsingGET**
```objc
-(NSURLSessionTask*) getCategoryUsingGETWithName: (NSString*) name
        completionHandler: (void (^)(SWGBreCategoryResource* output, NSError* error)) handler;
```

Get a single category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The category name

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Get a single category
[apiInstance getCategoryUsingGETWithName:name
          completionHandler: ^(SWGBreCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getCategoryUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The category name | 

### Return type

[**SWGBreCategoryResource***](SWGBreCategoryResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplateUsingGET**
```objc
-(NSURLSessionTask*) getTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single BRE category template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Get a single BRE category template
[apiInstance getTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getTemplateUsingGET: %@", error);
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

# **getTemplatesUsingGET**
```objc
-(NSURLSessionTask*) getTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search BRE category templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// List and search BRE category templates
[apiInstance getTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getTemplatesUsingGET: %@", error);
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

# **updateCategoryUsingPUT**
```objc
-(NSURLSessionTask*) updateCategoryUsingPUTWithName: (NSString*) name
    category: (SWGBreCategoryResource*) category
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The category name
SWGBreCategoryResource* category = [[SWGBreCategoryResource alloc] init]; // The updated BRE category information (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Update a category
[apiInstance updateCategoryUsingPUTWithName:name
              category:category
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->updateCategoryUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The category name | 
 **category** | [**SWGBreCategoryResource***](SWGBreCategoryResource*.md)| The updated BRE category information | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTemplateUsingPUT1**
```objc
-(NSURLSessionTask*) updateTemplateUsingPUT1WithId: (NSString*) _id
    template: (SWGTemplateResource*) template
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a BRE category template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The updated category template definition (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Update a BRE category template
[apiInstance updateTemplateUsingPUT1WithId:_id
              template:template
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->updateTemplateUsingPUT1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The updated category template definition | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

