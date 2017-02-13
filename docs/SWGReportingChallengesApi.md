# SWGReportingChallengesApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getChallengeEventLeaderboard**](SWGReportingChallengesApi.md#getchallengeeventleaderboard) | **GET** /reporting/events/leaderboard | Retrieve a challenge event leaderboard details
[**getChallengeEventParticipants**](SWGReportingChallengesApi.md#getchallengeeventparticipants) | **GET** /reporting/events/participants | Retrieve a challenge event participant details


# **getChallengeEventLeaderboard**
```objc
-(NSURLSessionTask*) getChallengeEventLeaderboardWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event leaderboard details

Lists all leaderboard entries with additional user details

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

SWGReportingChallengesApi*apiInstance = [[SWGReportingChallengesApi alloc] init];

// Retrieve a challenge event leaderboard details
[apiInstance getChallengeEventLeaderboardWithFilterEvent:filterEvent
          completionHandler: ^(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingChallengesApi->getChallengeEventLeaderboard: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**SWGPageResourceChallengeEventParticipantResource_***](SWGPageResourceChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEventParticipants**
```objc
-(NSURLSessionTask*) getChallengeEventParticipantsWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event participant details

Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

SWGReportingChallengesApi*apiInstance = [[SWGReportingChallengesApi alloc] init];

// Retrieve a challenge event participant details
[apiInstance getChallengeEventParticipantsWithFilterEvent:filterEvent
          completionHandler: ^(SWGPageResourceChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingChallengesApi->getChallengeEventParticipants: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**SWGPageResourceChallengeEventParticipantResource_***](SWGPageResourceChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

