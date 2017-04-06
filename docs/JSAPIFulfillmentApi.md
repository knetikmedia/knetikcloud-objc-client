# JSAPIFulfillmentApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createFulfillmentType**](JSAPIFulfillmentApi.md#createfulfillmenttype) | **POST** /store/fulfillment/types | Create a fulfillment type
[**deleteFulfillmentType**](JSAPIFulfillmentApi.md#deletefulfillmenttype) | **DELETE** /store/fulfillment/types/{id} | Delete a fulfillment type
[**getFulfillmentType**](JSAPIFulfillmentApi.md#getfulfillmenttype) | **GET** /store/fulfillment/types/{id} | Get a single fulfillment type
[**getFulfillmentTypes**](JSAPIFulfillmentApi.md#getfulfillmenttypes) | **GET** /store/fulfillment/types | List and search fulfillment types
[**updateFulfillmentType**](JSAPIFulfillmentApi.md#updatefulfillmenttype) | **PUT** /store/fulfillment/types/{id} | Update a fulfillment type


# **createFulfillmentType**
```objc
-(NSURLSessionTask*) createFulfillmentTypeWithType: (JSAPIFulfillmentType*) type
        completionHandler: (void (^)(JSAPIFulfillmentType* output, NSError* error)) handler;
```

Create a fulfillment type

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFulfillmentType* type = [[JSAPIFulfillmentType alloc] init]; // The fulfillment type (optional)

JSAPIFulfillmentApi*apiInstance = [[JSAPIFulfillmentApi alloc] init];

// Create a fulfillment type
[apiInstance createFulfillmentTypeWithType:type
          completionHandler: ^(JSAPIFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIFulfillmentApi->createFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**JSAPIFulfillmentType***](JSAPIFulfillmentType*.md)| The fulfillment type | [optional] 

### Return type

[**JSAPIFulfillmentType***](JSAPIFulfillmentType.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFulfillmentType**
```objc
-(NSURLSessionTask*) deleteFulfillmentTypeWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a fulfillment type

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id

JSAPIFulfillmentApi*apiInstance = [[JSAPIFulfillmentApi alloc] init];

// Delete a fulfillment type
[apiInstance deleteFulfillmentTypeWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIFulfillmentApi->deleteFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFulfillmentType**
```objc
-(NSURLSessionTask*) getFulfillmentTypeWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIFulfillmentType* output, NSError* error)) handler;
```

Get a single fulfillment type

### Example 
```objc

NSNumber* _id = @56; // The id

JSAPIFulfillmentApi*apiInstance = [[JSAPIFulfillmentApi alloc] init];

// Get a single fulfillment type
[apiInstance getFulfillmentTypeWithId:_id
          completionHandler: ^(JSAPIFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIFulfillmentApi->getFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id | 

### Return type

[**JSAPIFulfillmentType***](JSAPIFulfillmentType.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFulfillmentTypes**
```objc
-(NSURLSessionTask*) getFulfillmentTypesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceFulfillmentType_* output, NSError* error)) handler;
```

List and search fulfillment types

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIFulfillmentApi*apiInstance = [[JSAPIFulfillmentApi alloc] init];

// List and search fulfillment types
[apiInstance getFulfillmentTypesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceFulfillmentType_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIFulfillmentApi->getFulfillmentTypes: %@", error);
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

[**JSAPIPageResourceFulfillmentType_***](JSAPIPageResourceFulfillmentType_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateFulfillmentType**
```objc
-(NSURLSessionTask*) updateFulfillmentTypeWithId: (NSNumber*) _id
    fulfillmentType: (JSAPIFulfillmentType*) fulfillmentType
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a fulfillment type

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id
JSAPIFulfillmentType* fulfillmentType = [[JSAPIFulfillmentType alloc] init]; // The fulfillment type (optional)

JSAPIFulfillmentApi*apiInstance = [[JSAPIFulfillmentApi alloc] init];

// Update a fulfillment type
[apiInstance updateFulfillmentTypeWithId:_id
              fulfillmentType:fulfillmentType
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIFulfillmentApi->updateFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id | 
 **fulfillmentType** | [**JSAPIFulfillmentType***](JSAPIFulfillmentType*.md)| The fulfillment type | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

