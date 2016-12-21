# SWGStoreShippingApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createShippingItemUsingPOST**](SWGStoreShippingApi.md#createshippingitemusingpost) | **POST** /store/shipping | Create a shipping item
[**createShippingTemplateUsingPOST**](SWGStoreShippingApi.md#createshippingtemplateusingpost) | **POST** /store/shipping/templates | Create a shipping template
[**deleteShippingItemUsingDELETE**](SWGStoreShippingApi.md#deleteshippingitemusingdelete) | **DELETE** /store/shipping/{id} | Delete a shipping item
[**deleteShippingTemplateUsingDELETE**](SWGStoreShippingApi.md#deleteshippingtemplateusingdelete) | **DELETE** /store/shipping/templates/{id} | Delete a shipping template
[**getShippingItemUsingGET**](SWGStoreShippingApi.md#getshippingitemusingget) | **GET** /store/shipping/{id} | Get a single shipping item
[**getShippingTemplateUsingGET**](SWGStoreShippingApi.md#getshippingtemplateusingget) | **GET** /store/shipping/templates/{id} | Get a single shipping template
[**getShippingTemplatesUsingGET**](SWGStoreShippingApi.md#getshippingtemplatesusingget) | **GET** /store/shipping/templates | List and search shipping templates
[**updateShippingItemUsingPUT**](SWGStoreShippingApi.md#updateshippingitemusingput) | **PUT** /store/shipping/{id} | Update a shipping item
[**updateShippingTemplateUsingPUT**](SWGStoreShippingApi.md#updateshippingtemplateusingput) | **PUT** /store/shipping/templates/{id} | Update a shipping template


# **createShippingItemUsingPOST**
```objc
-(NSNumber*) createShippingItemUsingPOSTWithShippingItem: (SWGShippingItem*) shippingItem
        completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;
```

Create a shipping item

A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGShippingItem* shippingItem = [[SWGShippingItem alloc] init]; // The shipping item object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Create a shipping item
[apiInstance createShippingItemUsingPOSTWithShippingItem:shippingItem
          completionHandler: ^(SWGShippingItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->createShippingItemUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **shippingItem** | [**SWGShippingItem***](SWGShippingItem*.md)| The shipping item object | [optional] 

### Return type

[**SWGShippingItem***](SWGShippingItem.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createShippingTemplateUsingPOST**
```objc
-(NSNumber*) createShippingTemplateUsingPOSTWithShippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a shipping template

Shipping Templates define a type of shipping and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* shippingTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new shipping template (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Create a shipping template
[apiInstance createShippingTemplateUsingPOSTWithShippingTemplateResource:shippingTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->createShippingTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **shippingTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The new shipping template | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteShippingItemUsingDELETE**
```objc
-(NSNumber*) deleteShippingItemUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a shipping item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the shipping item

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Delete a shipping item
[apiInstance deleteShippingItemUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->deleteShippingItemUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the shipping item | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteShippingTemplateUsingDELETE**
```objc
-(NSNumber*) deleteShippingTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a shipping template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Delete a shipping template
[apiInstance deleteShippingTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->deleteShippingTemplateUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingItemUsingGET**
```objc
-(NSNumber*) getShippingItemUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;
```

Get a single shipping item

### Example 
```objc

NSNumber* _id = @56; // The id of the shipping item

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Get a single shipping item
[apiInstance getShippingItemUsingGETWithId:_id
          completionHandler: ^(SWGShippingItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingItemUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the shipping item | 

### Return type

[**SWGShippingItem***](SWGShippingItem.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingTemplateUsingGET**
```objc
-(NSNumber*) getShippingTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single shipping template

Shipping Templates define a type of shipping and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Get a single shipping template
[apiInstance getShippingTemplateUsingGETWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingTemplateUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingTemplatesUsingGET**
```objc
-(NSNumber*) getShippingTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search shipping templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// List and search shipping templates
[apiInstance getShippingTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingTemplatesUsingGET: %@", error);
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

[**SWGPageResourceItemTemplateResource_***](SWGPageResourceItemTemplateResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateShippingItemUsingPUT**
```objc
-(NSNumber*) updateShippingItemUsingPUTWithId: (NSNumber*) _id
    shippingItem: (SWGShippingItem*) shippingItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a shipping item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the shipping item
SWGShippingItem* shippingItem = [[SWGShippingItem alloc] init]; // The shipping item object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Update a shipping item
[apiInstance updateShippingItemUsingPUTWithId:_id
              shippingItem:shippingItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->updateShippingItemUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the shipping item | 
 **shippingItem** | [**SWGShippingItem***](SWGShippingItem*.md)| The shipping item object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateShippingTemplateUsingPUT**
```objc
-(NSNumber*) updateShippingTemplateUsingPUTWithId: (NSString*) _id
    shippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a shipping template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* shippingTemplateResource = [[SWGItemTemplateResource alloc] init]; // The shipping template resource object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Update a shipping template
[apiInstance updateShippingTemplateUsingPUTWithId:_id
              shippingTemplateResource:shippingTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->updateShippingTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **shippingTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The shipping template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

