# JSAPIReportingChallengesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getChallengeEventLeaderboard**](JSAPIReportingChallengesApi.md#getchallengeeventleaderboard) | **GET** /reporting/events/leaderboard | Retrieve a challenge event leaderboard details
[**getChallengeEventParticipants**](JSAPIReportingChallengesApi.md#getchallengeeventparticipants) | **GET** /reporting/events/participants | Retrieve a challenge event participant details


# **getChallengeEventLeaderboard**
```objc
-(NSURLSessionTask*) getChallengeEventLeaderboardWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(JSAPIPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event leaderboard details

Lists all leaderboard entries with additional user details

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

JSAPIReportingChallengesApi*apiInstance = [[JSAPIReportingChallengesApi alloc] init];

// Retrieve a challenge event leaderboard details
[apiInstance getChallengeEventLeaderboardWithFilterEvent:filterEvent
          completionHandler: ^(JSAPIPageResourceChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingChallengesApi->getChallengeEventLeaderboard: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**JSAPIPageResourceChallengeEventParticipantResource_***](JSAPIPageResourceChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengeEventParticipants**
```objc
-(NSURLSessionTask*) getChallengeEventParticipantsWithFilterEvent: (NSNumber*) filterEvent
        completionHandler: (void (^)(JSAPIPageResourceChallengeEventParticipantResource_* output, NSError* error)) handler;
```

Retrieve a challenge event participant details

Lists all user submitted scores sorted by value, including those that do not apear in the leaderboard due to value or aggregation

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterEvent = @789; // A sepecific challenge event id (optional)

JSAPIReportingChallengesApi*apiInstance = [[JSAPIReportingChallengesApi alloc] init];

// Retrieve a challenge event participant details
[apiInstance getChallengeEventParticipantsWithFilterEvent:filterEvent
          completionHandler: ^(JSAPIPageResourceChallengeEventParticipantResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIReportingChallengesApi->getChallengeEventParticipants: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterEvent** | **NSNumber***| A sepecific challenge event id | [optional] 

### Return type

[**JSAPIPageResourceChallengeEventParticipantResource_***](JSAPIPageResourceChallengeEventParticipantResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

