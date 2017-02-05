# SWGStoreShoppingCartsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDiscountUsingPOST**](SWGStoreShoppingCartsApi.md#adddiscountusingpost) | **POST** /carts/{id}/discounts | Adds a coupon to the cart
[**addItemUsingPOST**](SWGStoreShoppingCartsApi.md#additemusingpost) | **POST** /carts/{id}/items | Add an item to the cart
[**assignCartUsingPUT**](SWGStoreShoppingCartsApi.md#assigncartusingput) | **PUT** /carts/{id}/owner | Sets the owner of a cart if none is set already
[**checkShippableUsingGET**](SWGStoreShoppingCartsApi.md#checkshippableusingget) | **GET** /carts/{id}/shippable | Returns whether a cart requires shipping
[**createCartUsingPOST**](SWGStoreShoppingCartsApi.md#createcartusingpost) | **POST** /carts | Creates a new cart from scratch
[**getCartUsingGET**](SWGStoreShoppingCartsApi.md#getcartusingget) | **GET** /carts/{id} | Returns the cart with the given GUID
[**getCountriesUsingGET**](SWGStoreShoppingCartsApi.md#getcountriesusingget) | **GET** /carts/{id}/countries | Get the list of available shipping countries per vendor
[**modifyShippingAddressUsingPUT**](SWGStoreShoppingCartsApi.md#modifyshippingaddressusingput) | **PUT** /carts/{id}/shipping-address | Modifies or sets the order shipping address
[**removeDiscountUsingDELETE**](SWGStoreShoppingCartsApi.md#removediscountusingdelete) | **DELETE** /carts/{id}/discounts/{code} | Removes a coupon from the cart
[**searchCartsUsingGET**](SWGStoreShoppingCartsApi.md#searchcartsusingget) | **GET** /carts | Get a list of carts
[**setCartCurrencyUsingPUT**](SWGStoreShoppingCartsApi.md#setcartcurrencyusingput) | **PUT** /carts/{id}/currency | Sets the currency to use for the cart
[**updateItemUsingPUT**](SWGStoreShoppingCartsApi.md#updateitemusingput) | **PUT** /carts/{id}/items | Changes the quantity of an item already in the cart


# **addDiscountUsingPOST**
```objc
-(NSURLSessionTask*) addDiscountUsingPOSTWithId: (NSString*) _id
    skuRequest: (SWGSkuRequest*) skuRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a coupon to the cart

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
SWGSkuRequest* skuRequest = [[SWGSkuRequest alloc] init]; // The request of the sku (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Adds a coupon to the cart
[apiInstance addDiscountUsingPOSTWithId:_id
              skuRequest:skuRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->addDiscountUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **skuRequest** | [**SWGSkuRequest***](SWGSkuRequest*.md)| The request of the sku | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addItemUsingPOST**
```objc
-(NSURLSessionTask*) addItemUsingPOSTWithId: (NSString*) _id
    cartItemRequest: (SWGCartItemRequest*) cartItemRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Add an item to the cart

Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
SWGCartItemRequest* cartItemRequest = [[SWGCartItemRequest alloc] init]; // The cart item request object (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Add an item to the cart
[apiInstance addItemUsingPOSTWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->addItemUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartItemRequest** | [**SWGCartItemRequest***](SWGCartItemRequest*.md)| The cart item request object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **assignCartUsingPUT**
```objc
-(NSURLSessionTask*) assignCartUsingPUTWithId: (NSString*) _id
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Sets the owner of a cart if none is set already

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
NSNumber* userId = 56; // The id of the user (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Sets the owner of a cart if none is set already
[apiInstance assignCartUsingPUTWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->assignCartUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **userId** | **NSNumber***| The id of the user | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **checkShippableUsingGET**
```objc
-(NSURLSessionTask*) checkShippableUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGCartShippableResponse* output, NSError* error)) handler;
```

Returns whether a cart requires shipping

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Returns whether a cart requires shipping
[apiInstance checkShippableUsingGETWithId:_id
          completionHandler: ^(SWGCartShippableResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->checkShippableUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**SWGCartShippableResponse***](SWGCartShippableResponse.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCartUsingPOST**
```objc
-(NSURLSessionTask*) createCartUsingPOSTWithOwner: (NSNumber*) owner
    currencyCode: (NSString*) currencyCode
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Creates a new cart from scratch

You don't have to have a user to create a cart but the API requires authentication to checkout

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* owner = @56; // Set the owner of a cart. If not specified, defaults to the calling user's id. If specified and is not the calling user's id, SHOPPING_CARTS_ADMIN permission is required (optional)
NSString* currencyCode = @"currencyCode_example"; // Set the currency for the cart, by currency code. May be disallowed by site settings. (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Creates a new cart from scratch
[apiInstance createCartUsingPOSTWithOwner:owner
              currencyCode:currencyCode
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->createCartUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **owner** | **NSNumber***| Set the owner of a cart. If not specified, defaults to the calling user&#39;s id. If specified and is not the calling user&#39;s id, SHOPPING_CARTS_ADMIN permission is required | [optional] 
 **currencyCode** | **NSString***| Set the currency for the cart, by currency code. May be disallowed by site settings. | [optional] 

### Return type

**NSString***

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCartUsingGET**
```objc
-(NSURLSessionTask*) getCartUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGCart* output, NSError* error)) handler;
```

Returns the cart with the given GUID

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Returns the cart with the given GUID
[apiInstance getCartUsingGETWithId:_id
          completionHandler: ^(SWGCart* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getCartUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**SWGCart***](SWGCart.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCountriesUsingGET**
```objc
-(NSURLSessionTask*) getCountriesUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGSampleCountriesResponse* output, NSError* error)) handler;
```

Get the list of available shipping countries per vendor

Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Get the list of available shipping countries per vendor
[apiInstance getCountriesUsingGETWithId:_id
          completionHandler: ^(SWGSampleCountriesResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getCountriesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**SWGSampleCountriesResponse***](SWGSampleCountriesResponse.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **modifyShippingAddressUsingPUT**
```objc
-(NSURLSessionTask*) modifyShippingAddressUsingPUTWithId: (NSString*) _id
    cartShippingAddressRequest: (SWGCartShippingAddressRequest*) cartShippingAddressRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies or sets the order shipping address

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
SWGCartShippingAddressRequest* cartShippingAddressRequest = [[SWGCartShippingAddressRequest alloc] init]; // The cart shipping address request object (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Modifies or sets the order shipping address
[apiInstance modifyShippingAddressUsingPUTWithId:_id
              cartShippingAddressRequest:cartShippingAddressRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->modifyShippingAddressUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartShippingAddressRequest** | [**SWGCartShippingAddressRequest***](SWGCartShippingAddressRequest*.md)| The cart shipping address request object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeDiscountUsingDELETE**
```objc
-(NSURLSessionTask*) removeDiscountUsingDELETEWithId: (NSString*) _id
    code: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a coupon from the cart

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
NSString* code = @"code_example"; // The SKU code of the coupon to remove

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Removes a coupon from the cart
[apiInstance removeDiscountUsingDELETEWithId:_id
              code:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->removeDiscountUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **code** | **NSString***| The SKU code of the coupon to remove | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchCartsUsingGET**
```objc
-(NSURLSessionTask*) searchCartsUsingGETWithFilterOwnerId: (NSNumber*) filterOwnerId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceCartSummary_* output, NSError* error)) handler;
```

Get a list of carts

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterOwnerId = @56; // Filter by the id of the owner (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Get a list of carts
[apiInstance searchCartsUsingGETWithFilterOwnerId:filterOwnerId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCartSummary_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->searchCartsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterOwnerId** | **NSNumber***| Filter by the id of the owner | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceCartSummary_***](SWGPageResourceCartSummary_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setCartCurrencyUsingPUT**
```objc
-(NSURLSessionTask*) setCartCurrencyUsingPUTWithId: (NSString*) _id
    currencyCode: (NSString*) currencyCode
        completionHandler: (void (^)(NSError* error)) handler;
```

Sets the currency to use for the cart

May be disallowed by site settings.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
NSString* currencyCode = currencyCode_example; // The code of the currency (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Sets the currency to use for the cart
[apiInstance setCartCurrencyUsingPUTWithId:_id
              currencyCode:currencyCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->setCartCurrencyUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **currencyCode** | **NSString***| The code of the currency | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateItemUsingPUT**
```objc
-(NSURLSessionTask*) updateItemUsingPUTWithId: (NSString*) _id
    cartItemRequest: (SWGCartItemRequest*) cartItemRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Changes the quantity of an item already in the cart

A quantity of zero will remove the item from the cart altogether.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
SWGCartItemRequest* cartItemRequest = [[SWGCartItemRequest alloc] init]; // The cart item request object (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Changes the quantity of an item already in the cart
[apiInstance updateItemUsingPUTWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->updateItemUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartItemRequest** | [**SWGCartItemRequest***](SWGCartItemRequest*.md)| The cart item request object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

