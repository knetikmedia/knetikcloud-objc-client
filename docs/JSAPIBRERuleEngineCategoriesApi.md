# JSAPIBRERuleEngineCategoriesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRECategoryTemplate**](JSAPIBRERuleEngineCategoriesApi.md#createbrecategorytemplate) | **POST** /bre/categories/templates | Create a BRE category template
[**deleteBRECategoryTemplate**](JSAPIBRERuleEngineCategoriesApi.md#deletebrecategorytemplate) | **DELETE** /bre/categories/templates/{id} | Delete a BRE category template
[**getBRECategories**](JSAPIBRERuleEngineCategoriesApi.md#getbrecategories) | **GET** /bre/categories | List categories
[**getBRECategory**](JSAPIBRERuleEngineCategoriesApi.md#getbrecategory) | **GET** /bre/categories/{name} | Get a single category
[**getBRECategoryTemplate**](JSAPIBRERuleEngineCategoriesApi.md#getbrecategorytemplate) | **GET** /bre/categories/templates/{id} | Get a single BRE category template
[**getBRECategoryTemplates**](JSAPIBRERuleEngineCategoriesApi.md#getbrecategorytemplates) | **GET** /bre/categories/templates | List and search BRE category templates
[**updateBRECategory**](JSAPIBRERuleEngineCategoriesApi.md#updatebrecategory) | **PUT** /bre/categories/{name} | Update a category
[**updateBRECategoryTemplate**](JSAPIBRERuleEngineCategoriesApi.md#updatebrecategorytemplate) | **PUT** /bre/categories/templates/{id} | Update a BRE category template


# **createBRECategoryTemplate**
```objc
-(NSURLSessionTask*) createBRECategoryTemplateWithTemplate: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a BRE category template

Templates define a type of BRE category and the properties they have

### Example 
```objc

JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The category template to create (optional)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Create a BRE category template
[apiInstance createBRECategoryTemplateWithTemplate:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->createBRECategoryTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The category template to create | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

No authorization required

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

NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Delete a BRE category template
[apiInstance deleteBRECategoryTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->deleteBRECategoryTemplate: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategories**
```objc
-(NSURLSessionTask*) getBRECategoriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceBreCategoryResource_* output, NSError* error)) handler;
```

List categories

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// List categories
[apiInstance getBRECategoriesWithSize:size
              page:page
          completionHandler: ^(JSAPIPageResourceBreCategoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->getBRECategories: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceBreCategoryResource_***](JSAPIPageResourceBreCategoryResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategory**
```objc
-(NSURLSessionTask*) getBRECategoryWithName: (NSString*) name
        completionHandler: (void (^)(JSAPIBreCategoryResource* output, NSError* error)) handler;
```

Get a single category

### Example 
```objc

NSString* name = @"name_example"; // The category name

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Get a single category
[apiInstance getBRECategoryWithName:name
          completionHandler: ^(JSAPIBreCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->getBRECategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The category name | 

### Return type

[**JSAPIBreCategoryResource***](JSAPIBreCategoryResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategoryTemplate**
```objc
-(NSURLSessionTask*) getBRECategoryTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single BRE category template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Get a single BRE category template
[apiInstance getBRECategoryTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->getBRECategoryTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRECategoryTemplates**
```objc
-(NSURLSessionTask*) getBRECategoryTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search BRE category templates

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// List and search BRE category templates
[apiInstance getBRECategoryTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->getBRECategoryTemplates: %@", error);
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

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRECategory**
```objc
-(NSURLSessionTask*) updateBRECategoryWithName: (NSString*) name
    category: (JSAPIBreCategoryResource*) category
        completionHandler: (void (^)(JSAPIBreCategoryResource* output, NSError* error)) handler;
```

Update a category

### Example 
```objc

NSString* name = @"name_example"; // The category name
JSAPIBreCategoryResource* category = [[JSAPIBreCategoryResource alloc] init]; // The updated BRE category information (optional)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Update a category
[apiInstance updateBRECategoryWithName:name
              category:category
          completionHandler: ^(JSAPIBreCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->updateBRECategory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The category name | 
 **category** | [**JSAPIBreCategoryResource***](JSAPIBreCategoryResource.md)| The updated BRE category information | [optional] 

### Return type

[**JSAPIBreCategoryResource***](JSAPIBreCategoryResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRECategoryTemplate**
```objc
-(NSURLSessionTask*) updateBRECategoryTemplateWithId: (NSString*) _id
    template: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a BRE category template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The updated category template definition (optional)

JSAPIBRERuleEngineCategoriesApi*apiInstance = [[JSAPIBRERuleEngineCategoriesApi alloc] init];

// Update a BRE category template
[apiInstance updateBRECategoryTemplateWithId:_id
              template:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineCategoriesApi->updateBRECategoryTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The updated category template definition | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

