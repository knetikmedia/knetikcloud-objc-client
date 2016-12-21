# SWGLogsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserLogUsingPOST**](SWGLogsApi.md#adduserlogusingpost) | **POST** /audit/logs | Add a new user log entry
[**getEventLogUsingGET**](SWGLogsApi.md#geteventlogusingget) | **GET** /bre/logs/event-log/{id} | Get an existing BRE event log entry by id
[**getEventsLogsUsingGET**](SWGLogsApi.md#geteventslogsusingget) | **GET** /bre/logs/event-log | Returns a list of BRE event log entries
[**getForwardLogUsingGET**](SWGLogsApi.md#getforwardlogusingget) | **GET** /bre/logs/forward-log/{id} | Get an existing forward log entry by id
[**getForwardLogsUsingGET**](SWGLogsApi.md#getforwardlogsusingget) | **GET** /bre/logs/forward-log | Returns a list of forward log entries
[**getUserLogsUsingGET**](SWGLogsApi.md#getuserlogsusingget) | **GET** /audit/logs/{id} | Returns a user log entry by id
[**getUserLogsUsingGET1**](SWGLogsApi.md#getuserlogsusingget1) | **GET** /audit/logs | Returns a page of user logs entries


# **addUserLogUsingPOST**
```objc
-(NSNumber*) addUserLogUsingPOSTWithLogEntry: (SWGUserActionLog*) logEntry
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a new user log entry

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGUserActionLog* logEntry = [[SWGUserActionLog alloc] init]; // The user log entry to be added (optional)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Add a new user log entry
[apiInstance addUserLogUsingPOSTWithLogEntry:logEntry
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->addUserLogUsingPOST: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEventLogUsingGET**
```objc
-(NSNumber*) getEventLogUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGBreEventLog* output, NSError* error)) handler;
```

Get an existing BRE event log entry by id

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The BRE event log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Get an existing BRE event log entry by id
[apiInstance getEventLogUsingGETWithId:_id
          completionHandler: ^(SWGBreEventLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getEventLogUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getEventsLogsUsingGET**
```objc
-(NSNumber*) getEventsLogsUsingGETWithFilterStartDate: (NSString*) filterStartDate
    filterEventName: (NSString*) filterEventName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceBreEventLog_* output, NSError* error)) handler;
```

Returns a list of BRE event log entries

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEventName = @"filterEventName_example"; // Filter event logs by event name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a list of BRE event log entries
[apiInstance getEventsLogsUsingGETWithFilterStartDate:filterStartDate
              filterEventName:filterEventName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceBreEventLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getEventsLogsUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getForwardLogUsingGET**
```objc
-(NSNumber*) getForwardLogUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGForwardLog* output, NSError* error)) handler;
```

Get an existing forward log entry by id

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The forward log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Get an existing forward log entry by id
[apiInstance getForwardLogUsingGETWithId:_id
          completionHandler: ^(SWGForwardLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getForwardLogUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getForwardLogsUsingGET**
```objc
-(NSNumber*) getForwardLogsUsingGETWithFilterStartDate: (NSString*) filterStartDate
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* filterStatusCode = @56; // Filter forward logs by http status code (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:DESC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:DESC)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a list of forward log entries
[apiInstance getForwardLogsUsingGETWithFilterStartDate:filterStartDate
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
                            NSLog(@"Error calling SWGLogsApi->getForwardLogsUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLogsUsingGET**
```objc
-(NSNumber*) getUserLogsUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGUserActionLog* output, NSError* error)) handler;
```

Returns a user log entry by id

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The user log entry id

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a user log entry by id
[apiInstance getUserLogsUsingGETWithId:_id
          completionHandler: ^(SWGUserActionLog* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getUserLogsUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLogsUsingGET1**
```objc
-(NSNumber*) getUserLogsUsingGET1WithFilterUser: (NSNumber*) filterUser
    filterActionName: (NSString*) filterActionName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserActionLog_* output, NSError* error)) handler;
```

Returns a page of user logs entries

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterUser = @56; // Filter for actions taken by a specific user by id (optional)
NSString* filterActionName = @"filterActionName_example"; // Filter for actions of a specific name (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGLogsApi*apiInstance = [[SWGLogsApi alloc] init];

// Returns a page of user logs entries
[apiInstance getUserLogsUsingGET1WithFilterUser:filterUser
              filterActionName:filterActionName
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserActionLog_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGLogsApi->getUserLogsUsingGET1: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

