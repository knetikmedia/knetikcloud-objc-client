# SWGDispositionsApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDisposition**](SWGDispositionsApi.md#adddisposition) | **POST** /dispositions | Add a new disposition
[**deleteDisposition**](SWGDispositionsApi.md#deletedisposition) | **DELETE** /dispositions/{id} | Delete a disposition
[**getDisposition**](SWGDispositionsApi.md#getdisposition) | **GET** /dispositions/{id} | Returns a disposition
[**getDispositionCounts**](SWGDispositionsApi.md#getdispositioncounts) | **GET** /dispositions/count | Returns a list of disposition counts
[**getDispositions**](SWGDispositionsApi.md#getdispositions) | **GET** /dispositions | Returns a page of dispositions


# **addDisposition**
```objc
-(NSURLSessionTask*) addDispositionWithDisposition: (SWGDispositionResource*) disposition
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Add a new disposition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGDispositionResource* disposition = [[SWGDispositionResource alloc] init]; // The new disposition record (optional)

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Add a new disposition
[apiInstance addDispositionWithDisposition:disposition
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->addDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disposition** | [**SWGDispositionResource***](SWGDispositionResource*.md)| The new disposition record | [optional] 

### Return type

[**SWGDispositionResource***](SWGDispositionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDisposition**
```objc
-(NSURLSessionTask*) deleteDispositionWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a disposition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the disposition record

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Delete a disposition
[apiInstance deleteDispositionWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->deleteDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the disposition record | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDisposition**
```objc
-(NSURLSessionTask*) getDispositionWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Returns a disposition

### Example 
```objc

NSNumber* _id = @789; // The id of the disposition record

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Returns a disposition
[apiInstance getDispositionWithId:_id
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the disposition record | 

### Return type

[**SWGDispositionResource***](SWGDispositionResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionCounts**
```objc
-(NSURLSessionTask*) getDispositionCountsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
        completionHandler: (void (^)(NSArray<SWGDispositionCount>* output, NSError* error)) handler;
```

Returns a list of disposition counts

### Example 
```objc

NSString* filterContext = @"filterContext_example"; // Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47 (optional)
NSString* filterOwner = @"filterOwner_example"; // Filter for dispositions from a specific user by id or 'me' (optional)

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Returns a list of disposition counts
[apiInstance getDispositionCountsWithFilterContext:filterContext
              filterOwner:filterOwner
          completionHandler: ^(NSArray<SWGDispositionCount>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDispositionCounts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterContext** | **NSString***| Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context&#x3D;video:47 | [optional] 
 **filterOwner** | **NSString***| Filter for dispositions from a specific user by id or &#39;me&#39; | [optional] 

### Return type

[**NSArray<SWGDispositionCount>***](SWGDispositionCount.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositions**
```objc
-(NSURLSessionTask*) getDispositionsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions

### Example 
```objc

NSString* filterContext = @"filterContext_example"; // Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47 (optional)
NSString* filterOwner = @"filterOwner_example"; // Filter for dispositions from a specific user by id or 'me' (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Returns a page of dispositions
[apiInstance getDispositionsWithFilterContext:filterContext
              filterOwner:filterOwner
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDispositions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterContext** | **NSString***| Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context&#x3D;video:47 | [optional] 
 **filterOwner** | **NSString***| Filter for dispositions from a specific user by id or &#39;me&#39; | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceDispositionResource_***](SWGPageResourceDispositionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

