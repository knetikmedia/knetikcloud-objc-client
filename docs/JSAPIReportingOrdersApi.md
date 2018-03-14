# JSAPIReportingOrdersApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getInvoiceReports**](JSAPIReportingOrdersApi.md#getinvoicereports) | **GET** /reporting/orders/count/{currency_code} | Retrieve invoice counts aggregated by time ranges


# **getInvoiceReports**
```objc
-(NSURLSessionTask*) getInvoiceReportsWithCurrencyCode: (NSString*) currencyCode
    granularity: (NSString*) granularity
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceAggregateInvoiceReportResource_* output, NSError* error)) handler;
```

Retrieve invoice counts aggregated by time ranges

<b>Permissions Needed:</b> REPORTING_ORDERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* currencyCode = @"currencyCode_example"; // The code for a currency to get sales data for
NSString* granularity = @"day"; // The time duration to aggregate by (optional) (default to day)
NSString* filterPaymentStatus = @"filterPaymentStatus_example"; // A payment status to filter results by, can be a comma separated list (optional)
NSString* filterFulfillmentStatus = @"filterFulfillmentStatus_example"; // An invoice fulfillment status to filter results by, can be a comma separated list (optional)
NSNumber* startDate = @789; // The start of the time range to return, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to return, unix timestamp in seconds. Default is end of time (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)

JSAPIReportingOrdersApi*apiInstance = [[JSAPIReportingOrdersApi alloc] init];

// Retrieve invoice counts aggregated by time ranges
[apiInstance getInvoiceReportsWithCurrencyCode:currencyCode
              granularity:granularity
              filterPaymentStatus:filterPaymentStatus
              filterFulfillmentStatus:filterFulfillmentStatus
              startDate:startDate
              endDate:endDate
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceAggregateInvoiceReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingOrdersApi->getInvoiceReports: %@", error);
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
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]

### Return type

[**JSAPIPageResourceAggregateInvoiceReportResource_***](JSAPIPageResourceAggregateInvoiceReportResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

