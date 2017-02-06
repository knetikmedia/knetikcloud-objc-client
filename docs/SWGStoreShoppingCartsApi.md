# SWGStoreShoppingCartsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDiscountToCart**](SWGStoreShoppingCartsApi.md#adddiscounttocart) | **POST** /carts/{id}/discounts | Adds a discount coupon to the cart
[**addItemToCart**](SWGStoreShoppingCartsApi.md#additemtocart) | **POST** /carts/{id}/items | Add an item to the cart
[**createCart**](SWGStoreShoppingCartsApi.md#createcart) | **POST** /carts | Create a cart
[**getCart**](SWGStoreShoppingCartsApi.md#getcart) | **GET** /carts/{id} | Returns the cart with the given GUID
[**getCarts**](SWGStoreShoppingCartsApi.md#getcarts) | **GET** /carts | Get a list of carts
[**getCountries**](SWGStoreShoppingCartsApi.md#getcountries) | **GET** /carts/{id}/countries | Get the list of available shipping countries per vendor
[**getShippable**](SWGStoreShoppingCartsApi.md#getshippable) | **GET** /carts/{id}/shippable | Returns whether a cart requires shipping
[**removeDiscountFromCart**](SWGStoreShoppingCartsApi.md#removediscountfromcart) | **DELETE** /carts/{id}/discounts/{code} | Removes a discount coupon from the cart
[**setCartCurrency**](SWGStoreShoppingCartsApi.md#setcartcurrency) | **PUT** /carts/{id}/currency | Sets the currency to use for the cart
[**setCartOwner**](SWGStoreShoppingCartsApi.md#setcartowner) | **PUT** /carts/{id}/owner | Sets the owner of a cart if none is set already
[**updateItemInCart**](SWGStoreShoppingCartsApi.md#updateitemincart) | **PUT** /carts/{id}/items | Changes the quantity of an item already in the cart
[**updateShippingAddress**](SWGStoreShoppingCartsApi.md#updateshippingaddress) | **PUT** /carts/{id}/shipping-address | Modifies or sets the order shipping address


# **addDiscountToCart**
```objc
-(NSURLSessionTask*) addDiscountToCartWithId: (NSString*) _id
    skuRequest: (SWGSkuRequest*) skuRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a discount coupon to the cart

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
SWGSkuRequest* skuRequest = [[SWGSkuRequest alloc] init]; // The request of the sku (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Adds a discount coupon to the cart
[apiInstance addDiscountToCartWithId:_id
              skuRequest:skuRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->addDiscountToCart: %@", error);
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

# **addItemToCart**
```objc
-(NSURLSessionTask*) addItemToCartWithId: (NSString*) _id
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
[apiInstance addItemToCartWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->addItemToCart: %@", error);
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

# **createCart**
```objc
-(NSURLSessionTask*) createCartWithOwner: (NSNumber*) owner
    currencyCode: (NSString*) currencyCode
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Create a cart

You don't have to have a user to create a cart but the API requires authentication to checkout

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* owner = @56; // Set the owner of a cart. If not specified, defaults to the calling user's id. If specified and is not the calling user's id, SHOPPING_CARTS_ADMIN permission is required (optional)
NSString* currencyCode = @"currencyCode_example"; // Set the currency for the cart, by currency code. May be disallowed by site settings. (optional)

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Create a cart
[apiInstance createCartWithOwner:owner
              currencyCode:currencyCode
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->createCart: %@", error);
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

# **getCart**
```objc
-(NSURLSessionTask*) getCartWithId: (NSString*) _id
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
[apiInstance getCartWithId:_id
          completionHandler: ^(SWGCart* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getCart: %@", error);
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

# **getCarts**
```objc
-(NSURLSessionTask*) getCartsWithFilterOwnerId: (NSNumber*) filterOwnerId
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
[apiInstance getCartsWithFilterOwnerId:filterOwnerId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCartSummary_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getCarts: %@", error);
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

# **getCountries**
```objc
-(NSURLSessionTask*) getCountriesWithId: (NSString*) _id
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
[apiInstance getCountriesWithId:_id
          completionHandler: ^(SWGSampleCountriesResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getCountries: %@", error);
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

# **getShippable**
```objc
-(NSURLSessionTask*) getShippableWithId: (NSString*) _id
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
[apiInstance getShippableWithId:_id
          completionHandler: ^(SWGCartShippableResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->getShippable: %@", error);
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

# **removeDiscountFromCart**
```objc
-(NSURLSessionTask*) removeDiscountFromCartWithId: (NSString*) _id
    code: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a discount coupon from the cart

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
NSString* code = @"code_example"; // The SKU code of the coupon to remove

SWGStoreShoppingCartsApi*apiInstance = [[SWGStoreShoppingCartsApi alloc] init];

// Removes a discount coupon from the cart
[apiInstance removeDiscountFromCartWithId:_id
              code:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->removeDiscountFromCart: %@", error);
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

# **setCartCurrency**
```objc
-(NSURLSessionTask*) setCartCurrencyWithId: (NSString*) _id
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
[apiInstance setCartCurrencyWithId:_id
              currencyCode:currencyCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->setCartCurrency: %@", error);
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

# **setCartOwner**
```objc
-(NSURLSessionTask*) setCartOwnerWithId: (NSString*) _id
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
[apiInstance setCartOwnerWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->setCartOwner: %@", error);
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

# **updateItemInCart**
```objc
-(NSURLSessionTask*) updateItemInCartWithId: (NSString*) _id
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
[apiInstance updateItemInCartWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->updateItemInCart: %@", error);
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

# **updateShippingAddress**
```objc
-(NSURLSessionTask*) updateShippingAddressWithId: (NSString*) _id
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
[apiInstance updateShippingAddressWithId:_id
              cartShippingAddressRequest:cartShippingAddressRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreShoppingCartsApi->updateShippingAddress: %@", error);
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

