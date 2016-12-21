# SWGStoreApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createItemTemplateUsingPOST**](SWGStoreApi.md#createitemtemplateusingpost) | **POST** /store/items/templates | Create an item template
[**createStoreItemExternalUsingPOST**](SWGStoreApi.md#createstoreitemexternalusingpost) | **POST** /store/items | Create a store item
[**deleteItemTemplateUsingDELETE**](SWGStoreApi.md#deleteitemtemplateusingdelete) | **DELETE** /store/items/templates/{id} | Delete an item template
[**deleteStoreItemUsingDELETE1**](SWGStoreApi.md#deletestoreitemusingdelete1) | **DELETE** /store/items/{id} | Delete a store item
[**getItemTemplateUsingGET**](SWGStoreApi.md#getitemtemplateusingget) | **GET** /store/items/templates/{id} | Get a single item template
[**getItemTemplatesUsingGET**](SWGStoreApi.md#getitemtemplatesusingget) | **GET** /store/items/templates | List and search item templates
[**getStoreItemUsingGET1**](SWGStoreApi.md#getstoreitemusingget1) | **GET** /store/items/{id} | Get a single store item
[**getStoreItemsUsingGET**](SWGStoreApi.md#getstoreitemsusingget) | **GET** /store/items | List and search store items
[**getUsingGET2**](SWGStoreApi.md#getusingget2) | **GET** /store | Get a listing of store items
[**updateItemTemplateUsingPUT**](SWGStoreApi.md#updateitemtemplateusingput) | **PUT** /store/items/templates/{id} | Update an item template
[**updateStoreItemExternalUsingPUT**](SWGStoreApi.md#updatestoreitemexternalusingput) | **PUT** /store/items/{id} | Update a store item


# **createItemTemplateUsingPOST**
```objc
-(NSNumber*) createItemTemplateUsingPOSTWithItemTemplateResource: (SWGStoreItemTemplateResource*) itemTemplateResource
        completionHandler: (void (^)(SWGStoreItemTemplateResource* output, NSError* error)) handler;
```

Create an item template

Item Templates define a type of item and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGStoreItemTemplateResource* itemTemplateResource = [[SWGStoreItemTemplateResource alloc] init]; // The new item template (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Create an item template
[apiInstance createItemTemplateUsingPOSTWithItemTemplateResource:itemTemplateResource
          completionHandler: ^(SWGStoreItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->createItemTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **itemTemplateResource** | [**SWGStoreItemTemplateResource***](SWGStoreItemTemplateResource*.md)| The new item template | [optional] 

### Return type

[**SWGStoreItemTemplateResource***](SWGStoreItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createStoreItemExternalUsingPOST**
```objc
-(NSNumber*) createStoreItemExternalUsingPOSTWithStoreItem: (SWGStoreItem*) storeItem
        completionHandler: (void (^)(SWGStoreItem* output, NSError* error)) handler;
```

Create a store item

SKUs have to be unique in the entire store. If a duplicate SKU is found, a 400 error is generated and the response will have a \"parameters\" field that is a list of duplicates. A duplicate is an object like {item_id, offending_sku_list}. Ex:<br /> {..., parameters: [[{item: 1, skus: [\"SKU-1\"]}]]}<br /> If an item is brand new and has duplicate SKUs within itself, the item ID will be 0.  Item subclasses are not allowed here, you will have to use their respective endpoints.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGStoreItem* storeItem = [[SWGStoreItem alloc] init]; // The store item object (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Create a store item
[apiInstance createStoreItemExternalUsingPOSTWithStoreItem:storeItem
          completionHandler: ^(SWGStoreItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->createStoreItemExternalUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **storeItem** | [**SWGStoreItem***](SWGStoreItem*.md)| The store item object | [optional] 

### Return type

[**SWGStoreItem***](SWGStoreItem.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteItemTemplateUsingDELETE**
```objc
-(NSNumber*) deleteItemTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an item template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Delete an item template
[apiInstance deleteItemTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->deleteItemTemplateUsingDELETE: %@", error);
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

# **deleteStoreItemUsingDELETE1**
```objc
-(NSNumber*) deleteStoreItemUsingDELETE1WithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a store item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the item

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Delete a store item
[apiInstance deleteStoreItemUsingDELETE1WithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->deleteStoreItemUsingDELETE1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the item | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemTemplateUsingGET**
```objc
-(NSNumber*) getItemTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGStoreItemTemplateResource* output, NSError* error)) handler;
```

Get a single item template

Item Templates define a type of item and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Get a single item template
[apiInstance getItemTemplateUsingGETWithId:_id
          completionHandler: ^(SWGStoreItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->getItemTemplateUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGStoreItemTemplateResource***](SWGStoreItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemTemplatesUsingGET**
```objc
-(NSNumber*) getItemTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceStoreItemTemplateResource_* output, NSError* error)) handler;
```

List and search item templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// List and search item templates
[apiInstance getItemTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceStoreItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->getItemTemplatesUsingGET: %@", error);
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

[**SWGPageResourceStoreItemTemplateResource_***](SWGPageResourceStoreItemTemplateResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStoreItemUsingGET1**
```objc
-(NSNumber*) getStoreItemUsingGET1WithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGStoreItem* output, NSError* error)) handler;
```

Get a single store item

### Example 
```objc

NSNumber* _id = @56; // The id of the item

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Get a single store item
[apiInstance getStoreItemUsingGET1WithId:_id
          completionHandler: ^(SWGStoreItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->getStoreItemUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the item | 

### Return type

[**SWGStoreItem***](SWGStoreItem.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStoreItemsUsingGET**
```objc
-(NSNumber*) getStoreItemsUsingGETWithFilterNameSearch: (NSString*) filterNameSearch
    filterUniqueKey: (NSString*) filterUniqueKey
    filterPublished: (NSNumber*) filterPublished
    filterDisplayable: (NSNumber*) filterDisplayable
    filterStart: (NSString*) filterStart
    filterEnd: (NSString*) filterEnd
    filterStartDate: (NSString*) filterStartDate
    filterStopDate: (NSString*) filterStopDate
    filterSku: (NSString*) filterSku
    filterPrice: (NSString*) filterPrice
    filterTag: (NSString*) filterTag
    filterItemsByType: (NSString*) filterItemsByType
    filterBundledSkus: (NSString*) filterBundledSkus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceStoreItem_* output, NSError* error)) handler;
```

List and search store items

### Example 
```objc

NSString* filterNameSearch = @"filterNameSearch_example"; // Filter for items whose name starts with a given string. (optional)
NSString* filterUniqueKey = @"filterUniqueKey_example"; // Filter for items whose unique_key is a given string. (optional)
NSNumber* filterPublished = @true; // Filter for skus that have been published. (optional)
NSNumber* filterDisplayable = @true; // Filter for items that are displayable. (optional)
NSString* filterStart = @"filterStart_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the store start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
NSString* filterEnd = @"filterEnd_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the store end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the sku start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
NSString* filterStopDate = @"filterStopDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the sku end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
NSString* filterSku = @"filterSku_example"; // Filter for skus whose name starts with a given string. (optional)
NSString* filterPrice = @"filterPrice_example"; // A colon separated string without spaces.  First value is the operator to search on, second value is the price of a sku.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
NSString* filterTag = @"filterTag_example"; // A comma separated list without spaces of the names of tags. Will only return items with at least one of the tags. (optional)
NSString* filterItemsByType = @"filterItemsByType_example"; // Filter for item type based on its type hint. (optional)
NSString* filterBundledSkus = @"filterBundledSkus_example"; // Filter for skus inside bundles whose name starts with a given string.  Used only when type hint is 'bundle_item' (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// List and search store items
[apiInstance getStoreItemsUsingGETWithFilterNameSearch:filterNameSearch
              filterUniqueKey:filterUniqueKey
              filterPublished:filterPublished
              filterDisplayable:filterDisplayable
              filterStart:filterStart
              filterEnd:filterEnd
              filterStartDate:filterStartDate
              filterStopDate:filterStopDate
              filterSku:filterSku
              filterPrice:filterPrice
              filterTag:filterTag
              filterItemsByType:filterItemsByType
              filterBundledSkus:filterBundledSkus
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceStoreItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->getStoreItemsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterNameSearch** | **NSString***| Filter for items whose name starts with a given string. | [optional] 
 **filterUniqueKey** | **NSString***| Filter for items whose unique_key is a given string. | [optional] 
 **filterPublished** | **NSNumber***| Filter for skus that have been published. | [optional] 
 **filterDisplayable** | **NSNumber***| Filter for items that are displayable. | [optional] 
 **filterStart** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the store start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). | [optional] 
 **filterEnd** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the store end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). | [optional] 
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the sku start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). | [optional] 
 **filterStopDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the sku end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). | [optional] 
 **filterSku** | **NSString***| Filter for skus whose name starts with a given string. | [optional] 
 **filterPrice** | **NSString***| A colon separated string without spaces.  First value is the operator to search on, second value is the price of a sku.  Allowed operators: (LT, GT, LTE, GTE, EQ). | [optional] 
 **filterTag** | **NSString***| A comma separated list without spaces of the names of tags. Will only return items with at least one of the tags. | [optional] 
 **filterItemsByType** | **NSString***| Filter for item type based on its type hint. | [optional] 
 **filterBundledSkus** | **NSString***| Filter for skus inside bundles whose name starts with a given string.  Used only when type hint is &#39;bundle_item&#39; | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceStoreItem_***](SWGPageResourceStoreItem_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsingGET2**
```objc
-(NSNumber*) getUsingGET2WithStoreListRequest: (SWGStoreListRequest*) storeListRequest
        completionHandler: (void (^)(SWGPageResourceStoreItem_* output, NSError* error)) handler;
```

Get a listing of store items

The exact structure of each items may differ to include fields specific to the type. The same is true for behaviors.

### Example 
```objc

SWGStoreListRequest* storeListRequest = [[SWGStoreListRequest alloc] init]; // The store list request object (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Get a listing of store items
[apiInstance getUsingGET2WithStoreListRequest:storeListRequest
          completionHandler: ^(SWGPageResourceStoreItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->getUsingGET2: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **storeListRequest** | [**SWGStoreListRequest***](SWGStoreListRequest*.md)| The store list request object | [optional] 

### Return type

[**SWGPageResourceStoreItem_***](SWGPageResourceStoreItem_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateItemTemplateUsingPUT**
```objc
-(NSNumber*) updateItemTemplateUsingPUTWithId: (NSString*) _id
    itemTemplateResource: (SWGStoreItemTemplateResource*) itemTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an item template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGStoreItemTemplateResource* itemTemplateResource = [[SWGStoreItemTemplateResource alloc] init]; // The item template resource object (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Update an item template
[apiInstance updateItemTemplateUsingPUTWithId:_id
              itemTemplateResource:itemTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->updateItemTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **itemTemplateResource** | [**SWGStoreItemTemplateResource***](SWGStoreItemTemplateResource*.md)| The item template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateStoreItemExternalUsingPUT**
```objc
-(NSNumber*) updateStoreItemExternalUsingPUTWithId: (NSNumber*) _id
    storeItem: (SWGStoreItem*) storeItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a store item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the item
SWGStoreItem* storeItem = [[SWGStoreItem alloc] init]; // The store item object (optional)

SWGStoreApi*apiInstance = [[SWGStoreApi alloc] init];

// Update a store item
[apiInstance updateStoreItemExternalUsingPUTWithId:_id
              storeItem:storeItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreApi->updateStoreItemExternalUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the item | 
 **storeItem** | [**SWGStoreItem***](SWGStoreItem*.md)| The store item object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

