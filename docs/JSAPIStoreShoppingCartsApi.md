# JSAPIStoreShoppingCartsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addCustomDiscount**](JSAPIStoreShoppingCartsApi.md#addcustomdiscount) | **POST** /carts/{id}/custom-discounts | Adds a custom discount to the cart
[**addDiscountToCart**](JSAPIStoreShoppingCartsApi.md#adddiscounttocart) | **POST** /carts/{id}/discounts | Adds a discount coupon to the cart
[**addItemToCart**](JSAPIStoreShoppingCartsApi.md#additemtocart) | **POST** /carts/{id}/items | Add an item to the cart
[**createCart**](JSAPIStoreShoppingCartsApi.md#createcart) | **POST** /carts | Create a cart
[**getCart**](JSAPIStoreShoppingCartsApi.md#getcart) | **GET** /carts/{id} | Returns the cart with the given GUID
[**getCarts**](JSAPIStoreShoppingCartsApi.md#getcarts) | **GET** /carts | Get a list of carts
[**getShippable**](JSAPIStoreShoppingCartsApi.md#getshippable) | **GET** /carts/{id}/shippable | Returns whether a cart requires shipping
[**getShippingCountries**](JSAPIStoreShoppingCartsApi.md#getshippingcountries) | **GET** /carts/{id}/countries | Get the list of available shipping countries per vendor
[**removeDiscountFromCart**](JSAPIStoreShoppingCartsApi.md#removediscountfromcart) | **DELETE** /carts/{id}/discounts/{code} | Removes a discount coupon from the cart
[**setCartCurrency**](JSAPIStoreShoppingCartsApi.md#setcartcurrency) | **PUT** /carts/{id}/currency | Sets the currency to use for the cart
[**setCartOwner**](JSAPIStoreShoppingCartsApi.md#setcartowner) | **PUT** /carts/{id}/owner | Sets the owner of a cart if none is set already
[**updateItemInCart**](JSAPIStoreShoppingCartsApi.md#updateitemincart) | **PUT** /carts/{id}/items | Changes the quantity of an item already in the cart
[**updateShippingAddress**](JSAPIStoreShoppingCartsApi.md#updateshippingaddress) | **PUT** /carts/{id}/shipping-address | Modifies or sets the order shipping address


# **addCustomDiscount**
```objc
-(NSURLSessionTask*) addCustomDiscountWithId: (NSString*) _id
    customDiscount: (JSAPICouponDefinition*) customDiscount
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a custom discount to the cart

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPICouponDefinition* customDiscount = [[JSAPICouponDefinition alloc] init]; // The details of the discount to add (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Adds a custom discount to the cart
[apiInstance addCustomDiscountWithId:_id
              customDiscount:customDiscount
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->addCustomDiscount: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **customDiscount** | [**JSAPICouponDefinition***](JSAPICouponDefinition.md)| The details of the discount to add | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDiscountToCart**
```objc
-(NSURLSessionTask*) addDiscountToCartWithId: (NSString*) _id
    skuRequest: (JSAPISkuRequest*) skuRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a discount coupon to the cart

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPISkuRequest* skuRequest = [[JSAPISkuRequest alloc] init]; // The request of the sku (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Adds a discount coupon to the cart
[apiInstance addDiscountToCartWithId:_id
              skuRequest:skuRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->addDiscountToCart: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **skuRequest** | [**JSAPISkuRequest***](JSAPISkuRequest.md)| The request of the sku | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addItemToCart**
```objc
-(NSURLSessionTask*) addItemToCartWithId: (NSString*) _id
    cartItemRequest: (JSAPICartItemRequest*) cartItemRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Add an item to the cart

Currently, carts cannot contain virtual and real currency items at the same time. Furthermore, the API only support a single virtual item at the moment. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPICartItemRequest* cartItemRequest = [[JSAPICartItemRequest alloc] init]; // The cart item request object (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Add an item to the cart
[apiInstance addItemToCartWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->addItemToCart: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartItemRequest** | [**JSAPICartItemRequest***](JSAPICartItemRequest.md)| The cart item request object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

You don't have to have a user to create a cart but the API requires authentication to checkout. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* owner = @56; // Set the owner of a cart. If not specified, defaults to the calling user's id. If specified and is not the calling user's id, SHOPPING_CARTS_ADMIN permission is required (optional)
NSString* currencyCode = @"currencyCode_example"; // Set the currency for the cart, by currency code. May be disallowed by site settings. (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Create a cart
[apiInstance createCartWithOwner:owner
              currencyCode:currencyCode
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->createCart: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCart**
```objc
-(NSURLSessionTask*) getCartWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPICart* output, NSError* error)) handler;
```

Returns the cart with the given GUID

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Returns the cart with the given GUID
[apiInstance getCartWithId:_id
          completionHandler: ^(JSAPICart* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->getCart: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**JSAPICart***](JSAPICart.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCarts**
```objc
-(NSURLSessionTask*) getCartsWithFilterOwnerId: (NSNumber*) filterOwnerId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceCartSummary_* output, NSError* error)) handler;
```

Get a list of carts

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterOwnerId = @56; // Filter by the id of the owner (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Get a list of carts
[apiInstance getCartsWithFilterOwnerId:filterOwnerId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceCartSummary_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->getCarts: %@", error);
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

[**JSAPIPageResourceCartSummary_***](JSAPIPageResourceCartSummary_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippable**
```objc
-(NSURLSessionTask*) getShippableWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPICartShippableResponse* output, NSError* error)) handler;
```

Returns whether a cart requires shipping

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Returns whether a cart requires shipping
[apiInstance getShippableWithId:_id
          completionHandler: ^(JSAPICartShippableResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->getShippable: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**JSAPICartShippableResponse***](JSAPICartShippableResponse.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getShippingCountries**
```objc
-(NSURLSessionTask*) getShippingCountriesWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPISampleCountriesResponse* output, NSError* error)) handler;
```

Get the list of available shipping countries per vendor

Since a cart can have multiple vendors with different shipping options, the countries are broken down by vendors. Please see notes about the response object as the fields are variable. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Get the list of available shipping countries per vendor
[apiInstance getShippingCountriesWithId:_id
          completionHandler: ^(JSAPISampleCountriesResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->getShippingCountries: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 

### Return type

[**JSAPISampleCountriesResponse***](JSAPISampleCountriesResponse.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeDiscountFromCart**
```objc
-(NSURLSessionTask*) removeDiscountFromCartWithId: (NSString*) _id
    code: (NSString*) code
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a discount coupon from the cart

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
NSString* code = @"code_example"; // The SKU code of the coupon to remove

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Removes a discount coupon from the cart
[apiInstance removeDiscountFromCartWithId:_id
              code:code
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->removeDiscountFromCart: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setCartCurrency**
```objc
-(NSURLSessionTask*) setCartCurrencyWithId: (NSString*) _id
    currencyCode: (JSAPIStringWrapper*) currencyCode
        completionHandler: (void (^)(NSError* error)) handler;
```

Sets the currency to use for the cart

May be disallowed by site settings. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPIStringWrapper* currencyCode = [[JSAPIStringWrapper alloc] init]; // The code of the currency (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Sets the currency to use for the cart
[apiInstance setCartCurrencyWithId:_id
              currencyCode:currencyCode
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->setCartCurrency: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **currencyCode** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The code of the currency | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setCartOwner**
```objc
-(NSURLSessionTask*) setCartOwnerWithId: (NSString*) _id
    userId: (JSAPIIntWrapper*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Sets the owner of a cart if none is set already

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPIIntWrapper* userId = [[JSAPIIntWrapper alloc] init]; // The id of the user (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Sets the owner of a cart if none is set already
[apiInstance setCartOwnerWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->setCartOwner: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **userId** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The id of the user | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateItemInCart**
```objc
-(NSURLSessionTask*) updateItemInCartWithId: (NSString*) _id
    cartItemRequest: (JSAPICartItemRequest*) cartItemRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Changes the quantity of an item already in the cart

A quantity of zero will remove the item from the cart altogether. <br><br><b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPICartItemRequest* cartItemRequest = [[JSAPICartItemRequest alloc] init]; // The cart item request object (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Changes the quantity of an item already in the cart
[apiInstance updateItemInCartWithId:_id
              cartItemRequest:cartItemRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->updateItemInCart: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartItemRequest** | [**JSAPICartItemRequest***](JSAPICartItemRequest.md)| The cart item request object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateShippingAddress**
```objc
-(NSURLSessionTask*) updateShippingAddressWithId: (NSString*) _id
    cartShippingAddressRequest: (JSAPICartShippingAddressRequest*) cartShippingAddressRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies or sets the order shipping address

<b>Permissions Needed:</b> SHOPPING_CARTS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the cart
JSAPICartShippingAddressRequest* cartShippingAddressRequest = [[JSAPICartShippingAddressRequest alloc] init]; // The cart shipping address request object (optional)

JSAPIStoreShoppingCartsApi*apiInstance = [[JSAPIStoreShoppingCartsApi alloc] init];

// Modifies or sets the order shipping address
[apiInstance updateShippingAddressWithId:_id
              cartShippingAddressRequest:cartShippingAddressRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreShoppingCartsApi->updateShippingAddress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the cart | 
 **cartShippingAddressRequest** | [**JSAPICartShippingAddressRequest***](JSAPICartShippingAddressRequest.md)| The cart shipping address request object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

