# SWGStoreCouponsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCouponItem**](SWGStoreCouponsApi.md#createcouponitem) | **POST** /store/coupons | Create a coupon item
[**createCouponTemplate**](SWGStoreCouponsApi.md#createcoupontemplate) | **POST** /store/coupons/templates | Create a coupon template
[**deleteCouponItem**](SWGStoreCouponsApi.md#deletecouponitem) | **DELETE** /store/coupons/{id} | Delete a coupon item
[**deleteCouponTemplate**](SWGStoreCouponsApi.md#deletecoupontemplate) | **DELETE** /store/coupons/templates/{id} | Delete a coupon template
[**getCouponItem**](SWGStoreCouponsApi.md#getcouponitem) | **GET** /store/coupons/{id} | Get a single coupon item
[**getCouponTemplate**](SWGStoreCouponsApi.md#getcoupontemplate) | **GET** /store/coupons/templates/{id} | Get a single coupon template
[**getCouponTemplates**](SWGStoreCouponsApi.md#getcoupontemplates) | **GET** /store/coupons/templates | List and search coupon templates
[**updateCouponItem**](SWGStoreCouponsApi.md#updatecouponitem) | **PUT** /store/coupons/{id} | Update a coupon item
[**updateCouponTemplate**](SWGStoreCouponsApi.md#updatecoupontemplate) | **PUT** /store/coupons/templates/{id} | Update a coupon template


# **createCouponItem**
```objc
-(NSURLSessionTask*) createCouponItemWithCouponItem: (SWGCouponItem*) couponItem
        completionHandler: (void (^)(SWGCouponItem* output, NSError* error)) handler;
```

Create a coupon item

SKUs have to be unique in the entire store.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCouponItem* couponItem = [[SWGCouponItem alloc] init]; // The coupon item object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Create a coupon item
[apiInstance createCouponItemWithCouponItem:couponItem
          completionHandler: ^(SWGCouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->createCouponItem: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCouponTemplate**
```objc
-(NSURLSessionTask*) createCouponTemplateWithCouponTemplateResource: (SWGItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a coupon template

Coupon Templates define a type of coupon and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* couponTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new coupon template (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Create a coupon template
[apiInstance createCouponTemplateWithCouponTemplateResource:couponTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->createCouponTemplate: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCouponItem**
```objc
-(NSURLSessionTask*) deleteCouponItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a coupon item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Delete a coupon item
[apiInstance deleteCouponItemWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->deleteCouponItem: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCouponTemplate**
```objc
-(NSURLSessionTask*) deleteCouponTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a coupon template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Delete a coupon template
[apiInstance deleteCouponTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->deleteCouponTemplate: %@", error);
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

# **getCouponItem**
```objc
-(NSURLSessionTask*) getCouponItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGCouponItem* output, NSError* error)) handler;
```

Get a single coupon item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Get a single coupon item
[apiInstance getCouponItemWithId:_id
          completionHandler: ^(SWGCouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponItem: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCouponTemplate**
```objc
-(NSURLSessionTask*) getCouponTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single coupon template

Coupon Templates define a type of coupon and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Get a single coupon template
[apiInstance getCouponTemplateWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponTemplate: %@", error);
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

# **getCouponTemplates**
```objc
-(NSURLSessionTask*) getCouponTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search coupon templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// List and search coupon templates
[apiInstance getCouponTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->getCouponTemplates: %@", error);
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

# **updateCouponItem**
```objc
-(NSURLSessionTask*) updateCouponItemWithId: (NSNumber*) _id
    couponItem: (SWGCouponItem*) couponItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a coupon item

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon
SWGCouponItem* couponItem = [[SWGCouponItem alloc] init]; // The coupon item object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Update a coupon item
[apiInstance updateCouponItemWithId:_id
              couponItem:couponItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->updateCouponItem: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCouponTemplate**
```objc
-(NSURLSessionTask*) updateCouponTemplateWithId: (NSString*) _id
    couponTemplateResource: (SWGItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a coupon template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* couponTemplateResource = [[SWGItemTemplateResource alloc] init]; // The coupon template resource object (optional)

SWGStoreCouponsApi*apiInstance = [[SWGStoreCouponsApi alloc] init];

// Update a coupon template
[apiInstance updateCouponTemplateWithId:_id
              couponTemplateResource:couponTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreCouponsApi->updateCouponTemplate: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
