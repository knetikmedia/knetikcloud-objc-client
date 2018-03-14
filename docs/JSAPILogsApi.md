# JSAPILogsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserLog**](JSAPILogsApi.md#adduserlog) | **POST** /audit/logs | Add a user log entry
[**getBREEventLog**](JSAPILogsApi.md#getbreeventlog) | **GET** /bre/logs/event-log/{id} | Get an existing BRE event log entry by id
[**getBREEventLogs**](JSAPILogsApi.md#getbreeventlogs) | **GET** /bre/logs/event-log | Returns a list of BRE event log entries
[**getBREForwardLog**](JSAPILogsApi.md#getbreforwardlog) | **GET** /bre/logs/forward-log/{id} | Get an existing forward log entry by id
[**getBREForwardLogs**](JSAPILogsApi.md#getbreforwardlogs) | **GET** /bre/logs/forward-log | Returns a list of forward log entries
[**getUserLog**](JSAPILogsApi.md#getuserlog) | **GET** /audit/logs/{id} | Returns a user log entry by id
[**getUserLogs**](JSAPILogsApi.md#getuserlogs) | **GET** /audit/logs | Returns a page of user logs entries


# **addUserLog**
```objc
-(NSURLSessionTask*) addUserLogWithLogEntry: (JSAPIUserActionLog*) logEntry
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a user log entry

<b>Permissions Needed:</b> owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIUserActionLog* logEntry = [[JSAPIUserActionLog alloc] init]; // The user log entry to be added (optional)

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Add a user log entry
[apiInstance addUserLogWithLogEntry:logEntry
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->addUserLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **logEntry** | [**JSAPIUserActionLog***](JSAPIUserActionLog.md)| The user log entry to be added | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREEventLog**
```objc
-(NSURLSessionTask*) getBREEventLogWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIBreEventLog* output, NSError* error)) handler;
```

Get an existing BRE event log entry by id

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The BRE event log entry id

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Get an existing BRE event log entry by id
[apiInstance getBREEventLogWithId:_id
          completionHandler: ^(JSAPIBreEventLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getBREEventLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The BRE event log entry id | 

### Return type

[**JSAPIBreEventLog***](JSAPIBreEventLog.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREEventLogs**
```objc
-(NSURLSessionTask*) getBREEventLogsWithFilterStartDate: (NSString*) filterStartDate
    filterEventName: (NSString*) filterEventName
    filterEventId: (NSString*) filterEventId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    filterRuleId: (NSString*) filterRuleId
        completionHandler: (void (^)(JSAPIPageResourceBreEventLog_* output, NSError* error)) handler;
```

Returns a list of BRE event log entries

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEventName = @"filterEventName_example"; // Filter event logs by event name (optional)
NSString* filterEventId = @"filterEventId_example"; // Filter event logs by request id (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)
NSString* filterRuleId = @"filterRuleId_example"; // Filter event logs by request id (optional)

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Returns a list of BRE event log entries
[apiInstance getBREEventLogsWithFilterStartDate:filterStartDate
              filterEventName:filterEventName
              filterEventId:filterEventId
              size:size
              page:page
              order:order
              filterRuleId:filterRuleId
          completionHandler: ^(JSAPIPageResourceBreEventLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getBREEventLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEventName** | **NSString***| Filter event logs by event name | [optional] 
 **filterEventId** | **NSString***| Filter event logs by request id | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:DESC]
 **filterRuleId** | **NSString***| Filter event logs by request id | [optional] 

### Return type

[**JSAPIPageResourceBreEventLog_***](JSAPIPageResourceBreEventLog_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREForwardLog**
```objc
-(NSURLSessionTask*) getBREForwardLogWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIForwardLog* output, NSError* error)) handler;
```

Get an existing forward log entry by id

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The forward log entry id

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Get an existing forward log entry by id
[apiInstance getBREForwardLogWithId:_id
          completionHandler: ^(JSAPIForwardLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getBREForwardLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The forward log entry id | 

### Return type

[**JSAPIForwardLog***](JSAPIForwardLog.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREForwardLogs**
```objc
-(NSURLSessionTask*) getBREForwardLogsWithFilterStartDate: (NSString*) filterStartDate
    filterEndDate: (NSString*) filterEndDate
    filterStatusCode: (NSNumber*) filterStatusCode
    filterUrl: (NSNumber*) filterUrl
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceForwardLog_* output, NSError* error)) handler;
```

Returns a list of forward log entries

<b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* filterStatusCode = @56; // Filter forward logs by http status code (optional)
NSNumber* filterUrl = @56; // Filter forward logs by URL starting with... (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Returns a list of forward log entries
[apiInstance getBREForwardLogsWithFilterStartDate:filterStartDate
              filterEndDate:filterEndDate
              filterStatusCode:filterStatusCode
              filterUrl:filterUrl
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceForwardLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getBREForwardLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEndDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterStatusCode** | **NSNumber***| Filter forward logs by http status code | [optional] 
 **filterUrl** | **NSNumber***| Filter forward logs by URL starting with... | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:DESC]

### Return type

[**JSAPIPageResourceForwardLog_***](JSAPIPageResourceForwardLog_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLog**
```objc
-(NSURLSessionTask*) getUserLogWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIUserActionLog* output, NSError* error)) handler;
```

Returns a user log entry by id

<b>Permissions Needed:</b> LOGS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The user log entry id

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Returns a user log entry by id
[apiInstance getUserLogWithId:_id
          completionHandler: ^(JSAPIUserActionLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getUserLog: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The user log entry id | 

### Return type

[**JSAPIUserActionLog***](JSAPIUserActionLog.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLogs**
```objc
-(NSURLSessionTask*) getUserLogsWithFilterUser: (NSNumber*) filterUser
    filterActionName: (NSString*) filterActionName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserActionLog_* output, NSError* error)) handler;
```

Returns a page of user logs entries

<b>Permissions Needed:</b> LOGS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterUser = @56; // Filter for actions taken by a specific user by id (optional)
NSString* filterActionName = @"filterActionName_example"; // Filter for actions of a specific name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"timestamp:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to timestamp:DESC)

JSAPILogsApi*apiInstance = [[JSAPILogsApi alloc] init];

// Returns a page of user logs entries
[apiInstance getUserLogsWithFilterUser:filterUser
              filterActionName:filterActionName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserActionLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPILogsApi->getUserLogs: %@", error);
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
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to timestamp:DESC]

### Return type

[**JSAPIPageResourceUserActionLog_***](JSAPIPageResourceUserActionLog_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

