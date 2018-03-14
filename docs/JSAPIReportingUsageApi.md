# JSAPIReportingUsageApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUsageByDay**](JSAPIReportingUsageApi.md#getusagebyday) | **GET** /reporting/usage/day | Returns aggregated endpoint usage information by day
[**getUsageByHour**](JSAPIReportingUsageApi.md#getusagebyhour) | **GET** /reporting/usage/hour | Returns aggregated endpoint usage information by hour
[**getUsageByMinute**](JSAPIReportingUsageApi.md#getusagebyminute) | **GET** /reporting/usage/minute | Returns aggregated endpoint usage information by minute
[**getUsageByMonth**](JSAPIReportingUsageApi.md#getusagebymonth) | **GET** /reporting/usage/month | Returns aggregated endpoint usage information by month
[**getUsageByYear**](JSAPIReportingUsageApi.md#getusagebyyear) | **GET** /reporting/usage/year | Returns aggregated endpoint usage information by year
[**getUsageEndpoints**](JSAPIReportingUsageApi.md#getusageendpoints) | **GET** /reporting/usage/endpoints | Returns list of endpoints called (method and url)


# **getUsageByDay**
```objc
-(NSURLSessionTask*) getUsageByDayWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by day

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSString* method = @"method_example"; // Filter for a certain endpoint method.  Must include url as well to work (optional)
NSString* url = @"url_example"; // Filter for a certain endpoint.  Must include method as well to work (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by day
[apiInstance getUsageByDayWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              method:method
              url:url
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageByDay: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **method** | **NSString***| Filter for a certain endpoint method.  Must include url as well to work | [optional] 
 **url** | **NSString***| Filter for a certain endpoint.  Must include method as well to work | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUsageInfo_***](JSAPIPageResourceUsageInfo_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByHour**
```objc
-(NSURLSessionTask*) getUsageByHourWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by hour

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSString* method = @"method_example"; // Filter for a certain endpoint method.  Must include url as well to work (optional)
NSString* url = @"url_example"; // Filter for a certain endpoint.  Must include method as well to work (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by hour
[apiInstance getUsageByHourWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              method:method
              url:url
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageByHour: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **method** | **NSString***| Filter for a certain endpoint method.  Must include url as well to work | [optional] 
 **url** | **NSString***| Filter for a certain endpoint.  Must include method as well to work | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUsageInfo_***](JSAPIPageResourceUsageInfo_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMinute**
```objc
-(NSURLSessionTask*) getUsageByMinuteWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by minute

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSString* method = @"method_example"; // Filter for a certain endpoint method.  Must include url as well to work (optional)
NSString* url = @"url_example"; // Filter for a certain endpoint.  Must include method as well to work (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by minute
[apiInstance getUsageByMinuteWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              method:method
              url:url
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageByMinute: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **method** | **NSString***| Filter for a certain endpoint method.  Must include url as well to work | [optional] 
 **url** | **NSString***| Filter for a certain endpoint.  Must include method as well to work | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUsageInfo_***](JSAPIPageResourceUsageInfo_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByMonth**
```objc
-(NSURLSessionTask*) getUsageByMonthWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by month

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoint. Removes the url and method from the result object (optional) (default to false)
NSString* method = @"method_example"; // Filter for a certain endpoint method.  Must include url as well to work (optional)
NSString* url = @"url_example"; // Filter for a certain endpoint.  Must include method as well to work (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by month
[apiInstance getUsageByMonthWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              method:method
              url:url
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageByMonth: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoint. Removes the url and method from the result object | [optional] [default to false]
 **method** | **NSString***| Filter for a certain endpoint method.  Must include url as well to work | [optional] 
 **url** | **NSString***| Filter for a certain endpoint.  Must include method as well to work | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUsageInfo_***](JSAPIPageResourceUsageInfo_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageByYear**
```objc
-(NSURLSessionTask*) getUsageByYearWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler;
```

Returns aggregated endpoint usage information by year

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds
NSNumber* combineEndpoints = @false; // Whether to combine counts from different endpoints. Removes the url and method from the result object (optional) (default to false)
NSString* method = @"method_example"; // Filter for a certain endpoint method.  Must include url as well to work (optional)
NSString* url = @"url_example"; // Filter for a certain endpoint.  Must include method as well to work (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns aggregated endpoint usage information by year
[apiInstance getUsageByYearWithStartDate:startDate
              endDate:endDate
              combineEndpoints:combineEndpoints
              method:method
              url:url
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUsageInfo_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageByYear: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 
 **combineEndpoints** | **NSNumber***| Whether to combine counts from different endpoints. Removes the url and method from the result object | [optional] [default to false]
 **method** | **NSString***| Filter for a certain endpoint method.  Must include url as well to work | [optional] 
 **url** | **NSString***| Filter for a certain endpoint.  Must include method as well to work | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUsageInfo_***](JSAPIPageResourceUsageInfo_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsageEndpoints**
```objc
-(NSURLSessionTask*) getUsageEndpointsWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Returns list of endpoints called (method and url)

<b>Permissions Needed:</b> USAGE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* startDate = @789; // The beginning of the range being requested, unix timestamp in seconds
NSNumber* endDate = @789; // The ending of the range being requested, unix timestamp in seconds

JSAPIReportingUsageApi*apiInstance = [[JSAPIReportingUsageApi alloc] init];

// Returns list of endpoints called (method and url)
[apiInstance getUsageEndpointsWithStartDate:startDate
              endDate:endDate
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingUsageApi->getUsageEndpoints: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **startDate** | **NSNumber***| The beginning of the range being requested, unix timestamp in seconds | 
 **endDate** | **NSNumber***| The ending of the range being requested, unix timestamp in seconds | 

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

