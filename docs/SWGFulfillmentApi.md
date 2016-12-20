# SWGFulfillmentApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createFulfillmentTypeUsingPOST**](SWGFulfillmentApi.md#createfulfillmenttypeusingpost) | **POST** /store/fulfillment/types | Create a fulfillment type
[**deleteFulfillmentTypeUsingDELETE**](SWGFulfillmentApi.md#deletefulfillmenttypeusingdelete) | **DELETE** /store/fulfillment/types/{id} | Delete a fulfillment type
[**getFulfillmentTypeUsingGET**](SWGFulfillmentApi.md#getfulfillmenttypeusingget) | **GET** /store/fulfillment/types/{id} | Get a single fulfillment type
[**getFulfillmentsUsingGET**](SWGFulfillmentApi.md#getfulfillmentsusingget) | **GET** /store/fulfillment/types | List and search fulfillment types
[**updateFulfillmentTypeUsingPUT**](SWGFulfillmentApi.md#updatefulfillmenttypeusingput) | **PUT** /store/fulfillment/types/{id} | Update a fulfillment type


# **createFulfillmentTypeUsingPOST**
```objc
-(NSNumber*) createFulfillmentTypeUsingPOSTWithType: (SWGFulfillmentType*) type
        completionHandler: (void (^)(SWGFulfillmentType* output, NSError* error)) handler;
```

Create a fulfillment type

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGFulfillmentType* type = [[SWGFulfillmentType alloc] init]; // The fulfillment type (optional)

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Create a fulfillment type
[apiInstance createFulfillmentTypeUsingPOSTWithType:type
          completionHandler: ^(SWGFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->createFulfillmentTypeUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFulfillmentTypeUsingDELETE**
```objc
-(NSNumber*) deleteFulfillmentTypeUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a fulfillment type

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Delete a fulfillment type
[apiInstance deleteFulfillmentTypeUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->deleteFulfillmentTypeUsingDELETE: %@", error);
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

# **getFulfillmentTypeUsingGET**
```objc
-(NSNumber*) getFulfillmentTypeUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGFulfillmentType* output, NSError* error)) handler;
```

Get a single fulfillment type

### Example 
```objc

NSNumber* _id = @56; // The id

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Get a single fulfillment type
[apiInstance getFulfillmentTypeUsingGETWithId:_id
          completionHandler: ^(SWGFulfillmentType* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->getFulfillmentTypeUsingGET: %@", error);
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

# **getFulfillmentsUsingGET**
```objc
-(NSNumber*) getFulfillmentsUsingGETWithSize: (NSNumber*) size
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
[apiInstance getFulfillmentsUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceFulfillmentType_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->getFulfillmentsUsingGET: %@", error);
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

# **updateFulfillmentTypeUsingPUT**
```objc
-(NSNumber*) updateFulfillmentTypeUsingPUTWithId: (NSNumber*) _id
    fulfillmentType: (SWGFulfillmentType*) fulfillmentType
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a fulfillment type

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id
SWGFulfillmentType* fulfillmentType = [[SWGFulfillmentType alloc] init]; // The fulfillment type (optional)

SWGFulfillmentApi*apiInstance = [[SWGFulfillmentApi alloc] init];

// Update a fulfillment type
[apiInstance updateFulfillmentTypeUsingPUTWithId:_id
              fulfillmentType:fulfillmentType
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGFulfillmentApi->updateFulfillmentTypeUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

