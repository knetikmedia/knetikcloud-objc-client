# SWGReportingUsersApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserRegistrations**](SWGReportingUsersApi.md#getuserregistrations) | **GET** /reporting/users/registrations | Get user registration info


# **getUserRegistrations**
```objc
-(NSURLSessionTask*) getUserRegistrationsWithGranularity: (NSString*) granularity
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(SWGPageResourceAggregateCountResource_* output, NSError* error)) handler;
```

Get user registration info

Get user registration counts grouped by time range

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* granularity = @"day"; // The time duration to aggregate by (optional) (default to day)
NSNumber* startDate = @789; // The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
NSNumber* endDate = @789; // The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)

SWGReportingUsersApi*apiInstance = [[SWGReportingUsersApi alloc] init];

// Get user registration info
[apiInstance getUserRegistrationsWithGranularity:granularity
              startDate:startDate
              endDate:endDate
          completionHandler: ^(SWGPageResourceAggregateCountResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsersApi->getUserRegistrations: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **granularity** | **NSString***| The time duration to aggregate by | [optional] [default to day]
 **startDate** | **NSNumber***| The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time | [optional] 
 **endDate** | **NSNumber***| The end of the time range to aggregate, unix timestamp in seconds. Default is end of time | [optional] 

### Return type

[**SWGPageResourceAggregateCountResource_***](SWGPageResourceAggregateCountResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

