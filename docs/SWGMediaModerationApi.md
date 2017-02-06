# SWGMediaModerationApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getModerationReport**](SWGMediaModerationApi.md#getmoderationreport) | **GET** /moderation/reports/{id} | Get a flag report
[**getModerationReports**](SWGMediaModerationApi.md#getmoderationreports) | **GET** /moderation/reports | Returns a page of flag reports
[**updateModerationReport**](SWGMediaModerationApi.md#updatemoderationreport) | **PUT** /moderation/reports/{id} | Update a flag report


# **getModerationReport**
```objc
-(NSURLSessionTask*) getModerationReportWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Get a flag report

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Get a flag report
[apiInstance getModerationReportWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->getModerationReport: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The flag report id | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getModerationReports**
```objc
-(NSURLSessionTask*) getModerationReportsWithExcludeResolved: (NSNumber*) excludeResolved
    filterContext: (NSString*) filterContext
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceFlagReportResource_* output, NSError* error)) handler;
```

Returns a page of flag reports

Context can be either a free-form string or a pre-defined context name

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* excludeResolved = @true; // Ignore resolved context (optional) (default to true)
NSString* filterContext = @"filterContext_example"; // Filter by moderation context (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Returns a page of flag reports
[apiInstance getModerationReportsWithExcludeResolved:excludeResolved
              filterContext:filterContext
              size:size
              page:page
          completionHandler: ^(SWGPageResourceFlagReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->getModerationReports: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excludeResolved** | **NSNumber***| Ignore resolved context | [optional] [default to true]
 **filterContext** | **NSString***| Filter by moderation context | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceFlagReportResource_***](SWGPageResourceFlagReportResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateModerationReport**
```objc
-(NSURLSessionTask*) updateModerationReportWithId: (NSNumber*) _id
    flagReportResource: (SWGFlagReportResource*) flagReportResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a flag report

Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id
SWGFlagReportResource* flagReportResource = [[SWGFlagReportResource alloc] init]; // The new flag report (optional)

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Update a flag report
[apiInstance updateModerationReportWithId:_id
              flagReportResource:flagReportResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->updateModerationReport: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The flag report id | 
 **flagReportResource** | [**SWGFlagReportResource***](SWGFlagReportResource*.md)| The new flag report | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
