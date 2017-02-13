# SWGLogsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserLog**](SWGLogsApi.md#adduserlog) | **POST** /audit/logs | Add a user log entry
[**getBREEventLog**](SWGLogsApi.md#getbreeventlog) | **GET** /bre/logs/event-log/{id} | Get an existing BRE event log entry by id
[**getBREEventLogs**](SWGLogsApi.md#getbreeventlogs) | **GET** /bre/logs/event-log | Returns a list of BRE event log entries
[**getBREForwardLog**](SWGLogsApi.md#getbreforwardlog) | **GET** /bre/logs/forward-log/{id} | Get an existing forward log entry by id
[**getBREForwardLogs**](SWGLogsApi.md#getbreforwardlogs) | **GET** /bre/logs/forward-log | Returns a list of forward log entries
[**getUserLog**](SWGLogsApi.md#getuserlog) | **GET** /audit/logs/{id} | Returns a user log entry by id
[**getUserLogs**](SWGLogsApi.md#getuserlogs) | **GET** /audit/logs | Returns a page of user logs entries


# **addUserLog**
```objc
-(NSURLSessionTask*) addUserLogWithLogEntry: (SWGUserActionLog*) logEntry
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a user log entry

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGUserActionLog* logEntry = [[SWGUserActionLog alloc] init]; // The user log entry to be added (optional)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Add a user log entry
[apiInstance addUserLogWithLogEntry:logEntry
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->addUserLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logEntry** | [**SWGUserActionLog***](SWGUserActionLog*.md)| The user log entry to be added | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREEventLog**
```objc
-(NSURLSessionTask*) getBREEventLogWithId: (NSString*) _id
        completionHandler: (void (^)(SWGBreEventLog* output, NSError* error)) handler;
```

Get an existing BRE event log entry by id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The BRE event log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Get an existing BRE event log entry by id
[apiInstance getBREEventLogWithId:_id
          completionHandler: ^(SWGBreEventLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getBREEventLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The BRE event log entry id | 

### Return type

[**SWGBreEventLog***](SWGBreEventLog.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREEventLogs**
```objc
-(NSURLSessionTask*) getBREEventLogsWithFilterStartDate: (NSString*) filterStartDate
    filterEventName: (NSString*) filterEventName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceBreEventLog_* output, NSError* error)) handler;
```

Returns a list of BRE event log entries

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEventName = @"filterEventName_example"; // Filter event logs by event name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a list of BRE event log entries
[apiInstance getBREEventLogsWithFilterStartDate:filterStartDate
              filterEventName:filterEventName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceBreEventLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getBREEventLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEventName** | **NSString***| Filter event logs by event name | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:DESC]

### Return type

[**SWGPageResourceBreEventLog_***](SWGPageResourceBreEventLog_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREForwardLog**
```objc
-(NSURLSessionTask*) getBREForwardLogWithId: (NSString*) _id
        completionHandler: (void (^)(SWGForwardLog* output, NSError* error)) handler;
```

Get an existing forward log entry by id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The forward log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Get an existing forward log entry by id
[apiInstance getBREForwardLogWithId:_id
          completionHandler: ^(SWGForwardLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getBREForwardLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The forward log entry id | 

### Return type

[**SWGForwardLog***](SWGForwardLog.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREForwardLogs**
```objc
-(NSURLSessionTask*) getBREForwardLogsWithFilterStartDate: (NSString*) filterStartDate
    filterEndDate: (NSString*) filterEndDate
    filterStatusCode: (NSNumber*) filterStatusCode
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceForwardLog_* output, NSError* error)) handler;
```

Returns a list of forward log entries

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* filterStatusCode = @56; // Filter forward logs by http status code (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a list of forward log entries
[apiInstance getBREForwardLogsWithFilterStartDate:filterStartDate
              filterEndDate:filterEndDate
              filterStatusCode:filterStatusCode
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceForwardLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getBREForwardLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEndDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterStatusCode** | **NSNumber***| Filter forward logs by http status code | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:DESC]

### Return type

[**SWGPageResourceForwardLog_***](SWGPageResourceForwardLog_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLog**
```objc
-(NSURLSessionTask*) getUserLogWithId: (NSString*) _id
        completionHandler: (void (^)(SWGUserActionLog* output, NSError* error)) handler;
```

Returns a user log entry by id

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The user log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a user log entry by id
[apiInstance getUserLogWithId:_id
          completionHandler: ^(SWGUserActionLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getUserLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The user log entry id | 

### Return type

[**SWGUserActionLog***](SWGUserActionLog.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLogs**
```objc
-(NSURLSessionTask*) getUserLogsWithFilterUser: (NSNumber*) filterUser
    filterActionName: (NSString*) filterActionName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserActionLog_* output, NSError* error)) handler;
```

Returns a page of user logs entries

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterUser = @56; // Filter for actions taken by a specific user by id (optional)
NSString* filterActionName = @"filterActionName_example"; // Filter for actions of a specific name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a page of user logs entries
[apiInstance getUserLogsWithFilterUser:filterUser
              filterActionName:filterActionName
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserActionLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getUserLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterUser** | **NSNumber***| Filter for actions taken by a specific user by id | [optional] 
 **filterActionName** | **NSString***| Filter for actions of a specific name | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUserActionLog_***](SWGPageResourceUserActionLog_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

