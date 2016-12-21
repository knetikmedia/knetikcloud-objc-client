# SWGReportingSubscriptionsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**listBillingReportsUsingGET**](SWGReportingSubscriptionsApi.md#listbillingreportsusingget) | **GET** /reporting/subscription | Get a list of available subscription reports in most recent first order


# **listBillingReportsUsingGET**
```objc
-(NSNumber*) listBillingReportsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBillingReport_* output, NSError* error)) handler;
```

Get a list of available subscription reports in most recent first order

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingSubscriptionsApi*apiInstance = [[SWGReportingSubscriptionsApi alloc] init];

// Get a list of available subscription reports in most recent first order
[apiInstance listBillingReportsUsingGETWithSize:size
              page:page
          completionHandler: ^(SWGPageResourceBillingReport_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingSubscriptionsApi->listBillingReportsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceBillingReport_***](SWGPageResourceBillingReport_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

