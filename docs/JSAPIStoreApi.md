# JSAPIStoreApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createItemTemplate**](JSAPIStoreApi.md#createitemtemplate) | **POST** /store/items/templates | Create an item template
[**createStoreItem**](JSAPIStoreApi.md#createstoreitem) | **POST** /store/items | Create a store item
[**deleteItemTemplate**](JSAPIStoreApi.md#deleteitemtemplate) | **DELETE** /store/items/templates/{id} | Delete an item template
[**deleteStoreItem**](JSAPIStoreApi.md#deletestoreitem) | **DELETE** /store/items/{id} | Delete a store item
[**getBehaviors**](JSAPIStoreApi.md#getbehaviors) | **GET** /store/items/behaviors | List available item behaviors
[**getItemTemplate**](JSAPIStoreApi.md#getitemtemplate) | **GET** /store/items/templates/{id} | Get a single item template
[**getItemTemplates**](JSAPIStoreApi.md#getitemtemplates) | **GET** /store/items/templates | List and search item templates
[**getStoreItem**](JSAPIStoreApi.md#getstoreitem) | **GET** /store/items/{id} | Get a single store item
[**getStoreItems**](JSAPIStoreApi.md#getstoreitems) | **GET** /store/items | List and search store items
[**quickBuy**](JSAPIStoreApi.md#quickbuy) | **POST** /store/quick-buy | One-step purchase and pay for a single SKU item from a user&#39;s wallet
[**updateItemTemplate**](JSAPIStoreApi.md#updateitemtemplate) | **PUT** /store/items/templates/{id} | Update an item template
[**updateStoreItem**](JSAPIStoreApi.md#updatestoreitem) | **PUT** /store/items/{id} | Update a store item


# **createItemTemplate**
```objc
-(NSURLSessionTask*) createItemTemplateWithItemTemplateResource: (JSAPIStoreItemTemplateResource*) itemTemplateResource
        completionHandler: (void (^)(JSAPIStoreItemTemplateResource* output, NSError* error)) handler;
```

Create an item template

Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIStoreItemTemplateResource* itemTemplateResource = [[JSAPIStoreItemTemplateResource alloc] init]; // The new item template (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Create an item template
[apiInstance createItemTemplateWithItemTemplateResource:itemTemplateResource
          completionHandler: ^(JSAPIStoreItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->createItemTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **itemTemplateResource** | [**JSAPIStoreItemTemplateResource***](JSAPIStoreItemTemplateResource.md)| The new item template | [optional] 

### Return type

[**JSAPIStoreItemTemplateResource***](JSAPIStoreItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createStoreItem**
```objc
-(NSURLSessionTask*) createStoreItemWithCascade: (NSNumber*) cascade
    storeItem: (JSAPIStoreItem*) storeItem
        completionHandler: (void (^)(JSAPIStoreItem* output, NSError* error)) handler;
```

Create a store item

SKUs have to be unique in the entire store. If a duplicate SKU is found, a 400 error is generated and the response will have a \"parameters\" field that is a list of duplicates. A duplicate is an object like {item_id, offending_sku_list}. Ex:<br /> {..., parameters: [[{item: 1, skus: [\"SKU-1\"]}]]}<br /> If an item is brand new and has duplicate SKUs within itself, the item ID will be 0.  Item subclasses are not allowed here, you will have to use their respective endpoints. <br><br><b>Permissions Needed:</b> STORE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIStoreItem* storeItem = [[JSAPIStoreItem alloc] init]; // The store item object (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Create a store item
[apiInstance createStoreItemWithCascade:cascade
              storeItem:storeItem
          completionHandler: ^(JSAPIStoreItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->createStoreItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **storeItem** | [**JSAPIStoreItem***](JSAPIStoreItem.md)| The store item object | [optional] 

### Return type

[**JSAPIStoreItem***](JSAPIStoreItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteItemTemplate**
```objc
-(NSURLSessionTask*) deleteItemTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an item template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Delete an item template
[apiInstance deleteItemTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->deleteItemTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteStoreItem**
```objc
-(NSURLSessionTask*) deleteStoreItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a store item

<b>Permissions Needed:</b> STORE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the item

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Delete a store item
[apiInstance deleteStoreItemWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->deleteStoreItem: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBehaviors**
```objc
-(NSURLSessionTask*) getBehaviorsWithCompletionHandler: 
        (void (^)(NSArray<JSAPIBehaviorDefinitionResource>* output, NSError* error)) handler;
```

List available item behaviors

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// List available item behaviors
[apiInstance getBehaviorsWithCompletionHandler: 
          ^(NSArray<JSAPIBehaviorDefinitionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->getBehaviors: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPIBehaviorDefinitionResource>***](JSAPIBehaviorDefinitionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemTemplate**
```objc
-(NSURLSessionTask*) getItemTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIStoreItemTemplateResource* output, NSError* error)) handler;
```

Get a single item template

Item Templates define a type of item and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Get a single item template
[apiInstance getItemTemplateWithId:_id
          completionHandler: ^(JSAPIStoreItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->getItemTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPIStoreItemTemplateResource***](JSAPIStoreItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemTemplates**
```objc
-(NSURLSessionTask*) getItemTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceStoreItemTemplateResource_* output, NSError* error)) handler;
```

List and search item templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// List and search item templates
[apiInstance getItemTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceStoreItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->getItemTemplates: %@", error);
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

[**JSAPIPageResourceStoreItemTemplateResource_***](JSAPIPageResourceStoreItemTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStoreItem**
```objc
-(NSURLSessionTask*) getStoreItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIStoreItem* output, NSError* error)) handler;
```

Get a single store item

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the item

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Get a single store item
[apiInstance getStoreItemWithId:_id
          completionHandler: ^(JSAPIStoreItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->getStoreItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the item | 

### Return type

[**JSAPIStoreItem***](JSAPIStoreItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStoreItems**
```objc
-(NSURLSessionTask*) getStoreItemsWithFilterNameSearch: (NSString*) filterNameSearch
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
    filterVendor: (NSNumber*) filterVendor
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceStoreItem_* output, NSError* error)) handler;
```

List and search store items

If called without permission STORE_ADMIN the only items marked displayable, whose start and end date are null or appropriate to the current date, and whose geo policy allows the caller's country will be returned. Similarly skus will be filtered, possibly resulting in an item returned with no skus the user can purchase. br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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
NSNumber* filterVendor = @56; // Filter for items from a given vendor, by id. (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// List and search store items
[apiInstance getStoreItemsWithFilterNameSearch:filterNameSearch
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
              filterVendor:filterVendor
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceStoreItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->getStoreItems: %@", error);
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
 **filterVendor** | **NSNumber***| Filter for items from a given vendor, by id. | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceStoreItem_***](JSAPIPageResourceStoreItem_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **quickBuy**
```objc
-(NSURLSessionTask*) quickBuyWithQuickBuyRequest: (JSAPIQuickBuyRequest*) quickBuyRequest
        completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;
```

One-step purchase and pay for a single SKU item from a user's wallet

Used to create and automatically pay an invoice for a single unit of a single SKU from a user's wallet. SKU must be priced in virtual currency and must not be an item that requires shipping. PAYMENTS_ADMIN permission is required if user ID is specified and is not the ID of the currently logged in user. If invoice price does not match expected price, purchase is aborted. <br><br><b>Permissions Needed:</b> PAYMENTS_USER and owner, or PAYMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIQuickBuyRequest* quickBuyRequest = [[JSAPIQuickBuyRequest alloc] init]; // Quick buy details (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// One-step purchase and pay for a single SKU item from a user's wallet
[apiInstance quickBuyWithQuickBuyRequest:quickBuyRequest
          completionHandler: ^(JSAPIInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->quickBuy: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **quickBuyRequest** | [**JSAPIQuickBuyRequest***](JSAPIQuickBuyRequest.md)| Quick buy details | [optional] 

### Return type

[**JSAPIInvoiceResource***](JSAPIInvoiceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateItemTemplate**
```objc
-(NSURLSessionTask*) updateItemTemplateWithId: (NSString*) _id
    itemTemplateResource: (JSAPIStoreItemTemplateResource*) itemTemplateResource
        completionHandler: (void (^)(JSAPIStoreItemTemplateResource* output, NSError* error)) handler;
```

Update an item template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIStoreItemTemplateResource* itemTemplateResource = [[JSAPIStoreItemTemplateResource alloc] init]; // The item template resource object (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Update an item template
[apiInstance updateItemTemplateWithId:_id
              itemTemplateResource:itemTemplateResource
          completionHandler: ^(JSAPIStoreItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->updateItemTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **itemTemplateResource** | [**JSAPIStoreItemTemplateResource***](JSAPIStoreItemTemplateResource.md)| The item template resource object | [optional] 

### Return type

[**JSAPIStoreItemTemplateResource***](JSAPIStoreItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateStoreItem**
```objc
-(NSURLSessionTask*) updateStoreItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    storeItem: (JSAPIStoreItem*) storeItem
        completionHandler: (void (^)(JSAPIStoreItem* output, NSError* error)) handler;
```

Update a store item

<b>Permissions Needed:</b> STORE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the item
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIStoreItem* storeItem = [[JSAPIStoreItem alloc] init]; // The store item object (optional)

JSAPIStoreApi*apiInstance = [[JSAPIStoreApi alloc] init];

// Update a store item
[apiInstance updateStoreItemWithId:_id
              cascade:cascade
              storeItem:storeItem
          completionHandler: ^(JSAPIStoreItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreApi->updateStoreItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the item | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **storeItem** | [**JSAPIStoreItem***](JSAPIStoreItem.md)| The store item object | [optional] 

### Return type

[**JSAPIStoreItem***](JSAPIStoreItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

