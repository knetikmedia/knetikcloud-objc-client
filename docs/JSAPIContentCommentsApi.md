# JSAPIContentCommentsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addComment**](JSAPIContentCommentsApi.md#addcomment) | **POST** /comments | Add a new comment
[**deleteComment**](JSAPIContentCommentsApi.md#deletecomment) | **DELETE** /comments/{id} | Delete a comment
[**getComment**](JSAPIContentCommentsApi.md#getcomment) | **GET** /comments/{id} | Return a comment
[**getComments**](JSAPIContentCommentsApi.md#getcomments) | **GET** /comments | Returns a page of comments
[**searchComments**](JSAPIContentCommentsApi.md#searchcomments) | **POST** /comments/search | Search the comment index
[**updateComment**](JSAPIContentCommentsApi.md#updatecomment) | **PUT** /comments/{id}/content | Update a comment


# **addComment**
```objc
-(NSURLSessionTask*) addCommentWithCommentResource: (JSAPICommentResource*) commentResource
        completionHandler: (void (^)(JSAPICommentResource* output, NSError* error)) handler;
```

Add a new comment

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICommentResource* commentResource = [[JSAPICommentResource alloc] init]; // The comment to be added (optional)

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Add a new comment
[apiInstance addCommentWithCommentResource:commentResource
          completionHandler: ^(JSAPICommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->addComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **commentResource** | [**JSAPICommentResource***](JSAPICommentResource.md)| The comment to be added | [optional] 

### Return type

[**JSAPICommentResource***](JSAPICommentResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteComment**
```objc
-(NSURLSessionTask*) deleteCommentWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a comment

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The comment id

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Delete a comment
[apiInstance deleteCommentWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->deleteComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The comment id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getComment**
```objc
-(NSURLSessionTask*) getCommentWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPICommentResource* output, NSError* error)) handler;
```

Return a comment

### Example 
```objc

NSNumber* _id = @789; // The comment id

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Return a comment
[apiInstance getCommentWithId:_id
          completionHandler: ^(JSAPICommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->getComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The comment id | 

### Return type

[**JSAPICommentResource***](JSAPICommentResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getComments**
```objc
-(NSURLSessionTask*) getCommentsWithContext: (NSString*) context
    contextId: (NSNumber*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceCommentResource_* output, NSError* error)) handler;
```

Returns a page of comments

### Example 
```objc

NSString* context = @"context_example"; // Get comments by context type
NSNumber* contextId = @56; // Get comments by context id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Returns a page of comments
[apiInstance getCommentsWithContext:context
              contextId:contextId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceCommentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->getComments: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **context** | **NSString***| Get comments by context type | 
 **contextId** | **NSNumber***| Get comments by context id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceCommentResource_***](JSAPIPageResourceCommentResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchComments**
```objc
-(NSURLSessionTask*) searchCommentsWithQuery: (NSObject*) query
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPICommentSearch* output, NSError* error)) handler;
```

Search the comment index

The body is an ElasticSearch query json. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/index.html'>documentation</a> for details on the format and search options

### Example 
```objc

NSObject* query = NULL; // The search query (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Search the comment index
[apiInstance searchCommentsWithQuery:query
              size:size
              page:page
          completionHandler: ^(JSAPICommentSearch* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->searchComments: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **query** | **NSObject***| The search query | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPICommentSearch***](JSAPICommentSearch.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateComment**
```objc
-(NSURLSessionTask*) updateCommentWithId: (NSNumber*) _id
    content: (JSAPIStringWrapper*) content
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a comment

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The comment id
JSAPIStringWrapper* content = [[JSAPIStringWrapper alloc] init]; // The comment content (optional)

JSAPIContentCommentsApi*apiInstance = [[JSAPIContentCommentsApi alloc] init];

// Update a comment
[apiInstance updateCommentWithId:_id
              content:content
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIContentCommentsApi->updateComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The comment id | 
 **content** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The comment content | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
