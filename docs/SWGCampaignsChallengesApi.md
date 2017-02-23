# SWGCampaignsChallengesApi

All URIs are relative to *https://sandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createChallenge**](SWGCampaignsChallengesApi.md#createchallenge) | **POST** /challenges | Create a challenge
[**createChallengeActivity**](SWGCampaignsChallengesApi.md#createchallengeactivity) | **POST** /challenges/{challenge_id}/activities | Create a challenge activity
[**createChallengeTemplate**](SWGCampaignsChallengesApi.md#createchallengetemplate) | **POST** /challenges/templates | Create a challenge template
[**deleteChallenge**](SWGCampaignsChallengesApi.md#deletechallenge) | **DELETE** /challenges/{id} | Delete a challenge
[**deleteChallengeActivity**](SWGCampaignsChallengesApi.md#deletechallengeactivity) | **DELETE** /challenges/{challenge_id}/activities/{activity_id} | Delete a challenge activity
[**deleteChallengeEvent**](SWGCampaignsChallengesApi.md#deletechallengeevent) | **DELETE** /challenges/events/{id} | Delete a challenge event
[**deleteChallengeTemplate**](SWGCampaignsChallengesApi.md#deletechallengetemplate) | **DELETE** /challenges/templates/{id} | Delete a challenge template
[**getChallenge**](SWGCampaignsChallengesApi.md#getchallenge) | **GET** /challenges/{id} | Retrieve a challenge
[**getChallengeActivities**](SWGCampaignsChallengesApi.md#getchallengeactivities) | **GET** /challenges/{challenge_id}/activities | List and search challenge activities
[**getChallengeActivity**](SWGCampaignsChallengesApi.md#getchallengeactivity) | **GET** /challenges/{challenge_id}/activities/{activity_id} | Get a single challenge activity
[**getChallengeEvent**](SWGCampaignsChallengesApi.md#getchallengeevent) | **GET** /challenges/events/{id} | Retrieve a single challenge event details
[**getChallengeEvents**](SWGCampaignsChallengesApi.md#getchallengeevents) | **GET** /challenges/events | Retrieve a list of challenge events
[**getChallengeTemplate**](SWGCampaignsChallengesApi.md#getchallengetemplate) | **GET** /challenges/templates/{id} | Get a single challenge template
[**getChallengeTemplates**](SWGCampaignsChallengesApi.md#getchallengetemplates) | **GET** /challenges/templates | List and search challenge templates
[**getChallenges**](SWGCampaignsChallengesApi.md#getchallenges) | **GET** /challenges | Retrieve a list of challenges
[**updateChallenge**](SWGCampaignsChallengesApi.md#updatechallenge) | **PUT** /challenges/{id} | Update a challenge
[**updateChallengeActivity**](SWGCampaignsChallengesApi.md#updatechallengeactivity) | **PUT** /challenges/{challenge_id}/activities/{activity_id} | Update a challenge activity
[**updateChallengeTemplate**](SWGCampaignsChallengesApi.md#updatechallengetemplate) | **PUT** /challenges/templates/{id} | Update a challenge template


# **createChallenge**
```objc
-(NSURLSessionTask*) createChallengeWithChallengeResource: (SWGChallengeResource*) challengeResource
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Create a challenge

Challenges do not run on their own.  They must be added to a campaign before events will spawn.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGChallengeResource* challengeResource = [[SWGChallengeResource alloc] init]; // The challenge resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge
[apiInstance createChallengeWithChallengeResource:challengeResource
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeResource** | [**SWGChallengeResource***](SWGChallengeResource*.md)| The challenge resource object | [optional] 

### Return type

[**SWGChallengeResource***](SWGChallengeResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeActivity**
```objc
-(NSURLSessionTask*) createChallengeActivityWithChallengeId: (NSNumber*) challengeId
    challengeActivityResource: (SWGChallengeActivityResource*) challengeActivityResource
    validateSettings: (NSNumber*) validateSettings
        completionHandler: (void (^)(SWGChallengeActivityResource* output, NSError* error)) handler;
```

Create a challenge activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* challengeId = @789; // The challenge id
SWGChallengeActivityResource* challengeActivityResource = [[SWGChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)
NSNumber* validateSettings = @false; // Whether to validate the settings being sent against the available settings on the base activity. (optional) (default to false)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge activity
[apiInstance createChallengeActivityWithChallengeId:challengeId
              challengeActivityResource:challengeActivityResource
              validateSettings:validateSettings
          completionHandler: ^(SWGChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeId** | **NSNumber***| The challenge id | 
 **challengeActivityResource** | [**SWGChallengeActivityResource***](SWGChallengeActivityResource*.md)| The challenge activity resource object | [optional] 
 **validateSettings** | **NSNumber***| Whether to validate the settings being sent against the available settings on the base activity. | [optional] [default to false]

### Return type

[**SWGChallengeActivityResource***](SWGChallengeActivityResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeTemplate**
```objc
-(NSURLSessionTask*) createChallengeTemplateWithChallengeTemplateResource: (SWGTemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a challenge template

Challenge Templates define a type of challenge and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* challengeTemplateResource = [[SWGTemplateResource alloc] init]; // The challenge template resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge template
[apiInstance createChallengeTemplateWithChallengeTemplateResource:challengeTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallengeTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The challenge template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallenge**
```objc
-(NSURLSessionTask*) deleteChallengeWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge
[apiInstance deleteChallengeWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeActivity**
```objc
-(NSURLSessionTask*) deleteChallengeActivityWithActivityId: (NSNumber*) activityId
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityId = @789; // The activity id
NSNumber* challengeId = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge activity
[apiInstance deleteChallengeActivityWithActivityId:activityId
              challengeId:challengeId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityId** | **NSNumber***| The activity id | 
 **challengeId** | **NSNumber***| The challenge id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeEvent**
```objc
-(NSURLSessionTask*) deleteChallengeEventWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge event

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge event id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge event
[apiInstance deleteChallengeEventWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge event id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeTemplate**
```objc
-(NSURLSessionTask*) deleteChallengeTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge template
[apiInstance deleteChallengeTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallenge**
```objc
-(NSURLSessionTask*) getChallengeWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Retrieve a challenge

### Example 
```objc

NSNumber* _id = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a challenge
[apiInstance getChallengeWithId:_id
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge id | 

### Return type

[**SWGChallengeResource***](SWGChallengeResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivities**
```objc
-(NSURLSessionTask*) getChallengeActivitiesWithChallengeId: (NSNumber*) challengeId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceBareChallengeActivityResource_* output, NSError* error)) handler;
```

List and search challenge activities

### Example 
```objc

NSNumber* challengeId = @789; // The challenge id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// List and search challenge activities
[apiInstance getChallengeActivitiesWithChallengeId:challengeId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceBareChallengeActivityResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeActivities: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeId** | **NSNumber***| The challenge id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceBareChallengeActivityResource_***](SWGPageResourceBareChallengeActivityResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivity**
```objc
-(NSURLSessionTask*) getChallengeActivityWithActivityId: (NSNumber*) activityId
        completionHandler: (void (^)(SWGChallengeActivityResource* output, NSError* error)) handler;
```

Get a single challenge activity

### Example 
```objc

NSNumber* activityId = @789; // The activity id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Get a single challenge activity
[apiInstance getChallengeActivityWithActivityId:activityId
          completionHandler: ^(SWGChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityId** | **NSNumber***| The activity id | 

### Return type

[**SWGChallengeActivityResource***](SWGChallengeActivityResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEvent**
```objc
-(NSURLSessionTask*) getChallengeEventWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGChallengeEventResource* output, NSError* error)) handler;
```

Retrieve a single challenge event details

### Example 
```objc

NSNumber* _id = @789; // The challenge event id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a single challenge event details
[apiInstance getChallengeEventWithId:_id
          completionHandler: ^(SWGChallengeEventResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge event id | 

### Return type

[**SWGChallengeEventResource***](SWGChallengeEventResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEvents**
```objc
-(NSURLSessionTask*) getChallengeEventsWithFilterStartDate: (NSString*) filterStartDate
    filterEndDate: (NSString*) filterEndDate
    filterCampaigns: (NSNumber*) filterCampaigns
    filterChallenge: (NSNumber*) filterChallenge
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceChallengeEventResource_* output, NSError* error)) handler;
```

Retrieve a list of challenge events

### Example 
```objc

NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* filterCampaigns = @true; // check only for events from currently running campaigns (optional)
NSNumber* filterChallenge = @789; // check only for events from the challenge specified by id (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a list of challenge events
[apiInstance getChallengeEventsWithFilterStartDate:filterStartDate
              filterEndDate:filterEndDate
              filterCampaigns:filterCampaigns
              filterChallenge:filterChallenge
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceChallengeEventResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeEvents: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEndDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterCampaigns** | **NSNumber***| check only for events from currently running campaigns | [optional] 
 **filterChallenge** | **NSNumber***| check only for events from the challenge specified by id | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceChallengeEventResource_***](SWGPageResourceChallengeEventResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeTemplate**
```objc
-(NSURLSessionTask*) getChallengeTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single challenge template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Get a single challenge template
[apiInstance getChallengeTemplateWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeTemplates**
```objc
-(NSURLSessionTask*) getChallengeTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search challenge templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// List and search challenge templates
[apiInstance getChallengeTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeTemplates: %@", error);
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

[**SWGPageResourceTemplateResource_***](SWGPageResourceTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallenges**
```objc
-(NSURLSessionTask*) getChallengesWithFilterTemplate: (NSNumber*) filterTemplate
    filterActiveCampaign: (NSNumber*) filterActiveCampaign
        completionHandler: (void (^)(SWGPageResourceChallengeResource_* output, NSError* error)) handler;
```

Retrieve a list of challenges

### Example 
```objc

NSNumber* filterTemplate = @true; // Filter for challenges that are not tied to campaigns (templates) (optional)
NSNumber* filterActiveCampaign = @true; // Filter for challenges that are tied to active campaigns (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a list of challenges
[apiInstance getChallengesWithFilterTemplate:filterTemplate
              filterActiveCampaign:filterActiveCampaign
          completionHandler: ^(SWGPageResourceChallengeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallenges: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSNumber***| Filter for challenges that are not tied to campaigns (templates) | [optional] 
 **filterActiveCampaign** | **NSNumber***| Filter for challenges that are tied to active campaigns | [optional] 

### Return type

[**SWGPageResourceChallengeResource_***](SWGPageResourceChallengeResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallenge**
```objc
-(NSURLSessionTask*) updateChallengeWithId: (NSNumber*) _id
    challengeResource: (SWGChallengeResource*) challengeResource
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Update a challenge

If the challenge is a copy, changes will propagate to all the related challenges

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge id
SWGChallengeResource* challengeResource = [[SWGChallengeResource alloc] init]; // The challenge resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge
[apiInstance updateChallengeWithId:_id
              challengeResource:challengeResource
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge id | 
 **challengeResource** | [**SWGChallengeResource***](SWGChallengeResource*.md)| The challenge resource object | [optional] 

### Return type

[**SWGChallengeResource***](SWGChallengeResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeActivity**
```objc
-(NSURLSessionTask*) updateChallengeActivityWithActivityId: (NSNumber*) activityId
    challengeId: (NSNumber*) challengeId
    challengeActivityResource: (SWGChallengeActivityResource*) challengeActivityResource
        completionHandler: (void (^)(SWGChallengeActivityResource* output, NSError* error)) handler;
```

Update a challenge activity

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* activityId = @789; // The activity id
NSNumber* challengeId = @789; // The challenge id
SWGChallengeActivityResource* challengeActivityResource = [[SWGChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge activity
[apiInstance updateChallengeActivityWithActivityId:activityId
              challengeId:challengeId
              challengeActivityResource:challengeActivityResource
          completionHandler: ^(SWGChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **activityId** | **NSNumber***| The activity id | 
 **challengeId** | **NSNumber***| The challenge id | 
 **challengeActivityResource** | [**SWGChallengeActivityResource***](SWGChallengeActivityResource*.md)| The challenge activity resource object | [optional] 

### Return type

[**SWGChallengeActivityResource***](SWGChallengeActivityResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeTemplate**
```objc
-(NSURLSessionTask*) updateChallengeTemplateWithId: (NSString*) _id
    challengeTemplateResource: (SWGTemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Update a challenge template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* challengeTemplateResource = [[SWGTemplateResource alloc] init]; // The challenge template resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge template
[apiInstance updateChallengeTemplateWithId:_id
              challengeTemplateResource:challengeTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallengeTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **challengeTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The challenge template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

