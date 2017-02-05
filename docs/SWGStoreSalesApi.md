# SWGStoreSalesApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCatalogSaleUsingPOST**](SWGStoreSalesApi.md#createcatalogsaleusingpost) | **POST** /store/sales | Create a sale
[**deleteCatalogSaleUsingDELETE**](SWGStoreSalesApi.md#deletecatalogsaleusingdelete) | **DELETE** /store/sales/{id} | Delete a sale
[**getCatalogSaleUsingGET**](SWGStoreSalesApi.md#getcatalogsaleusingget) | **GET** /store/sales/{id} | Get a single sale
[**getCatalogSalesUsingGET**](SWGStoreSalesApi.md#getcatalogsalesusingget) | **GET** /store/sales | List and search sales
[**updateCatalogSaleUsingPUT**](SWGStoreSalesApi.md#updatecatalogsaleusingput) | **PUT** /store/sales/{id} | Update a sale


# **createCatalogSaleUsingPOST**
```objc
-(NSURLSessionTask*) createCatalogSaleUsingPOSTWithCatalogSale: (SWGCatalogSale*) catalogSale
        completionHandler: (void (^)(SWGCatalogSale* output, NSError* error)) handler;
```

Create a sale

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCatalogSale* catalogSale = [[SWGCatalogSale alloc] init]; // The catalog sale object (optional)

SWGStoreSalesApi*apiInstance = [[SWGStoreSalesApi alloc] init];

// Create a sale
[apiInstance createCatalogSaleUsingPOSTWithCatalogSale:catalogSale
          completionHandler: ^(SWGCatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->createCatalogSaleUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **catalogSale** | [**SWGCatalogSale***](SWGCatalogSale*.md)| The catalog sale object | [optional] 

### Return type

[**SWGCatalogSale***](SWGCatalogSale.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCatalogSaleUsingDELETE**
```objc
-(NSURLSessionTask*) deleteCatalogSaleUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a sale

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the sale

SWGStoreSalesApi*apiInstance = [[SWGStoreSalesApi alloc] init];

// Delete a sale
[apiInstance deleteCatalogSaleUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->deleteCatalogSaleUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCatalogSaleUsingGET**
```objc
-(NSURLSessionTask*) getCatalogSaleUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGCatalogSale* output, NSError* error)) handler;
```

Get a single sale

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the sale

SWGStoreSalesApi*apiInstance = [[SWGStoreSalesApi alloc] init];

// Get a single sale
[apiInstance getCatalogSaleUsingGETWithId:_id
          completionHandler: ^(SWGCatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->getCatalogSaleUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the sale | 

### Return type

[**SWGCatalogSale***](SWGCatalogSale.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCatalogSalesUsingGET**
```objc
-(NSURLSessionTask*) getCatalogSalesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceCatalogSale_* output, NSError* error)) handler;
```

List and search sales

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreSalesApi*apiInstance = [[SWGStoreSalesApi alloc] init];

// List and search sales
[apiInstance getCatalogSalesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCatalogSale_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->getCatalogSalesUsingGET: %@", error);
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

[**SWGPageResourceCatalogSale_***](SWGPageResourceCatalogSale_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCatalogSaleUsingPUT**
```objc
-(NSURLSessionTask*) updateCatalogSaleUsingPUTWithId: (NSNumber*) _id
    catalogSale: (SWGCatalogSale*) catalogSale
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a sale

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the sale
SWGCatalogSale* catalogSale = [[SWGCatalogSale alloc] init]; // The catalog sale object (optional)

SWGStoreSalesApi*apiInstance = [[SWGStoreSalesApi alloc] init];

// Update a sale
[apiInstance updateCatalogSaleUsingPUTWithId:_id
              catalogSale:catalogSale
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->updateCatalogSaleUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the sale | 
 **catalogSale** | [**SWGCatalogSale***](SWGCatalogSale*.md)| The catalog sale object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

