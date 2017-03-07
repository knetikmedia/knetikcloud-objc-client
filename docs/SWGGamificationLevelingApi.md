# SWGGamificationLevelingApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLevel**](SWGGamificationLevelingApi.md#createlevel) | **POST** /leveling | Create a level schema
[**deleteLevel**](SWGGamificationLevelingApi.md#deletelevel) | **DELETE** /leveling/{name} | Delete a level
[**getLevel**](SWGGamificationLevelingApi.md#getlevel) | **GET** /leveling/{name} | Retrieve a level
[**getLevelTriggers**](SWGGamificationLevelingApi.md#getleveltriggers) | **GET** /leveling/triggers | Get the list of triggers that can be used to trigger a leveling progress update
[**getLevels**](SWGGamificationLevelingApi.md#getlevels) | **GET** /leveling | List and search levels
[**getUserLevel**](SWGGamificationLevelingApi.md#getuserlevel) | **GET** /users/{user_id}/leveling/{name} | Get a user&#39;s progress for a given level schema
[**getUserLevels**](SWGGamificationLevelingApi.md#getuserlevels) | **GET** /users/{user_id}/leveling | Get a user&#39;s progress for all level schemas
[**updateLevel**](SWGGamificationLevelingApi.md#updatelevel) | **PUT** /leveling/{name} | Update a level
[**updateUserLevel**](SWGGamificationLevelingApi.md#updateuserlevel) | **PUT** /users/{user_id}/leveling/{name} | Update or create a leveling progress record for a user


# **createLevel**
```objc
-(NSURLSessionTask*) createLevelWithLevel: (SWGLevelingResource*) level
        completionHandler: (void (^)(SWGLevelingResource* output, NSError* error)) handler;
```

Create a level schema

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGLevelingResource* level = [[SWGLevelingResource alloc] init]; // The level schema definition (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Create a level schema
[apiInstance createLevelWithLevel:level
          completionHandler: ^(SWGLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->createLevel: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteLevel**
```objc
-(NSURLSessionTask*) deleteLevelWithName: (NSString*) name
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Delete a level
[apiInstance deleteLevelWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->deleteLevel: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevel**
```objc
-(NSURLSessionTask*) getLevelWithName: (NSString*) name
        completionHandler: (void (^)(SWGLevelingResource* output, NSError* error)) handler;
```

Retrieve a level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Retrieve a level
[apiInstance getLevelWithName:name
          completionHandler: ^(SWGLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getLevel: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevelTriggers**
```objc
-(NSURLSessionTask*) getLevelTriggersWithCompletionHandler: 
        (void (^)(NSArray<SWGBreTriggerResource>* output, NSError* error)) handler;
```

Get the list of triggers that can be used to trigger a leveling progress update

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get the list of triggers that can be used to trigger a leveling progress update
[apiInstance getLevelTriggersWithCompletionHandler: 
          ^(NSArray<SWGBreTriggerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getLevelTriggers: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGBreTriggerResource>***](SWGBreTriggerResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevels**
```objc
-(NSURLSessionTask*) getLevelsWithFilterName: (NSString*) filterName
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

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for level schemas whose name contains a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// List and search levels
[apiInstance getLevelsWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getLevels: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevel**
```objc
-(NSURLSessionTask*) getUserLevelWithUserId: (NSNumber*) userId
    name: (NSString*) name
        completionHandler: (void (^)(SWGUserLevelingResource* output, NSError* error)) handler;
```

Get a user's progress for a given level schema

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get a user's progress for a given level schema
[apiInstance getUserLevelWithUserId:userId
              name:name
          completionHandler: ^(SWGUserLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getUserLevel: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevels**
```objc
-(NSURLSessionTask*) getUserLevelsWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(SWGPageResourceUserLevelingResource_* output, NSError* error)) handler;
```

Get a user's progress for all level schemas

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Get a user's progress for all level schemas
[apiInstance getUserLevelsWithUserId:userId
          completionHandler: ^(SWGPageResourceUserLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->getUserLevels: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateLevel**
```objc
-(NSURLSessionTask*) updateLevelWithName: (NSString*) name
    varNewLevel: (SWGLevelingResource*) varNewLevel
        completionHandler: (void (^)(SWGLevelingResource* output, NSError* error)) handler;
```

Update a level

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name
SWGLevelingResource* varNewLevel = [[SWGLevelingResource alloc] init]; // The level schema definition (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Update a level
[apiInstance updateLevelWithName:name
              varNewLevel:varNewLevel
          completionHandler: ^(SWGLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->updateLevel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 
 **varNewLevel** | [**SWGLevelingResource***](SWGLevelingResource*.md)| The level schema definition | [optional] 

### Return type

[**SWGLevelingResource***](SWGLevelingResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUserLevel**
```objc
-(NSURLSessionTask*) updateUserLevelWithUserId: (NSNumber*) userId
    name: (NSString*) name
    progress: (NSNumber*) progress
        completionHandler: (void (^)(NSError* error)) handler;
```

Update or create a leveling progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name
NSNumber* progress = 56; // The current progress amount (optional)

SWGGamificationLevelingApi*apiInstance = [[SWGGamificationLevelingApi alloc] init];

// Update or create a leveling progress record for a user
[apiInstance updateUserLevelWithUserId:userId
              name:name
              progress:progress
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLevelingApi->updateUserLevel: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

