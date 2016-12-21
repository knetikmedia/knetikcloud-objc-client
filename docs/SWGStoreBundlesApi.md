# SWGStoreBundlesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBundleItemUsingPOST**](SWGStoreBundlesApi.md#createbundleitemusingpost) | **POST** /store/bundles | Create a bundle item
[**createBundleTemplateUsingPOST**](SWGStoreBundlesApi.md#createbundletemplateusingpost) | **POST** /store/bundles/templates | Create a bundle template
[**deleteBundleTemplateUsingDELETE**](SWGStoreBundlesApi.md#deletebundletemplateusingdelete) | **DELETE** /store/bundles/templates/{id} | Delete a bundle template
[**deleteStoreItemUsingDELETE**](SWGStoreBundlesApi.md#deletestoreitemusingdelete) | **DELETE** /store/bundles/{id} | Delete a bundle item
[**getBundleTemplateUsingGET**](SWGStoreBundlesApi.md#getbundletemplateusingget) | **GET** /store/bundles/templates/{id} | Get a single bundle template
[**getBundleTemplatesUsingGET**](SWGStoreBundlesApi.md#getbundletemplatesusingget) | **GET** /store/bundles/templates | List and search bundle templates
[**getStoreItemUsingGET**](SWGStoreBundlesApi.md#getstoreitemusingget) | **GET** /store/bundles/{id} | Get a single bundle item
[**updateBundleItemUsingPUT**](SWGStoreBundlesApi.md#updatebundleitemusingput) | **PUT** /store/bundles/{id} | Update a bundle item
[**updateBundleTemplateUsingPUT**](SWGStoreBundlesApi.md#updatebundletemplateusingput) | **PUT** /store/bundles/templates/{id} | Update a bundle template


# **createBundleItemUsingPOST**
```objc
-(NSNumber*) createBundleItemUsingPOSTWithBundleItem: (SWGBundleItem*) bundleItem
        completionHandler: (void (^)(SWGBundleItem* output, NSError* error)) handler;
```

Create a bundle item

The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGBundleItem* bundleItem = [[SWGBundleItem alloc] init]; // The bundle item object (optional)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Create a bundle item
[apiInstance createBundleItemUsingPOSTWithBundleItem:bundleItem
          completionHandler: ^(SWGBundleItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->createBundleItemUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bundleItem** | [**SWGBundleItem***](SWGBundleItem*.md)| The bundle item object | [optional] 

### Return type

[**SWGBundleItem***](SWGBundleItem.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createBundleTemplateUsingPOST**
```objc
-(NSNumber*) createBundleTemplateUsingPOSTWithBundleTemplateResource: (SWGItemTemplateResource*) bundleTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a bundle template

Bundle Templates define a type of bundle and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* bundleTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new bundle template (optional)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Create a bundle template
[apiInstance createBundleTemplateUsingPOSTWithBundleTemplateResource:bundleTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->createBundleTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bundleTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The new bundle template | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBundleTemplateUsingDELETE**
```objc
-(NSNumber*) deleteBundleTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a bundle template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Delete a bundle template
[apiInstance deleteBundleTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->deleteBundleTemplateUsingDELETE: %@", error);
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

# **deleteStoreItemUsingDELETE**
```objc
-(NSNumber*) deleteStoreItemUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a bundle item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the bundle

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Delete a bundle item
[apiInstance deleteStoreItemUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->deleteStoreItemUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBundleTemplateUsingGET**
```objc
-(NSNumber*) getBundleTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single bundle template

Bundle Templates define a type of bundle and the properties they have.

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Get a single bundle template
[apiInstance getBundleTemplateUsingGETWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->getBundleTemplateUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBundleTemplatesUsingGET**
```objc
-(NSNumber*) getBundleTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search bundle templates

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// List and search bundle templates
[apiInstance getBundleTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->getBundleTemplatesUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStoreItemUsingGET**
```objc
-(NSNumber*) getStoreItemUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGBundleItem* output, NSError* error)) handler;
```

Get a single bundle item

### Example 
```objc

NSNumber* _id = @56; // The id of the bundle

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Get a single bundle item
[apiInstance getStoreItemUsingGETWithId:_id
          completionHandler: ^(SWGBundleItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->getStoreItemUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 

### Return type

[**SWGBundleItem***](SWGBundleItem.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBundleItemUsingPUT**
```objc
-(NSNumber*) updateBundleItemUsingPUTWithId: (NSNumber*) _id
    bundleItem: (SWGBundleItem*) bundleItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a bundle item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the bundle
SWGBundleItem* bundleItem = [[SWGBundleItem alloc] init]; // The bundle item object (optional)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Update a bundle item
[apiInstance updateBundleItemUsingPUTWithId:_id
              bundleItem:bundleItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->updateBundleItemUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 
 **bundleItem** | [**SWGBundleItem***](SWGBundleItem*.md)| The bundle item object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBundleTemplateUsingPUT**
```objc
-(NSNumber*) updateBundleTemplateUsingPUTWithId: (NSString*) _id
    bundleTemplateResource: (SWGItemTemplateResource*) bundleTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a bundle template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* bundleTemplateResource = [[SWGItemTemplateResource alloc] init]; // The bundle template resource object (optional)

SWGStoreBundlesApi*apiInstance = [[SWGStoreBundlesApi alloc] init];

// Update a bundle template
[apiInstance updateBundleTemplateUsingPUTWithId:_id
              bundleTemplateResource:bundleTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreBundlesApi->updateBundleTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **bundleTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The bundle template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

