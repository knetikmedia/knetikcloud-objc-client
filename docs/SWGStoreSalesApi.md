# SWGStoreSalesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCatalogSale**](SWGStoreSalesApi.md#createcatalogsale) | **POST** /store/sales | Create a sale
[**deleteCatalogSale**](SWGStoreSalesApi.md#deletecatalogsale) | **DELETE** /store/sales/{id} | Delete a sale
[**getCatalogSale**](SWGStoreSalesApi.md#getcatalogsale) | **GET** /store/sales/{id} | Get a single sale
[**getCatalogSales**](SWGStoreSalesApi.md#getcatalogsales) | **GET** /store/sales | List and search sales
[**updateCatalogSale**](SWGStoreSalesApi.md#updatecatalogsale) | **PUT** /store/sales/{id} | Update a sale


# **createCatalogSale**
```objc
-(NSURLSessionTask*) createCatalogSaleWithCatalogSale: (SWGCatalogSale*) catalogSale
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
[apiInstance createCatalogSaleWithCatalogSale:catalogSale
          completionHandler: ^(SWGCatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->createCatalogSale: %@", error);
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

# **deleteCatalogSale**
```objc
-(NSURLSessionTask*) deleteCatalogSaleWithId: (NSNumber*) _id
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
[apiInstance deleteCatalogSaleWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->deleteCatalogSale: %@", error);
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

# **getCatalogSale**
```objc
-(NSURLSessionTask*) getCatalogSaleWithId: (NSNumber*) _id
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
[apiInstance getCatalogSaleWithId:_id
          completionHandler: ^(SWGCatalogSale* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->getCatalogSale: %@", error);
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

# **getCatalogSales**
```objc
-(NSURLSessionTask*) getCatalogSalesWithSize: (NSNumber*) size
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
[apiInstance getCatalogSalesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceCatalogSale_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->getCatalogSales: %@", error);
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

# **updateCatalogSale**
```objc
-(NSURLSessionTask*) updateCatalogSaleWithId: (NSNumber*) _id
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
[apiInstance updateCatalogSaleWithId:_id
              catalogSale:catalogSale
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSalesApi->updateCatalogSale: %@", error);
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
