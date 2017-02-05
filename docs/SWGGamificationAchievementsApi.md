# SWGGamificationAchievementsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAchievementUsingPOST**](SWGGamificationAchievementsApi.md#createachievementusingpost) | **POST** /achievements | Create a new achievement definition
[**createTemplateUsingPOST**](SWGGamificationAchievementsApi.md#createtemplateusingpost) | **POST** /achievements/templates | Create an achievement template
[**deleteAchievementTemplateUsingDELETE**](SWGGamificationAchievementsApi.md#deleteachievementtemplateusingdelete) | **DELETE** /achievements/templates/{id} | Delete an achievement template
[**deleteAchievementUsingDELETE**](SWGGamificationAchievementsApi.md#deleteachievementusingdelete) | **DELETE** /achievements/{name} | Delete an achievement definition
[**findAllByGroupNameUsingGET**](SWGGamificationAchievementsApi.md#findallbygroupnameusingget) | **GET** /achievements/derived/{name} | Get a list of derived achievements
[**getAchievementTemplateUsingGET**](SWGGamificationAchievementsApi.md#getachievementtemplateusingget) | **GET** /achievements/templates/{id} | Get a single achievement template
[**getAchievementTemplatesUsingGET**](SWGGamificationAchievementsApi.md#getachievementtemplatesusingget) | **GET** /achievements/templates | List and search achievement templates
[**getAchievementUsingGET**](SWGGamificationAchievementsApi.md#getachievementusingget) | **GET** /achievements/{name} | Get a single achievement definition
[**getAchievementsUsingGET**](SWGGamificationAchievementsApi.md#getachievementsusingget) | **GET** /achievements | Get all achievement definitions in the system
[**getAllUserProgressForAchievementUsingGET**](SWGGamificationAchievementsApi.md#getalluserprogressforachievementusingget) | **GET** /users/achievements/{achievement_name} | Retrieve progress on a given achievement for all users
[**getAllUserProgressUsingGET**](SWGGamificationAchievementsApi.md#getalluserprogressusingget) | **GET** /users/achievements | Retrieve progress on achievements for all users
[**getAvailableTriggersUsingGET**](SWGGamificationAchievementsApi.md#getavailabletriggersusingget) | **GET** /achievements/triggers | Get the list of triggers that can be used to trigger an achievement progress update
[**getUserProgressForAchievementUsingGET**](SWGGamificationAchievementsApi.md#getuserprogressforachievementusingget) | **GET** /users/{user_id}/achievements/{achievement_name} | Retrieve progress on a given achievement for a given user
[**getUserProgressUsingGET**](SWGGamificationAchievementsApi.md#getuserprogressusingget) | **GET** /users/{user_id}/achievements | Retrieve progress on achievements for a given user
[**updateAchievementUsingPUT**](SWGGamificationAchievementsApi.md#updateachievementusingput) | **PUT** /achievements/{name} | Update an achievement definition
[**updateProgressUsingPUT**](SWGGamificationAchievementsApi.md#updateprogressusingput) | **PUT** /users/{user_id}/achievements/{achievement_name} | Update or create an achievement progress record for a user
[**updateTemplateUsingPUT**](SWGGamificationAchievementsApi.md#updatetemplateusingput) | **PUT** /achievements/templates/{id} | Update an achievement template


# **createAchievementUsingPOST**
```objc
-(NSURLSessionTask*) createAchievementUsingPOSTWithAchievement: (SWGAchievementDefinitionResource*) achievement
        completionHandler: (void (^)(SWGAchievementDefinitionResource* output, NSError* error)) handler;
```

Create a new achievement definition

If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGAchievementDefinitionResource* achievement = [[SWGAchievementDefinitionResource alloc] init]; // The achievement definition (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Create a new achievement definition
[apiInstance createAchievementUsingPOSTWithAchievement:achievement
          completionHandler: ^(SWGAchievementDefinitionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->createAchievementUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **achievement** | [**SWGAchievementDefinitionResource***](SWGAchievementDefinitionResource*.md)| The achievement definition | [optional] 

### Return type

[**SWGAchievementDefinitionResource***](SWGAchievementDefinitionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createTemplateUsingPOST**
```objc
-(NSURLSessionTask*) createTemplateUsingPOSTWithTemplate: (SWGTemplateResource*) template
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create an achievement template

Achievement templates define a type of achievement and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The achievement template to be created (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Create an achievement template
[apiInstance createTemplateUsingPOSTWithTemplate:template
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->createTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The achievement template to be created | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAchievementTemplateUsingDELETE**
```objc
-(NSURLSessionTask*) deleteAchievementTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an achievement template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Delete an achievement template
[apiInstance deleteAchievementTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->deleteAchievementTemplateUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAchievementUsingDELETE**
```objc
-(NSURLSessionTask*) deleteAchievementUsingDELETEWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an achievement definition

Will also disable the associated generated rule, if any.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Delete an achievement definition
[apiInstance deleteAchievementUsingDELETEWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->deleteAchievementUsingDELETE: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **findAllByGroupNameUsingGET**
```objc
-(NSURLSessionTask*) findAllByGroupNameUsingGETWithName: (NSString*) name
        completionHandler: (void (^)(NSArray<SWGAchievementDefinitionResource>* output, NSError* error)) handler;
```

Get a list of derived achievements

Used by other services that depend on achievements

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the derived achievement

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Get a list of derived achievements
[apiInstance findAllByGroupNameUsingGETWithName:name
          completionHandler: ^(NSArray<SWGAchievementDefinitionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->findAllByGroupNameUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the derived achievement | 

### Return type

[**NSArray<SWGAchievementDefinitionResource>***](SWGAchievementDefinitionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievementTemplateUsingGET**
```objc
-(NSURLSessionTask*) getAchievementTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single achievement template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Get a single achievement template
[apiInstance getAchievementTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAchievementTemplateUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievementTemplatesUsingGET**
```objc
-(NSURLSessionTask*) getAchievementTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search achievement templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// List and search achievement templates
[apiInstance getAchievementTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAchievementTemplatesUsingGET: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievementUsingGET**
```objc
-(NSURLSessionTask*) getAchievementUsingGETWithName: (NSString*) name
        completionHandler: (void (^)(SWGAchievementDefinitionResource* output, NSError* error)) handler;
```

Get a single achievement definition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Get a single achievement definition
[apiInstance getAchievementUsingGETWithName:name
          completionHandler: ^(SWGAchievementDefinitionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAchievementUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the achievement | 

### Return type

[**SWGAchievementDefinitionResource***](SWGAchievementDefinitionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAchievementsUsingGET**
```objc
-(NSURLSessionTask*) getAchievementsUsingGETWithFilterTagset: (NSString*) filterTagset
    filterName: (NSString*) filterName
    filterHidden: (NSNumber*) filterHidden
    filterDerived: (NSNumber*) filterDerived
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceAchievementDefinitionResource_* output, NSError* error)) handler;
```

Get all achievement definitions in the system

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterTagset = @"filterTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterName = @"filterName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* filterHidden = @true; // Filter for achievements that are hidden or not (optional)
NSNumber* filterDerived = @true; // Filter for achievements that are derived from other services (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Get all achievement definitions in the system
[apiInstance getAchievementsUsingGETWithFilterTagset:filterTagset
              filterName:filterName
              filterHidden:filterHidden
              filterDerived:filterDerived
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceAchievementDefinitionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAchievementsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **filterHidden** | **NSNumber***| Filter for achievements that are hidden or not | [optional] 
 **filterDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**SWGPageResourceAchievementDefinitionResource_***](SWGPageResourceAchievementDefinitionResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllUserProgressForAchievementUsingGET**
```objc
-(NSURLSessionTask*) getAllUserProgressForAchievementUsingGETWithAchievementName: (NSString*) achievementName
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on a given achievement for all users

Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* achievementName = @"achievementName_example"; // The achievement's name
NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSNumber* filterAchievementHidden = @true; // Filter for achievements that are hidden or not (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Retrieve progress on a given achievement for all users
[apiInstance getAllUserProgressForAchievementUsingGETWithAchievementName:achievementName
              filterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementHidden:filterAchievementHidden
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAllUserProgressForAchievementUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **achievementName** | **NSString***| The achievement&#39;s name | 
 **filterAchievementDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **filterAchievementTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterAchievementHidden** | **NSNumber***| Filter for achievements that are hidden or not | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUserAchievementGroupResource_***](SWGPageResourceUserAchievementGroupResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAllUserProgressUsingGET**
```objc
-(NSURLSessionTask*) getAllUserProgressUsingGETWithFilterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on achievements for all users

Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterAchievementName = @"filterAchievementName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* filterAchievementHidden = @true; // Filter for achievements that are hidden or not (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Retrieve progress on achievements for all users
[apiInstance getAllUserProgressUsingGETWithFilterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementName:filterAchievementName
              filterAchievementHidden:filterAchievementHidden
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAllUserProgressUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterAchievementDerived** | **NSNumber***| Filter for achievements that are derived from other services | [optional] 
 **filterAchievementTagset** | **NSString***| Filter for achievements with specified tags (separated by comma) | [optional] 
 **filterAchievementName** | **NSString***| Filter for achievements whose name contains a string | [optional] 
 **filterAchievementHidden** | **NSNumber***| Filter for achievements that are hidden or not | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUserAchievementGroupResource_***](SWGPageResourceUserAchievementGroupResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAvailableTriggersUsingGET**
```objc
-(NSURLSessionTask*) getAvailableTriggersUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGBreTriggerResource>* output, NSError* error)) handler;
```

Get the list of triggers that can be used to trigger an achievement progress update

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Get the list of triggers that can be used to trigger an achievement progress update
[apiInstance getAvailableTriggersUsingGETWithCompletionHandler: 
          ^(NSArray<SWGBreTriggerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getAvailableTriggersUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGBreTriggerResource>***](SWGBreTriggerResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserProgressForAchievementUsingGET**
```objc
-(NSURLSessionTask*) getUserProgressForAchievementUsingGETWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
        completionHandler: (void (^)(SWGUserAchievementGroupResource* output, NSError* error)) handler;
```

Retrieve progress on a given achievement for a given user

Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSString* achievementName = @"achievementName_example"; // The achievement's name

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Retrieve progress on a given achievement for a given user
[apiInstance getUserProgressForAchievementUsingGETWithUserId:userId
              achievementName:achievementName
          completionHandler: ^(SWGUserAchievementGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getUserProgressForAchievementUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **achievementName** | **NSString***| The achievement&#39;s name | 

### Return type

[**SWGUserAchievementGroupResource***](SWGUserAchievementGroupResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserProgressUsingGET**
```objc
-(NSURLSessionTask*) getUserProgressUsingGETWithUserId: (NSNumber*) userId
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    filterAchievementHidden: (NSNumber*) filterAchievementHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceUserAchievementGroupResource_* output, NSError* error)) handler;
```

Retrieve progress on achievements for a given user

Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSNumber* filterAchievementDerived = @true; // Filter for achievements that are derived from other services (optional)
NSString* filterAchievementTagset = @"filterAchievementTagset_example"; // Filter for achievements with specified tags (separated by comma) (optional)
NSString* filterAchievementName = @"filterAchievementName_example"; // Filter for achievements whose name contains a string (optional)
NSNumber* filterAchievementHidden = @true; // Filter for achievements that are hidden or not (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Retrieve progress on achievements for a given user
[apiInstance getUserProgressUsingGETWithUserId:userId
              filterAchievementDerived:filterAchievementDerived
              filterAchievementTagset:filterAchievementTagset
              filterAchievementName:filterAchievementName
              filterAchievementHidden:filterAchievementHidden
              size:size
              page:page
          completionHandler: ^(SWGPageResourceUserAchievementGroupResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->getUserProgressUsingGET: %@", error);
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
 **filterAchievementHidden** | **NSNumber***| Filter for achievements that are hidden or not | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceUserAchievementGroupResource_***](SWGPageResourceUserAchievementGroupResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAchievementUsingPUT**
```objc
-(NSURLSessionTask*) updateAchievementUsingPUTWithName: (NSString*) name
    achievement: (SWGAchievementDefinitionResource*) achievement
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an achievement definition

The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the achievement
SWGAchievementDefinitionResource* achievement = [[SWGAchievementDefinitionResource alloc] init]; // The achievement definition (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Update an achievement definition
[apiInstance updateAchievementUsingPUTWithName:name
              achievement:achievement
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->updateAchievementUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the achievement | 
 **achievement** | [**SWGAchievementDefinitionResource***](SWGAchievementDefinitionResource*.md)| The achievement definition | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateProgressUsingPUT**
```objc
-(NSURLSessionTask*) updateProgressUsingPUTWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    request: (SWGAchievementProgressUpdateRequest*) request
        completionHandler: (void (^)(SWGUserAchievementGroupResource* output, NSError* error)) handler;
```

Update or create an achievement progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user's id
NSString* achievementName = @"achievementName_example"; // The achievement's name
SWGAchievementProgressUpdateRequest* request = [[SWGAchievementProgressUpdateRequest alloc] init]; // The progress update details (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Update or create an achievement progress record for a user
[apiInstance updateProgressUsingPUTWithUserId:userId
              achievementName:achievementName
              request:request
          completionHandler: ^(SWGUserAchievementGroupResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->updateProgressUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user&#39;s id | 
 **achievementName** | **NSString***| The achievement&#39;s name | 
 **request** | [**SWGAchievementProgressUpdateRequest***](SWGAchievementProgressUpdateRequest*.md)| The progress update details | [optional] 

### Return type

[**SWGUserAchievementGroupResource***](SWGUserAchievementGroupResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTemplateUsingPUT**
```objc
-(NSURLSessionTask*) updateTemplateUsingPUTWithId: (NSString*) _id
    template: (SWGTemplateResource*) template
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an achievement template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* template = [[SWGTemplateResource alloc] init]; // The updated template (optional)

SWGGamificationAchievementsApi*apiInstance = [[SWGGamificationAchievementsApi alloc] init];

// Update an achievement template
[apiInstance updateTemplateUsingPUTWithId:_id
              template:template
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationAchievementsApi->updateTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The updated template | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

