# SWGGamificationLeaderboardsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getLeaderboardUsingGET**](SWGGamificationLeaderboardsApi.md#getleaderboardusingget) | **GET** /leaderboards/{context_type}/{context_id} | Retrieves leaderboard details and paginated entries
[**getStrategiesUsingGET**](SWGGamificationLeaderboardsApi.md#getstrategiesusingget) | **GET** /leaderboards/strategies | Get a list of available leaderboard strategy names
[**getUserRankUsingGET**](SWGGamificationLeaderboardsApi.md#getuserrankusingget) | **GET** /leaderboards/{context_type}/{context_id}/users/{id}/rank | Retrieves a specific user entry with rank


# **getLeaderboardUsingGET**
```objc
-(NSURLSessionTask*) getLeaderboardUsingGETWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGLeaderboardResource* output, NSError* error)) handler;
```

Retrieves leaderboard details and paginated entries

The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard.

### Example 
```objc

NSString* contextType = @"contextType_example"; // The context type for the leaderboard
NSString* contextId = @"contextId_example"; // The context id for the leaderboard
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGGamificationLeaderboardsApi*apiInstance = [[SWGGamificationLeaderboardsApi alloc] init];

// Retrieves leaderboard details and paginated entries
[apiInstance getLeaderboardUsingGETWithContextType:contextType
              contextId:contextId
              size:size
              page:page
          completionHandler: ^(SWGLeaderboardResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLeaderboardsApi->getLeaderboardUsingGET: %@", error);
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

### Return type

[**SWGLeaderboardResource***](SWGLeaderboardResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStrategiesUsingGET**
```objc
-(NSURLSessionTask*) getStrategiesUsingGETWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Get a list of available leaderboard strategy names

### Example 
```objc


SWGGamificationLeaderboardsApi*apiInstance = [[SWGGamificationLeaderboardsApi alloc] init];

// Get a list of available leaderboard strategy names
[apiInstance getStrategiesUsingGETWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLeaderboardsApi->getStrategiesUsingGET: %@", error);
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

# **getUserRankUsingGET**
```objc
-(NSURLSessionTask*) getUserRankUsingGETWithContextType: (NSString*) contextType
    contextId: (NSString*) contextId
    _id: (NSString*) _id
        completionHandler: (void (^)(SWGLeaderboardEntryResource* output, NSError* error)) handler;
```

Retrieves a specific user entry with rank

The context type identifies the type of entity (i.e., 'activity') being tracked on the leaderboard. The context ID is the unique ID of the actual entity tracked by the leaderboard

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* contextType = @"contextType_example"; // The context type for the leaderboard
NSString* contextId = @"contextId_example"; // The context id for the leaderboard
NSString* _id = @"_id_example"; // The id of a user

SWGGamificationLeaderboardsApi*apiInstance = [[SWGGamificationLeaderboardsApi alloc] init];

// Retrieves a specific user entry with rank
[apiInstance getUserRankUsingGETWithContextType:contextType
              contextId:contextId
              _id:_id
          completionHandler: ^(SWGLeaderboardEntryResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationLeaderboardsApi->getUserRankUsingGET: %@", error);
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

[**SWGLeaderboardEntryResource***](SWGLeaderboardEntryResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

