# SWGStoreCouponsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCouponItemUsingPOST**](SWGStoreCouponsApi.md#createcouponitemusingpost) | **POST** /store/coupons | Create a coupon item
[**createCouponTemplateUsingPOST**](SWGStoreCouponsApi.md#createcoupontemplateusingpost) | **POST** /store/coupons/templates | Create a coupon template
[**deleteCouponItemUsingDELETE**](SWGStoreCouponsApi.md#deletecouponitemusingdelete) | **DELETE** /store/coupons/{id} | Delete a coupon item
[**deleteCouponTemplateUsingDELETE**](SWGStoreCouponsApi.md#deletecoupontemplateusingdelete) | **DELETE** /store/coupons/templates/{id} | Delete a coupon template
[**getCouponItemUsingGET**](SWGStoreCouponsApi.md#getcouponitemusingget) | **GET** /store/coupons/{id} | Get a single coupon item
[**getCouponTemplateUsingGET**](SWGStoreCouponsApi.md#getcoupontemplateusingget) | **GET** /store/coupons/templates/{id} | Get a single coupon template
[**getCouponTemplatesUsingGET**](SWGStoreCouponsApi.md#getcoupontemplatesusingget) | **GET** /store/coupons/templates | List and search coupon templates
[**updateCouponItemUsingPUT**](SWGStoreCouponsApi.md#updatecouponitemusingput) | **PUT** /store/coupons/{id} | Update a coupon item
[**updateCouponTemplateUsingPUT**](SWGStoreCouponsApi.md#updatecoupontemplateusingput) | **PUT** /store/coupons/templates/{id} | Update a coupon template


# **createCouponItemUsingPOST**
```objc
-(NSNumber*) createCouponItemUsingPOSTWithCouponItem: (SWGCouponItem*) couponItem
        completionHandler: (void (^)(SWGCouponItem* output, NSError* error)) handler;
```

Create a coupon item

SKUs have to be unique in the entire store.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCouponItem* couponItem = [[SWGCouponItem alloc] init]; // The coupon item object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Create a coupon item
[apiInstance createCouponItemUsingPOSTWithCouponItem:couponItem
          completionHandler: ^(SWGCouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->createCouponItemUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **couponItem** | [**SWGCouponItem***](SWGCouponItem*.md)| The coupon item object | [optional] 

### Return type

[**SWGCouponItem***](SWGCouponItem.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCouponTemplateUsingPOST**
```objc
-(NSNumber*) createCouponTemplateUsingPOSTWithCouponTemplateResource: (SWGItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a coupon template

Coupon Templates define a type of coupon and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* couponTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new coupon template (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Create a coupon template
[apiInstance createCouponTemplateUsingPOSTWithCouponTemplateResource:couponTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->createCouponTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **couponTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The new coupon template | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCouponItemUsingDELETE**
```objc
-(NSNumber*) deleteCouponItemUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a coupon item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Delete a coupon item
[apiInstance deleteCouponItemUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->deleteCouponItemUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the coupon | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCouponTemplateUsingDELETE**
```objc
-(NSNumber*) deleteCouponTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a coupon template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Delete a coupon template
[apiInstance deleteCouponTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->deleteCouponTemplateUsingDELETE: %@", error);
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

# **getCouponItemUsingGET**
```objc
-(NSNumber*) getCouponItemUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGCouponItem* output, NSError* error)) handler;
```

Get a single coupon item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Get a single coupon item
[apiInstance getCouponItemUsingGETWithId:_id
          completionHandler: ^(SWGCouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponItemUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the coupon | 

### Return type

[**SWGCouponItem***](SWGCouponItem.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCouponTemplateUsingGET**
```objc
-(NSNumber*) getCouponTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single coupon template

Coupon Templates define a type of coupon and the properties they have.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Get a single coupon template
[apiInstance getCouponTemplateUsingGETWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponTemplateUsingGET: %@", error);
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

# **getCouponTemplatesUsingGET**
```objc
-(NSNumber*) getCouponTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search coupon templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// List and search coupon templates
[apiInstance getCouponTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponTemplatesUsingGET: %@", error);
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

# **updateCouponItemUsingPUT**
```objc
-(NSNumber*) updateCouponItemUsingPUTWithId: (NSNumber*) _id
    couponItem: (SWGCouponItem*) couponItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a coupon item

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon
SWGCouponItem* couponItem = [[SWGCouponItem alloc] init]; // The coupon item object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Update a coupon item
[apiInstance updateCouponItemUsingPUTWithId:_id
              couponItem:couponItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->updateCouponItemUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the coupon | 
 **couponItem** | [**SWGCouponItem***](SWGCouponItem*.md)| The coupon item object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCouponTemplateUsingPUT**
```objc
-(NSNumber*) updateCouponTemplateUsingPUTWithId: (NSString*) _id
    couponTemplateResource: (SWGItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a coupon template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* couponTemplateResource = [[SWGItemTemplateResource alloc] init]; // The coupon template resource object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Update a coupon template
[apiInstance updateCouponTemplateUsingPUTWithId:_id
              couponTemplateResource:couponTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->updateCouponTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **couponTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The coupon template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

