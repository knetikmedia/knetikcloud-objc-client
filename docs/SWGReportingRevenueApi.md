# SWGReportingRevenueApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executiveRevenueCountrySalesUsingGET**](SWGReportingRevenueApi.md#executiverevenuecountrysalesusingget) | **GET** /reporting/revenue/countries/{currency_code} | Get revenue info by country
[**executiveRevenueItemSalesUsingGET**](SWGReportingRevenueApi.md#executiverevenueitemsalesusingget) | **GET** /reporting/revenue/item-sales/{currency_code} | Get item revenue info
[**executiveRevenueProductSalesUsingGET**](SWGReportingRevenueApi.md#executiverevenueproductsalesusingget) | **GET** /reporting/revenue/products/{currency_code} | Get revenue info by item
[**executiveRevenueRefundsUsingGET**](SWGReportingRevenueApi.md#executiverevenuerefundsusingget) | **GET** /reporting/revenue/refunds/{currency_code} | Get refund revenue info
[**executiveRevenueSubscriptionSalesUsingGET**](SWGReportingRevenueApi.md#executiverevenuesubscriptionsalesusingget) | **GET** /reporting/revenue/subscription-sales/{currency_code} | Get subscription revenue info


# **executiveRevenueCountrySalesUsingGET**
```objc
-(NSNumber*) executiveRevenueCountrySalesUsingGETWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageRevenueCountryReportResource_* output, NSError* error)) handler;
```

Get revenue info by country

Get basic info about revenue from sales of all types, summed up within a time range and split out by country. Sorted for largest revenue at the top

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingRevenueApi*apiInstance = [[SWGReportingRevenueApi alloc] init];

// Get revenue info by country
[apiInstance executiveRevenueCountrySalesUsingGETWithCurrencyCode:currencyCode
              startDate:startDate
              endDate:endDate
              size:size
              page:page
          completionHandler: ^(SWGPageRevenueCountryReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingRevenueApi->executiveRevenueCountrySalesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get sales data for | 
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageRevenueCountryReportResource_***](SWGPageRevenueCountryReportResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **executiveRevenueItemSalesUsingGET**
```objc
-(NSNumber*) executiveRevenueItemSalesUsingGETWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;
```

Get item revenue info

Get basic info about revenue from sales of items and bundles (not subscriptions, shipping, etc), summed up within a time range

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)

SWGReportingRevenueApi*apiInstance = [[SWGReportingRevenueApi alloc] init];

// Get item revenue info
[apiInstance executiveRevenueItemSalesUsingGETWithCurrencyCode:currencyCode
              startDate:startDate
              endDate:endDate
          completionHandler: ^(SWGRevenueReportResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingRevenueApi->executiveRevenueItemSalesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get sales data for | 
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 

### Return type

[**SWGRevenueReportResource***](SWGRevenueReportResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **executiveRevenueProductSalesUsingGET**
```objc
-(NSNumber*) executiveRevenueProductSalesUsingGETWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageRevenueProductReportResource_* output, NSError* error)) handler;
```

Get revenue info by item

Get basic info about revenue from sales of all types, summed up within a time range and split out by specific item. Sorted for largest revenue at the top

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingRevenueApi*apiInstance = [[SWGReportingRevenueApi alloc] init];

// Get revenue info by item
[apiInstance executiveRevenueProductSalesUsingGETWithCurrencyCode:currencyCode
              startDate:startDate
              endDate:endDate
              size:size
              page:page
          completionHandler: ^(SWGPageRevenueProductReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingRevenueApi->executiveRevenueProductSalesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get sales data for | 
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageRevenueProductReportResource_***](SWGPageRevenueProductReportResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **executiveRevenueRefundsUsingGET**
```objc
-(NSNumber*) executiveRevenueRefundsUsingGETWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;
```

Get refund revenue info

Get basic info about revenue loss from refunds (for all item types), summed up within a time range.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get refund data for
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)

SWGReportingRevenueApi*apiInstance = [[SWGReportingRevenueApi alloc] init];

// Get refund revenue info
[apiInstance executiveRevenueRefundsUsingGETWithCurrencyCode:currencyCode
              startDate:startDate
              endDate:endDate
          completionHandler: ^(SWGRevenueReportResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingRevenueApi->executiveRevenueRefundsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get refund data for | 
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 

### Return type

[**SWGRevenueReportResource***](SWGRevenueReportResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **executiveRevenueSubscriptionSalesUsingGET**
```objc
-(NSNumber*) executiveRevenueSubscriptionSalesUsingGETWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;
```

Get subscription revenue info

Get basic info about revenue from sales of new subscriptions as well as recurring payemnts, summed up within a time range

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)

SWGReportingRevenueApi*apiInstance = [[SWGReportingRevenueApi alloc] init];

// Get subscription revenue info
[apiInstance executiveRevenueSubscriptionSalesUsingGETWithCurrencyCode:currencyCode
              startDate:startDate
              endDate:endDate
          completionHandler: ^(SWGRevenueReportResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingRevenueApi->executiveRevenueSubscriptionSalesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get sales data for | 
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 

### Return type

[**SWGRevenueReportResource***](SWGRevenueReportResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
