# SWGContentCommentsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addCommentUsingPOST**](SWGContentCommentsApi.md#addcommentusingpost) | **POST** /comments | Add a new comment
[**deleteCommentUsingDELETE**](SWGContentCommentsApi.md#deletecommentusingdelete) | **DELETE** /comments/{id} | Delete a comment
[**getCommentUsingGET**](SWGContentCommentsApi.md#getcommentusingget) | **GET** /comments/{id} | Returns a comment by comment id
[**getCommentsUsingGET**](SWGContentCommentsApi.md#getcommentsusingget) | **GET** /comments | Returns a page of comments
[**searchCommentsUsingPOST**](SWGContentCommentsApi.md#searchcommentsusingpost) | **POST** /comments/search | Search the comment index
[**updateCommentUsingPUT**](SWGContentCommentsApi.md#updatecommentusingput) | **PUT** /comments/{id}/content | Update comment content


# **addCommentUsingPOST**
```objc
-(NSURLSessionTask*) addCommentUsingPOSTWithCommentResource: (SWGCommentResource*) commentResource
        completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;
```

Add a new comment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCommentResource* commentResource = [[SWGCommentResource alloc] init]; // The comment to be added (optional)

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Add a new comment
[apiInstance addCommentUsingPOSTWithCommentResource:commentResource
          completionHandler: ^(SWGCommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->addCommentUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **commentResource** | [**SWGCommentResource***](SWGCommentResource*.md)| The comment to be added | [optional] 

### Return type

[**SWGCommentResource***](SWGCommentResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCommentUsingDELETE**
```objc
-(NSURLSessionTask*) deleteCommentUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a comment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The comment id

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Delete a comment
[apiInstance deleteCommentUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->deleteCommentUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCommentUsingGET**
```objc
-(NSURLSessionTask*) getCommentUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;
```

Returns a comment by comment id

### Example 
```objc

NSNumber* _id = @789; // The comment id

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Returns a comment by comment id
[apiInstance getCommentUsingGETWithId:_id
          completionHandler: ^(SWGCommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->getCommentUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The comment id | 

### Return type

[**SWGCommentResource***](SWGCommentResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCommentsUsingGET**
```objc
-(NSURLSessionTask*) getCommentsUsingGETWithContext: (NSString*) context
    contextId: (NSNumber*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceCommentResource_* output, NSError* error)) handler;
```

Returns a page of comments

### Example 
```objc

NSString* context = @"context_example"; // Get comments by context type
NSNumber* contextId = @56; // Get comments by context id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Returns a page of comments
[apiInstance getCommentsUsingGETWithContext:context
              contextId:contextId
              size:size
              page:page
          completionHandler: ^(SWGPageResourceCommentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->getCommentsUsingGET: %@", error);
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

[**SWGPageResourceCommentResource_***](SWGPageResourceCommentResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCommentsUsingPOST**
```objc
-(NSURLSessionTask*) searchCommentsUsingPOSTWithQuery: (NSObject*) query
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGCommentSearch* output, NSError* error)) handler;
```

Search the comment index

The body is an ElasticSearch query json. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/index.html'>documentation</a> for details on the format and search options

### Example 
```objc

NSObject* query = NULL; // The search query (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Search the comment index
[apiInstance searchCommentsUsingPOSTWithQuery:query
              size:size
              page:page
          completionHandler: ^(SWGCommentSearch* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->searchCommentsUsingPOST: %@", error);
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

[**SWGCommentSearch***](SWGCommentSearch.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCommentUsingPUT**
```objc
-(NSURLSessionTask*) updateCommentUsingPUTWithId: (NSNumber*) _id
    content: (NSString*) content
        completionHandler: (void (^)(NSError* error)) handler;
```

Update comment content

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The comment id
NSString* content = content_example; // The comment content (optional)

SWGContentCommentsApi*apiInstance = [[SWGContentCommentsApi alloc] init];

// Update comment content
[apiInstance updateCommentUsingPUTWithId:_id
              content:content
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentCommentsApi->updateCommentUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The comment id | 
 **content** | **NSString***| The comment content | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

