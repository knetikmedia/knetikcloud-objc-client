# JSAPIReportingSubscriptionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getSubscriptionReports**](JSAPIReportingSubscriptionsApi.md#getsubscriptionreports) | **GET** /reporting/subscription | Get a list of available subscription reports in most recent first order


# **getSubscriptionReports**
```objc
-(NSURLSessionTask*) getSubscriptionReportsWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceBillingReport_* output, NSError* error)) handler;
```

Get a list of available subscription reports in most recent first order

<b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingSubscriptionsApi*apiInstance = [[JSAPIReportingSubscriptionsApi alloc] init];

// Get a list of available subscription reports in most recent first order
[apiInstance getSubscriptionReportsWithSize:size
              page:page
          completionHandler: ^(JSAPIPageResourceBillingReport_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingSubscriptionsApi->getSubscriptionReports: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceBillingReport_***](JSAPIPageResourceBillingReport_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

