# SWGReportingChallengesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getChallengeEventLeaderboardUsingGET**](SWGReportingChallengesApi.md#getchallengeeventleaderboardusingget) | **GET** /reporting/events/leaderboard | Retrieve a challenge event leaderboard details
[**getChallengeEventParticipantsUsingGET**](SWGReportingChallengesApi.md#getchallengeeventparticipantsusingget) | **GET** /reporting/events/participants | Retrieve a challenge event participant details


# **getChallengeEventLeaderboardUsingGET**
```objc
-(NSNumber*) getChallengeEventLeaderboardUsingGETWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(SWGPageChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event leaderboard details

Lists all leaderboard entries with additional user details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

SWGReportingChallengesApi*apiInstance = [[SWGReportingChallengesApi alloc] init];

// Retrieve a challenge event leaderboard details
[apiInstance getChallengeEventLeaderboardUsingGETWithFilterEvent:filterEvent
          completionHandler: ^(SWGPageChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingChallengesApi->getChallengeEventLeaderboardUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**SWGPageChallengeEventParticipantResource_***](SWGPageChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEventParticipantsUsingGET**
```objc
-(NSNumber*) getChallengeEventParticipantsUsingGETWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(SWGPageChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event participant details

Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

SWGReportingChallengesApi*apiInstance = [[SWGReportingChallengesApi alloc] init];

// Retrieve a challenge event participant details
[apiInstance getChallengeEventParticipantsUsingGETWithFilterEvent:filterEvent
          completionHandler: ^(SWGPageChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGReportingChallengesApi->getChallengeEventParticipantsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**SWGPageChallengeEventParticipantResource_***](SWGPageChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

