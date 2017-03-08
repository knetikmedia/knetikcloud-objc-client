# SWGStoreVendorsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createVendor**](SWGStoreVendorsApi.md#createvendor) | **POST** /vendors | Create a vendor
[**createVendorTemplate**](SWGStoreVendorsApi.md#createvendortemplate) | **POST** /vendors/templates | Create a vendor template
[**deleteVendor**](SWGStoreVendorsApi.md#deletevendor) | **DELETE** /vendors/{id} | Delete a vendor
[**deleteVendorTemplate**](SWGStoreVendorsApi.md#deletevendortemplate) | **DELETE** /vendors/templates/{id} | Delete a vendor template
[**getVendor**](SWGStoreVendorsApi.md#getvendor) | **GET** /vendors/{id} | Get a single vendor
[**getVendorTemplate**](SWGStoreVendorsApi.md#getvendortemplate) | **GET** /vendors/templates/{id} | Get a single vendor template
[**getVendorTemplates**](SWGStoreVendorsApi.md#getvendortemplates) | **GET** /vendors/templates | List and search vendor templates
[**getVendors**](SWGStoreVendorsApi.md#getvendors) | **GET** /vendors | List and search vendors
[**updateVendor**](SWGStoreVendorsApi.md#updatevendor) | **PUT** /vendors/{id} | Update a vendor
[**updateVendorTemplate**](SWGStoreVendorsApi.md#updatevendortemplate) | **PUT** /vendors/templates/{id} | Update a vendor template


# **createVendor**
```objc
-(NSURLSessionTask*) createVendorWithVendor: (SWGVendorResource*) vendor
        completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;
```

Create a vendor

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGVendorResource* vendor = [[SWGVendorResource alloc] init]; // The vendor (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Create a vendor
[apiInstance createVendorWithVendor:vendor
          completionHandler: ^(SWGVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->createVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vendor** | [**SWGVendorResource***](SWGVendorResource*.md)| The vendor | [optional] 

### Return type

[**SWGVendorResource***](SWGVendorResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVendorTemplate**
```objc
-(NSURLSessionTask*) createVendorTemplateWithVendorTemplateResource: (SWGItemTemplateResource*) vendorTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Create a vendor template

Vendor Templates define a type of vendor and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGItemTemplateResource* vendorTemplateResource = [[SWGItemTemplateResource alloc] init]; // The new vendor template (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Create a vendor template
[apiInstance createVendorTemplateWithVendorTemplateResource:vendorTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->createVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vendorTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The new vendor template | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVendor**
```objc
-(NSURLSessionTask*) deleteVendorWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a vendor

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Delete a vendor
[apiInstance deleteVendorWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->deleteVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVendorTemplate**
```objc
-(NSURLSessionTask*) deleteVendorTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a vendor template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Delete a vendor template
[apiInstance deleteVendorTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->deleteVendorTemplate: %@", error);
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

# **getVendor**
```objc
-(NSURLSessionTask*) getVendorWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;
```

Get a single vendor

### Example 
```objc

NSNumber* _id = @56; // The id of the vendor

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Get a single vendor
[apiInstance getVendorWithId:_id
          completionHandler: ^(SWGVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 

### Return type

[**SWGVendorResource***](SWGVendorResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendorTemplate**
```objc
-(NSURLSessionTask*) getVendorTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Get a single vendor template

Vendor Templates define a type of vendor and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Get a single vendor template
[apiInstance getVendorTemplateWithId:_id
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendorTemplate: %@", error);
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

# **getVendorTemplates**
```objc
-(NSURLSessionTask*) getVendorTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search vendor templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// List and search vendor templates
[apiInstance getVendorTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendorTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageResourceItemTemplateResource_***](SWGPageResourceItemTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendors**
```objc
-(NSURLSessionTask*) getVendorsWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceVendorResource_* output, NSError* error)) handler;
```

List and search vendors

### Example 
```objc

NSString* filterName = @"filterName_example"; // Filters vendors by name starting with the text provided in the filter (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// List and search vendors
[apiInstance getVendorsWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceVendorResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendors: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filters vendors by name starting with the text provided in the filter | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceVendorResource_***](SWGPageResourceVendorResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVendor**
```objc
-(NSURLSessionTask*) updateVendorWithId: (NSNumber*) _id
    vendor: (SWGVendorResource*) vendor
        completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;
```

Update a vendor

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor
SWGVendorResource* vendor = [[SWGVendorResource alloc] init]; // The vendor (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Update a vendor
[apiInstance updateVendorWithId:_id
              vendor:vendor
          completionHandler: ^(SWGVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->updateVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 
 **vendor** | [**SWGVendorResource***](SWGVendorResource*.md)| The vendor | [optional] 

### Return type

[**SWGVendorResource***](SWGVendorResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVendorTemplate**
```objc
-(NSURLSessionTask*) updateVendorTemplateWithId: (NSString*) _id
    vendorTemplateResource: (SWGItemTemplateResource*) vendorTemplateResource
        completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;
```

Update a vendor template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGItemTemplateResource* vendorTemplateResource = [[SWGItemTemplateResource alloc] init]; // The vendor template resource object (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Update a vendor template
[apiInstance updateVendorTemplateWithId:_id
              vendorTemplateResource:vendorTemplateResource
          completionHandler: ^(SWGItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->updateVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **vendorTemplateResource** | [**SWGItemTemplateResource***](SWGItemTemplateResource*.md)| The vendor template resource object | [optional] 

### Return type

[**SWGItemTemplateResource***](SWGItemTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

