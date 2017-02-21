# SWGUsersFriendshipsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFriend**](SWGUsersFriendshipsApi.md#addfriend) | **POST** /users/{user_id}/friends/{id} | Add a friend
[**getFriends**](SWGUsersFriendshipsApi.md#getfriends) | **GET** /users/{user_id}/friends | Get friends list
[**getInviteToken**](SWGUsersFriendshipsApi.md#getinvitetoken) | **GET** /users/{user_id}/invite-token | Returns the invite token
[**getInvites**](SWGUsersFriendshipsApi.md#getinvites) | **GET** /users/{user_id}/invites | Get pending invites
[**redeemFriendshipToken**](SWGUsersFriendshipsApi.md#redeemfriendshiptoken) | **POST** /users/{user_id}/friends/tokens | Redeem friendship token
[**removeOrDeclineFriend**](SWGUsersFriendshipsApi.md#removeordeclinefriend) | **DELETE** /users/{user_id}/friends/{id} | Remove or decline a friend


# **addFriend**
```objc
-(NSURLSessionTask*) addFriendWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a friend

As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Add a friend
[apiInstance addFriendWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->addFriend: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; if logged in | 
 **_id** | **NSNumber***| The id of the user to befriend | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFriends**
```objc
-(NSURLSessionTask*) getFriendsWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceSimpleUserResource_* output, NSError* error)) handler;
```

Get friends list

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Get friends list
[apiInstance getFriendsWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getFriends: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceSimpleUserResource_***](SWGPageResourceSimpleUserResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInviteToken**
```objc
-(NSURLSessionTask*) getInviteTokenWithUserId: (NSString*) userId
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns the invite token

This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Returns the invite token
[apiInstance getInviteTokenWithUserId:userId
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getInviteToken: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; if logged in | 

### Return type

**NSString***

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvites**
```objc
-(NSURLSessionTask*) getInvitesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceSimpleUserResource_* output, NSError* error)) handler;
```

Get pending invites

Invites that the specified user received

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Get pending invites
[apiInstance getInvitesWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getInvites: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceSimpleUserResource_***](SWGPageResourceSimpleUserResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **redeemFriendshipToken**
```objc
-(NSURLSessionTask*) redeemFriendshipTokenWithUserId: (NSString*) userId
    token: (NSString*) token
        completionHandler: (void (^)(NSError* error)) handler;
```

Redeem friendship token

Immediately connects the requested user with the user mapped by the provided invite token

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSString* token = token_example; // The invite token (optional)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Redeem friendship token
[apiInstance redeemFriendshipTokenWithUserId:userId
              token:token
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->redeemFriendshipToken: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; if logged in | 
 **token** | **NSString***| The invite token | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeOrDeclineFriend**
```objc
-(NSURLSessionTask*) removeOrDeclineFriendWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove or decline a friend

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Remove or decline a friend
[apiInstance removeOrDeclineFriendWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->removeOrDeclineFriend: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; if logged in | 
 **_id** | **NSNumber***| The id of the user to befriend | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

