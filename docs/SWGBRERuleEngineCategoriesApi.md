# SWGBRERuleEngineCategoriesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRECategoryTemplate**](SWGBRERuleEngineCategoriesApi.md#createbrecategorytemplate) | **POST** /bre/categories/templates | Create a BRE category template
[**deleteBRECategoryTemplate**](SWGBRERuleEngineCategoriesApi.md#deletebrecategorytemplate) | **DELETE** /bre/categories/templates/{id} | Delete a BRE category template
[**getBRECategories**](SWGBRERuleEngineCategoriesApi.md#getbrecategories) | **GET** /bre/categories | List categories
[**getBRECategory**](SWGBRERuleEngineCategoriesApi.md#getbrecategory) | **GET** /bre/categories/{name} | Get a single category
[**getBRECategoryTemplate**](SWGBRERuleEngineCategoriesApi.md#getbrecategorytemplate) | **GET** /bre/categories/templates/{id} | Get a single BRE category template
[**getBRECategoryTemplates**](SWGBRERuleEngineCategoriesApi.md#getbrecategorytemplates) | **GET** /bre/categories/templates | List and search BRE category templates
[**updateBRECategory**](SWGBRERuleEngineCategoriesApi.md#updatebrecategory) | **PUT** /bre/categories/{name} | Update a category
[**updateBRECategoryTemplate**](SWGBRERuleEngineCategoriesApi.md#updatebrecategorytemplate) | **PUT** /bre/categories/templates/{id} | Update a BRE category template


# **createBRECategoryTemplate**
```objc
-(NSURLSessionTask*) createBRECategoryTemplateWithTemplate: (SWGTemplateResource*) template
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a BRE category template

Templates define a type of BRE category and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The category template to create (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Create a BRE category template
[apiInstance createBRECategoryTemplateWithTemplate:template
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->createBRECategoryTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBRECategoryTemplate**
```objc
-(NSURLSessionTask*) deleteBRECategoryTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a BRE category template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Delete a BRE category template
[apiInstance deleteBRECategoryTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->deleteBRECategoryTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategories**
```objc
-(NSURLSessionTask*) getBRECategoriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBreCategoryResource_* output, NSError* error)) handler;
```

List categories

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// List categories
[apiInstance getBRECategoriesWithSize:size
              page:page
          completionHandler: ^(SWGPageResourceBreCategoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getBRECategories: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategory**
```objc
-(NSURLSessionTask*) getBRECategoryWithName: (NSString*) name
        completionHandler: (void (^)(SWGBreCategoryResource* output, NSError* error)) handler;
```

Get a single category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The category name

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Get a single category
[apiInstance getBRECategoryWithName:name
          completionHandler: ^(SWGBreCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getBRECategory: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategoryTemplate**
```objc
-(NSURLSessionTask*) getBRECategoryTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single BRE category template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Get a single BRE category template
[apiInstance getBRECategoryTemplateWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getBRECategoryTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategoryTemplates**
```objc
-(NSURLSessionTask*) getBRECategoryTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search BRE category templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// List and search BRE category templates
[apiInstance getBRECategoryTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->getBRECategoryTemplates: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRECategory**
```objc
-(NSURLSessionTask*) updateBRECategoryWithName: (NSString*) name
    category: (SWGBreCategoryResource*) category
        completionHandler: (void (^)(SWGBreCategoryResource* output, NSError* error)) handler;
```

Update a category

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The category name
SWGBreCategoryResource* category = [[SWGBreCategoryResource alloc] init]; // The updated BRE category information (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Update a category
[apiInstance updateBRECategoryWithName:name
              category:category
          completionHandler: ^(SWGBreCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->updateBRECategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The category name | 
 **category** | [**SWGBreCategoryResource***](SWGBreCategoryResource*.md)| The updated BRE category information | [optional] 

### Return type

[**SWGBreCategoryResource***](SWGBreCategoryResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRECategoryTemplate**
```objc
-(NSURLSessionTask*) updateBRECategoryTemplateWithId: (NSString*) _id
    template: (SWGTemplateResource*) template
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Update a BRE category template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The updated category template definition (optional)

SWGBRERuleEngineCategoriesApi*apiInstance = [[SWGBRERuleEngineCategoriesApi alloc] init];

// Update a BRE category template
[apiInstance updateBRECategoryTemplateWithId:_id
              template:template
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineCategoriesApi->updateBRECategoryTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The updated category template definition | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

