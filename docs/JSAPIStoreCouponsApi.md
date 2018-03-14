# JSAPIStoreCouponsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCouponItem**](JSAPIStoreCouponsApi.md#createcouponitem) | **POST** /store/coupons | Create a coupon item
[**createCouponTemplate**](JSAPIStoreCouponsApi.md#createcoupontemplate) | **POST** /store/coupons/templates | Create a coupon template
[**deleteCouponItem**](JSAPIStoreCouponsApi.md#deletecouponitem) | **DELETE** /store/coupons/{id} | Delete a coupon item
[**deleteCouponTemplate**](JSAPIStoreCouponsApi.md#deletecoupontemplate) | **DELETE** /store/coupons/templates/{id} | Delete a coupon template
[**getCouponItem**](JSAPIStoreCouponsApi.md#getcouponitem) | **GET** /store/coupons/{id} | Get a single coupon item
[**getCouponItemBySku**](JSAPIStoreCouponsApi.md#getcouponitembysku) | **GET** /store/coupons/skus/{sku} | Get a coupon by sku
[**getCouponTemplate**](JSAPIStoreCouponsApi.md#getcoupontemplate) | **GET** /store/coupons/templates/{id} | Get a single coupon template
[**getCouponTemplates**](JSAPIStoreCouponsApi.md#getcoupontemplates) | **GET** /store/coupons/templates | List and search coupon templates
[**updateCouponItem**](JSAPIStoreCouponsApi.md#updatecouponitem) | **PUT** /store/coupons/{id} | Update a coupon item
[**updateCouponTemplate**](JSAPIStoreCouponsApi.md#updatecoupontemplate) | **PUT** /store/coupons/templates/{id} | Update a coupon template


# **createCouponItem**
```objc
-(NSURLSessionTask*) createCouponItemWithCascade: (NSNumber*) cascade
    couponItem: (JSAPICouponItem*) couponItem
        completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;
```

Create a coupon item

SKUs have to be unique in the entire store. <br><br><b>Permissions Needed:</b> COUPONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPICouponItem* couponItem = [[JSAPICouponItem alloc] init]; // The coupon item object (optional)

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Create a coupon item
[apiInstance createCouponItemWithCascade:cascade
              couponItem:couponItem
          completionHandler: ^(JSAPICouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->createCouponItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **couponItem** | [**JSAPICouponItem***](JSAPICouponItem.md)| The coupon item object | [optional] 

### Return type

[**JSAPICouponItem***](JSAPICouponItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCouponTemplate**
```objc
-(NSURLSessionTask*) createCouponTemplateWithCouponTemplateResource: (JSAPIItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Create a coupon template

Coupon Templates define a type of coupon and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIItemTemplateResource* couponTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The new coupon template (optional)

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Create a coupon template
[apiInstance createCouponTemplateWithCouponTemplateResource:couponTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->createCouponTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **couponTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The new coupon template | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> COUPONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Delete a coupon item
[apiInstance deleteCouponItemWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->deleteCouponItem: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCouponTemplate**
```objc
-(NSURLSessionTask*) deleteCouponTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a coupon template

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

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Delete a coupon template
[apiInstance deleteCouponTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->deleteCouponTemplate: %@", error);
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

# **getCouponItem**
```objc
-(NSURLSessionTask*) getCouponItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;
```

Get a single coupon item

<b>Permissions Needed:</b> COUPONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Get a single coupon item
[apiInstance getCouponItemWithId:_id
          completionHandler: ^(JSAPICouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->getCouponItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the coupon | 

### Return type

[**JSAPICouponItem***](JSAPICouponItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCouponItemBySku**
```objc
-(NSURLSessionTask*) getCouponItemBySkuWithSku: (NSString*) sku
        completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;
```

Get a coupon by sku

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* sku = @"sku_example"; // A sku of the coupon

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Get a coupon by sku
[apiInstance getCouponItemBySkuWithSku:sku
          completionHandler: ^(JSAPICouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->getCouponItemBySku: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sku** | **NSString***| A sku of the coupon | 

### Return type

[**JSAPICouponItem***](JSAPICouponItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCouponTemplate**
```objc
-(NSURLSessionTask*) getCouponTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Get a single coupon template

Coupon Templates define a type of coupon and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN or COUPONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Get a single coupon template
[apiInstance getCouponTemplateWithId:_id
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->getCouponTemplate: %@", error);
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

# **getCouponTemplates**
```objc
-(NSURLSessionTask*) getCouponTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search coupon templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or COUPONS_ADMIN

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

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// List and search coupon templates
[apiInstance getCouponTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->getCouponTemplates: %@", error);
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

# **updateCouponItem**
```objc
-(NSURLSessionTask*) updateCouponItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    couponItem: (JSAPICouponItem*) couponItem
        completionHandler: (void (^)(JSAPICouponItem* output, NSError* error)) handler;
```

Update a coupon item

<b>Permissions Needed:</b> COUPONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the coupon
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPICouponItem* couponItem = [[JSAPICouponItem alloc] init]; // The coupon item object (optional)

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Update a coupon item
[apiInstance updateCouponItemWithId:_id
              cascade:cascade
              couponItem:couponItem
          completionHandler: ^(JSAPICouponItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->updateCouponItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the coupon | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **couponItem** | [**JSAPICouponItem***](JSAPICouponItem.md)| The coupon item object | [optional] 

### Return type

[**JSAPICouponItem***](JSAPICouponItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCouponTemplate**
```objc
-(NSURLSessionTask*) updateCouponTemplateWithId: (NSString*) _id
    couponTemplateResource: (JSAPIItemTemplateResource*) couponTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Update a coupon template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIItemTemplateResource* couponTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The coupon template resource object (optional)

JSAPIStoreCouponsApi*apiInstance = [[JSAPIStoreCouponsApi alloc] init];

// Update a coupon template
[apiInstance updateCouponTemplateWithId:_id
              couponTemplateResource:couponTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreCouponsApi->updateCouponTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **couponTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The coupon template resource object | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

