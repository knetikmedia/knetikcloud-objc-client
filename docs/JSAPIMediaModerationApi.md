# JSAPIMediaModerationApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFlag**](JSAPIMediaModerationApi.md#addflag) | **POST** /moderation/flags | Add a flag
[**deleteFlag**](JSAPIMediaModerationApi.md#deleteflag) | **DELETE** /moderation/flags | Delete a flag
[**getFlags**](JSAPIMediaModerationApi.md#getflags) | **GET** /moderation/flags | Returns a page of flags
[**getModerationReport**](JSAPIMediaModerationApi.md#getmoderationreport) | **GET** /moderation/reports/{id} | Get a flag report
[**getModerationReports**](JSAPIMediaModerationApi.md#getmoderationreports) | **GET** /moderation/reports | Returns a page of flag reports
[**updateModerationReport**](JSAPIMediaModerationApi.md#updatemoderationreport) | **PUT** /moderation/reports/{id} | Update a flag report


# **addFlag**
```objc
-(NSURLSessionTask*) addFlagWithFlagResource: (JSAPIFlagResource*) flagResource
        completionHandler: (void (^)(JSAPIFlagResource* output, NSError* error)) handler;
```

Add a flag

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIFlagResource* flagResource = [[JSAPIFlagResource alloc] init]; // The flag resource object (optional)

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Add a flag
[apiInstance addFlagWithFlagResource:flagResource
          completionHandler: ^(JSAPIFlagResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->addFlag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **flagResource** | [**JSAPIFlagResource***](JSAPIFlagResource.md)| The flag resource object | [optional] 

### Return type

[**JSAPIFlagResource***](JSAPIFlagResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFlag**
```objc
-(NSURLSessionTask*) deleteFlagWithContextName: (NSString*) contextName
    contextId: (NSString*) contextId
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a flag

<b>Permissions Needed:</b> MODERATION_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* contextName = @"contextName_example"; // The name of the context (optional)
NSString* contextId = @"contextId_example"; // The id of the context (optional)
NSNumber* userId = @56; // The id of the user (optional)

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Delete a flag
[apiInstance deleteFlagWithContextName:contextName
              contextId:contextId
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->deleteFlag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **contextName** | **NSString***| The name of the context | [optional] 
 **contextId** | **NSString***| The id of the context | [optional] 
 **userId** | **NSNumber***| The id of the user | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFlags**
```objc
-(NSURLSessionTask*) getFlagsWithFilterContext: (NSString*) filterContext
    filterContextId: (NSString*) filterContextId
    filterUserId: (NSNumber*) filterUserId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceFlagResource_* output, NSError* error)) handler;
```

Returns a page of flags

<b>Permissions Needed:</b> MODERATION_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterContext = @"filterContext_example"; // Filter by flag context (optional)
NSString* filterContextId = @"filterContextId_example"; // Filter by flag context ID (optional)
NSNumber* filterUserId = @56; // Filter by user ID (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Returns a page of flags
[apiInstance getFlagsWithFilterContext:filterContext
              filterContextId:filterContextId
              filterUserId:filterUserId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceFlagResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->getFlags: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterContext** | **NSString***| Filter by flag context | [optional] 
 **filterContextId** | **NSString***| Filter by flag context ID | [optional] 
 **filterUserId** | **NSNumber***| Filter by user ID | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceFlagResource_***](JSAPIPageResourceFlagResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getModerationReport**
```objc
-(NSURLSessionTask*) getModerationReportWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIFlagReportResource* output, NSError* error)) handler;
```

Get a flag report

<b>Permissions Needed:</b> MODERATION_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Get a flag report
[apiInstance getModerationReportWithId:_id
          completionHandler: ^(JSAPIFlagReportResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->getModerationReport: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The flag report id | 

### Return type

[**JSAPIFlagReportResource***](JSAPIFlagReportResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getModerationReports**
```objc
-(NSURLSessionTask*) getModerationReportsWithExcludeResolved: (NSNumber*) excludeResolved
    filterContext: (NSString*) filterContext
    filterContextId: (NSString*) filterContextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceFlagReportResource_* output, NSError* error)) handler;
```

Returns a page of flag reports

Context can be either a free-form string or a pre-defined context name. <br><br><b>Permissions Needed:</b> MODERATION_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* excludeResolved = @true; // Ignore resolved context (optional) (default to true)
NSString* filterContext = @"filterContext_example"; // Filter by moderation context (optional)
NSString* filterContextId = @"filterContextId_example"; // Filter by moderation context ID (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Returns a page of flag reports
[apiInstance getModerationReportsWithExcludeResolved:excludeResolved
              filterContext:filterContext
              filterContextId:filterContextId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceFlagReportResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->getModerationReports: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excludeResolved** | **NSNumber***| Ignore resolved context | [optional] [default to true]
 **filterContext** | **NSString***| Filter by moderation context | [optional] 
 **filterContextId** | **NSString***| Filter by moderation context ID | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceFlagReportResource_***](JSAPIPageResourceFlagReportResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateModerationReport**
```objc
-(NSURLSessionTask*) updateModerationReportWithId: (NSNumber*) _id
    flagReportResource: (JSAPIFlagReportResource*) flagReportResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a flag report

Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason. <br><br><b>Permissions Needed:</b> MODERATION_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The flag report id
JSAPIFlagReportResource* flagReportResource = [[JSAPIFlagReportResource alloc] init]; // The new flag report (optional)

JSAPIMediaModerationApi*apiInstance = [[JSAPIMediaModerationApi alloc] init];

// Update a flag report
[apiInstance updateModerationReportWithId:_id
              flagReportResource:flagReportResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaModerationApi->updateModerationReport: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The flag report id | 
 **flagReportResource** | [**JSAPIFlagReportResource***](JSAPIFlagReportResource.md)| The new flag report | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

