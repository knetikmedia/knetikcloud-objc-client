# SWGContentArticlesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createArticleTemplateUsingPOST**](SWGContentArticlesApi.md#createarticletemplateusingpost) | **POST** /content/articles/templates | Create an article template
[**createArticleUsingPOST**](SWGContentArticlesApi.md#createarticleusingpost) | **POST** /content/articles | Create a new article
[**deleteArticleTemplateUsingDELETE**](SWGContentArticlesApi.md#deletearticletemplateusingdelete) | **DELETE** /content/articles/templates/{id} | Delete an article template
[**deleteArticleUsingDELETE**](SWGContentArticlesApi.md#deletearticleusingdelete) | **DELETE** /content/articles/{id} | Delete an existing article
[**getArticleTemplateUsingGET**](SWGContentArticlesApi.md#getarticletemplateusingget) | **GET** /content/articles/templates/{id} | Get a single article template
[**getArticleTemplatesUsingGET**](SWGContentArticlesApi.md#getarticletemplatesusingget) | **GET** /content/articles/templates | List and search article templates
[**getArticleUsingGET**](SWGContentArticlesApi.md#getarticleusingget) | **GET** /content/articles/{id} | Get a single article
[**getArticlesUsingGET**](SWGContentArticlesApi.md#getarticlesusingget) | **GET** /content/articles | List and search articles
[**updateArticleTemplateUsingPUT**](SWGContentArticlesApi.md#updatearticletemplateusingput) | **PUT** /content/articles/templates/{id} | Update an article template
[**updateArticleUsingPUT**](SWGContentArticlesApi.md#updatearticleusingput) | **PUT** /content/articles/{id} | Update an existing article


# **createArticleTemplateUsingPOST**
```objc
-(NSNumber*) createArticleTemplateUsingPOSTWithArticleTemplateResource: (SWGTemplateResource*) articleTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create an article template

Article Templates define a type of article and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* articleTemplateResource = [[SWGTemplateResource alloc] init]; // The article template resource object (optional)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Create an article template
[apiInstance createArticleTemplateUsingPOSTWithArticleTemplateResource:articleTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->createArticleTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **articleTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The article template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createArticleUsingPOST**
```objc
-(NSNumber*) createArticleUsingPOSTWithArticleResource: (SWGArticleResource*) articleResource
        completionHandler: (void (^)(SWGArticleResource* output, NSError* error)) handler;
```

Create a new article

Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGArticleResource* articleResource = [[SWGArticleResource alloc] init]; // The new article (optional)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Create a new article
[apiInstance createArticleUsingPOSTWithArticleResource:articleResource
          completionHandler: ^(SWGArticleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->createArticleUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **articleResource** | [**SWGArticleResource***](SWGArticleResource*.md)| The new article | [optional] 

### Return type

[**SWGArticleResource***](SWGArticleResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteArticleTemplateUsingDELETE**
```objc
-(NSNumber*) deleteArticleTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an article template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Delete an article template
[apiInstance deleteArticleTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->deleteArticleTemplateUsingDELETE: %@", error);
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

# **deleteArticleUsingDELETE**
```objc
-(NSNumber*) deleteArticleUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing article

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The article id

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Delete an existing article
[apiInstance deleteArticleUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->deleteArticleUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The article id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticleTemplateUsingGET**
```objc
-(NSNumber*) getArticleTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single article template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Get a single article template
[apiInstance getArticleTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->getArticleTemplateUsingGET: %@", error);
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

# **getArticleTemplatesUsingGET**
```objc
-(NSNumber*) getArticleTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search article templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// List and search article templates
[apiInstance getArticleTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->getArticleTemplatesUsingGET: %@", error);
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

# **getArticleUsingGET**
```objc
-(NSNumber*) getArticleUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGArticleResource* output, NSError* error)) handler;
```

Get a single article

### Example 
```objc

NSString* _id = @"_id_example"; // The article id

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Get a single article
[apiInstance getArticleUsingGETWithId:_id
          completionHandler: ^(SWGArticleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->getArticleUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The article id | 

### Return type

[**SWGArticleResource***](SWGArticleResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticlesUsingGET**
```objc
-(NSNumber*) getArticlesUsingGETWithFilterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTitle: (NSString*) filterTitle
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceArticleResource_* output, NSError* error)) handler;
```

List and search articles

Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed.

### Example 
```objc

NSString* filterCategory = @"filterCategory_example"; // Filter for articles from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for articles with specified tags (separated by comma) (optional)
NSString* filterTitle = @"filterTitle_example"; // Filter for articles whose title contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// List and search articles
[apiInstance getArticlesUsingGETWithFilterCategory:filterCategory
              filterTagset:filterTagset
              filterTitle:filterTitle
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceArticleResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->getArticlesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterCategory** | **NSString***| Filter for articles from a specific category by id | [optional] 
 **filterTagset** | **NSString***| Filter for articles with specified tags (separated by comma) | [optional] 
 **filterTitle** | **NSString***| Filter for articles whose title contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceArticleResource_***](SWGPageResourceArticleResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArticleTemplateUsingPUT**
```objc
-(NSNumber*) updateArticleTemplateUsingPUTWithId: (NSString*) _id
    articleTemplateResource: (SWGTemplateResource*) articleTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an article template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* articleTemplateResource = [[SWGTemplateResource alloc] init]; // The article template resource object (optional)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Update an article template
[apiInstance updateArticleTemplateUsingPUTWithId:_id
              articleTemplateResource:articleTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->updateArticleTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **articleTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The article template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArticleUsingPUT**
```objc
-(NSNumber*) updateArticleUsingPUTWithId: (NSString*) _id
    articleResource: (SWGArticleResource*) articleResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing article

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The article id
SWGArticleResource* articleResource = [[SWGArticleResource alloc] init]; // The article object (optional)

SWGContentArticlesApi*apiInstance = [[SWGContentArticlesApi alloc] init];

// Update an existing article
[apiInstance updateArticleUsingPUTWithId:_id
              articleResource:articleResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentArticlesApi->updateArticleUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The article id | 
 **articleResource** | [**SWGArticleResource***](SWGArticleResource*.md)| The article object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

