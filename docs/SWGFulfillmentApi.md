# SWGFulfillmentApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createFulfillmentType**](SWGFulfillmentApi.md#createfulfillmenttype) | **POST** /store/fulfillment/types | Create a fulfillment type
[**deleteFulfillmentType**](SWGFulfillmentApi.md#deletefulfillmenttype) | **DELETE** /store/fulfillment/types/{id} | Delete a fulfillment type
[**getFulfillmentType**](SWGFulfillmentApi.md#getfulfillmenttype) | **GET** /store/fulfillment/types/{id} | Get a single fulfillment type
[**getFulfillmentTypes**](SWGFulfillmentApi.md#getfulfillmenttypes) | **GET** /store/fulfillment/types | List and search fulfillment types
[**updateFulfillmentType**](SWGFulfillmentApi.md#updatefulfillmenttype) | **PUT** /store/fulfillment/types/{id} | Update a fulfillment type


# **createFulfillmentType**
```objc
-(NSURLSessionTask*) createFulfillmentTypeWithType: (SWGFulfillmentType*) type
        completionHandler: (void (^)(SWGFulfillmentType* output, NSError* error)) handler;
```

Create a fulfillment type

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGFulfillmentType* type = [[SWGFulfillmentType alloc] init]; // The fulfillment type (optional)

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Create a fulfillment type
[apiInstance createFulfillmentTypeWithType:type
          completionHandler: ^(SWGFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->createFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | [**SWGFulfillmentType***](SWGFulfillmentType*.md)| The fulfillment type | [optional] 

### Return type

[**SWGFulfillmentType***](SWGFulfillmentType.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

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
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Delete a fulfillment type
[apiInstance deleteFulfillmentTypeWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->deleteFulfillmentType: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFulfillmentType**
```objc
-(NSURLSessionTask*) getFulfillmentTypeWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGFulfillmentType* output, NSError* error)) handler;
```

Get a single fulfillment type

### Example 
```objc

NSNumber* _id = @56; // The id

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Get a single fulfillment type
[apiInstance getFulfillmentTypeWithId:_id
          completionHandler: ^(SWGFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->getFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id | 

### Return type

[**SWGFulfillmentType***](SWGFulfillmentType.md)

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
        completionHandler: (void (^)(SWGPageResourceFulfillmentType_* output, NSError* error)) handler;
```

List and search fulfillment types

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// List and search fulfillment types
[apiInstance getFulfillmentTypesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceFulfillmentType_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->getFulfillmentTypes: %@", error);
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

[**SWGPageResourceFulfillmentType_***](SWGPageResourceFulfillmentType_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateFulfillmentType**
```objc
-(NSURLSessionTask*) updateFulfillmentTypeWithId: (NSNumber*) _id
    fulfillmentType: (SWGFulfillmentType*) fulfillmentType
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a fulfillment type

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id
SWGFulfillmentType* fulfillmentType = [[SWGFulfillmentType alloc] init]; // The fulfillment type (optional)

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Update a fulfillment type
[apiInstance updateFulfillmentTypeWithId:_id
              fulfillmentType:fulfillmentType
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->updateFulfillmentType: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id | 
 **fulfillmentType** | [**SWGFulfillmentType***](SWGFulfillmentType*.md)| The fulfillment type | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

