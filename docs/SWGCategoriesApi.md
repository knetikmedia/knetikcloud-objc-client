# SWGCategoriesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCategoryUsingPOST**](SWGCategoriesApi.md#createcategoryusingpost) | **POST** /categories | Create a new category
[**createTemplateUsingPOST2**](SWGCategoriesApi.md#createtemplateusingpost2) | **POST** /categories/templates | Create a category template
[**deleteCategoryUsingDELETE**](SWGCategoriesApi.md#deletecategoryusingdelete) | **DELETE** /categories/{id} | Delete an existing category
[**deleteTemplateUsingDELETE1**](SWGCategoriesApi.md#deletetemplateusingdelete1) | **DELETE** /categories/templates/{id} | Delete a category template
[**getArticleTemplatesUsingGET1**](SWGCategoriesApi.md#getarticletemplatesusingget1) | **GET** /categories/templates | List and search category templates
[**getCategoriesUsingGET1**](SWGCategoriesApi.md#getcategoriesusingget1) | **GET** /categories | List and search categories with optional filters
[**getCategoryUsingGET1**](SWGCategoriesApi.md#getcategoryusingget1) | **GET** /categories/{id} | Get a single category
[**getTagsUsingGET**](SWGCategoriesApi.md#gettagsusingget) | **GET** /tags | List all trivia tags in the system
[**getTemplateUsingGET1**](SWGCategoriesApi.md#gettemplateusingget1) | **GET** /categories/templates/{id} | Get a single category template
[**updateCategoryUsingPUT1**](SWGCategoriesApi.md#updatecategoryusingput1) | **PUT** /categories/{id} | Update an existing category
[**updateTemplateUsingPUT2**](SWGCategoriesApi.md#updatetemplateusingput2) | **PUT** /categories/templates/{id} | Update a category template


# **createCategoryUsingPOST**
```objc
-(NSNumber*) createCategoryUsingPOSTWithCategory: (SWGCategoryResource*) category
        completionHandler: (void (^)(SWGCategoryResource* output, NSError* error)) handler;
```

Create a new category

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCategoryResource* category = [[SWGCategoryResource alloc] init]; // The category to create (optional)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Create a new category
[apiInstance createCategoryUsingPOSTWithCategory:category
          completionHandler: ^(SWGCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->createCategoryUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **category** | [**SWGCategoryResource***](SWGCategoryResource*.md)| The category to create | [optional] 

### Return type

[**SWGCategoryResource***](SWGCategoryResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createTemplateUsingPOST2**
```objc
-(NSNumber*) createTemplateUsingPOST2WithTemplate: (SWGTemplateResource*) template
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a category template

Templates define a type of category and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The template to create (optional)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Create a category template
[apiInstance createTemplateUsingPOST2WithTemplate:template
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->createTemplateUsingPOST2: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The template to create | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCategoryUsingDELETE**
```objc
-(NSNumber*) deleteCategoryUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing category

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the category to be deleted

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Delete an existing category
[apiInstance deleteCategoryUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->deleteCategoryUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the category to be deleted | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTemplateUsingDELETE1**
```objc
-(NSNumber*) deleteTemplateUsingDELETE1WithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a category template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Delete a category template
[apiInstance deleteTemplateUsingDELETE1WithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->deleteTemplateUsingDELETE1: %@", error);
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

# **getArticleTemplatesUsingGET1**
```objc
-(NSNumber*) getArticleTemplatesUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search category templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// List and search category templates
[apiInstance getArticleTemplatesUsingGET1WithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->getArticleTemplatesUsingGET1: %@", error);
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

# **getCategoriesUsingGET1**
```objc
-(NSNumber*) getCategoriesUsingGET1WithFilterSearch: (NSString*) filterSearch
    filterActive: (NSNumber*) filterActive
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceCategoryResource_* output, NSError* error)) handler;
```

List and search categories with optional filters

### Example 
```objc

NSString* filterSearch = @"filterSearch_example"; // Filter for categories whose names begin with provided string (optional)
NSNumber* filterActive = @true; // Filter for categories that are specifically active or inactive (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// List and search categories with optional filters
[apiInstance getCategoriesUsingGET1WithFilterSearch:filterSearch
              filterActive:filterActive
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCategoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->getCategoriesUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for categories whose names begin with provided string | [optional] 
 **filterActive** | **NSNumber***| Filter for categories that are specifically active or inactive | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceCategoryResource_***](SWGPageResourceCategoryResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCategoryUsingGET1**
```objc
-(NSNumber*) getCategoryUsingGET1WithId: (NSString*) _id
        completionHandler: (void (^)(SWGCategoryResource* output, NSError* error)) handler;
```

Get a single category

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the category to retrieve

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Get a single category
[apiInstance getCategoryUsingGET1WithId:_id
          completionHandler: ^(SWGCategoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->getCategoryUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the category to retrieve | 

### Return type

[**SWGCategoryResource***](SWGCategoryResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTagsUsingGET**
```objc
-(NSNumber*) getTagsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceString_* output, NSError* error)) handler;
```

List all trivia tags in the system

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// List all trivia tags in the system
[apiInstance getTagsUsingGETWithSize:size
              page:page
          completionHandler: ^(SWGPageResourceString_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->getTagsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceString_***](SWGPageResourceString_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplateUsingGET1**
```objc
-(NSNumber*) getTemplateUsingGET1WithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single category template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Get a single category template
[apiInstance getTemplateUsingGET1WithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->getTemplateUsingGET1: %@", error);
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

# **updateCategoryUsingPUT1**
```objc
-(NSNumber*) updateCategoryUsingPUT1WithId: (NSString*) _id
    category: (SWGCategoryResource*) category
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing category

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the category
SWGCategoryResource* category = [[SWGCategoryResource alloc] init]; // The category to update (optional)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Update an existing category
[apiInstance updateCategoryUsingPUT1WithId:_id
              category:category
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->updateCategoryUsingPUT1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the category | 
 **category** | [**SWGCategoryResource***](SWGCategoryResource*.md)| The category to update | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTemplateUsingPUT2**
```objc
-(NSNumber*) updateTemplateUsingPUT2WithId: (NSString*) _id
    template: (SWGTemplateResource*) template
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a category template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The updated template information (optional)

SWGCategoriesApi*apiInstance = [[SWGCategoriesApi alloc] init];

// Update a category template
[apiInstance updateTemplateUsingPUT2WithId:_id
              template:template
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCategoriesApi->updateTemplateUsingPUT2: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The updated template information | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

