# JSAPIGamificationLevelingApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createLevel**](JSAPIGamificationLevelingApi.md#createlevel) | **POST** /leveling | Create a level schema
[**deleteLevel**](JSAPIGamificationLevelingApi.md#deletelevel) | **DELETE** /leveling/{name} | Delete a level
[**getLevel**](JSAPIGamificationLevelingApi.md#getlevel) | **GET** /leveling/{name} | Retrieve a level
[**getLevelTriggers**](JSAPIGamificationLevelingApi.md#getleveltriggers) | **GET** /leveling/triggers | Get the list of triggers that can be used to trigger a leveling progress update
[**getLevels**](JSAPIGamificationLevelingApi.md#getlevels) | **GET** /leveling | List and search levels
[**getUserLevel**](JSAPIGamificationLevelingApi.md#getuserlevel) | **GET** /users/{user_id}/leveling/{name} | Get a user&#39;s progress for a given level schema
[**getUserLevels**](JSAPIGamificationLevelingApi.md#getuserlevels) | **GET** /users/{user_id}/leveling | Get a user&#39;s progress for all level schemas
[**incrementProgress**](JSAPIGamificationLevelingApi.md#incrementprogress) | **POST** /users/{user_id}/leveling/{name}/progress | Update or create a leveling progress record for a user
[**setProgress**](JSAPIGamificationLevelingApi.md#setprogress) | **PUT** /users/{user_id}/leveling/{name}/progress | Set leveling progress for a user
[**updateLevel**](JSAPIGamificationLevelingApi.md#updatelevel) | **PUT** /leveling/{name} | Update a level


# **createLevel**
```objc
-(NSURLSessionTask*) createLevelWithLevel: (JSAPILevelingResource*) level
        completionHandler: (void (^)(JSAPILevelingResource* output, NSError* error)) handler;
```

Create a level schema

<b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPILevelingResource* level = [[JSAPILevelingResource alloc] init]; // The level schema definition (optional)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Create a level schema
[apiInstance createLevelWithLevel:level
          completionHandler: ^(JSAPILevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->createLevel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **level** | [**JSAPILevelingResource***](JSAPILevelingResource.md)| The level schema definition | [optional] 

### Return type

[**JSAPILevelingResource***](JSAPILevelingResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Delete a level
[apiInstance deleteLevelWithName:name
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->deleteLevel: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevel**
```objc
-(NSURLSessionTask*) getLevelWithName: (NSString*) name
        completionHandler: (void (^)(JSAPILevelingResource* output, NSError* error)) handler;
```

Retrieve a level

<b>Permissions Needed:</b> LEVELING_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Retrieve a level
[apiInstance getLevelWithName:name
          completionHandler: ^(JSAPILevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->getLevel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 

### Return type

[**JSAPILevelingResource***](JSAPILevelingResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLevelTriggers**
```objc
-(NSURLSessionTask*) getLevelTriggersWithCompletionHandler: 
        (void (^)(NSArray<JSAPIBreTriggerResource>* output, NSError* error)) handler;
```

Get the list of triggers that can be used to trigger a leveling progress update

<b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Get the list of triggers that can be used to trigger a leveling progress update
[apiInstance getLevelTriggersWithCompletionHandler: 
          ^(NSArray<JSAPIBreTriggerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->getLevelTriggers: %@", error);
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

# **getLevels**
```objc
-(NSURLSessionTask*) getLevelsWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceLevelingResource_* output, NSError* error)) handler;
```

List and search levels

Get a list of levels schemas with optional filtering. <br><br><b>Permissions Needed:</b> LEVELING_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for level schemas whose name contains a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"name:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// List and search levels
[apiInstance getLevelsWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->getLevels: %@", error);
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

[**JSAPIPageResourceLevelingResource_***](JSAPIPageResourceLevelingResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevel**
```objc
-(NSURLSessionTask*) getUserLevelWithUserId: (NSString*) userId
    name: (NSString*) name
        completionHandler: (void (^)(JSAPIUserLevelingResource* output, NSError* error)) handler;
```

Get a user's progress for a given level schema

<b>Permissions Needed:</b> LEVELING_USER or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSString* name = @"name_example"; // The level schema name

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Get a user's progress for a given level schema
[apiInstance getUserLevelWithUserId:userId
              name:name
          completionHandler: ^(JSAPIUserLevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->getUserLevel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **name** | **NSString***| The level schema name | 

### Return type

[**JSAPIUserLevelingResource***](JSAPIUserLevelingResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserLevels**
```objc
-(NSURLSessionTask*) getUserLevelsWithUserId: (NSString*) userId
    filterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceUserLevelingResource_* output, NSError* error)) handler;
```

Get a user's progress for all level schemas

Filtering and sorting is based on the LevelingResource object, not the UserLevelingResource that is returned here. <br><br><b>Permissions Needed:</b> LEVELING_USER or self

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSString* filterName = @"filterName_example"; // Filter for level schemas whose name contains a given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Get a user's progress for all level schemas
[apiInstance getUserLevelsWithUserId:userId
              filterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceUserLevelingResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->getUserLevels: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **filterName** | **NSString***| Filter for level schemas whose name contains a given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceUserLevelingResource_***](JSAPIPageResourceUserLevelingResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **incrementProgress**
```objc
-(NSURLSessionTask*) incrementProgressWithUserId: (NSNumber*) userId
    name: (NSString*) name
    progress: (JSAPIIntWrapper*) progress
        completionHandler: (void (^)(NSError* error)) handler;
```

Update or create a leveling progress record for a user

If no progress record yet exists for the user, it will be created. Otherwise the provided value will be added to it. May be negative. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name
JSAPIIntWrapper* progress = [[JSAPIIntWrapper alloc] init]; // The amount of progress to add (optional)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Update or create a leveling progress record for a user
[apiInstance incrementProgressWithUserId:userId
              name:name
              progress:progress
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->incrementProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **name** | **NSString***| The level schema name | 
 **progress** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The amount of progress to add | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setProgress**
```objc
-(NSURLSessionTask*) setProgressWithUserId: (NSNumber*) userId
    name: (NSString*) name
    progress: (JSAPIIntWrapper*) progress
        completionHandler: (void (^)(NSError* error)) handler;
```

Set leveling progress for a user

If no progress record yet exists for the user, it will be created. Otherwise it will be updated to the provided value. If progress meets or exceeds the level's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSString* name = @"name_example"; // The level schema name
JSAPIIntWrapper* progress = [[JSAPIIntWrapper alloc] init]; // The new progress amount (optional)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Set leveling progress for a user
[apiInstance setProgressWithUserId:userId
              name:name
              progress:progress
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->setProgress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **name** | **NSString***| The level schema name | 
 **progress** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The new progress amount | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateLevel**
```objc
-(NSURLSessionTask*) updateLevelWithName: (NSString*) name
    varNewLevel: (JSAPILevelingResource*) varNewLevel
        completionHandler: (void (^)(JSAPILevelingResource* output, NSError* error)) handler;
```

Update a level

<b>Permissions Needed:</b> LEVELING_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The level schema name
JSAPILevelingResource* varNewLevel = [[JSAPILevelingResource alloc] init]; // The level schema definition (optional)

JSAPIGamificationLevelingApi*apiInstance = [[JSAPIGamificationLevelingApi alloc] init];

// Update a level
[apiInstance updateLevelWithName:name
              varNewLevel:varNewLevel
          completionHandler: ^(JSAPILevelingResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLevelingApi->updateLevel: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The level schema name | 
 **varNewLevel** | [**JSAPILevelingResource***](JSAPILevelingResource.md)| The level schema definition | [optional] 

### Return type

[**JSAPILevelingResource***](JSAPILevelingResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

