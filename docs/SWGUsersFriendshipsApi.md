# SWGUsersFriendshipsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addFriendUsingPOST**](SWGUsersFriendshipsApi.md#addfriendusingpost) | **POST** /users/{user_id}/friends/{id} | Add a friend
[**connectUsingTokenUsingPOST**](SWGUsersFriendshipsApi.md#connectusingtokenusingpost) | **POST** /users/{user_id}/friends/tokens | Redeem friendship token
[**getFriendsUsingGET**](SWGUsersFriendshipsApi.md#getfriendsusingget) | **GET** /users/{user_id}/friends | Get friends list
[**getInviteTokenUsingGET**](SWGUsersFriendshipsApi.md#getinvitetokenusingget) | **GET** /users/{user_id}/invite-token | Returns the invite token
[**getInvitesUsingGET**](SWGUsersFriendshipsApi.md#getinvitesusingget) | **GET** /users/{user_id}/invites | Get pending invites
[**removeFriendUsingDELETE**](SWGUsersFriendshipsApi.md#removefriendusingdelete) | **DELETE** /users/{user_id}/friends/{id} | Remove or decline a friend


# **addFriendUsingPOST**
```objc
-(NSNumber*) addFriendUsingPOSTWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a friend

As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship.

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Add a friend
[apiInstance addFriendUsingPOSTWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->addFriendUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **connectUsingTokenUsingPOST**
```objc
-(NSNumber*) connectUsingTokenUsingPOSTWithUserId: (NSString*) userId
    token: (NSString*) token
        completionHandler: (void (^)(NSError* error)) handler;
```

Redeem friendship token

Immediately connects the requested user with the user mapped by the provided invite token

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSString* token = token_example; // The invite token (optional)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Redeem friendship token
[apiInstance connectUsingTokenUsingPOSTWithUserId:userId
              token:token
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->connectUsingTokenUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFriendsUsingGET**
```objc
-(NSNumber*) getFriendsUsingGETWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSimpleUserResource_* output, NSError* error)) handler;
```

Get friends list

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Get friends list
[apiInstance getFriendsUsingGETWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getFriendsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageSimpleUserResource_***](SWGPageSimpleUserResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInviteTokenUsingGET**
```objc
-(NSNumber*) getInviteTokenUsingGETWithUserId: (NSString*) userId
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns the invite token

This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Returns the invite token
[apiInstance getInviteTokenUsingGETWithUserId:userId
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getInviteTokenUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvitesUsingGET**
```objc
-(NSNumber*) getInvitesUsingGETWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSimpleUserResource_* output, NSError* error)) handler;
```

Get pending invites

Invites that the specified user received

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me'
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Get pending invites
[apiInstance getInvitesUsingGETWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageSimpleUserResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->getInvitesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user or &#39;me&#39; | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageSimpleUserResource_***](SWGPageSimpleUserResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeFriendUsingDELETE**
```objc
-(NSNumber*) removeFriendUsingDELETEWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove or decline a friend

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user or 'me' if logged in
NSNumber* _id = @56; // The id of the user to befriend

SWGUsersFriendshipsApi*apiInstance = [[SWGUsersFriendshipsApi alloc] init];

// Remove or decline a friend
[apiInstance removeFriendUsingDELETEWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersFriendshipsApi->removeFriendUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

