# JSAPIUsersFriendshipsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFriend**](JSAPIUsersFriendshipsApi.md#addfriend) | **POST** /users/{user_id}/friends/{id} | Add a friend
[**getFriends**](JSAPIUsersFriendshipsApi.md#getfriends) | **GET** /users/{user_id}/friends | Get friends list
[**getInviteToken**](JSAPIUsersFriendshipsApi.md#getinvitetoken) | **GET** /users/{user_id}/invite-token | Returns the invite token
[**getInvites**](JSAPIUsersFriendshipsApi.md#getinvites) | **GET** /users/{user_id}/invites | Get pending invites
[**redeemFriendshipToken**](JSAPIUsersFriendshipsApi.md#redeemfriendshiptoken) | **POST** /users/{user_id}/friends/tokens | Redeem friendship token
[**removeOrDeclineFriend**](JSAPIUsersFriendshipsApi.md#removeordeclinefriend) | **DELETE** /users/{user_id}/friends/{id} | Remove or decline a friend


# **addFriend**
```objc
-(NSURLSessionTask*) addFriendWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a friend

As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship. <br><br><b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Add a friend
[apiInstance addFriendWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->addFriend: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFriends**
```objc
-(NSURLSessionTask*) getFriendsWithUserId: (NSString*) userId
    filterUsername: (NSString*) filterUsername
    filterUserId: (NSNumber*) filterUserId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceSimpleUserResource_* output, NSError* error)) handler;
```

Get friends list

<b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSString* filterUsername = @"filterUsername_example"; // Filter for friends with the given username (optional)
NSNumber* filterUserId = @56; // Filter for friends by user id (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Get friends list
[apiInstance getFriendsWithUserId:userId
              filterUsername:filterUsername
              filterUserId:filterUserId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->getFriends: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **filterUsername** | **NSString***| Filter for friends with the given username | [optional] 
 **filterUserId** | **NSNumber***| Filter for friends by user id | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceSimpleUserResource_***](JSAPIPageResourceSimpleUserResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInviteToken**
```objc
-(NSURLSessionTask*) getInviteTokenWithUserId: (NSString*) userId
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns the invite token

This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required. <br><br><b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Returns the invite token
[apiInstance getInviteTokenWithUserId:userId
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->getInviteToken: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvites**
```objc
-(NSURLSessionTask*) getInvitesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceSimpleUserResource_* output, NSError* error)) handler;
```

Get pending invites

Invites that the specified user received. <br><br><b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Get pending invites
[apiInstance getInvitesWithUserId:userId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->getInvites: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceSimpleUserResource_***](JSAPIPageResourceSimpleUserResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **redeemFriendshipToken**
```objc
-(NSURLSessionTask*) redeemFriendshipTokenWithUserId: (NSString*) userId
    token: (JSAPIStringWrapper*) token
        completionHandler: (void (^)(NSError* error)) handler;
```

Redeem friendship token

Immediately connects the requested user with the user mapped by the provided invite token. <br><br><b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
JSAPIStringWrapper* token = [[JSAPIStringWrapper alloc] init]; // The invite token (optional)

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Redeem friendship token
[apiInstance redeemFriendshipTokenWithUserId:userId
              token:token
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->redeemFriendshipToken: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; if logged in | 
 **token** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The invite token | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> FRIENDSHIPS_ADMIN or (FRIENDSHIPS_USER and owner)

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

JSAPIUsersFriendshipsApi*apiInstance = [[JSAPIUsersFriendshipsApi alloc] init];

// Remove or decline a friend
[apiInstance removeOrDeclineFriendWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersFriendshipsApi->removeOrDeclineFriend: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

