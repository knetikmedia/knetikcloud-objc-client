# JSAPIDispositionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDisposition**](JSAPIDispositionsApi.md#adddisposition) | **POST** /dispositions | Add a new disposition
[**deleteDisposition**](JSAPIDispositionsApi.md#deletedisposition) | **DELETE** /dispositions/{id} | Delete a disposition
[**getDisposition**](JSAPIDispositionsApi.md#getdisposition) | **GET** /dispositions/{id} | Returns a disposition
[**getDispositionCounts**](JSAPIDispositionsApi.md#getdispositioncounts) | **GET** /dispositions/count | Returns a list of disposition counts
[**getDispositions**](JSAPIDispositionsApi.md#getdispositions) | **GET** /dispositions | Returns a page of dispositions


# **addDisposition**
```objc
-(NSURLSessionTask*) addDispositionWithDisposition: (JSAPIDispositionResource*) disposition
        completionHandler: (void (^)(JSAPIDispositionResource* output, NSError* error)) handler;
```

Add a new disposition

<b>Permissions Needed:</b> DISPOSITIONS_USER and user, or DISPOSITIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIDispositionResource* disposition = [[JSAPIDispositionResource alloc] init]; // The new disposition record (optional)

JSAPIDispositionsApi*apiInstance = [[JSAPIDispositionsApi alloc] init];

// Add a new disposition
[apiInstance addDispositionWithDisposition:disposition
          completionHandler: ^(JSAPIDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDispositionsApi->addDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disposition** | [**JSAPIDispositionResource***](JSAPIDispositionResource.md)| The new disposition record | [optional] 

### Return type

[**JSAPIDispositionResource***](JSAPIDispositionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> DISPOSITIONS_USER and owner, or DISPOSITIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the disposition record

JSAPIDispositionsApi*apiInstance = [[JSAPIDispositionsApi alloc] init];

// Delete a disposition
[apiInstance deleteDispositionWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIDispositionsApi->deleteDisposition: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDisposition**
```objc
-(NSURLSessionTask*) getDispositionWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIDispositionResource* output, NSError* error)) handler;
```

Returns a disposition

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the disposition record

JSAPIDispositionsApi*apiInstance = [[JSAPIDispositionsApi alloc] init];

// Returns a disposition
[apiInstance getDispositionWithId:_id
          completionHandler: ^(JSAPIDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDispositionsApi->getDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the disposition record | 

### Return type

[**JSAPIDispositionResource***](JSAPIDispositionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionCounts**
```objc
-(NSURLSessionTask*) getDispositionCountsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
        completionHandler: (void (^)(NSArray<JSAPIDispositionCount>* output, NSError* error)) handler;
```

Returns a list of disposition counts

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterContext = @"filterContext_example"; // Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47 (optional)
NSString* filterOwner = @"filterOwner_example"; // Filter for dispositions from a specific user by id or 'me' (optional)

JSAPIDispositionsApi*apiInstance = [[JSAPIDispositionsApi alloc] init];

// Returns a list of disposition counts
[apiInstance getDispositionCountsWithFilterContext:filterContext
              filterOwner:filterOwner
          completionHandler: ^(NSArray<JSAPIDispositionCount>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDispositionsApi->getDispositionCounts: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterContext** | **NSString***| Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context&#x3D;video:47 | [optional] 
 **filterOwner** | **NSString***| Filter for dispositions from a specific user by id or &#39;me&#39; | [optional] 

### Return type

[**NSArray<JSAPIDispositionCount>***](JSAPIDispositionCount.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositions**
```objc
-(NSURLSessionTask*) getDispositionsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterContext = @"filterContext_example"; // Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context=video:47 (optional)
NSString* filterOwner = @"filterOwner_example"; // Filter for dispositions from a specific user by id or 'me' (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIDispositionsApi*apiInstance = [[JSAPIDispositionsApi alloc] init];

// Returns a page of dispositions
[apiInstance getDispositionsWithFilterContext:filterContext
              filterOwner:filterOwner
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDispositionsApi->getDispositions: %@", error);
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

[**JSAPIPageResourceDispositionResource_***](JSAPIPageResourceDispositionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

