# SWGCampaignsRewardsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRewardSetUsingPOST**](SWGCampaignsRewardsApi.md#createrewardsetusingpost) | **POST** /rewards | Create a reward set
[**deleteRewardSetUsingDELETE**](SWGCampaignsRewardsApi.md#deleterewardsetusingdelete) | **DELETE** /rewards/{id} | Delete a reward set
[**getRewardSetUsingGET**](SWGCampaignsRewardsApi.md#getrewardsetusingget) | **GET** /rewards/{id} | Get a single reward set
[**getRewardSetsUsingGET**](SWGCampaignsRewardsApi.md#getrewardsetsusingget) | **GET** /rewards | List and search reward sets
[**updateRewardSetUsingPUT**](SWGCampaignsRewardsApi.md#updaterewardsetusingput) | **PUT** /rewards/{id} | Update a reward set


# **createRewardSetUsingPOST**
```objc
-(NSNumber*) createRewardSetUsingPOSTWithRewardSetResource: (SWGRewardSetResource*) rewardSetResource
        completionHandler: (void (^)(SWGRewardSetResource* output, NSError* error)) handler;
```

Create a reward set

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGRewardSetResource* rewardSetResource = [[SWGRewardSetResource alloc] init]; // The reward set resource object (optional)

SWGCampaignsRewardsApi*apiInstance = [[SWGCampaignsRewardsApi alloc] init];

// Create a reward set
[apiInstance createRewardSetUsingPOSTWithRewardSetResource:rewardSetResource
          completionHandler: ^(SWGRewardSetResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsRewardsApi->createRewardSetUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rewardSetResource** | [**SWGRewardSetResource***](SWGRewardSetResource*.md)| The reward set resource object | [optional] 

### Return type

[**SWGRewardSetResource***](SWGRewardSetResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRewardSetUsingDELETE**
```objc
-(NSNumber*) deleteRewardSetUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a reward set

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The reward id

SWGCampaignsRewardsApi*apiInstance = [[SWGCampaignsRewardsApi alloc] init];

// Delete a reward set
[apiInstance deleteRewardSetUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsRewardsApi->deleteRewardSetUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The reward id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRewardSetUsingGET**
```objc
-(NSNumber*) getRewardSetUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGRewardSetResource* output, NSError* error)) handler;
```

Get a single reward set

### Example 
```objc

NSNumber* _id = @56; // The reward id

SWGCampaignsRewardsApi*apiInstance = [[SWGCampaignsRewardsApi alloc] init];

// Get a single reward set
[apiInstance getRewardSetUsingGETWithId:_id
          completionHandler: ^(SWGRewardSetResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsRewardsApi->getRewardSetUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The reward id | 

### Return type

[**SWGRewardSetResource***](SWGRewardSetResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRewardSetsUsingGET**
```objc
-(NSNumber*) getRewardSetsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceRewardSetResource_* output, NSError* error)) handler;
```

List and search reward sets

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGCampaignsRewardsApi*apiInstance = [[SWGCampaignsRewardsApi alloc] init];

// List and search reward sets
[apiInstance getRewardSetsUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceRewardSetResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsRewardsApi->getRewardSetsUsingGET: %@", error);
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

[**SWGPageResourceRewardSetResource_***](SWGPageResourceRewardSetResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRewardSetUsingPUT**
```objc
-(NSNumber*) updateRewardSetUsingPUTWithId: (NSNumber*) _id
    rewardSetResource: (SWGRewardSetResource*) rewardSetResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a reward set

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The reward id
SWGRewardSetResource* rewardSetResource = [[SWGRewardSetResource alloc] init]; // The reward set resource object (optional)

SWGCampaignsRewardsApi*apiInstance = [[SWGCampaignsRewardsApi alloc] init];

// Update a reward set
[apiInstance updateRewardSetUsingPUTWithId:_id
              rewardSetResource:rewardSetResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsRewardsApi->updateRewardSetUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The reward id | 
 **rewardSetResource** | [**SWGRewardSetResource***](SWGRewardSetResource*.md)| The reward set resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

