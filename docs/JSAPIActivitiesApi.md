# JSAPIActivitiesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createActivity**](JSAPIActivitiesApi.md#createactivity) | **POST** /activities | Create an activity
[**createActivityOccurrence**](JSAPIActivitiesApi.md#createactivityoccurrence) | **POST** /activity-occurrences | Create a new activity occurrence
[**deleteActivity**](JSAPIActivitiesApi.md#deleteactivity) | **DELETE** /activities/{id} | Delete an activity
[**getActivities**](JSAPIActivitiesApi.md#getactivities) | **GET** /activities | List activity definitions
[**getActivity**](JSAPIActivitiesApi.md#getactivity) | **GET** /activities/{id} | Get a single activity
[**setActivityOccurrenceResults**](JSAPIActivitiesApi.md#setactivityoccurrenceresults) | **POST** /activity-occurrences/{activity_occurrence_id}/results | Sets the status of an activity occurrence to FINISHED and logs metrics
[**updateActivity**](JSAPIActivitiesApi.md#updateactivity) | **PUT** /activities/{id} | Update an activity
[**updateActivityOccurrence**](JSAPIActivitiesApi.md#updateactivityoccurrence) | **PUT** /activity-occurrences/{activity_occurrence_id}/status | Updated the status of an activity occurrence


# **createActivity**
```objc
-(NSURLSessionTask*) createActivityWithActivityResource: (JSAPIActivityResource*) activityResource
        completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;
```

Create an activity

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIActivityResource* activityResource = [[JSAPIActivityResource alloc] init]; // The activity resource object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Create an activity
[apiInstance createActivityWithActivityResource:activityResource
          completionHandler: ^(JSAPIActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->createActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityResource** | [**JSAPIActivityResource***](JSAPIActivityResource*.md)| The activity resource object | [optional] 

### Return type

[**JSAPIActivityResource***](JSAPIActivityResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createActivityOccurrence**
```objc
-(NSURLSessionTask*) createActivityOccurrenceWithTest: (NSNumber*) test
    activityOccurrenceResource: (JSAPIActivityOccurrenceResource*) activityOccurrenceResource
        completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;
```

Create a new activity occurrence

Has to enforce extra rules if not used as an admin

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* test = @false; // if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings (optional) (default to false)
JSAPIActivityOccurrenceResource* activityOccurrenceResource = [[JSAPIActivityOccurrenceResource alloc] init]; // The activity occurrence object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Create a new activity occurrence
[apiInstance createActivityOccurrenceWithTest:test
              activityOccurrenceResource:activityOccurrenceResource
          completionHandler: ^(JSAPIActivityOccurrenceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->createActivityOccurrence: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **test** | **NSNumber***| if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings | [optional] [default to false]
 **activityOccurrenceResource** | [**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource*.md)| The activity occurrence object | [optional] 

### Return type

[**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource.md)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the activity

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Delete an activity
[apiInstance deleteActivityWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->deleteActivity: %@", error);
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
        completionHandler: (void (^)(JSAPIPageResourceBareActivityResource_* output, NSError* error)) handler;
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

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// List activity definitions
[apiInstance getActivitiesWithFilterTemplate:filterTemplate
              filterName:filterName
              filterId:filterId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceBareActivityResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->getActivities: %@", error);
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

[**JSAPIPageResourceBareActivityResource_***](JSAPIPageResourceBareActivityResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivity**
```objc
-(NSURLSessionTask*) getActivityWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;
```

Get a single activity

### Example 
```objc

NSNumber* _id = @789; // The id of the activity

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Get a single activity
[apiInstance getActivityWithId:_id
          completionHandler: ^(JSAPIActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->getActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the activity | 

### Return type

[**JSAPIActivityResource***](JSAPIActivityResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setActivityOccurrenceResults**
```objc
-(NSURLSessionTask*) setActivityOccurrenceResultsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceResults: (JSAPIActivityOccurrenceResults*) activityOccurrenceResults
        completionHandler: (void (^)(JSAPIActivityOccurrenceResults* output, NSError* error)) handler;
```

Sets the status of an activity occurrence to FINISHED and logs metrics

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
JSAPIActivityOccurrenceResults* activityOccurrenceResults = [[JSAPIActivityOccurrenceResults alloc] init]; // The activity occurrence object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Sets the status of an activity occurrence to FINISHED and logs metrics
[apiInstance setActivityOccurrenceResultsWithActivityOccurrenceId:activityOccurrenceId
              activityOccurrenceResults:activityOccurrenceResults
          completionHandler: ^(JSAPIActivityOccurrenceResults* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->setActivityOccurrenceResults: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **activityOccurrenceResults** | [**JSAPIActivityOccurrenceResults***](JSAPIActivityOccurrenceResults*.md)| The activity occurrence object | [optional] 

### Return type

[**JSAPIActivityOccurrenceResults***](JSAPIActivityOccurrenceResults.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateActivity**
```objc
-(NSURLSessionTask*) updateActivityWithId: (NSNumber*) _id
    activityResource: (JSAPIActivityResource*) activityResource
        completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;
```

Update an activity

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the activity
JSAPIActivityResource* activityResource = [[JSAPIActivityResource alloc] init]; // The activity resource object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Update an activity
[apiInstance updateActivityWithId:_id
              activityResource:activityResource
          completionHandler: ^(JSAPIActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->updateActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the activity | 
 **activityResource** | [**JSAPIActivityResource***](JSAPIActivityResource*.md)| The activity resource object | [optional] 

### Return type

[**JSAPIActivityResource***](JSAPIActivityResource.md)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
NSString* activityCccurrenceStatus = activityCccurrenceStatus_example; // The activity occurrence status object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Updated the status of an activity occurrence
[apiInstance updateActivityOccurrenceWithActivityOccurrenceId:activityOccurrenceId
              activityCccurrenceStatus:activityCccurrenceStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->updateActivityOccurrence: %@", error);
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

