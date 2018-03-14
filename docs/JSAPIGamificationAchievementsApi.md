# JSAPIGamificationAchievementsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAchievement**](JSAPIGamificationAchievementsApi.md#createachievement) | **POST** /achievements | Create a new achievement definition
[**createAchievementTemplate**](JSAPIGamificationAchievementsApi.md#createachievementtemplate) | **POST** /achievements/templates | Create an achievement template
[**deleteAchievement**](JSAPIGamificationAchievementsApi.md#deleteachievement) | **DELETE** /achievements/{name} | Delete an achievement definition
[**deleteAchievementTemplate**](JSAPIGamificationAchievementsApi.md#deleteachievementtemplate) | **DELETE** /achievements/templates/{id} | Delete an achievement template
[**getAchievement**](JSAPIGamificationAchievementsApi.md#getachievement) | **GET** /achievements/{name} | Get a single achievement definition
[**getAchievementTemplate**](JSAPIGamificationAchievementsApi.md#getachievementtemplate) | **GET** /achievements/templates/{id} | Get a single achievement template
[**getAchievementTemplates**](JSAPIGamificationAchievementsApi.md#getachievementtemplates) | **GET** /achievements/templates | List and search achievement templates
[**getAchievementTriggers**](JSAPIGamificationAchievementsApi.md#getachievementtriggers) | **GET** /achievements/triggers | Get the list of triggers that can be used to trigger an achievement progress update
[**getAchievements**](JSAPIGamificationAchievementsApi.md#getachievements) | **GET** /achievements | Get all achievement definitions in the system
[**getDerivedAchievements**](JSAPIGamificationAchievementsApi.md#getderivedachievements) | **GET** /achievements/derived/{name} | Get a list of derived achievements
[**getUserAchievementProgress**](JSAPIGamificationAchievementsApi.md#getuserachievementprogress) | **GET** /users/{user_id}/achievements/{achievement_name} | Retrieve progress on a given achievement for a given user
[**getUserAchievementsProgress**](JSAPIGamificationAchievementsApi.md#getuserachievementsprogress) | **GET** /users/{user_id}/achievements | Retrieve progress on achievements for a given user
[**getUsersAchievementProgress**](JSAPIGamificationAchievementsApi.md#getusersachievementprogress) | **GET** /users/achievements/{achievement_name} | Retrieve progress on a given achievement for all users
[**getUsersAchievementsProgress**](JSAPIGamificationAchievementsApi.md#getusersachievementsprogress) | **GET** /users/achievements | Retrieve progress on achievements for all users
[**incrementAchievementProgress**](JSAPIGamificationAchievementsApi.md#incrementachievementprogress) | **POST** /users/{user_id}/achievements/{achievement_name}/progress | Increment an achievement progress record for a user
[**setAchievementProgress**](JSAPIGamificationAchievementsApi.md#setachievementprogress) | **PUT** /users/{user_id}/achievements/{achievement_name}/progress | Set an achievement progress record for a user
[**updateAchievement**](JSAPIGamificationAchievementsApi.md#updateachievement) | **PUT** /achievements/{name} | Update an achievement definition
[**updateAchievementTemplate**](JSAPIGamificationAchievementsApi.md#updateachievementtemplate) | **PUT** /achievements/templates/{id} | Update an achievement template


# **createAchievement**
```objc
-(NSURLSessionTask*) createAchievementWithAchievement: (JSAPIAchievementDefinitionResource*) achievement
        completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler;
```

Create a new achievement definition

If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIAchievementDefinitionResource* achievement = [[JSAPIAchievementDefinitionResource alloc] init]; // The achievement definition (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Create a new achievement definition
[apiInstance createAchievementWithAchievement:achievement
          completionHandler: ^(JSAPIAchievementDefinitionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->createAchievement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **achievement** | [**JSAPIAchievementDefinitionResource***](JSAPIAchievementDefinitionResource.md)| The achievement definition | [optional] 

### Return type

[**JSAPIAchievementDefinitionResource***](JSAPIAchievementDefinitionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createAchievementTemplate**
```objc
-(NSURLSessionTask*) createAchievementTemplateWithTemplate: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create an achievement template

Achievement templates define a type of achievement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The achievement template to be created (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Create an achievement template
[apiInstance createAchievementTemplateWithTemplate:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->createAchievementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The achievement template to be created | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAchievement**
```objc
-(NSURLSessionTask*) deleteAchievementWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an achievement definition

Will also disable the associated generated rule, if any. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Delete an achievement definition
[apiInstance deleteAchievementWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->deleteAchievement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the achievement | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAchievementTemplate**
```objc
-(NSURLSessionTask*) deleteAchievementTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an achievement template

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

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Delete an achievement template
[apiInstance deleteAchievementTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->deleteAchievementTemplate: %@", error);
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

# **getAchievement**
```objc
-(NSURLSessionTask*) getAchievementWithName: (NSString*) name
        completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler;
```

Get a single achievement definition

<b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Get a single achievement definition
[apiInstance getAchievementWithName:name
          completionHandler: ^(JSAPIAchievementDefinitionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getAchievement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the achievement | 

### Return type

[**JSAPIAchievementDefinitionResource***](JSAPIAchievementDefinitionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievementTemplate**
```objc
-(NSURLSessionTask*) getAchievementTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single achievement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Get a single achievement template
[apiInstance getAchievementTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getAchievementTemplate: %@", error);
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

# **getAchievementTemplates**
```objc
-(NSURLSessionTask*) getAchievementTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search achievement templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

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

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// List and search achievement templates
[apiInstance getAchievementTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getAchievementTemplates: %@", error);
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

# **getAchievementTriggers**
```objc
-(NSURLSessionTask*) getAchievementTriggersWithCompletionHandler: 
        (void (^)(NSArray<JSAPIBreTriggerResource>* output, NSError* error)) handler;
```

Get the list of triggers that can be used to trigger an achievement progress update

<b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Get the list of triggers that can be used to trigger an achievement progress update
[apiInstance getAchievementTriggersWithCompletionHandler: 
          ^(NSArray<JSAPIBreTriggerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getAchievementTriggers: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPIBreTriggerResource>***](JSAPIBreTriggerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievements**
```objc
-(NSURLSessionTask*) getAchievementsWithFilterTagset: (NSString*) filterTagset
    filterName: (NSString*) filterName
    filterHidden: (NSNumber*) filterHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    filterDerived: (NSNumber*) filterDerived
        completionHandler: (void (^)(JSAPIPageResourceAchievementDefinitionResource_* output, NSError* error)) handler;
```

Get all achievement definitions in the system

<b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTagset = @"filterTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterName = @"filterName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* filterHidden = @true; // Filter for achievements that are hidden or not (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
NSNumber* filterDerived = @false; // Filter for achievements that are derived from other services (optional) (default to false)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Get all achievement definitions in the system
[apiInstance getAchievementsWithFilterTagset:filterTagset
              filterName:filterName
              filterHidden:filterHidden
              size:size
              page:page
              order:order
              filterDerived:filterDerived
          completionHandler: ^(JSAPIPageResourceAchievementDefinitionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getAchievements: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **filterHidden** | **NSNumber***| Filter for achievements that are hidden or not | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]
 **filterDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] [default to false]

### Return type

[**JSAPIPageResourceAchievementDefinitionResource_***](JSAPIPageResourceAchievementDefinitionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDerivedAchievements**
```objc
-(NSURLSessionTask*) getDerivedAchievementsWithName: (NSString*) name
        completionHandler: (void (^)(NSArray<JSAPIAchievementDefinitionResource>* output, NSError* error)) handler;
```

Get a list of derived achievements

Used by other services that depend on achievements.  <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the derived achievement

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Get a list of derived achievements
[apiInstance getDerivedAchievementsWithName:name
          completionHandler: ^(NSArray<JSAPIAchievementDefinitionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getDerivedAchievements: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the derived achievement | 

### Return type

[**NSArray<JSAPIAchievementDefinitionResource>***](JSAPIAchievementDefinitionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserAchievementProgress**
```objc
-(NSURLSessionTask*) getUserAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
        completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler;
```

Retrieve progress on a given achievement for a given user

Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSString* achievementName = @"achievementName_example"; // The achievement's name

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Retrieve progress on a given achievement for a given user
[apiInstance getUserAchievementProgressWithUserId:userId
              achievementName:achievementName
          completionHandler: ^(JSAPIUserAchievementGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getUserAchievementProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **achievementName** | **NSString***| The achievement&#39;s name | 

### Return type

[**JSAPIUserAchievementGroupResource***](JSAPIUserAchievementGroupResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserAchievementsProgress**
```objc
-(NSURLSessionTask*) getUserAchievementsProgressWithUserId: (NSNumber*) userId
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on achievements for a given user

Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterAchievementName = @"filterAchievementName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Retrieve progress on achievements for a given user
[apiInstance getUserAchievementsProgressWithUserId:userId
              filterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementName:filterAchievementName
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getUserAchievementsProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **filterAchievementDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **filterAchievementTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterAchievementName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUserAchievementGroupResource_***](JSAPIPageResourceUserAchievementGroupResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersAchievementProgress**
```objc
-(NSURLSessionTask*) getUsersAchievementProgressWithAchievementName: (NSString*) achievementName
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on a given achievement for all users

Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* achievementName = @"achievementName_example"; // The achievement's name
NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterAchievementName = @"filterAchievementName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Retrieve progress on a given achievement for all users
[apiInstance getUsersAchievementProgressWithAchievementName:achievementName
              filterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementName:filterAchievementName
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getUsersAchievementProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **achievementName** | **NSString***| The achievement&#39;s name | 
 **filterAchievementDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **filterAchievementTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterAchievementName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUserAchievementGroupResource_***](JSAPIPageResourceUserAchievementGroupResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersAchievementsProgress**
```objc
-(NSURLSessionTask*) getUsersAchievementsProgressWithFilterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on achievements for all users

Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterAchievementName = @"filterAchievementName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Retrieve progress on achievements for all users
[apiInstance getUsersAchievementsProgressWithFilterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementName:filterAchievementName
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->getUsersAchievementsProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterAchievementDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **filterAchievementTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterAchievementName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceUserAchievementGroupResource_***](JSAPIPageResourceUserAchievementGroupResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **incrementAchievementProgress**
```objc
-(NSURLSessionTask*) incrementAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    progress: (JSAPIIntWrapper*) progress
        completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler;
```

Increment an achievement progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated and the provided value added to the existing progress. May be negative. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSString* achievementName = @"achievementName_example"; // The achievement's name
JSAPIIntWrapper* progress = [[JSAPIIntWrapper alloc] init]; // The amount to add to the progress value (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Increment an achievement progress record for a user
[apiInstance incrementAchievementProgressWithUserId:userId
              achievementName:achievementName
              progress:progress
          completionHandler: ^(JSAPIUserAchievementGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->incrementAchievementProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **achievementName** | **NSString***| The achievement&#39;s name | 
 **progress** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The amount to add to the progress value | [optional] 

### Return type

[**JSAPIUserAchievementGroupResource***](JSAPIUserAchievementGroupResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setAchievementProgress**
```objc
-(NSURLSessionTask*) setAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    progress: (JSAPIIntWrapper*) progress
        completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler;
```

Set an achievement progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated and progress set to the provided value. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSString* achievementName = @"achievementName_example"; // The achievement's name
JSAPIIntWrapper* progress = [[JSAPIIntWrapper alloc] init]; // The new progress value (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Set an achievement progress record for a user
[apiInstance setAchievementProgressWithUserId:userId
              achievementName:achievementName
              progress:progress
          completionHandler: ^(JSAPIUserAchievementGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->setAchievementProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **achievementName** | **NSString***| The achievement&#39;s name | 
 **progress** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The new progress value | [optional] 

### Return type

[**JSAPIUserAchievementGroupResource***](JSAPIUserAchievementGroupResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAchievement**
```objc
-(NSURLSessionTask*) updateAchievementWithName: (NSString*) name
    achievement: (JSAPIAchievementDefinitionResource*) achievement
        completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler;
```

Update an achievement definition

The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement
JSAPIAchievementDefinitionResource* achievement = [[JSAPIAchievementDefinitionResource alloc] init]; // The achievement definition (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Update an achievement definition
[apiInstance updateAchievementWithName:name
              achievement:achievement
          completionHandler: ^(JSAPIAchievementDefinitionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->updateAchievement: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the achievement | 
 **achievement** | [**JSAPIAchievementDefinitionResource***](JSAPIAchievementDefinitionResource.md)| The achievement definition | [optional] 

### Return type

[**JSAPIAchievementDefinitionResource***](JSAPIAchievementDefinitionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAchievementTemplate**
```objc
-(NSURLSessionTask*) updateAchievementTemplateWithId: (NSString*) _id
    template: (JSAPITemplateResource*) template
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an achievement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* template = [[JSAPITemplateResource alloc] init]; // The updated template (optional)

JSAPIGamificationAchievementsApi*apiInstance = [[JSAPIGamificationAchievementsApi alloc] init];

// Update an achievement template
[apiInstance updateAchievementTemplateWithId:_id
              template:template
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationAchievementsApi->updateAchievementTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The updated template | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

