# SWGSearchApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**externalAddUsingPOST**](SWGSearchApi.md#externaladdusingpost) | **POST** /search/index/{type}/{id} | Add a new object to an index
[**externalDeleteAllUsingDELETE**](SWGSearchApi.md#externaldeleteallusingdelete) | **DELETE** /search/index/{type} | Delete all objects in an index
[**externalDeleteUsingDELETE**](SWGSearchApi.md#externaldeleteusingdelete) | **DELETE** /search/index/{type}/{id} | Delete an object
[**externalRegisterUsingPOST**](SWGSearchApi.md#externalregisterusingpost) | **POST** /search/mappings | Register reference mappings
[**searchUsingPOST**](SWGSearchApi.md#searchusingpost) | **POST** /search/index/{type} | Search an index


# **externalAddUsingPOST**
```objc
-(NSNumber*) externalAddUsingPOSTWithType: (NSString*) type
    _id: (NSString*) _id
    object: (NSObject*) object
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a new object to an index

Mainly intended for internal use.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The ID of the object
NSObject* object = NULL; // The object to add (optional)

SWGSearchApi*apiInstance = [[SWGSearchApi alloc] init];

// Add a new object to an index
[apiInstance externalAddUsingPOSTWithType:type
              _id:_id
              object:object
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGSearchApi->externalAddUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **externalDeleteAllUsingDELETE**
```objc
-(NSNumber*) externalDeleteAllUsingDELETEWithType: (NSString*) type
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all objects in an index

Mainly intended for internal use

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type

SWGSearchApi*apiInstance = [[SWGSearchApi alloc] init];

// Delete all objects in an index
[apiInstance externalDeleteAllUsingDELETEWithType:type
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGSearchApi->externalDeleteAllUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **externalDeleteUsingDELETE**
```objc
-(NSNumber*) externalDeleteUsingDELETEWithType: (NSString*) type
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an object

Mainly intended for internal use. Requires SEARCH_ADMIN.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* type = @"type_example"; // The index type
NSString* _id = @"_id_example"; // The ID of the object to delete

SWGSearchApi*apiInstance = [[SWGSearchApi alloc] init];

// Delete an object
[apiInstance externalDeleteUsingDELETEWithType:type
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGSearchApi->externalDeleteUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **externalRegisterUsingPOST**
```objc
-(NSNumber*) externalRegisterUsingPOSTWithMappings: (NSArray<SWGSearchReferenceMapping>*) mappings
        completionHandler: (void (^)(NSError* error)) handler;
```

Register reference mappings

Add a new type mapping to connect data from one index to another, or discover an exsting one. Mainly intended for internal use.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSArray<SWGSearchReferenceMapping>* mappings = @[[[SWGSearchReferenceMapping alloc] init]]; // The mappings to add (optional)

SWGSearchApi*apiInstance = [[SWGSearchApi alloc] init];

// Register reference mappings
[apiInstance externalRegisterUsingPOSTWithMappings:mappings
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGSearchApi->externalRegisterUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mappings** | [**NSArray&lt;SWGSearchReferenceMapping&gt;***](SWGSearchReferenceMapping.md)| The mappings to add | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchUsingPOST**
```objc
-(NSNumber*) searchUsingPOSTWithType: (NSString*) type
    query: (NSObject*) query
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageMapStringObject_* output, NSError* error)) handler;
```

Search an index

The body is an ElasticSearch query in JSON format. Please see their <a href='https://www.elastic.co/guide/en/elasticsearch/reference/current/query-dsl.html'>documentation</a> for details on the format and search options. The searchable object's format depends on on the type. See individual search endpoints on other resources for details on their format.

### Example 
```objc

NSString* type = @"type_example"; // The index type
NSObject* query = NULL; // The query to be used for the search (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGSearchApi*apiInstance = [[SWGSearchApi alloc] init];

// Search an index
[apiInstance searchUsingPOSTWithType:type
              query:query
              size:size
              page:page
          completionHandler: ^(SWGPageMapStringObject_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGSearchApi->searchUsingPOST: %@", error);
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

[**SWGPageMapStringObject_***](SWGPageMapStringObject_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

