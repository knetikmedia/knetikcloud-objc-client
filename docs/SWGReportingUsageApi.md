# SWGReportingUsageApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUsageByDayUsingGET**](SWGReportingUsageApi.md#getusagebydayusingget) | **GET** /reporting/usage/day | Returns aggregated endpoint usage information by the day
[**getUsageByHourUsingGET**](SWGReportingUsageApi.md#getusagebyhourusingget) | **GET** /reporting/usage/hour | Returns aggregated endpoint usage information by hour
[**getUsageByMinuteUsingGET**](SWGReportingUsageApi.md#getusagebyminuteusingget) | **GET** /reporting/usage/minute | Returns aggregated endpoint usage information by minute
[**getUsageByMonthUsingGET**](SWGReportingUsageApi.md#getusagebymonthusingget) | **GET** /reporting/usage/month | Returns aggregated endpoint usage information by month
[**getUsageByYearUsingGET**](SWGReportingUsageApi.md#getusagebyyearusingget) | **GET** /reporting/usage/year | Returns aggregated endpoint usage information by year


# **getUsageByDayUsingGET**
```objc
-(NSNumber*) getUsageByDayUsingGETWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by the day

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by the day
[apiInstance getUsageByDayUsingGETWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByDayUsingGET: %@", error);
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

[**SWGPageUsageInfo_***](SWGPageUsageInfo_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByHourUsingGET**
```objc
-(NSNumber*) getUsageByHourUsingGETWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by hour

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by hour
[apiInstance getUsageByHourUsingGETWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByHourUsingGET: %@", error);
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

[**SWGPageUsageInfo_***](SWGPageUsageInfo_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMinuteUsingGET**
```objc
-(NSNumber*) getUsageByMinuteUsingGETWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by minute

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by minute
[apiInstance getUsageByMinuteUsingGETWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByMinuteUsingGET: %@", error);
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

[**SWGPageUsageInfo_***](SWGPageUsageInfo_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMonthUsingGET**
```objc
-(NSNumber*) getUsageByMonthUsingGETWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by month

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by month
[apiInstance getUsageByMonthUsingGETWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByMonthUsingGET: %@", error);
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

[**SWGPageUsageInfo_***](SWGPageUsageInfo_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByYearUsingGET**
```objc
-(NSNumber*) getUsageByYearUsingGETWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by year

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGReportingUsageApi*apiInstance = [[SWGReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by year
[apiInstance getUsageByYearUsingGETWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              size:size
              page:page
          completionHandler: ^(SWGPageUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingUsageApi->getUsageByYearUsingGET: %@", error);
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

[**SWGPageUsageInfo_***](SWGPageUsageInfo_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

