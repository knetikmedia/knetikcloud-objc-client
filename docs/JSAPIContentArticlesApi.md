# JSAPIContentArticlesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createArticle**](JSAPIContentArticlesApi.md#createarticle) | **POST** /content/articles | Create a new article
[**createArticleTemplate**](JSAPIContentArticlesApi.md#createarticletemplate) | **POST** /content/articles/templates | Create an article template
[**createTemplate**](JSAPIContentArticlesApi.md#createtemplate) | **POST** /templates/{type_hint} | Create a template
[**deleteArticle**](JSAPIContentArticlesApi.md#deletearticle) | **DELETE** /content/articles/{id} | Delete an existing article
[**deleteArticleTemplate**](JSAPIContentArticlesApi.md#deletearticletemplate) | **DELETE** /content/articles/templates/{id} | Delete an article template
[**deleteTemplate**](JSAPIContentArticlesApi.md#deletetemplate) | **DELETE** /templates/{type_hint}/{id} | Delete a template
[**getArticle**](JSAPIContentArticlesApi.md#getarticle) | **GET** /content/articles/{id} | Get a single article
[**getArticleTemplate**](JSAPIContentArticlesApi.md#getarticletemplate) | **GET** /content/articles/templates/{id} | Get a single article template
[**getArticleTemplates**](JSAPIContentArticlesApi.md#getarticletemplates) | **GET** /content/articles/templates | List and search article templates
[**getArticles**](JSAPIContentArticlesApi.md#getarticles) | **GET** /content/articles | List and search articles
[**getTemplate**](JSAPIContentArticlesApi.md#gettemplate) | **GET** /templates/{type_hint}/{id} | Get a template
[**getTemplates**](JSAPIContentArticlesApi.md#gettemplates) | **GET** /templates/{type_hint} | List and search templates
[**updateArticle**](JSAPIContentArticlesApi.md#updatearticle) | **PUT** /content/articles/{id} | Update an existing article
[**updateArticleTemplate**](JSAPIContentArticlesApi.md#updatearticletemplate) | **PUT** /content/articles/templates/{id} | Update an article template
[**updateTemplate**](JSAPIContentArticlesApi.md#updatetemplate) | **PUT** /templates/{type_hint}/{id} | Update a template
[**validate**](JSAPIContentArticlesApi.md#validate) | **POST** /templates/{type_hint}/validate | Validate a templated resource


# **createArticle**
```objc
-(NSURLSessionTask*) createArticleWithArticleResource: (JSAPIArticleResource*) articleResource
        completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;
```

Create a new article

Articles are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.<br><br><b>Permissions:</b> ARTICLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIArticleResource* articleResource = [[JSAPIArticleResource alloc] init]; // The new article (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Create a new article
[apiInstance createArticleWithArticleResource:articleResource
          completionHandler: ^(JSAPIArticleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->createArticle: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **articleResource** | [**JSAPIArticleResource***](JSAPIArticleResource.md)| The new article | [optional] 

### Return type

[**JSAPIArticleResource***](JSAPIArticleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createArticleTemplate**
```objc
-(NSURLSessionTask*) createArticleTemplateWithArticleTemplateResource: (JSAPITemplateResource*) articleTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create an article template

Article Templates define a type of article and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* articleTemplateResource = [[JSAPITemplateResource alloc] init]; // The article template resource object (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Create an article template
[apiInstance createArticleTemplateWithArticleTemplateResource:articleTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->createArticleTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **articleTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The article template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createTemplate**
```objc
-(NSURLSessionTask*) createTemplateWithTypeHint: (NSString*) typeHint
    template: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The template (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Create a template
[apiInstance createTemplateWithTypeHint:typeHint
              template:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->createTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The template | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteArticle**
```objc
-(NSURLSessionTask*) deleteArticleWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing article

<b>Permissions Needed:</b> ARTICLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The article id

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Delete an existing article
[apiInstance deleteArticleWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->deleteArticle: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteArticleTemplate**
```objc
-(NSURLSessionTask*) deleteArticleTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an article template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Delete an article template
[apiInstance deleteArticleTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->deleteArticleTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTemplate**
```objc
-(NSURLSessionTask*) deleteTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = cascade_example; // How to cascade the delete (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Delete a template
[apiInstance deleteTemplateWithTypeHint:typeHint
              _id:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->deleteTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| How to cascade the delete | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticle**
```objc
-(NSURLSessionTask*) getArticleWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;
```

Get a single article

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The article id

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Get a single article
[apiInstance getArticleWithId:_id
          completionHandler: ^(JSAPIArticleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getArticle: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The article id | 

### Return type

[**JSAPIArticleResource***](JSAPIArticleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticleTemplate**
```objc
-(NSURLSessionTask*) getArticleTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single article template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTICLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Get a single article template
[apiInstance getArticleTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getArticleTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticleTemplates**
```objc
-(NSURLSessionTask*) getArticleTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search article templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ARTICLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// List and search article templates
[apiInstance getArticleTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getArticleTemplates: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArticles**
```objc
-(NSURLSessionTask*) getArticlesWithFilterActiveOnly: (NSNumber*) filterActiveOnly
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTagIntersection: (NSString*) filterTagIntersection
    filterTagExclusion: (NSString*) filterTagExclusion
    filterTitle: (NSString*) filterTitle
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceArticleResource_* output, NSError* error)) handler;
```

List and search articles

Get a list of articles with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single article' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterActiveOnly = @true; // Filter for articles that are active (true) or inactive (false) (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for articles from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for articles with at least one of a specified set of tags (separated by comma) (optional)
NSString* filterTagIntersection = @"filterTagIntersection_example"; // Filter for articles with all of a specified set of tags (separated by comma) (optional)
NSString* filterTagExclusion = @"filterTagExclusion_example"; // Filter for articles with none of a specified set of tags (separated by comma) (optional)
NSString* filterTitle = @"filterTitle_example"; // Filter for articles whose title contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// List and search articles
[apiInstance getArticlesWithFilterActiveOnly:filterActiveOnly
              filterCategory:filterCategory
              filterTagset:filterTagset
              filterTagIntersection:filterTagIntersection
              filterTagExclusion:filterTagExclusion
              filterTitle:filterTitle
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceArticleResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getArticles: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterActiveOnly** | **NSNumber***| Filter for articles that are active (true) or inactive (false) | [optional] 
 **filterCategory** | **NSString***| Filter for articles from a specific category by id | [optional] 
 **filterTagset** | **NSString***| Filter for articles with at least one of a specified set of tags (separated by comma) | [optional] 
 **filterTagIntersection** | **NSString***| Filter for articles with all of a specified set of tags (separated by comma) | [optional] 
 **filterTagExclusion** | **NSString***| Filter for articles with none of a specified set of tags (separated by comma) | [optional] 
 **filterTitle** | **NSString***| Filter for articles whose title contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceArticleResource_***](JSAPIPageResourceArticleResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplate**
```objc
-(NSURLSessionTask*) getTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Get a template
[apiInstance getTemplateWithTypeHint:typeHint
              _id:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTemplates**
```objc
-(NSURLSessionTask*) getTemplatesWithTypeHint: (NSString*) typeHint
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search templates

<b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// List and search templates
[apiInstance getTemplatesWithTypeHint:typeHint
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->getTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArticle**
```objc
-(NSURLSessionTask*) updateArticleWithId: (NSString*) _id
    articleResource: (JSAPIArticleResource*) articleResource
        completionHandler: (void (^)(JSAPIArticleResource* output, NSError* error)) handler;
```

Update an existing article

<b>Permissions Needed:</b> ARTICLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The article id
JSAPIArticleResource* articleResource = [[JSAPIArticleResource alloc] init]; // The article object (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Update an existing article
[apiInstance updateArticleWithId:_id
              articleResource:articleResource
          completionHandler: ^(JSAPIArticleResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->updateArticle: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The article id | 
 **articleResource** | [**JSAPIArticleResource***](JSAPIArticleResource.md)| The article object | [optional] 

### Return type

[**JSAPIArticleResource***](JSAPIArticleResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArticleTemplate**
```objc
-(NSURLSessionTask*) updateArticleTemplateWithId: (NSString*) _id
    articleTemplateResource: (JSAPITemplateResource*) articleTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an article template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* articleTemplateResource = [[JSAPITemplateResource alloc] init]; // The article template resource object (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Update an article template
[apiInstance updateArticleTemplateWithId:_id
              articleTemplateResource:articleTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->updateArticleTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **articleTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The article template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTemplate**
```objc
-(NSURLSessionTask*) updateTemplateWithTypeHint: (NSString*) typeHint
    _id: (NSString*) _id
    template: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a template

<b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The template (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Update a template
[apiInstance updateTemplateWithTypeHint:typeHint
              _id:_id
              template:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->updateTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **_id** | **NSString***| The id of the template | 
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The template | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **validate**
```objc
-(NSURLSessionTask*) validateWithTypeHint: (NSString*) typeHint
    resource: (JSAPIBasicTemplatedResource*) resource
        completionHandler: (void (^)(NSError* error)) handler;
```

Validate a templated resource

Error code thrown if invalid.<br><br><b>Permissions Needed:</b> TEMPLATES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* typeHint = @"typeHint_example"; // The type for the resource this template applies to
JSAPIBasicTemplatedResource* resource = [[JSAPIBasicTemplatedResource alloc] init]; // The resource to validate (optional)

JSAPIContentArticlesApi*apiInstance = [[JSAPIContentArticlesApi alloc] init];

// Validate a templated resource
[apiInstance validateWithTypeHint:typeHint
              resource:resource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentArticlesApi->validate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **typeHint** | **NSString***| The type for the resource this template applies to | 
 **resource** | [**JSAPIBasicTemplatedResource***](JSAPIBasicTemplatedResource.md)| The resource to validate | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

