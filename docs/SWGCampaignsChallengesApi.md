# SWGCampaignsChallengesApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createChallengeActivityUsingPOST**](SWGCampaignsChallengesApi.md#createchallengeactivityusingpost) | **POST** /challenges/{challenge_id}/activities | Create a challenge activity
[**createChallengeTemplateUsingPOST**](SWGCampaignsChallengesApi.md#createchallengetemplateusingpost) | **POST** /challenges/templates | Create a challenge template
[**createChallengeUsingPOST**](SWGCampaignsChallengesApi.md#createchallengeusingpost) | **POST** /challenges | Create a challenge
[**deleteChallengeActivityUsingDELETE**](SWGCampaignsChallengesApi.md#deletechallengeactivityusingdelete) | **DELETE** /challenges/{challenge_id}/activities/{activity_id} | Delete a challenge activity
[**deleteChallengeEventUsingDELETE**](SWGCampaignsChallengesApi.md#deletechallengeeventusingdelete) | **DELETE** /challenges/events/{id} | Delete a challenge event
[**deleteChallengeTemplateUsingDELETE**](SWGCampaignsChallengesApi.md#deletechallengetemplateusingdelete) | **DELETE** /challenges/templates/{id} | Delete a challenge template
[**deleteChallengeUsingDELETE**](SWGCampaignsChallengesApi.md#deletechallengeusingdelete) | **DELETE** /challenges/{id} | Delete a challenge
[**getActivitiesUsingGET1**](SWGCampaignsChallengesApi.md#getactivitiesusingget1) | **GET** /challenges/{challenge_id}/activities | List and search challenge activities
[**getChallengeActivityUsingGET**](SWGCampaignsChallengesApi.md#getchallengeactivityusingget) | **GET** /challenges/{challenge_id}/activities/{activity_id} | Get a single challenge activity
[**getChallengeEventUsingGET**](SWGCampaignsChallengesApi.md#getchallengeeventusingget) | **GET** /challenges/events/{id} | Retrieve a single challenge event details
[**getChallengeEventssUsingGET**](SWGCampaignsChallengesApi.md#getchallengeeventssusingget) | **GET** /challenges/events | Retrieve a list of challenge events
[**getChallengeTemplateUsingGET**](SWGCampaignsChallengesApi.md#getchallengetemplateusingget) | **GET** /challenges/templates/{id} | Get a single challenge template
[**getChallengeTemplatesUsingGET**](SWGCampaignsChallengesApi.md#getchallengetemplatesusingget) | **GET** /challenges/templates | List and search challenge templates
[**getChallengeUsingGET**](SWGCampaignsChallengesApi.md#getchallengeusingget) | **GET** /challenges/{id} | Retrieve a single challenge details
[**getChallengesUsingGET1**](SWGCampaignsChallengesApi.md#getchallengesusingget1) | **GET** /challenges | Retrieve a list of challenges
[**updateChallengeActivityUsingPUT**](SWGCampaignsChallengesApi.md#updatechallengeactivityusingput) | **PUT** /challenges/{challenge_id}/activities/{activity_id} | Update a challenge activity
[**updateChallengeTemplateUsingPUT**](SWGCampaignsChallengesApi.md#updatechallengetemplateusingput) | **PUT** /challenges/templates/{id} | Update a challenge template
[**updateChallengeUsingPUT**](SWGCampaignsChallengesApi.md#updatechallengeusingput) | **PUT** /challenges/{id} | Update a challenge&#39;s information


# **createChallengeActivityUsingPOST**
```objc
-(NSNumber*) createChallengeActivityUsingPOSTWithChallengeId: (NSNumber*) challengeId
    challengeActivityResource: (SWGChallengeActivityResource*) challengeActivityResource
    validateSettings: (NSNumber*) validateSettings
        completionHandler: (void (^)(SWGChallengeActivityResource* output, NSError* error)) handler;
```

Create a challenge activity

### Example 
```objc

NSNumber* challengeId = @789; // The challenge id
SWGChallengeActivityResource* challengeActivityResource = [[SWGChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)
NSNumber* validateSettings = @false; // Whether to validate the settings being sent against the available settings on the base activity. (optional) (default to false)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge activity
[apiInstance createChallengeActivityUsingPOSTWithChallengeId:challengeId
              challengeActivityResource:challengeActivityResource
              validateSettings:validateSettings
          completionHandler: ^(SWGChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallengeActivityUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeTemplateUsingPOST**
```objc
-(NSNumber*) createChallengeTemplateUsingPOSTWithChallengeTemplateResource: (SWGTemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a challenge template

Challenge Templates define a type of challenge and the properties they have

### Example 
```objc

SWGTemplateResource* challengeTemplateResource = [[SWGTemplateResource alloc] init]; // The challenge template resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge template
[apiInstance createChallengeTemplateUsingPOSTWithChallengeTemplateResource:challengeTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallengeTemplateUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeUsingPOST**
```objc
-(NSNumber*) createChallengeUsingPOSTWithChallengeResource: (SWGChallengeResource*) challengeResource
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Create a challenge

Challenges do not run on their own.  They must be added to a campaign before events will spawn.

### Example 
```objc

SWGChallengeResource* challengeResource = [[SWGChallengeResource alloc] init]; // The challenge resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Create a challenge
[apiInstance createChallengeUsingPOSTWithChallengeResource:challengeResource
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->createChallengeUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeActivityUsingDELETE**
```objc
-(NSNumber*) deleteChallengeActivityUsingDELETEWithActivityId: (NSNumber*) activityId
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge activity

### Example 
```objc

NSNumber* activityId = @789; // The activity id
NSNumber* challengeId = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge activity
[apiInstance deleteChallengeActivityUsingDELETEWithActivityId:activityId
              challengeId:challengeId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeActivityUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeEventUsingDELETE**
```objc
-(NSNumber*) deleteChallengeEventUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge event

### Example 
```objc

NSNumber* _id = @789; // The challenge event id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge event
[apiInstance deleteChallengeEventUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeEventUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeTemplateUsingDELETE**
```objc
-(NSNumber*) deleteChallengeTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge template
[apiInstance deleteChallengeTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeTemplateUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeUsingDELETE**
```objc
-(NSNumber*) deleteChallengeUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge

### Example 
```objc

NSNumber* _id = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Delete a challenge
[apiInstance deleteChallengeUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->deleteChallengeUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getActivitiesUsingGET1**
```objc
-(NSNumber*) getActivitiesUsingGET1WithChallengeId: (NSNumber*) challengeId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageBareChallengeActivityResource_* output, NSError* error)) handler;
```

List and search challenge activities

### Example 
```objc

NSNumber* challengeId = @789; // The challenge id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// List and search challenge activities
[apiInstance getActivitiesUsingGET1WithChallengeId:challengeId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageBareChallengeActivityResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getActivitiesUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeId** | **NSNumber***| The challenge id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageBareChallengeActivityResource_***](SWGPageBareChallengeActivityResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivityUsingGET**
```objc
-(NSNumber*) getChallengeActivityUsingGETWithActivityId: (NSNumber*) activityId
        completionHandler: (void (^)(SWGChallengeActivityResource* output, NSError* error)) handler;
```

Get a single challenge activity

### Example 
```objc

NSNumber* activityId = @789; // The activity id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Get a single challenge activity
[apiInstance getChallengeActivityUsingGETWithActivityId:activityId
          completionHandler: ^(SWGChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeActivityUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEventUsingGET**
```objc
-(NSNumber*) getChallengeEventUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGChallengeEventResource* output, NSError* error)) handler;
```

Retrieve a single challenge event details

### Example 
```objc

NSNumber* _id = @789; // The challenge event id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a single challenge event details
[apiInstance getChallengeEventUsingGETWithId:_id
          completionHandler: ^(SWGChallengeEventResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeEventUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEventssUsingGET**
```objc
-(NSNumber*) getChallengeEventssUsingGETWithFilterStartDateMin: (NSNumber*) filterStartDateMin
    filterStartDateMax: (NSNumber*) filterStartDateMax
    filterEndDateMin: (NSNumber*) filterEndDateMin
    filterEndDateMax: (NSNumber*) filterEndDateMax
    filterCampaigns: (NSNumber*) filterCampaigns
    filterChallenge: (NSNumber*) filterChallenge
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageChallengeEventResource_* output, NSError* error)) handler;
```

Retrieve a list of challenge events

### Example 
```objc

NSNumber* filterStartDateMin = @789; // events starting after this date, unix timestamp in seconds (optional)
NSNumber* filterStartDateMax = @789; // events starting before this date, unix timestamp in seconds (optional)
NSNumber* filterEndDateMin = @789; // events ending after this date, unix timestamp in seconds (optional)
NSNumber* filterEndDateMax = @789; // events ending before this date, unix timestamp in seconds (optional)
NSNumber* filterCampaigns = @true; // check only for events from currently running campaigns (optional)
NSNumber* filterChallenge = @789; // check only for events from the challenge specified by id (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a list of challenge events
[apiInstance getChallengeEventssUsingGETWithFilterStartDateMin:filterStartDateMin
              filterStartDateMax:filterStartDateMax
              filterEndDateMin:filterEndDateMin
              filterEndDateMax:filterEndDateMax
              filterCampaigns:filterCampaigns
              filterChallenge:filterChallenge
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageChallengeEventResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeEventssUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterStartDateMin** | **NSNumber***| events starting after this date, unix timestamp in seconds | [optional] 
 **filterStartDateMax** | **NSNumber***| events starting before this date, unix timestamp in seconds | [optional] 
 **filterEndDateMin** | **NSNumber***| events ending after this date, unix timestamp in seconds | [optional] 
 **filterEndDateMax** | **NSNumber***| events ending before this date, unix timestamp in seconds | [optional] 
 **filterCampaigns** | **NSNumber***| check only for events from currently running campaigns | [optional] 
 **filterChallenge** | **NSNumber***| check only for events from the challenge specified by id | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageChallengeEventResource_***](SWGPageChallengeEventResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeTemplateUsingGET**
```objc
-(NSNumber*) getChallengeTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single challenge template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Get a single challenge template
[apiInstance getChallengeTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeTemplateUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeTemplatesUsingGET**
```objc
-(NSNumber*) getChallengeTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageTemplateResource_* output, NSError* error)) handler;
```

List and search challenge templates

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// List and search challenge templates
[apiInstance getChallengeTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeTemplatesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageTemplateResource_***](SWGPageTemplateResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeUsingGET**
```objc
-(NSNumber*) getChallengeUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Retrieve a single challenge details

### Example 
```objc

NSNumber* _id = @789; // The challenge id

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a single challenge details
[apiInstance getChallengeUsingGETWithId:_id
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengeUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengesUsingGET1**
```objc
-(NSNumber*) getChallengesUsingGET1WithFilterTemplate: (NSNumber*) filterTemplate
    filterActiveCampaign: (NSNumber*) filterActiveCampaign
        completionHandler: (void (^)(SWGPageChallengeResource_* output, NSError* error)) handler;
```

Retrieve a list of challenges

### Example 
```objc

NSNumber* filterTemplate = @true; // Filter for challenges that are not tied to campaigns (templates) (optional)
NSNumber* filterActiveCampaign = @true; // Filter for challenges that are tied to active campaigns (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Retrieve a list of challenges
[apiInstance getChallengesUsingGET1WithFilterTemplate:filterTemplate
              filterActiveCampaign:filterActiveCampaign
          completionHandler: ^(SWGPageChallengeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->getChallengesUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTemplate** | **NSNumber***| Filter for challenges that are not tied to campaigns (templates) | [optional] 
 **filterActiveCampaign** | **NSNumber***| Filter for challenges that are tied to active campaigns | [optional] 

### Return type

[**SWGPageChallengeResource_***](SWGPageChallengeResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeActivityUsingPUT**
```objc
-(NSNumber*) updateChallengeActivityUsingPUTWithActivityId: (NSNumber*) activityId
    challengeId: (NSNumber*) challengeId
    challengeActivityResource: (SWGChallengeActivityResource*) challengeActivityResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a challenge activity

### Example 
```objc

NSNumber* activityId = @789; // The activity id
NSNumber* challengeId = @789; // The challenge id
SWGChallengeActivityResource* challengeActivityResource = [[SWGChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge activity
[apiInstance updateChallengeActivityUsingPUTWithActivityId:activityId
              challengeId:challengeId
              challengeActivityResource:challengeActivityResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallengeActivityUsingPUT: %@", error);
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

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeTemplateUsingPUT**
```objc
-(NSNumber*) updateChallengeTemplateUsingPUTWithId: (NSString*) _id
    challengeTemplateResource: (SWGTemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a challenge template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* challengeTemplateResource = [[SWGTemplateResource alloc] init]; // The challenge template resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge template
[apiInstance updateChallengeTemplateUsingPUTWithId:_id
              challengeTemplateResource:challengeTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallengeTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **challengeTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The challenge template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeUsingPUT**
```objc
-(NSNumber*) updateChallengeUsingPUTWithId: (NSNumber*) _id
    challengeResource: (SWGChallengeResource*) challengeResource
        completionHandler: (void (^)(SWGChallengeResource* output, NSError* error)) handler;
```

Update a challenge's information

If the challenge is a copy, changes will propagate to all the related challenges

### Example 
```objc

NSNumber* _id = @789; // The challenge id
SWGChallengeResource* challengeResource = [[SWGChallengeResource alloc] init]; // The challenge resource object (optional)

SWGCampaignsChallengesApi*apiInstance = [[SWGCampaignsChallengesApi alloc] init];

// Update a challenge's information
[apiInstance updateChallengeUsingPUTWithId:_id
              challengeResource:challengeResource
          completionHandler: ^(SWGChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsChallengesApi->updateChallengeUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

