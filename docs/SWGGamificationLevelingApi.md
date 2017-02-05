# SWGGamificationLevelingApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**changeUserLevelExperienceUsingPUT**](SWGGamificationLevelingApi.md#changeuserlevelexperienceusingput) | **PUT** /users/{user_id}/leveling/{name} | Update or create a leveling progress record for a user
[**createLevelUsingPOST**](SWGGamificationLevelingApi.md#createlevelusingpost) | **POST** /leveling | Create a level schema
[**deleteLevelUsingDELETE**](SWGGamificationLevelingApi.md#deletelevelusingdelete) | **DELETE** /leveling/{name} | Delete a level
[**getAvailableTriggersUsingGET1**](SWGGamificationLevelingApi.md#getavailabletriggersusingget1) | **GET** /leveling/triggers | Get the list of triggers that can be used to trigger a leveling progress update
[**getLevelUsingGET**](SWGGamificationLevelingApi.md#getlevelusingget) | **GET** /leveling/{name} | Retrieve a particular level
[**getLevelsUsingGET**](SWGGamificationLevelingApi.md#getlevelsusingget) | **GET** /leveling | List and search levels
[**getUserLevelUsingGET**](SWGGamificationLevelingApi.md#getuserlevelusingget) | **GET** /users/{user_id}/leveling/{name} | Get a user&#39;s progress for a given level schema
[**getUserLevelsUsingGET**](SWGGamificationLevelingApi.md#getuserlevelsusingget) | **GET** /users/{user_id}/leveling | Get a user&#39;s progress for all level schemas
[**updateLevelUsingPUT**](SWGGamificationLevelingApi.md#updatelevelusingput) | **PUT** /leveling/{name} | Update a level


# **changeUserLevelExperienceUsingPUT**
```objc
-(NSURLSessionTask*) changeUserLevelExperienceUsingPUTWithUserId: (NSNumber*) userId
    name: (NSString*) name
    progress: (NSNumber*) progress
        completionHandler: (void (^)(NSError* error)) handler;
```

Update or create a leveling progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name
NSNumber* progress = 56; // The current progress amount (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Update or create a leveling progress record for a user
[apiInstance changeUserLevelExperienceUsingPUTWithUserId:userId
              name:name
              progress:progress
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->changeUserLevelExperienceUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **name** | **NSString***| The level schema name | 
 **progress** | **NSNumber***| The current progress amount | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createLevelUsingPOST**
```objc
-(NSURLSessionTask*) createLevelUsingPOSTWithLevel: (SWGLevelingResource*) level
        completionHandler: (void (^)(SWGLevelingResource* output, NSError* error)) handler;
```

Create a level schema

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGLevelingResource* level = [[SWGLevelingResource alloc] init]; // The level schema definition (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Create a level schema
[apiInstance createLevelUsingPOSTWithLevel:level
          completionHandler: ^(SWGLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->createLevelUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **level** | [**SWGLevelingResource***](SWGLevelingResource*.md)| The level schema definition | [optional] 

### Return type

[**SWGLevelingResource***](SWGLevelingResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteLevelUsingDELETE**
```objc
-(NSURLSessionTask*) deleteLevelUsingDELETEWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Delete a level
[apiInstance deleteLevelUsingDELETEWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->deleteLevelUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAvailableTriggersUsingGET1**
```objc
-(NSURLSessionTask*) getAvailableTriggersUsingGET1WithCompletionHandler: 
        (void (^)(NSArray<SWGBreTriggerResource>* output, NSError* error)) handler;
```

Get the list of triggers that can be used to trigger a leveling progress update

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get the list of triggers that can be used to trigger a leveling progress update
[apiInstance getAvailableTriggersUsingGET1WithCompletionHandler: 
          ^(NSArray<SWGBreTriggerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getAvailableTriggersUsingGET1: %@", error);
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

# **getLevelUsingGET**
```objc
-(NSURLSessionTask*) getLevelUsingGETWithName: (NSString*) name
        completionHandler: (void (^)(SWGLevelingResource* output, NSError* error)) handler;
```

Retrieve a particular level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Retrieve a particular level
[apiInstance getLevelUsingGETWithName:name
          completionHandler: ^(SWGLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getLevelUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 

### Return type

[**SWGLevelingResource***](SWGLevelingResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevelsUsingGET**
```objc
-(NSURLSessionTask*) getLevelsUsingGETWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceLevelingResource_* output, NSError* error)) handler;
```

List and search levels

Get a list of levels schemas with optional filtering

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for level schemas whose name contains a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// List and search levels
[apiInstance getLevelsUsingGETWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getLevelsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filter for level schemas whose name contains a given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to name:ASC]

### Return type

[**SWGPageResourceLevelingResource_***](SWGPageResourceLevelingResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevelUsingGET**
```objc
-(NSURLSessionTask*) getUserLevelUsingGETWithUserId: (NSNumber*) userId
    name: (NSString*) name
        completionHandler: (void (^)(SWGUserLevelingResource* output, NSError* error)) handler;
```

Get a user's progress for a given level schema

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get a user's progress for a given level schema
[apiInstance getUserLevelUsingGETWithUserId:userId
              name:name
          completionHandler: ^(SWGUserLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getUserLevelUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **name** | **NSString***| The level schema name | 

### Return type

[**SWGUserLevelingResource***](SWGUserLevelingResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevelsUsingGET**
```objc
-(NSURLSessionTask*) getUserLevelsUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(SWGPageResourceUserLevelingResource_* output, NSError* error)) handler;
```

Get a user's progress for all level schemas

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get a user's progress for all level schemas
[apiInstance getUserLevelsUsingGETWithUserId:userId
          completionHandler: ^(SWGPageResourceUserLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getUserLevelsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 

### Return type

[**SWGPageResourceUserLevelingResource_***](SWGPageResourceUserLevelingResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateLevelUsingPUT**
```objc
-(NSURLSessionTask*) updateLevelUsingPUTWithName: (NSString*) name
    varNewLevel: (SWGLevelingResource*) varNewLevel
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name
SWGLevelingResource* varNewLevel = [[SWGLevelingResource alloc] init]; // The level schema definition (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Update a level
[apiInstance updateLevelUsingPUTWithName:name
              varNewLevel:varNewLevel
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->updateLevelUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 
 **varNewLevel** | [**SWGLevelingResource***](SWGLevelingResource*.md)| The level schema definition | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

