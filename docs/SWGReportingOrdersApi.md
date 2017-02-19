# SWGReportingOrdersApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getInvoiceReports**](SWGReportingOrdersApi.md#getinvoicereports) | **GET** /reporting/orders/count/{currency_code} | Retrieve invoice counts aggregated by time ranges


# **getInvoiceReports**
```objc
-(NSURLSessionTask*) getInvoiceReportsWithCurrencyCode: (NSString*) currencyCode
    granularity: (NSString*) granularity
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(SWGPageResourceAggregateInvoiceReportResource_* output, NSError* error)) handler;
```

Retrieve invoice counts aggregated by time ranges

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSString* granularity = @"day"; // The time duration to aggregate by (optional) (default to day)
NSString* filterPaymentStatus = @"filterPaymentStatus_example"; // A payment status to filter results by, can be a comma separated list (optional)
NSString* filterFulfillmentStatus = @"filterFulfillmentStatus_example"; // An invoice fulfillment status to filter results by, can be a comma separated list (optional)
NSNumber* startDate = @789; // The start of the time range to return, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to return, unix timestamp in seconds. Default is end of time (optional)

SWGReportingOrdersApi*apiInstance = [[SWGReportingOrdersApi alloc] init];

// Retrieve invoice counts aggregated by time ranges
[apiInstance getInvoiceReportsWithCurrencyCode:currencyCode
              granularity:granularity
              filterPaymentStatus:filterPaymentStatus
              filterFulfillmentStatus:filterFulfillmentStatus
              startDate:startDate
              endDate:endDate
          completionHandler: ^(SWGPageResourceAggregateInvoiceReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingOrdersApi->getInvoiceReports: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currencyCode** | **NSString***| The code for a currency to get sales data for | 
 **granularity** | **NSString***| The time duration to aggregate by | [optional] [default to day]
 **filterPaymentStatus** | **NSString***| A payment status to filter results by, can be a comma separated list | [optional] 
 **filterFulfillmentStatus** | **NSString***| An invoice fulfillment status to filter results by, can be a comma separated list | [optional] 
 **startDate** | **NSNumber***| The start of the time range to return, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to return, unix timestamp in seconds. Default is end of time | [optional] 

### Return type

[**SWGPageResourceAggregateInvoiceReportResource_***](SWGPageResourceAggregateInvoiceReportResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

