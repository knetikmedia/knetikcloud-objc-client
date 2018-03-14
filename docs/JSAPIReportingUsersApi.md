# JSAPIReportingUsersApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserRegistrations**](JSAPIReportingUsersApi.md#getuserregistrations) | **GET** /reporting/users/registrations | Get user registration info


# **getUserRegistrations**
```objc
-(NSURLSessionTask*) getUserRegistrationsWithGranularity: (NSString*) granularity
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceAggregateCountResource_* output, NSError* error)) handler;
```

Get user registration info

Get user registration counts grouped by time range. <br><br><b>Permissions Needed:</b> REPORTING_USER_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* granularity = @"day"; // The time duration to aggregate by (optional) (default to day)
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsersApi*apiInstance = [[JSAPIReportingUsersApi alloc] init];

// Get user registration info
[apiInstance getUserRegistrationsWithGranularity:granularity
              startDate:startDate
              endDate:endDate
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceAggregateCountResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsersApi->getUserRegistrations: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **granularity** | **NSString***| The time duration to aggregate by | [optional] [default to day]
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceAggregateCountResource_***](JSAPIPageResourceAggregateCountResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

