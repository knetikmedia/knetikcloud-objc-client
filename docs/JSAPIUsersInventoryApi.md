# JSAPIUsersInventoryApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addItemToUserInventory**](JSAPIUsersInventoryApi.md#additemtouserinventory) | **POST** /users/{id}/inventory | Adds an item to the user inventory
[**checkUserEntitlementItem**](JSAPIUsersInventoryApi.md#checkuserentitlementitem) | **GET** /users/{user_id}/entitlements/{item_id}/check | Check for access to an item without consuming
[**createEntitlementItem**](JSAPIUsersInventoryApi.md#createentitlementitem) | **POST** /entitlements | Create an entitlement item
[**createEntitlementTemplate**](JSAPIUsersInventoryApi.md#createentitlementtemplate) | **POST** /entitlements/templates | Create an entitlement template
[**deleteEntitlementItem**](JSAPIUsersInventoryApi.md#deleteentitlementitem) | **DELETE** /entitlements/{entitlement_id} | Delete an entitlement item
[**deleteEntitlementTemplate**](JSAPIUsersInventoryApi.md#deleteentitlementtemplate) | **DELETE** /entitlements/templates/{id} | Delete an entitlement template
[**getEntitlementItem**](JSAPIUsersInventoryApi.md#getentitlementitem) | **GET** /entitlements/{entitlement_id} | Get a single entitlement item
[**getEntitlementItems**](JSAPIUsersInventoryApi.md#getentitlementitems) | **GET** /entitlements | List and search entitlement items
[**getEntitlementTemplate**](JSAPIUsersInventoryApi.md#getentitlementtemplate) | **GET** /entitlements/templates/{id} | Get a single entitlement template
[**getEntitlementTemplates**](JSAPIUsersInventoryApi.md#getentitlementtemplates) | **GET** /entitlements/templates | List and search entitlement templates
[**getUserInventories**](JSAPIUsersInventoryApi.md#getuserinventories) | **GET** /users/{id}/inventory | List the user inventory entries for a given user
[**getUserInventory**](JSAPIUsersInventoryApi.md#getuserinventory) | **GET** /users/{user_id}/inventory/{id} | Get an inventory entry
[**getUserInventoryLog**](JSAPIUsersInventoryApi.md#getuserinventorylog) | **GET** /users/{user_id}/inventory/{id}/log | List the log entries for this inventory entry
[**getUsersInventory**](JSAPIUsersInventoryApi.md#getusersinventory) | **GET** /inventories | List the user inventory entries for all users
[**grantUserEntitlement**](JSAPIUsersInventoryApi.md#grantuserentitlement) | **POST** /users/{user_id}/entitlements | Grant an entitlement
[**updateEntitlementItem**](JSAPIUsersInventoryApi.md#updateentitlementitem) | **PUT** /entitlements/{entitlement_id} | Update an entitlement item
[**updateEntitlementTemplate**](JSAPIUsersInventoryApi.md#updateentitlementtemplate) | **PUT** /entitlements/templates/{id} | Update an entitlement template
[**updateUserInventoryBehaviorData**](JSAPIUsersInventoryApi.md#updateuserinventorybehaviordata) | **PUT** /users/{user_id}/inventory/{id}/behavior-data | Set the behavior data for an inventory entry
[**updateUserInventoryExpires**](JSAPIUsersInventoryApi.md#updateuserinventoryexpires) | **PUT** /users/{user_id}/inventory/{id}/expires | Set the expiration date
[**updateUserInventoryStatus**](JSAPIUsersInventoryApi.md#updateuserinventorystatus) | **PUT** /users/{user_id}/inventory/{id}/status | Set the status for an inventory entry
[**useUserEntitlementItem**](JSAPIUsersInventoryApi.md#useuserentitlementitem) | **POST** /users/{user_id}/entitlements/{item_id}/use | Use an item


# **addItemToUserInventory**
```objc
-(NSURLSessionTask*) addItemToUserInventoryWithId: (NSNumber*) _id
    userInventoryAddRequest: (JSAPIUserInventoryAddRequest*) userInventoryAddRequest
        completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;
```

Adds an item to the user inventory

The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time. <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
JSAPIUserInventoryAddRequest* userInventoryAddRequest = [[JSAPIUserInventoryAddRequest alloc] init]; // The user inventory add request object (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Adds an item to the user inventory
[apiInstance addItemToUserInventoryWithId:_id
              userInventoryAddRequest:userInventoryAddRequest
          completionHandler: ^(JSAPIInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->addItemToUserInventory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the user | 
 **userInventoryAddRequest** | [**JSAPIUserInventoryAddRequest***](JSAPIUserInventoryAddRequest.md)| The user inventory add request object | [optional] 

### Return type

[**JSAPIInvoiceResource***](JSAPIInvoiceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

Useful for pre-check and accounts for all various buisness rules. <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Check for access to an item without consuming
[apiInstance checkUserEntitlementItemWithUserId:userId
              itemId:itemId
              sku:sku
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->checkUserEntitlementItem: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createEntitlementItem**
```objc
-(NSURLSessionTask*) createEntitlementItemWithCascade: (NSNumber*) cascade
    entitlementItem: (JSAPIEntitlementItem*) entitlementItem
        completionHandler: (void (^)(JSAPIEntitlementItem* output, NSError* error)) handler;
```

Create an entitlement item

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIEntitlementItem* entitlementItem = [[JSAPIEntitlementItem alloc] init]; // The entitlement item object (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Create an entitlement item
[apiInstance createEntitlementItemWithCascade:cascade
              entitlementItem:entitlementItem
          completionHandler: ^(JSAPIEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->createEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **entitlementItem** | [**JSAPIEntitlementItem***](JSAPIEntitlementItem.md)| The entitlement item object | [optional] 

### Return type

[**JSAPIEntitlementItem***](JSAPIEntitlementItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createEntitlementTemplate**
```objc
-(NSURLSessionTask*) createEntitlementTemplateWithTemplate: (JSAPIItemTemplateResource*) template
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Create an entitlement template

Entitlement templates define a type of entitlement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIItemTemplateResource* template = [[JSAPIItemTemplateResource alloc] init]; // The entitlement template to be created (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Create an entitlement template
[apiInstance createEntitlementTemplateWithTemplate:template
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->createEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The entitlement template to be created | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* entitlementId = @56; // The id of the entitlement

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Delete an entitlement item
[apiInstance deleteEntitlementItemWithEntitlementId:entitlementId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->deleteEntitlementItem: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteEntitlementTemplate**
```objc
-(NSURLSessionTask*) deleteEntitlementTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an entitlement template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Delete an entitlement template
[apiInstance deleteEntitlementTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->deleteEntitlementTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementItem**
```objc
-(NSURLSessionTask*) getEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
        completionHandler: (void (^)(JSAPIEntitlementItem* output, NSError* error)) handler;
```

Get a single entitlement item

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* entitlementId = @56; // The id of the entitlement

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Get a single entitlement item
[apiInstance getEntitlementItemWithEntitlementId:entitlementId
          completionHandler: ^(JSAPIEntitlementItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementId** | **NSNumber***| The id of the entitlement | 

### Return type

[**JSAPIEntitlementItem***](JSAPIEntitlementItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementItems**
```objc
-(NSURLSessionTask*) getEntitlementItemsWithFilterTemplate: (NSString*) filterTemplate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceEntitlementItem_* output, NSError* error)) handler;
```

List and search entitlement items

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTemplate = @"filterTemplate_example"; // Filter for entitlements using a specified template (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// List and search entitlement items
[apiInstance getEntitlementItemsWithFilterTemplate:filterTemplate
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceEntitlementItem_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getEntitlementItems: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSString***| Filter for entitlements using a specified template | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceEntitlementItem_***](JSAPIPageResourceEntitlementItem_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementTemplate**
```objc
-(NSURLSessionTask*) getEntitlementTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Get a single entitlement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Get a single entitlement template
[apiInstance getEntitlementTemplateWithId:_id
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEntitlementTemplates**
```objc
-(NSURLSessionTask*) getEntitlementTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search entitlement templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

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

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// List and search entitlement templates
[apiInstance getEntitlementTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getEntitlementTemplates: %@", error);
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

[**JSAPIPageResourceItemTemplateResource_***](JSAPIPageResourceItemTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventories**
```objc
-(NSURLSessionTask*) getUserInventoriesWithId: (NSNumber*) _id
    inactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterItemId: (NSNumber*) filterItemId
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
        completionHandler: (void (^)(JSAPIPageResourceUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for a given user

<b>Permissions Needed:</b> INVENTORY_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the user
NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSNumber* filterItemId = @56; // Filter by item id (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter by entries owned by the user with the specified username (optional)
NSString* filterGroup = @"filterGroup_example"; // Filter by entries owned by the users in a given group, by unique name (optional)
NSString* filterDate = @"filterDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// List the user inventory entries for a given user
[apiInstance getUserInventoriesWithId:_id
              inactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterItemId:filterItemId
              filterUsername:filterUsername
              filterGroup:filterGroup
              filterDate:filterDate
          completionHandler: ^(JSAPIPageResourceUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getUserInventories: %@", error);
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
 **filterItemId** | **NSNumber***| Filter by item id | [optional] 
 **filterUsername** | **NSString***| Filter by entries owned by the user with the specified username | [optional] 
 **filterGroup** | **NSString***| Filter by entries owned by the users in a given group, by unique name | [optional] 
 **filterDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 

### Return type

[**JSAPIPageResourceUserInventoryResource_***](JSAPIPageResourceUserInventoryResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventory**
```objc
-(NSURLSessionTask*) getUserInventoryWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIUserInventoryResource* output, NSError* error)) handler;
```

Get an inventory entry

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Get an inventory entry
[apiInstance getUserInventoryWithUserId:userId
              _id:_id
          completionHandler: ^(JSAPIUserInventoryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getUserInventory: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the inventory owner or &#39;me&#39; for the logged in user | 
 **_id** | **NSNumber***| The id of the user inventory | 

### Return type

[**JSAPIUserInventoryResource***](JSAPIUserInventoryResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserInventoryLog**
```objc
-(NSURLSessionTask*) getUserInventoryLogWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUserItemLogResource_* output, NSError* error)) handler;
```

List the log entries for this inventory entry

<b>Permissions Needed:</b> INVENTORY_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the inventory owner or 'me' for the logged in user
NSNumber* _id = @56; // The id of the user inventory
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// List the log entries for this inventory entry
[apiInstance getUserInventoryLogWithUserId:userId
              _id:_id
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUserItemLogResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getUserInventoryLog: %@", error);
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

[**JSAPIPageResourceUserItemLogResource_***](JSAPIPageResourceUserItemLogResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersInventory**
```objc
-(NSURLSessionTask*) getUsersInventoryWithInactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterItemId: (NSNumber*) filterItemId
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
        completionHandler: (void (^)(JSAPIPageResourceUserInventoryResource_* output, NSError* error)) handler;
```

List the user inventory entries for all users

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* inactive = @false; // If true, accepts inactive user inventories (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* filterItemName = @"filterItemName_example"; // Filter by items whose name starts with a string (optional)
NSNumber* filterItemId = @56; // Filter by item id (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter by entries owned by the user with the specified username (optional)
NSString* filterGroup = @"filterGroup_example"; // Filter by entries owned by the users in a given group, by unique name (optional)
NSString* filterDate = @"filterDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// List the user inventory entries for all users
[apiInstance getUsersInventoryWithInactive:inactive
              size:size
              page:page
              filterItemName:filterItemName
              filterItemId:filterItemId
              filterUsername:filterUsername
              filterGroup:filterGroup
              filterDate:filterDate
          completionHandler: ^(JSAPIPageResourceUserInventoryResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->getUsersInventory: %@", error);
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
 **filterItemId** | **NSNumber***| Filter by item id | [optional] 
 **filterUsername** | **NSString***| Filter by entries owned by the user with the specified username | [optional] 
 **filterGroup** | **NSString***| Filter by entries owned by the users in a given group, by unique name | [optional] 
 **filterDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 

### Return type

[**JSAPIPageResourceUserInventoryResource_***](JSAPIPageResourceUserInventoryResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **grantUserEntitlement**
```objc
-(NSURLSessionTask*) grantUserEntitlementWithUserId: (NSNumber*) userId
    grantRequest: (JSAPIEntitlementGrantRequest*) grantRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Grant an entitlement

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user to grant the entitlement to
JSAPIEntitlementGrantRequest* grantRequest = [[JSAPIEntitlementGrantRequest alloc] init]; // grantRequest

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Grant an entitlement
[apiInstance grantUserEntitlementWithUserId:userId
              grantRequest:grantRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->grantUserEntitlement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user to grant the entitlement to | 
 **grantRequest** | [**JSAPIEntitlementGrantRequest***](JSAPIEntitlementGrantRequest.md)| grantRequest | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateEntitlementItem**
```objc
-(NSURLSessionTask*) updateEntitlementItemWithEntitlementId: (NSNumber*) entitlementId
    cascade: (NSNumber*) cascade
    entitlementItem: (JSAPIEntitlementItem*) entitlementItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an entitlement item

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* entitlementId = @56; // The id of the entitlement
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIEntitlementItem* entitlementItem = [[JSAPIEntitlementItem alloc] init]; // The entitlement item object (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Update an entitlement item
[apiInstance updateEntitlementItemWithEntitlementId:entitlementId
              cascade:cascade
              entitlementItem:entitlementItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->updateEntitlementItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **entitlementId** | **NSNumber***| The id of the entitlement | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **entitlementItem** | [**JSAPIEntitlementItem***](JSAPIEntitlementItem.md)| The entitlement item object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateEntitlementTemplate**
```objc
-(NSURLSessionTask*) updateEntitlementTemplateWithId: (NSString*) _id
    template: (JSAPIItemTemplateResource*) template
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Update an entitlement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIItemTemplateResource* template = [[JSAPIItemTemplateResource alloc] init]; // The updated template (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Update an entitlement template
[apiInstance updateEntitlementTemplateWithId:_id
              template:template
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->updateEntitlementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The updated template | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
NSObject* data = NULL; // The data map (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Set the behavior data for an inventory entry
[apiInstance updateUserInventoryBehaviorDataWithUserId:userId
              _id:_id
              data:data
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->updateUserInventoryBehaviorData: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryExpires**
```objc
-(NSURLSessionTask*) updateUserInventoryExpiresWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    timestamp: (NSNumber*) timestamp
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the expiration date

Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill). <br><br><b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // user_id
NSNumber* _id = @56; // The id of the user inventory
NSNumber* timestamp = 789; // The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Set the expiration date
[apiInstance updateUserInventoryExpiresWithUserId:userId
              _id:_id
              timestamp:timestamp
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->updateUserInventoryExpires: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserInventoryStatus**
```objc
-(NSURLSessionTask*) updateUserInventoryStatusWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    inventoryStatus: (JSAPIInventoryStatusWrapper*) inventoryStatus
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the status for an inventory entry

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* _id = @56; // The id of the user inventory
JSAPIInventoryStatusWrapper* inventoryStatus = [[JSAPIInventoryStatusWrapper alloc] init]; // The inventory status object (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Set the status for an inventory entry
[apiInstance updateUserInventoryStatusWithUserId:userId
              _id:_id
              inventoryStatus:inventoryStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->updateUserInventoryStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **_id** | **NSNumber***| The id of the user inventory | 
 **inventoryStatus** | [**JSAPIInventoryStatusWrapper***](JSAPIInventoryStatusWrapper.md)| The inventory status object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> INVENTORY_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user to check for or 'me' for logged in user
NSNumber* itemId = @56; // The id of the item
NSString* sku = @"sku_example"; // The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
NSString* info = @"info_example"; // Any additional info to add to the log about this use (optional)

JSAPIUsersInventoryApi*apiInstance = [[JSAPIUsersInventoryApi alloc] init];

// Use an item
[apiInstance useUserEntitlementItemWithUserId:userId
              itemId:itemId
              sku:sku
              info:info
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersInventoryApi->useUserEntitlementItem: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

