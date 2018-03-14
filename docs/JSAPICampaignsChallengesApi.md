# JSAPICampaignsChallengesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createChallenge**](JSAPICampaignsChallengesApi.md#createchallenge) | **POST** /challenges | Create a challenge
[**createChallengeActivity**](JSAPICampaignsChallengesApi.md#createchallengeactivity) | **POST** /challenges/{challenge_id}/activities | Create a challenge activity
[**createChallengeActivityTemplate**](JSAPICampaignsChallengesApi.md#createchallengeactivitytemplate) | **POST** /challenge-activities/templates | Create a challenge activity template
[**createChallengeTemplate**](JSAPICampaignsChallengesApi.md#createchallengetemplate) | **POST** /challenges/templates | Create a challenge template
[**deleteChallenge**](JSAPICampaignsChallengesApi.md#deletechallenge) | **DELETE** /challenges/{id} | Delete a challenge
[**deleteChallengeActivity**](JSAPICampaignsChallengesApi.md#deletechallengeactivity) | **DELETE** /challenges/{challenge_id}/activities/{id} | Delete a challenge activity
[**deleteChallengeActivityTemplate**](JSAPICampaignsChallengesApi.md#deletechallengeactivitytemplate) | **DELETE** /challenge-activities/templates/{id} | Delete a challenge activity template
[**deleteChallengeEvent**](JSAPICampaignsChallengesApi.md#deletechallengeevent) | **DELETE** /challenges/events/{id} | Delete a challenge event
[**deleteChallengeTemplate**](JSAPICampaignsChallengesApi.md#deletechallengetemplate) | **DELETE** /challenges/templates/{id} | Delete a challenge template
[**getChallenge**](JSAPICampaignsChallengesApi.md#getchallenge) | **GET** /challenges/{id} | Retrieve a challenge
[**getChallengeActivities**](JSAPICampaignsChallengesApi.md#getchallengeactivities) | **GET** /challenges/{challenge_id}/activities | List and search challenge activities
[**getChallengeActivity**](JSAPICampaignsChallengesApi.md#getchallengeactivity) | **GET** /challenges/{challenge_id}/activities/{id} | Get a single challenge activity
[**getChallengeActivityTemplate**](JSAPICampaignsChallengesApi.md#getchallengeactivitytemplate) | **GET** /challenge-activities/templates/{id} | Get a single challenge activity template
[**getChallengeActivityTemplates**](JSAPICampaignsChallengesApi.md#getchallengeactivitytemplates) | **GET** /challenge-activities/templates | List and search challenge activity templates
[**getChallengeEvent**](JSAPICampaignsChallengesApi.md#getchallengeevent) | **GET** /challenges/events/{id} | Retrieve a single challenge event details
[**getChallengeEvents**](JSAPICampaignsChallengesApi.md#getchallengeevents) | **GET** /challenges/events | Retrieve a list of challenge events
[**getChallengeTemplate**](JSAPICampaignsChallengesApi.md#getchallengetemplate) | **GET** /challenges/templates/{id} | Get a single challenge template
[**getChallengeTemplates**](JSAPICampaignsChallengesApi.md#getchallengetemplates) | **GET** /challenges/templates | List and search challenge templates
[**getChallenges**](JSAPICampaignsChallengesApi.md#getchallenges) | **GET** /challenges | Retrieve a list of challenges
[**updateChallenge**](JSAPICampaignsChallengesApi.md#updatechallenge) | **PUT** /challenges/{id} | Update a challenge
[**updateChallengeActivity**](JSAPICampaignsChallengesApi.md#updatechallengeactivity) | **PUT** /challenges/{challenge_id}/activities/{id} | Update a challenge activity
[**updateChallengeActivityTemplate**](JSAPICampaignsChallengesApi.md#updatechallengeactivitytemplate) | **PUT** /challenge-activities/templates/{id} | Update an challenge activity template
[**updateChallengeTemplate**](JSAPICampaignsChallengesApi.md#updatechallengetemplate) | **PUT** /challenges/templates/{id} | Update a challenge template


# **createChallenge**
```objc
-(NSURLSessionTask*) createChallengeWithChallengeResource: (JSAPIChallengeResource*) challengeResource
        completionHandler: (void (^)(JSAPIChallengeResource* output, NSError* error)) handler;
```

Create a challenge

Challenges do not run on their own.  They must be added to a campaign before events will spawn. <br><br><b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIChallengeResource* challengeResource = [[JSAPIChallengeResource alloc] init]; // The challenge resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Create a challenge
[apiInstance createChallengeWithChallengeResource:challengeResource
          completionHandler: ^(JSAPIChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->createChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeResource** | [**JSAPIChallengeResource***](JSAPIChallengeResource.md)| The challenge resource object | [optional] 

### Return type

[**JSAPIChallengeResource***](JSAPIChallengeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeActivity**
```objc
-(NSURLSessionTask*) createChallengeActivityWithChallengeId: (NSNumber*) challengeId
    challengeActivityResource: (JSAPIChallengeActivityResource*) challengeActivityResource
    validateSettings: (NSNumber*) validateSettings
        completionHandler: (void (^)(JSAPIChallengeActivityResource* output, NSError* error)) handler;
```

Create a challenge activity

<b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* challengeId = @789; // The challenge id
JSAPIChallengeActivityResource* challengeActivityResource = [[JSAPIChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)
NSNumber* validateSettings = @false; // Whether to validate the settings being sent against the available settings on the base activity. (optional) (default to false)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Create a challenge activity
[apiInstance createChallengeActivityWithChallengeId:challengeId
              challengeActivityResource:challengeActivityResource
              validateSettings:validateSettings
          completionHandler: ^(JSAPIChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->createChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeId** | **NSNumber***| The challenge id | 
 **challengeActivityResource** | [**JSAPIChallengeActivityResource***](JSAPIChallengeActivityResource.md)| The challenge activity resource object | [optional] 
 **validateSettings** | **NSNumber***| Whether to validate the settings being sent against the available settings on the base activity. | [optional] [default to false]

### Return type

[**JSAPIChallengeActivityResource***](JSAPIChallengeActivityResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeActivityTemplate**
```objc
-(NSURLSessionTask*) createChallengeActivityTemplateWithChallengeActivityTemplateResource: (JSAPITemplateResource*) challengeActivityTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a challenge activity template

Challenge Activity Templates define a type of challenge activity and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* challengeActivityTemplateResource = [[JSAPITemplateResource alloc] init]; // The challengeActivity template resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Create a challenge activity template
[apiInstance createChallengeActivityTemplateWithChallengeActivityTemplateResource:challengeActivityTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->createChallengeActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeActivityTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The challengeActivity template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createChallengeTemplate**
```objc
-(NSURLSessionTask*) createChallengeTemplateWithChallengeTemplateResource: (JSAPITemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a challenge template

Challenge Templates define a type of challenge and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* challengeTemplateResource = [[JSAPITemplateResource alloc] init]; // The challenge template resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Create a challenge template
[apiInstance createChallengeTemplateWithChallengeTemplateResource:challengeTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->createChallengeTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **challengeTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The challenge template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Delete a challenge
[apiInstance deleteChallengeWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->deleteChallenge: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeActivity**
```objc
-(NSURLSessionTask*) deleteChallengeActivityWithId: (NSNumber*) _id
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge activity

A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge. <br><br><b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge_activity id
NSNumber* challengeId = @789; // The challenge id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Delete a challenge activity
[apiInstance deleteChallengeActivityWithId:_id
              challengeId:challengeId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->deleteChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge_activity id | 
 **challengeId** | **NSNumber***| The challenge id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeActivityTemplate**
```objc
-(NSURLSessionTask*) deleteChallengeActivityTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge activity template

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

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Delete a challenge activity template
[apiInstance deleteChallengeActivityTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->deleteChallengeActivityTemplate: %@", error);
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

# **deleteChallengeEvent**
```objc
-(NSURLSessionTask*) deleteChallengeEventWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge event

<b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge event id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Delete a challenge event
[apiInstance deleteChallengeEventWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->deleteChallengeEvent: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteChallengeTemplate**
```objc
-(NSURLSessionTask*) deleteChallengeTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a challenge template

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

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Delete a challenge template
[apiInstance deleteChallengeTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->deleteChallengeTemplate: %@", error);
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

# **getChallenge**
```objc
-(NSURLSessionTask*) getChallengeWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIChallengeResource* output, NSError* error)) handler;
```

Retrieve a challenge

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Retrieve a challenge
[apiInstance getChallengeWithId:_id
          completionHandler: ^(JSAPIChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge id | 

### Return type

[**JSAPIChallengeResource***](JSAPIChallengeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivities**
```objc
-(NSURLSessionTask*) getChallengeActivitiesWithChallengeId: (NSNumber*) challengeId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceBareChallengeActivityResource_* output, NSError* error)) handler;
```

List and search challenge activities

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* challengeId = @789; // The challenge id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// List and search challenge activities
[apiInstance getChallengeActivitiesWithChallengeId:challengeId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceBareChallengeActivityResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeActivities: %@", error);
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

[**JSAPIPageResourceBareChallengeActivityResource_***](JSAPIPageResourceBareChallengeActivityResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivity**
```objc
-(NSURLSessionTask*) getChallengeActivityWithId: (NSNumber*) _id
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(JSAPIChallengeActivityResource* output, NSError* error)) handler;
```

Get a single challenge activity

A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge_activity id
NSNumber* challengeId = @789; // The challenge id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Get a single challenge activity
[apiInstance getChallengeActivityWithId:_id
              challengeId:challengeId
          completionHandler: ^(JSAPIChallengeActivityResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge_activity id | 
 **challengeId** | **NSNumber***| The challenge id | 

### Return type

[**JSAPIChallengeActivityResource***](JSAPIChallengeActivityResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeActivityTemplate**
```objc
-(NSURLSessionTask*) getChallengeActivityTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single challenge activity template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Get a single challenge activity template
[apiInstance getChallengeActivityTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeActivityTemplate: %@", error);
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

# **getChallengeActivityTemplates**
```objc
-(NSURLSessionTask*) getChallengeActivityTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search challenge activity templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CHALLENGES_ADMIN

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

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// List and search challenge activity templates
[apiInstance getChallengeActivityTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeActivityTemplates: %@", error);
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

# **getChallengeEvent**
```objc
-(NSURLSessionTask*) getChallengeEventWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIChallengeEventResource* output, NSError* error)) handler;
```

Retrieve a single challenge event details

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge event id

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Retrieve a single challenge event details
[apiInstance getChallengeEventWithId:_id
          completionHandler: ^(JSAPIChallengeEventResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge event id | 

### Return type

[**JSAPIChallengeEventResource***](JSAPIChallengeEventResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
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
        completionHandler: (void (^)(JSAPIPageResourceChallengeEventResource_* output, NSError* error)) handler;
```

Retrieve a list of challenge events

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the event end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* filterCampaigns = @true; // check only for events from currently running campaigns (optional)
NSNumber* filterChallenge = @789; // check only for events from the challenge specified by id (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Retrieve a list of challenge events
[apiInstance getChallengeEventsWithFilterStartDate:filterStartDate
              filterEndDate:filterEndDate
              filterCampaigns:filterCampaigns
              filterChallenge:filterChallenge
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChallengeEventResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeEvents: %@", error);
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

[**JSAPIPageResourceChallengeEventResource_***](JSAPIPageResourceChallengeEventResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeTemplate**
```objc
-(NSURLSessionTask*) getChallengeTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single challenge template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Get a single challenge template
[apiInstance getChallengeTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeTemplate: %@", error);
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

# **getChallengeTemplates**
```objc
-(NSURLSessionTask*) getChallengeTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search challenge templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CHALLENGES_ADMIN

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

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// List and search challenge templates
[apiInstance getChallengeTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallengeTemplates: %@", error);
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

# **getChallenges**
```objc
-(NSURLSessionTask*) getChallengesWithFilterActiveCampaign: (NSNumber*) filterActiveCampaign
    filterStartDate: (NSString*) filterStartDate
    filterEndDate: (NSString*) filterEndDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChallengeResource_* output, NSError* error)) handler;
```

Retrieve a list of challenges

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterActiveCampaign = @true; // Filter for challenges that are tied to active campaigns (optional)
NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Retrieve a list of challenges
[apiInstance getChallengesWithFilterActiveCampaign:filterActiveCampaign
              filterStartDate:filterStartDate
              filterEndDate:filterEndDate
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChallengeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->getChallenges: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterActiveCampaign** | **NSNumber***| Filter for challenges that are tied to active campaigns | [optional] 
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEndDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceChallengeResource_***](JSAPIPageResourceChallengeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallenge**
```objc
-(NSURLSessionTask*) updateChallengeWithId: (NSNumber*) _id
    challengeResource: (JSAPIChallengeResource*) challengeResource
        completionHandler: (void (^)(JSAPIChallengeResource* output, NSError* error)) handler;
```

Update a challenge

If the challenge is a copy, changes will propagate to all the related challenges. <br><br><b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge id
JSAPIChallengeResource* challengeResource = [[JSAPIChallengeResource alloc] init]; // The challenge resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Update a challenge
[apiInstance updateChallengeWithId:_id
              challengeResource:challengeResource
          completionHandler: ^(JSAPIChallengeResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->updateChallenge: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge id | 
 **challengeResource** | [**JSAPIChallengeResource***](JSAPIChallengeResource.md)| The challenge resource object | [optional] 

### Return type

[**JSAPIChallengeResource***](JSAPIChallengeResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeActivity**
```objc
-(NSURLSessionTask*) updateChallengeActivityWithId: (NSNumber*) _id
    challengeId: (NSNumber*) challengeId
    challengeActivityResource: (JSAPIChallengeActivityResource*) challengeActivityResource
    validateSettings: (NSNumber*) validateSettings
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a challenge activity

A challenge can have multiple instances of the same activity and thus the id used is of the specific entry within the challenge. <br><br><b>Permissions Needed:</b> CHALLENGES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The challenge_activity id
NSNumber* challengeId = @789; // The challenge id
JSAPIChallengeActivityResource* challengeActivityResource = [[JSAPIChallengeActivityResource alloc] init]; // The challenge activity resource object (optional)
NSNumber* validateSettings = @false; // Whether to validate the settings being sent against the available settings on the base activity. (optional) (default to false)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Update a challenge activity
[apiInstance updateChallengeActivityWithId:_id
              challengeId:challengeId
              challengeActivityResource:challengeActivityResource
              validateSettings:validateSettings
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->updateChallengeActivity: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The challenge_activity id | 
 **challengeId** | **NSNumber***| The challenge id | 
 **challengeActivityResource** | [**JSAPIChallengeActivityResource***](JSAPIChallengeActivityResource.md)| The challenge activity resource object | [optional] 
 **validateSettings** | **NSNumber***| Whether to validate the settings being sent against the available settings on the base activity. | [optional] [default to false]

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeActivityTemplate**
```objc
-(NSURLSessionTask*) updateChallengeActivityTemplateWithId: (NSString*) _id
    challengeActivityTemplateResource: (JSAPITemplateResource*) challengeActivityTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an challenge activity template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* challengeActivityTemplateResource = [[JSAPITemplateResource alloc] init]; // The challengeActivity template resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Update an challenge activity template
[apiInstance updateChallengeActivityTemplateWithId:_id
              challengeActivityTemplateResource:challengeActivityTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->updateChallengeActivityTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **challengeActivityTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The challengeActivity template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateChallengeTemplate**
```objc
-(NSURLSessionTask*) updateChallengeTemplateWithId: (NSString*) _id
    challengeTemplateResource: (JSAPITemplateResource*) challengeTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a challenge template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* challengeTemplateResource = [[JSAPITemplateResource alloc] init]; // The challenge template resource object (optional)

JSAPICampaignsChallengesApi*apiInstance = [[JSAPICampaignsChallengesApi alloc] init];

// Update a challenge template
[apiInstance updateChallengeTemplateWithId:_id
              challengeTemplateResource:challengeTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsChallengesApi->updateChallengeTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **challengeTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The challenge template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

