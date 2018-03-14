# JSAPICampaignsRewardsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createRewardSet**](JSAPICampaignsRewardsApi.md#createrewardset) | **POST** /rewards | Create a reward set
[**deleteRewardSet**](JSAPICampaignsRewardsApi.md#deleterewardset) | **DELETE** /rewards/{id} | Delete a reward set
[**getRewardSet**](JSAPICampaignsRewardsApi.md#getrewardset) | **GET** /rewards/{id} | Get a single reward set
[**getRewardSets**](JSAPICampaignsRewardsApi.md#getrewardsets) | **GET** /rewards | List and search reward sets
[**updateRewardSet**](JSAPICampaignsRewardsApi.md#updaterewardset) | **PUT** /rewards/{id} | Update a reward set


# **createRewardSet**
```objc
-(NSURLSessionTask*) createRewardSetWithRewardSetResource: (JSAPIRewardSetResource*) rewardSetResource
        completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;
```

Create a reward set

<b>Permissions Needed:</b> REWARDS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIRewardSetResource* rewardSetResource = [[JSAPIRewardSetResource alloc] init]; // The reward set resource object (optional)

JSAPICampaignsRewardsApi*apiInstance = [[JSAPICampaignsRewardsApi alloc] init];

// Create a reward set
[apiInstance createRewardSetWithRewardSetResource:rewardSetResource
          completionHandler: ^(JSAPIRewardSetResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsRewardsApi->createRewardSet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **rewardSetResource** | [**JSAPIRewardSetResource***](JSAPIRewardSetResource.md)| The reward set resource object | [optional] 

### Return type

[**JSAPIRewardSetResource***](JSAPIRewardSetResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRewardSet**
```objc
-(NSURLSessionTask*) deleteRewardSetWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a reward set

<b>Permissions Needed:</b> REWARDS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The reward id

JSAPICampaignsRewardsApi*apiInstance = [[JSAPICampaignsRewardsApi alloc] init];

// Delete a reward set
[apiInstance deleteRewardSetWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsRewardsApi->deleteRewardSet: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRewardSet**
```objc
-(NSURLSessionTask*) getRewardSetWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;
```

Get a single reward set

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The reward id

JSAPICampaignsRewardsApi*apiInstance = [[JSAPICampaignsRewardsApi alloc] init];

// Get a single reward set
[apiInstance getRewardSetWithId:_id
          completionHandler: ^(JSAPIRewardSetResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsRewardsApi->getRewardSet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The reward id | 

### Return type

[**JSAPIRewardSetResource***](JSAPIRewardSetResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRewardSets**
```objc
-(NSURLSessionTask*) getRewardSetsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceRewardSetResource_* output, NSError* error)) handler;
```

List and search reward sets

<b>Permissions Needed:</b> ANY

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

JSAPICampaignsRewardsApi*apiInstance = [[JSAPICampaignsRewardsApi alloc] init];

// List and search reward sets
[apiInstance getRewardSetsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceRewardSetResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsRewardsApi->getRewardSets: %@", error);
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

[**JSAPIPageResourceRewardSetResource_***](JSAPIPageResourceRewardSetResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRewardSet**
```objc
-(NSURLSessionTask*) updateRewardSetWithId: (NSNumber*) _id
    rewardSetResource: (JSAPIRewardSetResource*) rewardSetResource
        completionHandler: (void (^)(JSAPIRewardSetResource* output, NSError* error)) handler;
```

Update a reward set

<b>Permissions Needed:</b> REWARDS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The reward id
JSAPIRewardSetResource* rewardSetResource = [[JSAPIRewardSetResource alloc] init]; // The reward set resource object (optional)

JSAPICampaignsRewardsApi*apiInstance = [[JSAPICampaignsRewardsApi alloc] init];

// Update a reward set
[apiInstance updateRewardSetWithId:_id
              rewardSetResource:rewardSetResource
          completionHandler: ^(JSAPIRewardSetResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsRewardsApi->updateRewardSet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The reward id | 
 **rewardSetResource** | [**JSAPIRewardSetResource***](JSAPIRewardSetResource.md)| The reward set resource object | [optional] 

### Return type

[**JSAPIRewardSetResource***](JSAPIRewardSetResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

