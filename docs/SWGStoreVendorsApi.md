# SWGStoreVendorsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createVendorUsingPOST**](SWGStoreVendorsApi.md#createvendorusingpost) | **POST** /vendors | Create a vendor
[**deleteVendorUsingDELETE**](SWGStoreVendorsApi.md#deletevendorusingdelete) | **DELETE** /vendors/{id} | Delete a vendor
[**getVendorUsingGET**](SWGStoreVendorsApi.md#getvendorusingget) | **GET** /vendors/{id} | Get a single vendor
[**getVendorsUsingGET**](SWGStoreVendorsApi.md#getvendorsusingget) | **GET** /vendors | List and search vendors
[**updateVendorUsingPUT**](SWGStoreVendorsApi.md#updatevendorusingput) | **PUT** /vendors/{id} | Update a vendor


# **createVendorUsingPOST**
```objc
-(NSNumber*) createVendorUsingPOSTWithVendor: (SWGVendorResource*) vendor
        completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;
```

Create a vendor

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGVendorResource* vendor = [[SWGVendorResource alloc] init]; // The vendor (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Create a vendor
[apiInstance createVendorUsingPOSTWithVendor:vendor
          completionHandler: ^(SWGVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->createVendorUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVendorUsingDELETE**
```objc
-(NSNumber*) deleteVendorUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a vendor

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Delete a vendor
[apiInstance deleteVendorUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->deleteVendorUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendorUsingGET**
```objc
-(NSNumber*) getVendorUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGVendorResource* output, NSError* error)) handler;
```

Get a single vendor

### Example 
```objc

NSNumber* _id = @56; // The id of the vendor

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Get a single vendor
[apiInstance getVendorUsingGETWithId:_id
          completionHandler: ^(SWGVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendorUsingGET: %@", error);
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

# **getVendorsUsingGET**
```objc
-(NSNumber*) getVendorsUsingGETWithFilterName: (NSString*) filterName
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
[apiInstance getVendorsUsingGETWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceVendorResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->getVendorsUsingGET: %@", error);
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

# **updateVendorUsingPUT**
```objc
-(NSNumber*) updateVendorUsingPUTWithId: (NSNumber*) _id
    vendor: (SWGVendorResource*) vendor
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a vendor

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor
SWGVendorResource* vendor = [[SWGVendorResource alloc] init]; // The vendor (optional)

SWGStoreVendorsApi*apiInstance = [[SWGStoreVendorsApi alloc] init];

// Update a vendor
[apiInstance updateVendorUsingPUTWithId:_id
              vendor:vendor
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreVendorsApi->updateVendorUsingPUT: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

