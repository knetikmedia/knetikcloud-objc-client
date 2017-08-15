# JSAPIStoreSalesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCatalogSale**](JSAPIStoreSalesApi.md#createcatalogsale) | **POST** /store/sales | Create a sale
[**deleteCatalogSale**](JSAPIStoreSalesApi.md#deletecatalogsale) | **DELETE** /store/sales/{id} | Delete a sale
[**getCatalogSale**](JSAPIStoreSalesApi.md#getcatalogsale) | **GET** /store/sales/{id} | Get a single sale
[**getCatalogSales**](JSAPIStoreSalesApi.md#getcatalogsales) | **GET** /store/sales | List and search sales
[**updateCatalogSale**](JSAPIStoreSalesApi.md#updatecatalogsale) | **PUT** /store/sales/{id} | Update a sale


# **createCatalogSale**
```objc
-(NSURLSessionTask*) createCatalogSaleWithCatalogSale: (JSAPICatalogSale*) catalogSale
        completionHandler: (void (^)(JSAPICatalogSale* output, NSError* error)) handler;
```

Create a sale

### Example 
```objc

JSAPICatalogSale* catalogSale = [[JSAPICatalogSale alloc] init]; // The catalog sale object (optional)

JSAPIStoreSalesApi*apiInstance = [[JSAPIStoreSalesApi alloc] init];

// Create a sale
[apiInstance createCatalogSaleWithCatalogSale:catalogSale
          completionHandler: ^(JSAPICatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSalesApi->createCatalogSale: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **catalogSale** | [**JSAPICatalogSale***](JSAPICatalogSale.md)| The catalog sale object | [optional] 

### Return type

[**JSAPICatalogSale***](JSAPICatalogSale.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCatalogSale**
```objc
-(NSURLSessionTask*) deleteCatalogSaleWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a sale

### Example 
```objc

NSNumber* _id = @56; // The id of the sale

JSAPIStoreSalesApi*apiInstance = [[JSAPIStoreSalesApi alloc] init];

// Delete a sale
[apiInstance deleteCatalogSaleWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSalesApi->deleteCatalogSale: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the sale | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCatalogSale**
```objc
-(NSURLSessionTask*) getCatalogSaleWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPICatalogSale* output, NSError* error)) handler;
```

Get a single sale

### Example 
```objc

NSNumber* _id = @56; // The id of the sale

JSAPIStoreSalesApi*apiInstance = [[JSAPIStoreSalesApi alloc] init];

// Get a single sale
[apiInstance getCatalogSaleWithId:_id
          completionHandler: ^(JSAPICatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSalesApi->getCatalogSale: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the sale | 

### Return type

[**JSAPICatalogSale***](JSAPICatalogSale.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCatalogSales**
```objc
-(NSURLSessionTask*) getCatalogSalesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceCatalogSale_* output, NSError* error)) handler;
```

List and search sales

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIStoreSalesApi*apiInstance = [[JSAPIStoreSalesApi alloc] init];

// List and search sales
[apiInstance getCatalogSalesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceCatalogSale_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSalesApi->getCatalogSales: %@", error);
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

[**JSAPIPageResourceCatalogSale_***](JSAPIPageResourceCatalogSale_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCatalogSale**
```objc
-(NSURLSessionTask*) updateCatalogSaleWithId: (NSNumber*) _id
    catalogSale: (JSAPICatalogSale*) catalogSale
        completionHandler: (void (^)(JSAPICatalogSale* output, NSError* error)) handler;
```

Update a sale

### Example 
```objc

NSNumber* _id = @56; // The id of the sale
JSAPICatalogSale* catalogSale = [[JSAPICatalogSale alloc] init]; // The catalog sale object (optional)

JSAPIStoreSalesApi*apiInstance = [[JSAPIStoreSalesApi alloc] init];

// Update a sale
[apiInstance updateCatalogSaleWithId:_id
              catalogSale:catalogSale
          completionHandler: ^(JSAPICatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSalesApi->updateCatalogSale: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the sale | 
 **catalogSale** | [**JSAPICatalogSale***](JSAPICatalogSale.md)| The catalog sale object | [optional] 

### Return type

[**JSAPICatalogSale***](JSAPICatalogSale.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

