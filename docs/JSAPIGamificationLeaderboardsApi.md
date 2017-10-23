# JSAPIGamificationLeaderboardsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getLeaderboard**](JSAPIGamificationLeaderboardsApi.md#getleaderboard) | **GET** /leaderboards/{context_type}/{context_id} | Retrieves leaderboard details and paginated entries
[**getLeaderboardRank**](JSAPIGamificationLeaderboardsApi.md#getleaderboardrank) | **GET** /leaderboards/{context_type}/{context_id}/users/{id}/rank | Retrieves a specific user entry with rank
[**getLeaderboardStrategies**](JSAPIGamificationLeaderboardsApi.md#getleaderboardstrategies) | **GET** /leaderboards/strategies | Get a list of available leaderboard strategy names


# **getLeaderboard**
```objc
-(NSURLSessionTask*) getLeaderboardWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPILeaderboardResource* output, NSError* error)) handler;
```

Retrieves leaderboard details and paginated entries

The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard. Sorting is based on the fields of LeaderboardEntryResource rather than the returned LeaderboardResource.

### Example 
```objc

NSString* contextType = @"contextType_example"; // The context type for the leaderboard
NSString* contextId = @"contextId_example"; // The context id for the leaderboard
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"score:DESC,updated:ASC,user_id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to score:DESC,updated:ASC,user_id:ASC)

JSAPIGamificationLeaderboardsApi*apiInstance = [[JSAPIGamificationLeaderboardsApi alloc] init];

// Retrieves leaderboard details and paginated entries
[apiInstance getLeaderboardWithContextType:contextType
              contextId:contextId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPILeaderboardResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLeaderboardsApi->getLeaderboard: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **contextType** | **NSString***| The context type for the leaderboard | 
 **contextId** | **NSString***| The context id for the leaderboard | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to score:DESC,updated:ASC,user_id:ASC]

### Return type

[**JSAPILeaderboardResource***](JSAPILeaderboardResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLeaderboardRank**
```objc
-(NSURLSessionTask*) getLeaderboardRankWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPILeaderboardEntryResource* output, NSError* error)) handler;
```

Retrieves a specific user entry with rank

The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard

### Example 
```objc

NSString* contextType = @"contextType_example"; // The context type for the leaderboard
NSString* contextId = @"contextId_example"; // The context id for the leaderboard
NSString* _id = @"_id_example"; // The id of a user

JSAPIGamificationLeaderboardsApi*apiInstance = [[JSAPIGamificationLeaderboardsApi alloc] init];

// Retrieves a specific user entry with rank
[apiInstance getLeaderboardRankWithContextType:contextType
              contextId:contextId
              _id:_id
          completionHandler: ^(JSAPILeaderboardEntryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLeaderboardsApi->getLeaderboardRank: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **contextType** | **NSString***| The context type for the leaderboard | 
 **contextId** | **NSString***| The context id for the leaderboard | 
 **_id** | **NSString***| The id of a user | 

### Return type

[**JSAPILeaderboardEntryResource***](JSAPILeaderboardEntryResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getLeaderboardStrategies**
```objc
-(NSURLSessionTask*) getLeaderboardStrategiesWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Get a list of available leaderboard strategy names

### Example 
```objc


JSAPIGamificationLeaderboardsApi*apiInstance = [[JSAPIGamificationLeaderboardsApi alloc] init];

// Get a list of available leaderboard strategy names
[apiInstance getLeaderboardStrategiesWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationLeaderboardsApi->getLeaderboardStrategies: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSArray<NSString*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

