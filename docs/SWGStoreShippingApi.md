# SWGStoreShippingApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createShippingItem**](SWGStoreShippingApi.md#createshippingitem) | **POST** /store/shipping | Create a shipping item
[**createShippingTemplate**](SWGStoreShippingApi.md#createshippingtemplate) | **POST** /store/shipping/templates | Create a shipping template
[**deleteShippingItem**](SWGStoreShippingApi.md#deleteshippingitem) | **DELETE** /store/shipping/{id} | Delete a shipping item
[**deleteShippingTemplate**](SWGStoreShippingApi.md#deleteshippingtemplate) | **DELETE** /store/shipping/templates/{id} | Delete a shipping template
[**getShippingItem**](SWGStoreShippingApi.md#getshippingitem) | **GET** /store/shipping/{id} | Get a single shipping item
[**getShippingTemplate**](SWGStoreShippingApi.md#getshippingtemplate) | **GET** /store/shipping/templates/{id} | Get a single shipping template
[**getShippingTemplates**](SWGStoreShippingApi.md#getshippingtemplates) | **GET** /store/shipping/templates | List and search shipping templates
[**updateShippingItem**](SWGStoreShippingApi.md#updateshippingitem) | **PUT** /store/shipping/{id} | Update a shipping item
[**updateShippingTemplate**](SWGStoreShippingApi.md#updateshippingtemplate) | **PUT** /store/shipping/templates/{id} | Update a shipping template


# **createShippingItem**
```objc
-(NSURLSessionTask*) createShippingItemWithCascade: (NSNumber*) cascade
    shippingItem: (SWGShippingItem*) shippingItem
        completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;
```

Create a shipping item

A shipping item represents a shipping option and cost. SKUs have to be unique in the entire store.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
SWGShippingItem* shippingItem = [[SWGShippingItem alloc] init]; // The shipping item object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Create a shipping item
[apiInstance createShippingItemWithCascade:cascade
              shippingItem:shippingItem
          completionHandler: ^(SWGShippingItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->createShippingItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **shippingItem** | [**SWGShippingItem***](SWGShippingItem*.md)| The shipping item object | [optional] 

### Return type

[**SWGShippingItem***](SWGShippingItem.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createShippingTemplate**
```objc
-(NSURLSessionTask*) createShippingTemplateWithShippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a shipping template

Shipping Templates define a type of shipping and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* shippingTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new shipping template (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Create a shipping template
[apiInstance createShippingTemplateWithShippingTemplateResource:shippingTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->createShippingTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteShippingItem**
```objc
-(NSURLSessionTask*) deleteShippingItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a shipping item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the shipping item

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Delete a shipping item
[apiInstance deleteShippingItemWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->deleteShippingItem: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteShippingTemplate**
```objc
-(NSURLSessionTask*) deleteShippingTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a shipping template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Delete a shipping template
[apiInstance deleteShippingTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->deleteShippingTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingItem**
```objc
-(NSURLSessionTask*) getShippingItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;
```

Get a single shipping item

### Example 
```objc

NSNumber* _id = @56; // The id of the shipping item

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Get a single shipping item
[apiInstance getShippingItemWithId:_id
          completionHandler: ^(SWGShippingItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingItem: %@", error);
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

# **getShippingTemplate**
```objc
-(NSURLSessionTask*) getShippingTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single shipping template

Shipping Templates define a type of shipping and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Get a single shipping template
[apiInstance getShippingTemplateWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingTemplates**
```objc
-(NSURLSessionTask*) getShippingTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search shipping templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// List and search shipping templates
[apiInstance getShippingTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->getShippingTemplates: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateShippingItem**
```objc
-(NSURLSessionTask*) updateShippingItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    shippingItem: (SWGShippingItem*) shippingItem
        completionHandler: (void (^)(SWGShippingItem* output, NSError* error)) handler;
```

Update a shipping item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the shipping item
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
SWGShippingItem* shippingItem = [[SWGShippingItem alloc] init]; // The shipping item object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Update a shipping item
[apiInstance updateShippingItemWithId:_id
              cascade:cascade
              shippingItem:shippingItem
          completionHandler: ^(SWGShippingItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->updateShippingItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the shipping item | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **shippingItem** | [**SWGShippingItem***](SWGShippingItem*.md)| The shipping item object | [optional] 

### Return type

[**SWGShippingItem***](SWGShippingItem.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateShippingTemplate**
```objc
-(NSURLSessionTask*) updateShippingTemplateWithId: (NSString*) _id
    shippingTemplateResource: (SWGItemTemplateResource*) shippingTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Update a shipping template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* shippingTemplateResource = [[SWGItemTemplateResource alloc] init]; // The shipping template resource object (optional)

SWGStoreShippingApi*apiInstance = [[SWGStoreShippingApi alloc] init];

// Update a shipping template
[apiInstance updateShippingTemplateWithId:_id
              shippingTemplateResource:shippingTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShippingApi->updateShippingTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **shippingTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The shipping template resource object | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

