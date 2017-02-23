# SWGActivitiesApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createActivity**](SWGActivitiesApi.md#createactivity) | **POST** /activities | Create an activity
[**createActivityOccurrence**](SWGActivitiesApi.md#createactivityoccurrence) | **POST** /activity-occurrences | Create a new activity occurrence
[**deleteActivity**](SWGActivitiesApi.md#deleteactivity) | **DELETE** /activities/{id} | Delete an activity
[**getActivities**](SWGActivitiesApi.md#getactivities) | **GET** /activities | List activity definitions
[**getActivity**](SWGActivitiesApi.md#getactivity) | **GET** /activities/{id} | Get a single activity
[**setActivityOccurrenceResults**](SWGActivitiesApi.md#setactivityoccurrenceresults) | **POST** /activity-occurrences/{activity_occurrence_id}/results | Sets the status of an activity occurrence to FINISHED and logs metrics
[**updateActivity**](SWGActivitiesApi.md#updateactivity) | **PUT** /activities/{id} | Update an activity
[**updateActivityOccurrence**](SWGActivitiesApi.md#updateactivityoccurrence) | **PUT** /activity-occurrences/{activity_occurrence_id}/status | Updated the status of an activity occurrence


# **createActivity**
```objc
-(NSURLSessionTask*) createActivityWithActivityResource: (SWGActivityResource*) activityResource
        completionHandler: (void (^)(SWGActivityResource* output, NSError* error)) handler;
```

Create an activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGActivityResource* activityResource = [[SWGActivityResource alloc] init]; // The activity resource object (optional)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Create an activity
[apiInstance createActivityWithActivityResource:activityResource
          completionHandler: ^(SWGActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->createActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityResource** | [**SWGActivityResource***](SWGActivityResource*.md)| The activity resource object | [optional] 

### Return type

[**SWGActivityResource***](SWGActivityResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createActivityOccurrence**
```objc
-(NSURLSessionTask*) createActivityOccurrenceWithTest: (NSNumber*) test
    activityOccurrenceResource: (SWGActivityOccurrenceResource*) activityOccurrenceResource
        completionHandler: (void (^)(SWGActivityOccurrenceResource* output, NSError* error)) handler;
```

Create a new activity occurrence

Has to enforce extra rules if not used as an admin

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* test = @false; // if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings (optional) (default to false)
SWGActivityOccurrenceResource* activityOccurrenceResource = [[SWGActivityOccurrenceResource alloc] init]; // The activity occurrence object (optional)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Create a new activity occurrence
[apiInstance createActivityOccurrenceWithTest:test
              activityOccurrenceResource:activityOccurrenceResource
          completionHandler: ^(SWGActivityOccurrenceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->createActivityOccurrence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **test** | **NSNumber***| if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings | [optional] [default to false]
 **activityOccurrenceResource** | [**SWGActivityOccurrenceResource***](SWGActivityOccurrenceResource*.md)| The activity occurrence object | [optional] 

### Return type

[**SWGActivityOccurrenceResource***](SWGActivityOccurrenceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteActivity**
```objc
-(NSURLSessionTask*) deleteActivityWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the activity

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Delete an activity
[apiInstance deleteActivityWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->deleteActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the activity | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivities**
```objc
-(NSURLSessionTask*) getActivitiesWithFilterTemplate: (NSNumber*) filterTemplate
    filterName: (NSString*) filterName
    filterId: (NSString*) filterId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceBareActivityResource_* output, NSError* error)) handler;
```

List activity definitions

### Example 
```objc

NSNumber* filterTemplate = @true; // Filter for activities that are templates, or specifically not if false (optional)
NSString* filterName = @"filterName_example"; // Filter for activities that have a name starting with specified string (optional)
NSString* filterId = @"filterId_example"; // Filter for activities with an id in the given comma separated list of ids (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// List activity definitions
[apiInstance getActivitiesWithFilterTemplate:filterTemplate
              filterName:filterName
              filterId:filterId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceBareActivityResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->getActivities: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSNumber***| Filter for activities that are templates, or specifically not if false | [optional] 
 **filterName** | **NSString***| Filter for activities that have a name starting with specified string | [optional] 
 **filterId** | **NSString***| Filter for activities with an id in the given comma separated list of ids | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceBareActivityResource_***](SWGPageResourceBareActivityResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivity**
```objc
-(NSURLSessionTask*) getActivityWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGActivityResource* output, NSError* error)) handler;
```

Get a single activity

### Example 
```objc

NSNumber* _id = @789; // The id of the activity

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Get a single activity
[apiInstance getActivityWithId:_id
          completionHandler: ^(SWGActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->getActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the activity | 

### Return type

[**SWGActivityResource***](SWGActivityResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setActivityOccurrenceResults**
```objc
-(NSURLSessionTask*) setActivityOccurrenceResultsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceResults: (SWGActivityOccurrenceResults*) activityOccurrenceResults
        completionHandler: (void (^)(SWGActivityOccurrenceResults* output, NSError* error)) handler;
```

Sets the status of an activity occurrence to FINISHED and logs metrics

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
SWGActivityOccurrenceResults* activityOccurrenceResults = [[SWGActivityOccurrenceResults alloc] init]; // The activity occurrence object (optional)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Sets the status of an activity occurrence to FINISHED and logs metrics
[apiInstance setActivityOccurrenceResultsWithActivityOccurrenceId:activityOccurrenceId
              activityOccurrenceResults:activityOccurrenceResults
          completionHandler: ^(SWGActivityOccurrenceResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->setActivityOccurrenceResults: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **activityOccurrenceResults** | [**SWGActivityOccurrenceResults***](SWGActivityOccurrenceResults*.md)| The activity occurrence object | [optional] 

### Return type

[**SWGActivityOccurrenceResults***](SWGActivityOccurrenceResults.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateActivity**
```objc
-(NSURLSessionTask*) updateActivityWithId: (NSNumber*) _id
    activityResource: (SWGActivityResource*) activityResource
        completionHandler: (void (^)(SWGActivityResource* output, NSError* error)) handler;
```

Update an activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the activity
SWGActivityResource* activityResource = [[SWGActivityResource alloc] init]; // The activity resource object (optional)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Update an activity
[apiInstance updateActivityWithId:_id
              activityResource:activityResource
          completionHandler: ^(SWGActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->updateActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the activity | 
 **activityResource** | [**SWGActivityResource***](SWGActivityResource*.md)| The activity resource object | [optional] 

### Return type

[**SWGActivityResource***](SWGActivityResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateActivityOccurrence**
```objc
-(NSURLSessionTask*) updateActivityOccurrenceWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityCccurrenceStatus: (NSString*) activityCccurrenceStatus
        completionHandler: (void (^)(NSError* error)) handler;
```

Updated the status of an activity occurrence

If setting to 'FINISHED' you must POST to /results instead to record the metrics and get synchronous reward results

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
NSString* activityCccurrenceStatus = activityCccurrenceStatus_example; // The activity occurrence status object (optional)

SWGActivitiesApi*apiInstance = [[SWGActivitiesApi alloc] init];

// Updated the status of an activity occurrence
[apiInstance updateActivityOccurrenceWithActivityOccurrenceId:activityOccurrenceId
              activityCccurrenceStatus:activityCccurrenceStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGActivitiesApi->updateActivityOccurrence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **activityCccurrenceStatus** | **NSString***| The activity occurrence status object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

