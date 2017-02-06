# SWGUsersInventoryApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addItemToUserInventory**](SWGUsersInventoryApi.md#additemtouserinventory) | **POST** /users/{id}/inventory | Adds an item to the user inventory
[**checkUserEntitlementItem**](SWGUsersInventoryApi.md#checkuserentitlementitem) | **GET** /users/{user_id}/entitlements/{item_id}/check | Check for access to an item without consuming
[**createEntitlementItem**](SWGUsersInventoryApi.md#createentitlementitem) | **POST** /entitlements | Create an entitlement item
[**createEntitlementTemplate**](SWGUsersInventoryApi.md#createentitlementtemplate) | **POST** /entitlements/templates | Create an entitlement template
[**deleteEntitlementItem**](SWGUsersInventoryApi.md#deleteentitlementitem) | **DELETE** /entitlements/{entitlement_id} | Delete an entitlement item
[**deleteEntitlementTemplate**](SWGUsersInventoryApi.md#deleteentitlementtemplate) | **DELETE** /entitlements/templates/{id} | Delete an entitlement template
[**getEntitlementItem**](SWGUsersInventoryApi.md#getentitlementitem) | **GET** /entitlements/{entitlement_id} | Get a single entitlement item
[**getEntitlementItems**](SWGUsersInventoryApi.md#getentitlementitems) | **GET** /entitlements | List and search entitlement items
[**getEntitlementTemplate**](SWGUsersInventoryApi.md#getentitlementtemplate) | **GET** /entitlements/templates/{id} | Get a single entitlement template
[**getEntitlementTemplates**](SWGUsersInventoryApi.md#getentitlementtemplates) | **GET** /entitlements/templates | List and search entitlement templates
[**getUserInventory**](SWGUsersInventoryApi.md#getuserinventory) | **GET** /users/{user_id}/inventory/{id} | Get an inventory entry
[**getUserInventory1**](SWGUsersInventoryApi.md#getuserinventory1) | **GET** /users/{id}/inventory | List the user inventory entries for a given user
[**getUserInventoryLog**](SWGUsersInventoryApi.md#getuserinventorylog) | **GET** /users/{user_id}/inventory/{id}/log | List the log entries for this inventory entry
[**getUserInventoryLog1**](SWGUsersInventoryApi.md#getuserinventorylog1) | **PUT** /users/{user_id}/inventory/{id}/expires | Set the expiration date
[**getUsersInventory**](SWGUsersInventoryApi.md#getusersinventory) | **GET** /inventories | List the user inventory entries for all users
[**grantUserEntitlement**](SWGUsersInventoryApi.md#grantuserentitlement) | **POST** /users/{user_id}/entitlements | Grant an entitlement
[**updateEntitlementItem**](SWGUsersInventoryApi.md#updateentitlementitem) | **PUT** /entitlements/{entitlement_id} | Update an entitlement item
[**updateEntitlementTemplate**](SWGUsersInventoryApi.md#updateentitlementtemplate) | **PUT** /entitlements/templates/{id} | Update an entitlement template
[**updateUserInventoryBehaviorData**](SWGUsersInventoryApi.md#updateuserinventorybehaviordata) | **PUT** /users/{user_id}/inventory/{id}/behavior-data | Set the behavior data for an inventory entry
[**updateUserInventoryStatus**](SWGUsersInventoryApi.md#updateuserinventorystatus) | **PUT** /users/{user_id}/inventory/{id}/status | Set the status for an inventory entry
[**useUserEntitlementItem**](SWGUsersInventoryApi.md#useuserentitlementitem) | **POST** /users/{user_id}/entitlements/{item_id}/use | Use an item


# **addItemToUserInventory**
```objc
-(NSURLSessionTask*) addItemToUserInventoryWithId: (NSNumber*) _id
    userInventoryAddRequest: (SWGUserInventoryAddRequest*) userInventoryAddRequest
        completionHandler: (void (^)(SWGInvoiceResource* output, NSError* error)) handler;
```

Adds an item to the user inventory

The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
SWGUserInventoryAddRequest* userInventoryAddRequest = [[SWGUserInventoryAddRequest alloc] init]; // The user inventory add request object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Adds an item to the user inventory
[apiInstance addItemToUserInventoryWithId:_id
              userInventoryAddRequest:userInventoryAddRequest
          completionHandler: ^(SWGInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->addItemToUserInventory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **userInventoryAddRequest** | [**SWGUserInventoryAddRequest***](SWGUserInventoryAddRequest*.md)| The user inventory add request object | [optional] 

### Return type

[**SWGInvoiceResource***](SWGInvoiceResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **checkUserEntitlementItem**
```objc
-(NSURLSessionTask*) checkUserEntitlementItemWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
        completionHandler: (void (^)(NSError* error)) handler;
```

Check for access to an item without consuming

Useful for pre-check and accounts for all various buisness rules

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Check for access to an item without consuming
[apiInstance checkUserEntitlementItemWithUserId:userId
              itemId:itemId
              sku:sku
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->checkUserEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user to check for or &#39;me&#39; for logged in user | 
 **itemId** | **NSNumber***| The id of the item | 
 **sku** | **NSString***| The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createEntitlementItem**
```objc
-(NSURLSessionTask*) createEntitlementItemWithEntitlementItem: (SWGEntitlementItem*) entitlementItem
        completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;
```

Create an entitlement item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGEntitlementItem* entitlementItem = [[SWGEntitlementItem alloc] init]; // The entitlement item object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Create an entitlement item
[apiInstance createEntitlementItemWithEntitlementItem:entitlementItem
          completionHandler: ^(SWGEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->createEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementItem** | [**SWGEntitlementItem***](SWGEntitlementItem*.md)| The entitlement item object | [optional] 

### Return type

[**SWGEntitlementItem***](SWGEntitlementItem.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createEntitlementTemplate**
```objc
-(NSURLSessionTask*) createEntitlementTemplateWithTemplate: (SWGItemTemplateResource*) template
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create an entitlement template

Entitlement templates define a type of entitlement and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* template = [[SWGItemTemplateResource alloc] init]; // The entitlement template to be created (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Create an entitlement template
[apiInstance createEntitlementTemplateWithTemplate:template
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->createEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The entitlement template to be created | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEntitlementItem**
```objc
-(NSURLSessionTask*) deleteEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an entitlement item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* entitlementId = @56; // The id of the entitlement

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Delete an entitlement item
[apiInstance deleteEntitlementItemWithEntitlementId:entitlementId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->deleteEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementId** | **NSNumber***| The id of the entitlement | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEntitlementTemplate**
```objc
-(NSURLSessionTask*) deleteEntitlementTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an entitlement template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Delete an entitlement template
[apiInstance deleteEntitlementTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->deleteEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementItem**
```objc
-(NSURLSessionTask*) getEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
        completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;
```

Get a single entitlement item

### Example 
```objc

NSNumber* entitlementId = @56; // The id of the entitlement

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Get a single entitlement item
[apiInstance getEntitlementItemWithEntitlementId:entitlementId
          completionHandler: ^(SWGEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementId** | **NSNumber***| The id of the entitlement | 

### Return type

[**SWGEntitlementItem***](SWGEntitlementItem.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementItems**
```objc
-(NSURLSessionTask*) getEntitlementItemsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceEntitlementItem_* output, NSError* error)) handler;
```

List and search entitlement items

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List and search entitlement items
[apiInstance getEntitlementItemsWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceEntitlementItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getEntitlementItems: %@", error);
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

[**SWGPageResourceEntitlementItem_***](SWGPageResourceEntitlementItem_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementTemplate**
```objc
-(NSURLSessionTask*) getEntitlementTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single entitlement template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Get a single entitlement template
[apiInstance getEntitlementTemplateWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getEntitlementTemplate: %@", error);
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

# **getEntitlementTemplates**
```objc
-(NSURLSessionTask*) getEntitlementTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search entitlement templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List and search entitlement templates
[apiInstance getEntitlementTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getEntitlementTemplates: %@", error);
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

# **getUserInventory**
```objc
-(NSURLSessionTask*) getUserInventoryWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(SWGUserInventoryResource* output, NSError* error)) handler;
```

Get an inventory entry

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Get an inventory entry
[apiInstance getUserInventoryWithUserId:userId
              _id:_id
          completionHandler: ^(SWGUserInventoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the inventory owner or &#39;me&#39; for the logged in user | 
 **_id** | **NSNumber***| The id of the user inventory | 

### Return type

[**SWGUserInventoryResource***](SWGUserInventoryResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventory1**
```objc
-(NSURLSessionTask*) getUserInventory1WithId: (NSNumber*) _id
    inactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterMinDate: (NSNumber*) filterMinDate
    filterMaxDate: (NSNumber*) filterMaxDate
        completionHandler: (void (^)(SWGPageResourceUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for a given user

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSNumber* filterMinDate = @789; // Filter for inventory added after the specified date, unix timestamp in seconds (optional)
NSNumber* filterMaxDate = @789; // Filter for inventory added before the specified date, unix timestamp in seconds (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the user inventory entries for a given user
[apiInstance getUserInventory1WithId:_id
              inactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterMinDate:filterMinDate
              filterMaxDate:filterMaxDate
          completionHandler: ^(SWGPageResourceUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventory1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **inactive** | **NSNumber***| If true, accepts inactive user inventories | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **filterItemName** | **NSString***| Filter by items whose name starts with a string | [optional] 
 **filterMinDate** | **NSNumber***| Filter for inventory added after the specified date, unix timestamp in seconds | [optional] 
 **filterMaxDate** | **NSNumber***| Filter for inventory added before the specified date, unix timestamp in seconds | [optional] 

### Return type

[**SWGPageResourceUserInventoryResource_***](SWGPageResourceUserInventoryResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventoryLog**
```objc
-(NSURLSessionTask*) getUserInventoryLogWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserItemLogResource_* output, NSError* error)) handler;
```

List the log entries for this inventory entry

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the log entries for this inventory entry
[apiInstance getUserInventoryLogWithUserId:userId
              _id:_id
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserItemLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventoryLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the inventory owner or &#39;me&#39; for the logged in user | 
 **_id** | **NSNumber***| The id of the user inventory | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUserItemLogResource_***](SWGPageResourceUserItemLogResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventoryLog1**
```objc
-(NSURLSessionTask*) getUserInventoryLog1WithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    timestamp: (NSNumber*) timestamp
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the expiration date

Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // user_id
NSNumber* _id = @56; // The id of the user inventory
NSNumber* timestamp = 789; // The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the expiration date
[apiInstance getUserInventoryLog1WithUserId:userId
              _id:_id
              timestamp:timestamp
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventoryLog1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| user_id | 
 **_id** | **NSNumber***| The id of the user inventory | 
 **timestamp** | **NSNumber***| The new expiration date as a unix timestamp in seconds. May be null (no body). | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersInventory**
```objc
-(NSURLSessionTask*) getUsersInventoryWithInactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
        completionHandler: (void (^)(SWGPageResourceUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for all users

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter by entries owned by the user with the specified username (optional)
NSString* filterGroup = @"filterGroup_example"; // Filter by entries owned by the users in a given group, by unique name (optional)
NSString* filterDate = @"filterDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the user inventory entries for all users
[apiInstance getUsersInventoryWithInactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterUsername:filterUsername
              filterGroup:filterGroup
              filterDate:filterDate
          completionHandler: ^(SWGPageResourceUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUsersInventory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **inactive** | **NSNumber***| If true, accepts inactive user inventories | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **filterItemName** | **NSString***| Filter by items whose name starts with a string | [optional] 
 **filterUsername** | **NSString***| Filter by entries owned by the user with the specified username | [optional] 
 **filterGroup** | **NSString***| Filter by entries owned by the users in a given group, by unique name | [optional] 
 **filterDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 

### Return type

[**SWGPageResourceUserInventoryResource_***](SWGPageResourceUserInventoryResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **grantUserEntitlement**
```objc
-(NSURLSessionTask*) grantUserEntitlementWithUserId: (NSNumber*) userId
    grantRequest: (SWGEntitlementGrantRequest*) grantRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Grant an entitlement

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user to grant the entitlement to
SWGEntitlementGrantRequest* grantRequest = [[SWGEntitlementGrantRequest alloc] init]; // grantRequest

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Grant an entitlement
[apiInstance grantUserEntitlementWithUserId:userId
              grantRequest:grantRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->grantUserEntitlement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user to grant the entitlement to | 
 **grantRequest** | [**SWGEntitlementGrantRequest***](SWGEntitlementGrantRequest*.md)| grantRequest | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateEntitlementItem**
```objc
-(NSURLSessionTask*) updateEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
    entitlementItem: (SWGEntitlementItem*) entitlementItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an entitlement item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* entitlementId = @56; // The id of the entitlement
SWGEntitlementItem* entitlementItem = [[SWGEntitlementItem alloc] init]; // The entitlement item object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Update an entitlement item
[apiInstance updateEntitlementItemWithEntitlementId:entitlementId
              entitlementItem:entitlementItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementId** | **NSNumber***| The id of the entitlement | 
 **entitlementItem** | [**SWGEntitlementItem***](SWGEntitlementItem*.md)| The entitlement item object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateEntitlementTemplate**
```objc
-(NSURLSessionTask*) updateEntitlementTemplateWithId: (NSString*) _id
    template: (SWGItemTemplateResource*) template
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an entitlement template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* template = [[SWGItemTemplateResource alloc] init]; // The updated template (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Update an entitlement template
[apiInstance updateEntitlementTemplateWithId:_id
              template:template
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The updated template | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryBehaviorData**
```objc
-(NSURLSessionTask*) updateUserInventoryBehaviorDataWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    data: (NSObject*) data
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the behavior data for an inventory entry

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
NSObject* data = NULL; // The data map (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the behavior data for an inventory entry
[apiInstance updateUserInventoryBehaviorDataWithUserId:userId
              _id:_id
              data:data
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateUserInventoryBehaviorData: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **_id** | **NSNumber***| The id of the user inventory | 
 **data** | **NSObject***| The data map | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryStatus**
```objc
-(NSURLSessionTask*) updateUserInventoryStatusWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    inventoryStatus: (NSString*) inventoryStatus
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the status for an inventory entry

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
NSString* inventoryStatus = inventoryStatus_example; // The inventory status object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the status for an inventory entry
[apiInstance updateUserInventoryStatusWithUserId:userId
              _id:_id
              inventoryStatus:inventoryStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateUserInventoryStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **_id** | **NSNumber***| The id of the user inventory | 
 **inventoryStatus** | **NSString***| The inventory status object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **useUserEntitlementItem**
```objc
-(NSURLSessionTask*) useUserEntitlementItemWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    info: (NSString*) info
        completionHandler: (void (^)(NSError* error)) handler;
```

Use an item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
NSString* info = @"info_example"; // Any additional info to add to the log about this use (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Use an item
[apiInstance useUserEntitlementItemWithUserId:userId
              itemId:itemId
              sku:sku
              info:info
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->useUserEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user to check for or &#39;me&#39; for logged in user | 
 **itemId** | **NSNumber***| The id of the item | 
 **sku** | **NSString***| The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out | [optional] 
 **info** | **NSString***| Any additional info to add to the log about this use | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

