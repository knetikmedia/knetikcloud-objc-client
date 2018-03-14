# JSAPISearchApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**searchCountGET**](JSAPISearchApi.md#searchcountget) | **GET** /search/count/{type} | Count matches with no template
[**searchCountPOST**](JSAPISearchApi.md#searchcountpost) | **POST** /search/count/{type} | Count matches with no template
[**searchCountWithTemplateGET**](JSAPISearchApi.md#searchcountwithtemplateget) | **GET** /search/count/{type}/{template} | Count matches with a template
[**searchCountWithTemplatePOST**](JSAPISearchApi.md#searchcountwithtemplatepost) | **POST** /search/count/{type}/{template} | Count matches with a template
[**searchDocumentGET**](JSAPISearchApi.md#searchdocumentget) | **GET** /search/documents/{type}/{id} | Get document with no template
[**searchDocumentWithTemplateGET**](JSAPISearchApi.md#searchdocumentwithtemplateget) | **GET** /search/documents/{type}/{template}/{id} | Get document with a template
[**searchExplainGET**](JSAPISearchApi.md#searchexplainget) | **GET** /search/explain/{type}/{id} | Explain matches with no template
[**searchExplainPOST**](JSAPISearchApi.md#searchexplainpost) | **POST** /search/explain/{type}/{id} | Explain matches with no template
[**searchExplainWithTemplateGET**](JSAPISearchApi.md#searchexplainwithtemplateget) | **GET** /search/explain/{type}/{template}/{id} | Explain matches with a template
[**searchExplainWithTemplatePOST**](JSAPISearchApi.md#searchexplainwithtemplatepost) | **POST** /search/explain/{type}/{template}/{id} | Explain matches with a template
[**searchIndex**](JSAPISearchApi.md#searchindex) | **POST** /search/index/{type} | Search an index with no template
[**searchIndexGET**](JSAPISearchApi.md#searchindexget) | **GET** /search/index/{type} | Search an index with no template
[**searchIndexWithTemplateGET**](JSAPISearchApi.md#searchindexwithtemplateget) | **GET** /search/index/{type}/{template} | Search an index with a template
[**searchIndexWithTemplatePOST**](JSAPISearchApi.md#searchindexwithtemplatepost) | **POST** /search/index/{type}/{template} | Search an index with a template
[**searchIndicesGET**](JSAPISearchApi.md#searchindicesget) | **GET** /search/indices | Get indices
[**searchMappingsGET**](JSAPISearchApi.md#searchmappingsget) | **GET** /search/mappings/{type} | Get mapping with no template
[**searchMappingsWithTemplateGET**](JSAPISearchApi.md#searchmappingswithtemplateget) | **GET** /search/mappings/{type}/{template} | Get mapping with a template
[**searchValidateGET**](JSAPISearchApi.md#searchvalidateget) | **GET** /search/validate/{type} | Validate matches with no template
[**searchValidatePOST**](JSAPISearchApi.md#searchvalidatepost) | **POST** /search/validate/{type} | Validate matches with no template
[**searchValidateWithTemplateGET**](JSAPISearchApi.md#searchvalidatewithtemplateget) | **GET** /search/validate/{type}/{template} | Validate matches with a template
[**searchValidateWithTemplatePOST**](JSAPISearchApi.md#searchvalidatewithtemplatepost) | **POST** /search/validate/{type}/{template} | Validate matches with a template


# **searchCountGET**
```objc
-(NSURLSessionTask*) searchCountGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with no template
[apiInstance searchCountGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCountPOST**
```objc
-(NSURLSessionTask*) searchCountPOSTWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with no template
[apiInstance searchCountPOSTWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCountWithTemplateGET**
```objc
-(NSURLSessionTask*) searchCountWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with a template
[apiInstance searchCountWithTemplateGETWithType:type
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCountWithTemplatePOST**
```objc
-(NSURLSessionTask*) searchCountWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Count matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _count.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Count matches with a template
[apiInstance searchCountWithTemplatePOSTWithType:type
              template:template
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchCountWithTemplatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchDocumentGET**
```objc
-(NSURLSessionTask*) searchDocumentGETWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get document with no template

This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get document with no template
[apiInstance searchDocumentGETWithType:type
              _id:_id
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchDocumentGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchDocumentWithTemplateGET**
```objc
-(NSURLSessionTask*) searchDocumentWithTemplateGETWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get document with a template

This is a 1 to 1 mapping of a ElasticSearch call.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get document with a template
[apiInstance searchDocumentWithTemplateGETWithType:type
              _id:_id
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchDocumentWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainGET**
```objc
-(NSURLSessionTask*) searchExplainGETWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with no template
[apiInstance searchExplainGETWithType:type
              _id:_id
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainPOST**
```objc
-(NSURLSessionTask*) searchExplainPOSTWithType: (NSString*) type
    _id: (NSString*) _id
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with no template
[apiInstance searchExplainPOSTWithType:type
              _id:_id
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainWithTemplateGET**
```objc
-(NSURLSessionTask*) searchExplainWithTemplateGETWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with a template
[apiInstance searchExplainWithTemplateGETWithType:type
              _id:_id
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchExplainWithTemplatePOST**
```objc
-(NSURLSessionTask*) searchExplainWithTemplatePOSTWithType: (NSString*) type
    _id: (NSString*) _id
    template: (NSString*) template
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Explain matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _explain.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-count.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The index id
NSString* template = @"template_example"; // The index template
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Explain matches with a template
[apiInstance searchExplainWithTemplatePOSTWithType:type
              _id:_id
              template:template
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchExplainWithTemplatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The index id | 
 **template** | **NSString***| The index template | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndex**
```objc
-(NSURLSessionTask*) searchIndexWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with no template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with no template
[apiInstance searchIndexWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndex: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndexGET**
```objc
-(NSURLSessionTask*) searchIndexGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with no template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with no template
[apiInstance searchIndexGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndexGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndexWithTemplateGET**
```objc
-(NSURLSessionTask*) searchIndexWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with a template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with a template
[apiInstance searchIndexWithTemplateGETWithType:type
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndexWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndexWithTemplatePOST**
```objc
-(NSURLSessionTask*) searchIndexWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Search an index with a template

This is a 1 to 1 mapping of a ElasticSearch call to _search.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index with a template
[apiInstance searchIndexWithTemplatePOSTWithType:type
              template:template
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndexWithTemplatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndicesGET**
```objc
-(NSURLSessionTask*) searchIndicesGETWithCompletionHandler: 
        (void (^)(NSObject* output, NSError* error)) handler;
```

Get indices

This is a 1 to 1 mapping of a ElasticSearch call to _cat/indices for indices.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get indices
[apiInstance searchIndicesGETWithCompletionHandler: 
          ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchIndicesGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchMappingsGET**
```objc
-(NSURLSessionTask*) searchMappingsGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get mapping with no template

This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get mapping with no template
[apiInstance searchMappingsGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchMappingsGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchMappingsWithTemplateGET**
```objc
-(NSURLSessionTask*) searchMappingsWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Get mapping with a template

This is a 1 to 1 mapping of a ElasticSearch call to _mapping.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/indices-get-mapping.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Get mapping with a template
[apiInstance searchMappingsWithTemplateGETWithType:type
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchMappingsWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidateGET**
```objc
-(NSURLSessionTask*) searchValidateGETWithType: (NSString*) type
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with no template
[apiInstance searchValidateGETWithType:type
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidatePOST**
```objc
-(NSURLSessionTask*) searchValidatePOSTWithType: (NSString*) type
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with no template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with no template
[apiInstance searchValidatePOSTWithType:type
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidateWithTemplateGET**
```objc
-(NSURLSessionTask*) searchValidateWithTemplateGETWithType: (NSString*) type
    template: (NSString*) template
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with a template
[apiInstance searchValidateWithTemplateGETWithType:type
              template:template
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidateWithTemplateGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchValidateWithTemplatePOST**
```objc
-(NSURLSessionTask*) searchValidateWithTemplatePOSTWithType: (NSString*) type
    template: (NSString*) template
    query: (NSObject*) query
        completionHandler: (void (^)(NSObject* output, NSError* error)) handler;
```

Validate matches with a template

This is a 1 to 1 mapping of a ElasticSearch call to _validate/query.  Further information can be found at their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/search-validate.html'>API guide</a>. <br><br><b>Permissions Needed:</b> SEARCH_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* template = @"template_example"; // The index template
NSObject* query = NULL; // The query to be used for the search (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Validate matches with a template
[apiInstance searchValidateWithTemplatePOSTWithType:type
              template:template
              query:query
          completionHandler: ^(NSObject* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->searchValidateWithTemplatePOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **template** | **NSString***| The index template | 
 **query** | **NSObject***| The query to be used for the search | [optional] 

### Return type

**NSObject***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

