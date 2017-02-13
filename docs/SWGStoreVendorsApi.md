# SWGStoreVendorsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createVendor**](SWGStoreVendorsApi.md#createvendor) | **POST** /vendors | Create a vendor
[**deleteVendor**](SWGStoreVendorsApi.md#deletevendor) | **DELETE** /vendors/{id} | Delete a vendor
[**getVendor**](SWGStoreVendorsApi.md#getvendor) | **GET** /vendors/{id} | Get a single vendor
[**getVendors**](SWGStoreVendorsApi.md#getvendors) | **GET** /vendors | List and search vendors
[**updateVendor**](SWGStoreVendorsApi.md#updatevendor) | **PUT** /vendors/{id} | Update a vendor


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
        completionHandler: (void (^)(NSError* error)) handler;
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
          completionHandler: ^(NSError* error) {
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

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

