# SWGUsersInventoryApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addItemUsingPOST1**](SWGUsersInventoryApi.md#additemusingpost1) | **POST** /users/{id}/inventory | Adds an item to the user inventory
[**createItemUsingPOST**](SWGUsersInventoryApi.md#createitemusingpost) | **POST** /entitlements | Create an entitlement item
[**deleteItemUsingDELETE**](SWGUsersInventoryApi.md#deleteitemusingdelete) | **DELETE** /entitlements/{entitlement_id} | Delete an entitlement item
[**entitlementCheckUsingGET**](SWGUsersInventoryApi.md#entitlementcheckusingget) | **GET** /users/{user_id}/entitlements/{item_id}/check | Check for access to an item without consuming
[**entitlementUseUsingPOST**](SWGUsersInventoryApi.md#entitlementuseusingpost) | **POST** /users/{user_id}/entitlements/{item_id}/use | Use an item
[**getCurrenciesUsingGET1**](SWGUsersInventoryApi.md#getcurrenciesusingget1) | **GET** /entitlements | List and search entitlement items
[**getInventoryListUsingGET**](SWGUsersInventoryApi.md#getinventorylistusingget) | **GET** /inventories | List the user inventory entries for all users
[**getInventoryUsingGET**](SWGUsersInventoryApi.md#getinventoryusingget) | **GET** /users/{user_id}/inventory/{id} | Get an inventory entry
[**getItemUsingGET**](SWGUsersInventoryApi.md#getitemusingget) | **GET** /entitlements/{entitlement_id} | Get a single entitlement item
[**getUserInventoryListUsingGET**](SWGUsersInventoryApi.md#getuserinventorylistusingget) | **GET** /users/{id}/inventory | List the user inventory entries for a given user
[**getUserInventoryLogUsingGET**](SWGUsersInventoryApi.md#getuserinventorylogusingget) | **GET** /users/{user_id}/inventory/{id}/log | List the log entries for this inventory entry.
[**updateItemUsingPUT1**](SWGUsersInventoryApi.md#updateitemusingput1) | **PUT** /entitlements/{entitlement_id} | Update an entitlement item
[**updateUserInventoryBehaviorDataUsingPUT**](SWGUsersInventoryApi.md#updateuserinventorybehaviordatausingput) | **PUT** /users/{user_id}/inventory/{id}/behavior-data | Set the behavior data for an inventory entry
[**updateUserInventoryExpiresUsingPUT**](SWGUsersInventoryApi.md#updateuserinventoryexpiresusingput) | **PUT** /users/{user_id}/inventory/{id}/expires | Set the expiration date
[**updateUserInventoryStatusUsingPUT**](SWGUsersInventoryApi.md#updateuserinventorystatususingput) | **PUT** /users/{user_id}/inventory/{id}/status | Set the status for an inventory entry


# **addItemUsingPOST1**
```objc
-(NSNumber*) addItemUsingPOST1WithId: (NSNumber*) _id
    userInventoryAddRequest: (SWGUserInventoryAddRequest*) userInventoryAddRequest
        completionHandler: (void (^)(SWGInvoiceResource* output, NSError* error)) handler;
```

Adds an item to the user inventory

The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time

### Example 
```objc

NSNumber* _id = @56; // The id of the user
SWGUserInventoryAddRequest* userInventoryAddRequest = [[SWGUserInventoryAddRequest alloc] init]; // The user inventory add request object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Adds an item to the user inventory
[apiInstance addItemUsingPOST1WithId:_id
              userInventoryAddRequest:userInventoryAddRequest
          completionHandler: ^(SWGInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->addItemUsingPOST1: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createItemUsingPOST**
```objc
-(NSNumber*) createItemUsingPOSTWithEntitlementItem: (SWGEntitlementItem*) entitlementItem
        completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;
```

Create an entitlement item

### Example 
```objc

SWGEntitlementItem* entitlementItem = [[SWGEntitlementItem alloc] init]; // The entitlement item object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Create an entitlement item
[apiInstance createItemUsingPOSTWithEntitlementItem:entitlementItem
          completionHandler: ^(SWGEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->createItemUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteItemUsingDELETE**
```objc
-(NSNumber*) deleteItemUsingDELETEWithEntitlementId: (NSNumber*) entitlementId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an entitlement item

### Example 
```objc

NSNumber* entitlementId = @56; // The id of the entitlement

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Delete an entitlement item
[apiInstance deleteItemUsingDELETEWithEntitlementId:entitlementId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->deleteItemUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementCheckUsingGET**
```objc
-(NSNumber*) entitlementCheckUsingGETWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
        completionHandler: (void (^)(NSError* error)) handler;
```

Check for access to an item without consuming

Useful for pre-check and accounts for all various buisness rules

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Check for access to an item without consuming
[apiInstance entitlementCheckUsingGETWithUserId:userId
              itemId:itemId
              sku:sku
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->entitlementCheckUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **entitlementUseUsingPOST**
```objc
-(NSNumber*) entitlementUseUsingPOSTWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    info: (NSString*) info
        completionHandler: (void (^)(NSError* error)) handler;
```

Use an item

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
NSString* info = @"info_example"; // Any additional info to add to the log about this use (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Use an item
[apiInstance entitlementUseUsingPOSTWithUserId:userId
              itemId:itemId
              sku:sku
              info:info
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->entitlementUseUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCurrenciesUsingGET1**
```objc
-(NSNumber*) getCurrenciesUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageEntitlementItem_* output, NSError* error)) handler;
```

List and search entitlement items

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List and search entitlement items
[apiInstance getCurrenciesUsingGET1WithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageEntitlementItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getCurrenciesUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageEntitlementItem_***](SWGPageEntitlementItem_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInventoryListUsingGET**
```objc
-(NSNumber*) getInventoryListUsingGETWithInactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterMinDate: (NSNumber*) filterMinDate
    filterMaxDate: (NSNumber*) filterMaxDate
        completionHandler: (void (^)(SWGPageUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for all users

### Example 
```objc

NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSNumber* filterMinDate = @789; // Filter for inventory added after the specified date, unix timestamp in seconds (optional)
NSNumber* filterMaxDate = @789; // Filter for inventory added before the specified date, unix timestamp in seconds (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the user inventory entries for all users
[apiInstance getInventoryListUsingGETWithInactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterMinDate:filterMinDate
              filterMaxDate:filterMaxDate
          completionHandler: ^(SWGPageUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getInventoryListUsingGET: %@", error);
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
 **filterMinDate** | **NSNumber***| Filter for inventory added after the specified date, unix timestamp in seconds | [optional] 
 **filterMaxDate** | **NSNumber***| Filter for inventory added before the specified date, unix timestamp in seconds | [optional] 

### Return type

[**SWGPageUserInventoryResource_***](SWGPageUserInventoryResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInventoryUsingGET**
```objc
-(NSNumber*) getInventoryUsingGETWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(SWGUserInventoryResource* output, NSError* error)) handler;
```

Get an inventory entry

### Example 
```objc

NSNumber* userId = @56; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Get an inventory entry
[apiInstance getInventoryUsingGETWithUserId:userId
              _id:_id
          completionHandler: ^(SWGUserInventoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getInventoryUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getItemUsingGET**
```objc
-(NSNumber*) getItemUsingGETWithEntitlementId: (NSNumber*) entitlementId
        completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;
```

Get a single entitlement item

### Example 
```objc

NSNumber* entitlementId = @56; // The id of the entitlement

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Get a single entitlement item
[apiInstance getItemUsingGETWithEntitlementId:entitlementId
          completionHandler: ^(SWGEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getItemUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventoryListUsingGET**
```objc
-(NSNumber*) getUserInventoryListUsingGETWithId: (NSNumber*) _id
    inactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterMinDate: (NSNumber*) filterMinDate
    filterMaxDate: (NSNumber*) filterMaxDate
        completionHandler: (void (^)(SWGPageUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for a given user

### Example 
```objc

NSNumber* _id = @56; // The id of the user
NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSNumber* filterMinDate = @789; // Filter for inventory added after the specified date, unix timestamp in seconds (optional)
NSNumber* filterMaxDate = @789; // Filter for inventory added before the specified date, unix timestamp in seconds (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the user inventory entries for a given user
[apiInstance getUserInventoryListUsingGETWithId:_id
              inactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterMinDate:filterMinDate
              filterMaxDate:filterMaxDate
          completionHandler: ^(SWGPageUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventoryListUsingGET: %@", error);
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

[**SWGPageUserInventoryResource_***](SWGPageUserInventoryResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventoryLogUsingGET**
```objc
-(NSNumber*) getUserInventoryLogUsingGETWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUserItemLogResource_* output, NSError* error)) handler;
```

List the log entries for this inventory entry.

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// List the log entries for this inventory entry.
[apiInstance getUserInventoryLogUsingGETWithUserId:userId
              _id:_id
              size:size
              page:page
          completionHandler: ^(SWGPageUserItemLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->getUserInventoryLogUsingGET: %@", error);
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

[**SWGPageUserItemLogResource_***](SWGPageUserItemLogResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateItemUsingPUT1**
```objc
-(NSNumber*) updateItemUsingPUT1WithEntitlementId: (NSNumber*) entitlementId
    entitlementItem: (SWGEntitlementItem*) entitlementItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an entitlement item

### Example 
```objc

NSNumber* entitlementId = @56; // The id of the entitlement
SWGEntitlementItem* entitlementItem = [[SWGEntitlementItem alloc] init]; // The entitlement item object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Update an entitlement item
[apiInstance updateItemUsingPUT1WithEntitlementId:entitlementId
              entitlementItem:entitlementItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateItemUsingPUT1: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryBehaviorDataUsingPUT**
```objc
-(NSNumber*) updateUserInventoryBehaviorDataUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    data: (NSObject*) data
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the behavior data for an inventory entry

### Example 
```objc

NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
NSObject* data = NULL; // The data map (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the behavior data for an inventory entry
[apiInstance updateUserInventoryBehaviorDataUsingPUTWithUserId:userId
              _id:_id
              data:data
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateUserInventoryBehaviorDataUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryExpiresUsingPUT**
```objc
-(NSNumber*) updateUserInventoryExpiresUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    timestamp: (NSNumber*) timestamp
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the expiration date

Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)

### Example 
```objc

NSNumber* userId = @56; // user_id
NSNumber* _id = @56; // The id of the user inventory
NSNumber* timestamp = 789; // The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the expiration date
[apiInstance updateUserInventoryExpiresUsingPUTWithUserId:userId
              _id:_id
              timestamp:timestamp
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateUserInventoryExpiresUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryStatusUsingPUT**
```objc
-(NSNumber*) updateUserInventoryStatusUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    inventoryStatus: (NSString*) inventoryStatus
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the status for an inventory entry

### Example 
```objc

NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
NSString* inventoryStatus = inventoryStatus_example; // The inventory status object (optional)

SWGUsersInventoryApi*apiInstance = [[SWGUsersInventoryApi alloc] init];

// Set the status for an inventory entry
[apiInstance updateUserInventoryStatusUsingPUTWithUserId:userId
              _id:_id
              inventoryStatus:inventoryStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersInventoryApi->updateUserInventoryStatusUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

