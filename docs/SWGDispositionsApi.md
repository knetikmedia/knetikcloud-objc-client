# SWGDispositionsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDispositionUsingPOST**](SWGDispositionsApi.md#adddispositionusingpost) | **POST** /dispositions | Add a new disposition. 
[**deleteDispositionUsingDELETE**](SWGDispositionsApi.md#deletedispositionusingdelete) | **DELETE** /dispositions/{id} | Delete a disposition
[**getDispositionCountUsingGET**](SWGDispositionsApi.md#getdispositioncountusingget) | **GET** /dispositions/count | Returns a list of disposition counts
[**getDispositionUsingGET**](SWGDispositionsApi.md#getdispositionusingget) | **GET** /dispositions/{id} | Returns a disposition
[**getDispositionsUsingGET**](SWGDispositionsApi.md#getdispositionsusingget) | **GET** /dispositions | Returns a page of dispositions


# **addDispositionUsingPOST**
```objc
-(NSNumber*) addDispositionUsingPOSTWithDisposition: (SWGDispositionResource*) disposition
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Add a new disposition. 

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGDispositionResource* disposition = [[SWGDispositionResource alloc] init]; // The new disposition record (optional)

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Add a new disposition. 
[apiInstance addDispositionUsingPOSTWithDisposition:disposition
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->addDispositionUsingPOST: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDispositionUsingDELETE**
```objc
-(NSNumber*) deleteDispositionUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a disposition

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the disposition record

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Delete a disposition
[apiInstance deleteDispositionUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->deleteDispositionUsingDELETE: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionCountUsingGET**
```objc
-(NSNumber*) getDispositionCountUsingGETWithFilterContext: (NSString*) filterContext
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
[apiInstance getDispositionCountUsingGETWithFilterContext:filterContext
              filterOwner:filterOwner
          completionHandler: ^(NSArray<SWGDispositionCount>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDispositionCountUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionUsingGET**
```objc
-(NSNumber*) getDispositionUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Returns a disposition

### Example 
```objc

NSNumber* _id = @789; // The id of the disposition record

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Returns a disposition
[apiInstance getDispositionUsingGETWithId:_id
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDispositionUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionsUsingGET**
```objc
-(NSNumber*) getDispositionsUsingGETWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions

### Example 
```objc

NSString* filterContext = @"filterContext_example"; // Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47 (optional)
NSString* filterOwner = @"filterOwner_example"; // Filter for dispositions from a specific user by id or 'me' (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGDispositionsApi*apiInstance = [[SWGDispositionsApi alloc] init];

// Returns a page of dispositions
[apiInstance getDispositionsUsingGETWithFilterContext:filterContext
              filterOwner:filterOwner
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDispositionsApi->getDispositionsUsingGET: %@", error);
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
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageDispositionResource_***](SWGPageDispositionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

