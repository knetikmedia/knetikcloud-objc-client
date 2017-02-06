# SWGReportingUsageApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUsageByDay**](SWGReportingUsageApi.md#getusagebyday) | **GET** /reporting/usage/day | Returns aggregated endpoint usage information by day
[**getUsageByHour**](SWGReportingUsageApi.md#getusagebyhour) | **GET** /reporting/usage/hour | Returns aggregated endpoint usage information by hour
[**getUsageByMinute**](SWGReportingUsageApi.md#getusagebyminute) | **GET** /reporting/usage/minute | Returns aggregated endpoint usage information by minute
[**getUsageByMonth**](SWGReportingUsageApi.md#getusagebymonth) | **GET** /reporting/usage/month | Returns aggregated endpoint usage information by month
[**getUsageByYear**](SWGReportingUsageApi.md#getusagebyyear) | **GET** /reporting/usage/year | Returns aggregated endpoint usage information by year


# **getUsageByDay**
```objc
-(NSURLSessionTask*) getUsageByDayWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by day

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by day
[apiInstance getUsageByDayWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByDay: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUsageInfo_***](SWGPageResourceUsageInfo_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByHour**
```objc
-(NSURLSessionTask*) getUsageByHourWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by hour

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by hour
[apiInstance getUsageByHourWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByHour: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUsageInfo_***](SWGPageResourceUsageInfo_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMinute**
```objc
-(NSURLSessionTask*) getUsageByMinuteWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by minute

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by minute
[apiInstance getUsageByMinuteWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByMinute: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUsageInfo_***](SWGPageResourceUsageInfo_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMonth**
```objc
-(NSURLSessionTask*) getUsageByMonthWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by month

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by month
[apiInstance getUsageByMonthWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByMonth: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUsageInfo_***](SWGPageResourceUsageInfo_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByYear**
```objc
-(NSURLSessionTask*) getUsageByYearWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by year

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by year
[apiInstance getUsageByYearWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByYear: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUsageInfo_***](SWGPageResourceUsageInfo_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

