# JSAPISearchApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSearchIndex**](JSAPISearchApi.md#addsearchindex) | **POST** /search/index/{type}/{id} | Add a new object to an index
[**addSearchMappings**](JSAPISearchApi.md#addsearchmappings) | **POST** /search/mappings | Register reference mappings
[**deleteSearchIndex**](JSAPISearchApi.md#deletesearchindex) | **DELETE** /search/index/{type}/{id} | Delete an object
[**deleteSearchIndexes**](JSAPISearchApi.md#deletesearchindexes) | **DELETE** /search/index/{type} | Delete all objects in an index
[**searchIndex**](JSAPISearchApi.md#searchindex) | **POST** /search/index/{type} | Search an index


# **addSearchIndex**
```objc
-(NSURLSessionTask*) addSearchIndexWithType: (NSString*) type
    _id: (NSString*) _id
    object: (NSObject*) object
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a new object to an index

Mainly intended for internal use.

### Example 
```objc

NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The ID of the object
NSObject* object = NULL; // The object to add (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Add a new object to an index
[apiInstance addSearchIndexWithType:type
              _id:_id
              object:object
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->addSearchIndex: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The ID of the object | 
 **object** | **NSObject***| The object to add | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addSearchMappings**
```objc
-(NSURLSessionTask*) addSearchMappingsWithMappings: (NSArray<JSAPISearchReferenceMapping>*) mappings
        completionHandler: (void (^)(NSError* error)) handler;
```

Register reference mappings

Add a new type mapping to connect data from one index to another, or discover an exsting one. Mainly intended for internal use.

### Example 
```objc

NSArray<JSAPISearchReferenceMapping>* mappings = @[[[JSAPISearchReferenceMapping alloc] init]]; // The mappings to add (optional)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Register reference mappings
[apiInstance addSearchMappingsWithMappings:mappings
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->addSearchMappings: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mappings** | [**NSArray&lt;JSAPISearchReferenceMapping&gt;***](JSAPISearchReferenceMapping.md)| The mappings to add | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSearchIndex**
```objc
-(NSURLSessionTask*) deleteSearchIndexWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an object

Mainly intended for internal use. Requires SEARCH_ADMIN.

### Example 
```objc

NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The ID of the object to delete

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Delete an object
[apiInstance deleteSearchIndexWithType:type
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->deleteSearchIndex: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 
 **_id** | **NSString***| The ID of the object to delete | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSearchIndexes**
```objc
-(NSURLSessionTask*) deleteSearchIndexesWithType: (NSString*) type
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all objects in an index

Mainly intended for internal use

### Example 
```objc

NSString* type = @"type_example"; // The index type

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Delete all objects in an index
[apiInstance deleteSearchIndexesWithType:type
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPISearchApi->deleteSearchIndexes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| The index type | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchIndex**
```objc
-(NSURLSessionTask*) searchIndexWithType: (NSString*) type
    query: (NSObject*) query
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceMapStringObject_* output, NSError* error)) handler;
```

Search an index

The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type. See individual search endpoints on other resources for details on their format.

### Example 
```objc

NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPISearchApi*apiInstance = [[JSAPISearchApi alloc] init];

// Search an index
[apiInstance searchIndexWithType:type
              query:query
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceMapStringObject_* output, NSError* error) {
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
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceMapStringObject_***](JSAPIPageResourceMapStringObject_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

