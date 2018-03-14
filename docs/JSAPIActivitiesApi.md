# JSAPIActivitiesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUser**](JSAPIActivitiesApi.md#adduser) | **POST** /activity-occurrences/{activity_occurrence_id}/users | Add a user to an occurrence
[**createActivity**](JSAPIActivitiesApi.md#createactivity) | **POST** /activities | Create an activity
[**createActivityOccurrence**](JSAPIActivitiesApi.md#createactivityoccurrence) | **POST** /activity-occurrences | Create a new activity occurrence. Ex: start a game
[**createActivityTemplate**](JSAPIActivitiesApi.md#createactivitytemplate) | **POST** /activities/templates | Create a activity template
[**deleteActivity**](JSAPIActivitiesApi.md#deleteactivity) | **DELETE** /activities/{id} | Delete an activity
[**deleteActivityTemplate**](JSAPIActivitiesApi.md#deleteactivitytemplate) | **DELETE** /activities/templates/{id} | Delete a activity template
[**getActivities**](JSAPIActivitiesApi.md#getactivities) | **GET** /activities | List activity definitions
[**getActivity**](JSAPIActivitiesApi.md#getactivity) | **GET** /activities/{id} | Get a single activity
[**getActivityOccurrenceDetails**](JSAPIActivitiesApi.md#getactivityoccurrencedetails) | **GET** /activity-occurrences/{activity_occurrence_id} | Load a single activity occurrence details
[**getActivityTemplate**](JSAPIActivitiesApi.md#getactivitytemplate) | **GET** /activities/templates/{id} | Get a single activity template
[**getActivityTemplates**](JSAPIActivitiesApi.md#getactivitytemplates) | **GET** /activities/templates | List and search activity templates
[**listActivityOccurrences**](JSAPIActivitiesApi.md#listactivityoccurrences) | **GET** /activity-occurrences | List activity occurrences
[**removeUser**](JSAPIActivitiesApi.md#removeuser) | **DELETE** /activity-occurrences/{activity_occurrence_id}/users/{user_id} | Remove a user from an occurrence
[**setActivityOccurrenceResults**](JSAPIActivitiesApi.md#setactivityoccurrenceresults) | **POST** /activity-occurrences/{activity_occurrence_id}/results | Sets the status of an activity occurrence to FINISHED and logs metrics
[**setActivityOccurrenceSettings**](JSAPIActivitiesApi.md#setactivityoccurrencesettings) | **PUT** /activity-occurrences/{activity_occurrence_id}/settings | Sets the settings of an activity occurrence
[**setUserStatus**](JSAPIActivitiesApi.md#setuserstatus) | **PUT** /activity-occurrences/{activity_occurrence_id}/users/{user_id}/status | Set a user&#39;s status within an occurrence
[**updateActivity**](JSAPIActivitiesApi.md#updateactivity) | **PUT** /activities/{id} | Update an activity
[**updateActivityOccurrenceStatus**](JSAPIActivitiesApi.md#updateactivityoccurrencestatus) | **PUT** /activity-occurrences/{activity_occurrence_id}/status | Update the status of an activity occurrence
[**updateActivityTemplate**](JSAPIActivitiesApi.md#updateactivitytemplate) | **PUT** /activities/templates/{id} | Update an activity template


# **addUser**
```objc
-(NSURLSessionTask*) addUserWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    test: (NSNumber*) test
    bypassRestrictions: (NSNumber*) bypassRestrictions
    userId: (JSAPIIntWrapper*) userId
        completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;
```

Add a user to an occurrence

If called with no body, defaults to the user making the call.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
NSNumber* test = @false; // if true, indicates that the user should NOT be added. This can be used to test for eligibility (optional) (default to false)
NSNumber* bypassRestrictions = @false; // if true, indicates that restrictions such as max player count should be ignored. Can only be used with ACTIVITIES_ADMIN (optional) (default to false)
JSAPIIntWrapper* userId = [[JSAPIIntWrapper alloc] init]; // The id of the user, or null for 'caller' (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Add a user to an occurrence
[apiInstance addUserWithActivityOccurrenceId:activityOccurrenceId
              test:test
              bypassRestrictions:bypassRestrictions
              userId:userId
          completionHandler: ^(JSAPIActivityOccurrenceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->addUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **test** | **NSNumber***| if true, indicates that the user should NOT be added. This can be used to test for eligibility | [optional] [default to false]
 **bypassRestrictions** | **NSNumber***| if true, indicates that restrictions such as max player count should be ignored. Can only be used with ACTIVITIES_ADMIN | [optional] [default to false]
 **userId** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The id of the user, or null for &#39;caller&#39; | [optional] 

### Return type

[**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createActivity**
```objc
-(NSURLSessionTask*) createActivityWithActivityResource: (JSAPIActivityResource*) activityResource
        completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;
```

Create an activity

<b>Permissions Needed:</b> ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **activityResource** | [**JSAPIActivityResource***](JSAPIActivityResource.md)| The activity resource object | [optional] 

### Return type

[**JSAPIActivityResource***](JSAPIActivityResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createActivityOccurrence**
```objc
-(NSURLSessionTask*) createActivityOccurrenceWithTest: (NSNumber*) test
    activityOccurrenceResource: (JSAPICreateActivityOccurrenceRequest*) activityOccurrenceResource
        completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;
```

Create a new activity occurrence. Ex: start a game

Has to enforce extra rules if not used as an admin. <br><br><b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* test = @false; // if true, indicates that the occurrence should NOT be created. This can be used to test for eligibility and valid settings (optional) (default to false)
JSAPICreateActivityOccurrenceRequest* activityOccurrenceResource = [[JSAPICreateActivityOccurrenceRequest alloc] init]; // The activity occurrence object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Create a new activity occurrence. Ex: start a game
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
 **activityOccurrenceResource** | [**JSAPICreateActivityOccurrenceRequest***](JSAPICreateActivityOccurrenceRequest.md)| The activity occurrence object | [optional] 

### Return type

[**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createActivityTemplate**
```objc
-(NSURLSessionTask*) createActivityTemplateWithActivityTemplateResource: (JSAPITemplateResource*) activityTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a activity template

Activity Templates define a type of activity and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* activityTemplateResource = [[JSAPITemplateResource alloc] init]; // The activity template resource object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Create a activity template
[apiInstance createActivityTemplateWithActivityTemplateResource:activityTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->createActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The activity template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteActivityTemplate**
```objc
-(NSURLSessionTask*) deleteActivityTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a activity template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Delete a activity template
[apiInstance deleteActivityTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->deleteActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
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

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivity**
```objc
-(NSURLSessionTask*) getActivityWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIActivityResource* output, NSError* error)) handler;
```

Get a single activity

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivityOccurrenceDetails**
```objc
-(NSURLSessionTask*) getActivityOccurrenceDetailsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
        completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;
```

Load a single activity occurrence details

<b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Load a single activity occurrence details
[apiInstance getActivityOccurrenceDetailsWithActivityOccurrenceId:activityOccurrenceId
          completionHandler: ^(JSAPIActivityOccurrenceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->getActivityOccurrenceDetails: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 

### Return type

[**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivityTemplate**
```objc
-(NSURLSessionTask*) getActivityTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single activity template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Get a single activity template
[apiInstance getActivityTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->getActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivityTemplates**
```objc
-(NSURLSessionTask*) getActivityTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search activity templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// List and search activity templates
[apiInstance getActivityTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->getActivityTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listActivityOccurrences**
```objc
-(NSURLSessionTask*) listActivityOccurrencesWithFilterActivity: (NSString*) filterActivity
    filterStatus: (NSString*) filterStatus
    filterEvent: (NSNumber*) filterEvent
    filterChallenge: (NSNumber*) filterChallenge
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceActivityOccurrenceResource_* output, NSError* error)) handler;
```

List activity occurrences

<b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterActivity = @"filterActivity_example"; // Filter for occurrences of the given activity ID (optional)
NSString* filterStatus = @"filterStatus_example"; // Filter for occurrences in the given status (optional)
NSNumber* filterEvent = @56; // Filter for occurrences played during the given event (optional)
NSNumber* filterChallenge = @56; // Filter for occurrences played within the given challenge (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// List activity occurrences
[apiInstance listActivityOccurrencesWithFilterActivity:filterActivity
              filterStatus:filterStatus
              filterEvent:filterEvent
              filterChallenge:filterChallenge
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceActivityOccurrenceResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->listActivityOccurrences: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterActivity** | **NSString***| Filter for occurrences of the given activity ID | [optional] 
 **filterStatus** | **NSString***| Filter for occurrences in the given status | [optional] 
 **filterEvent** | **NSNumber***| Filter for occurrences played during the given event | [optional] 
 **filterChallenge** | **NSNumber***| Filter for occurrences played within the given challenge | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceActivityOccurrenceResource_***](JSAPIPageResourceActivityOccurrenceResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeUser**
```objc
-(NSURLSessionTask*) removeUserWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    userId: (NSString*) userId
    ban: (NSNumber*) ban
    bypassRestrictions: (NSNumber*) bypassRestrictions
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a user from an occurrence

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
NSString* userId = @"userId_example"; // The id of the user, or 'me'
NSNumber* ban = @false; // if true, indicates that the user should not be allowed to re-join. Can only be set by host or admin (optional) (default to false)
NSNumber* bypassRestrictions = @false; // if true, indicates that restrictions such as current status should be ignored. Can only be used with ACTIVITIES_ADMIN (optional) (default to false)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Remove a user from an occurrence
[apiInstance removeUserWithActivityOccurrenceId:activityOccurrenceId
              userId:userId
              ban:ban
              bypassRestrictions:bypassRestrictions
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->removeUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **userId** | **NSString***| The id of the user, or &#39;me&#39; | 
 **ban** | **NSNumber***| if true, indicates that the user should not be allowed to re-join. Can only be set by host or admin | [optional] [default to false]
 **bypassRestrictions** | **NSNumber***| if true, indicates that restrictions such as current status should be ignored. Can only be used with ACTIVITIES_ADMIN | [optional] [default to false]

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setActivityOccurrenceResults**
```objc
-(NSURLSessionTask*) setActivityOccurrenceResultsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceResults: (JSAPIActivityOccurrenceResultsResource*) activityOccurrenceResults
        completionHandler: (void (^)(JSAPIActivityOccurrenceResults* output, NSError* error)) handler;
```

Sets the status of an activity occurrence to FINISHED and logs metrics

In addition to user permissions requirements there is security based on the core_settings.results_trust setting. <br><br><b>Permissions Needed:</b> ACTIVITIES_USER or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
JSAPIActivityOccurrenceResultsResource* activityOccurrenceResults = [[JSAPIActivityOccurrenceResultsResource alloc] init]; // The activity occurrence object (optional)

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
 **activityOccurrenceResults** | [**JSAPIActivityOccurrenceResultsResource***](JSAPIActivityOccurrenceResultsResource.md)| The activity occurrence object | [optional] 

### Return type

[**JSAPIActivityOccurrenceResults***](JSAPIActivityOccurrenceResults.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setActivityOccurrenceSettings**
```objc
-(NSURLSessionTask*) setActivityOccurrenceSettingsWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    settings: (JSAPIActivityOccurrenceSettingsResource*) settings
        completionHandler: (void (^)(JSAPIActivityOccurrenceResource* output, NSError* error)) handler;
```

Sets the settings of an activity occurrence

<b>Permissions Needed:</b> ACTIVITIES_USER and host or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
JSAPIActivityOccurrenceSettingsResource* settings = [[JSAPIActivityOccurrenceSettingsResource alloc] init]; // The new settings (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Sets the settings of an activity occurrence
[apiInstance setActivityOccurrenceSettingsWithActivityOccurrenceId:activityOccurrenceId
              settings:settings
          completionHandler: ^(JSAPIActivityOccurrenceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->setActivityOccurrenceSettings: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **settings** | [**JSAPIActivityOccurrenceSettingsResource***](JSAPIActivityOccurrenceSettingsResource.md)| The new settings | [optional] 

### Return type

[**JSAPIActivityOccurrenceResource***](JSAPIActivityOccurrenceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserStatus**
```objc
-(NSURLSessionTask*) setUserStatusWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    userId: (NSString*) userId
    status: (JSAPIActivityUserStatusWrapper*) status
        completionHandler: (void (^)(JSAPIActivityUserResource* output, NSError* error)) handler;
```

Set a user's status within an occurrence

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
NSString* userId = @"userId_example"; // The id of the user
JSAPIActivityUserStatusWrapper* status = [[JSAPIActivityUserStatusWrapper alloc] init]; // The new status (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Set a user's status within an occurrence
[apiInstance setUserStatusWithActivityOccurrenceId:activityOccurrenceId
              userId:userId
              status:status
          completionHandler: ^(JSAPIActivityUserResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->setUserStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **userId** | **NSString***| The id of the user | 
 **status** | [**JSAPIActivityUserStatusWrapper***](JSAPIActivityUserStatusWrapper.md)| The new status | [optional] 

### Return type

[**JSAPIActivityUserResource***](JSAPIActivityUserResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **activityResource** | [**JSAPIActivityResource***](JSAPIActivityResource.md)| The activity resource object | [optional] 

### Return type

[**JSAPIActivityResource***](JSAPIActivityResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateActivityOccurrenceStatus**
```objc
-(NSURLSessionTask*) updateActivityOccurrenceStatusWithActivityOccurrenceId: (NSNumber*) activityOccurrenceId
    activityOccurrenceStatus: (JSAPIActivityOccurrenceStatusWrapper*) activityOccurrenceStatus
        completionHandler: (void (^)(NSError* error)) handler;
```

Update the status of an activity occurrence

If setting to 'FINISHED' reward will be run based on current metrics that have been recorded already. Alternatively, see results endpoint to finish and record all metrics at once. Can be called by non-host participants if non_host_status_control is true. <br><br><b>Permissions Needed:</b> ACTIVITIES_USER and host or ACTIVITIES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityOccurrenceId = @789; // The id of the activity occurrence
JSAPIActivityOccurrenceStatusWrapper* activityOccurrenceStatus = [[JSAPIActivityOccurrenceStatusWrapper alloc] init]; // The activity occurrence status object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Update the status of an activity occurrence
[apiInstance updateActivityOccurrenceStatusWithActivityOccurrenceId:activityOccurrenceId
              activityOccurrenceStatus:activityOccurrenceStatus
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->updateActivityOccurrenceStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityOccurrenceId** | **NSNumber***| The id of the activity occurrence | 
 **activityOccurrenceStatus** | [**JSAPIActivityOccurrenceStatusWrapper***](JSAPIActivityOccurrenceStatusWrapper.md)| The activity occurrence status object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateActivityTemplate**
```objc
-(NSURLSessionTask*) updateActivityTemplateWithId: (NSString*) _id
    activityTemplateResource: (JSAPITemplateResource*) activityTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an activity template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* activityTemplateResource = [[JSAPITemplateResource alloc] init]; // The activity template resource object (optional)

JSAPIActivitiesApi*apiInstance = [[JSAPIActivitiesApi alloc] init];

// Update an activity template
[apiInstance updateActivityTemplateWithId:_id
              activityTemplateResource:activityTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIActivitiesApi->updateActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **activityTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The activity template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

