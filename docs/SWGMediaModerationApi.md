# SWGMediaModerationApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getFlagReportUsingGET**](SWGMediaModerationApi.md#getflagreportusingget) | **GET** /moderation/reports/{id} | Get a flag report
[**getFlagsReportUsingGET**](SWGMediaModerationApi.md#getflagsreportusingget) | **GET** /moderation/reports | Returns a page of flag reports
[**setFlagResolutionUsingPUT**](SWGMediaModerationApi.md#setflagresolutionusingput) | **PUT** /moderation/reports/{id} | Update a flag report


# **getFlagReportUsingGET**
```objc
-(NSNumber*) getFlagReportUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Get a flag report

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Get a flag report
[apiInstance getFlagReportUsingGETWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->getFlagReportUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFlagsReportUsingGET**
```objc
-(NSNumber*) getFlagsReportUsingGETWithExcludeResolved: (NSNumber*) excludeResolved
    filterContext: (NSString*) filterContext
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageFlagReportResource_* output, NSError* error)) handler;
```

Returns a page of flag reports

Context can be either a free-form string or a pre-defined context name

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* excludeResolved = @true; // Ignore resolved context (optional) (default to true)
NSString* filterContext = @"filterContext_example"; // Filter by moderation context (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Returns a page of flag reports
[apiInstance getFlagsReportUsingGETWithExcludeResolved:excludeResolved
              filterContext:filterContext
              size:size
              page:page
          completionHandler: ^(SWGPageFlagReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->getFlagsReportUsingGET: %@", error);
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

[**SWGPageFlagReportResource_***](SWGPageFlagReportResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setFlagResolutionUsingPUT**
```objc
-(NSNumber*) setFlagResolutionUsingPUTWithId: (NSNumber*) _id
    flagReportResource: (SWGFlagReportResource*) flagReportResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a flag report

Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id
SWGFlagReportResource* flagReportResource = [[SWGFlagReportResource alloc] init]; // The new flag report (optional)

SWGMediaModerationApi*apiInstance = [[SWGMediaModerationApi alloc] init];

// Update a flag report
[apiInstance setFlagResolutionUsingPUTWithId:_id
              flagReportResource:flagReportResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaModerationApi->setFlagResolutionUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

