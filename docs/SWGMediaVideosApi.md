# SWGMediaVideosApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addCommentUsingPOST1**](SWGMediaVideosApi.md#addcommentusingpost1) | **POST** /media/videos/{video_id}/comments | Add a new video comment
[**addContributorUsingPOST**](SWGMediaVideosApi.md#addcontributorusingpost) | **POST** /media/videos/{video_id}/contributors | Adds a contributor to a video
[**addDispositionUsingPOST1**](SWGMediaVideosApi.md#adddispositionusingpost1) | **POST** /media/videos/{video_id}/dispositions | Add a new Video disposition
[**addFlagUsingPOST**](SWGMediaVideosApi.md#addflagusingpost) | **POST** /media/videos/{video_id}/moderation | Add a new flag
[**addRelatedUsingPOST**](SWGMediaVideosApi.md#addrelatedusingpost) | **POST** /media/videos/{video_id}/related | Adds one or more existing videos as related to this one
[**addVideoUsingPOST**](SWGMediaVideosApi.md#addvideousingpost) | **POST** /media/videos | Adds a new video in the system
[**addWhitelistUsingPOST**](SWGMediaVideosApi.md#addwhitelistusingpost) | **POST** /media/videos/{id}/whitelist | Adds a user to a video&#39;s whitelist
[**deleteCommentUsingDELETE1**](SWGMediaVideosApi.md#deletecommentusingdelete1) | **DELETE** /media/videos/{video_id}/comments/{id} | Delete a video comment
[**deleteDispositionUsingDELETE1**](SWGMediaVideosApi.md#deletedispositionusingdelete1) | **DELETE** /media/videos/{video_id}/dispositions/{disposition_id} | Delete a video comment
[**deleteFlagUsingDELETE**](SWGMediaVideosApi.md#deleteflagusingdelete) | **DELETE** /media/videos/{video_id}/moderation | Delete a flag
[**deleteRelationshipUsingDELETE1**](SWGMediaVideosApi.md#deleterelationshipusingdelete1) | **DELETE** /media/videos/{video_id}/related/{id} | Delete a video&#39;s relationship
[**deleteVideoUsingDELETE**](SWGMediaVideosApi.md#deletevideousingdelete) | **DELETE** /media/videos/{id} | Removes a video from the system if no resources are attached to it
[**getCommentsUsingGET1**](SWGMediaVideosApi.md#getcommentsusingget1) | **GET** /media/videos/{video_id}/comments | Returns a page of comments for a video
[**getDispositionsUsingGET1**](SWGMediaVideosApi.md#getdispositionsusingget1) | **GET** /media/videos/{video_id}/dispositions | Returns a page of dispositions for a video
[**getRelatedUsingGET**](SWGMediaVideosApi.md#getrelatedusingget) | **GET** /media/videos/{video_id}/related | Returns a page of video relationships
[**getUserVideosUsingGET**](SWGMediaVideosApi.md#getuservideosusingget) | **GET** /users/{user_id}/videos | Get user videos
[**getVideoUsingGET**](SWGMediaVideosApi.md#getvideousingget) | **GET** /media/videos/{id} | Loads a specific video details
[**removeContributorUsingDELETE**](SWGMediaVideosApi.md#removecontributorusingdelete) | **DELETE** /media/videos/{video_id}/contributors/{id} | Removes a contributor from a video
[**removeWhitelistUsingDELETE**](SWGMediaVideosApi.md#removewhitelistusingdelete) | **DELETE** /media/videos/{video_id}/whitelist/{id} | Removes a user from a video&#39;s whitelist
[**searchVideosUsingGET**](SWGMediaVideosApi.md#searchvideosusingget) | **GET** /media/videos | Search videos using the documented filters
[**updateCommentUsingPUT1**](SWGMediaVideosApi.md#updatecommentusingput1) | **PUT** /media/videos/{video_id}/comments/{id}/content | Update video comment content 
[**updateRelationshipUsingPUT1**](SWGMediaVideosApi.md#updaterelationshipusingput1) | **PUT** /media/videos/{video_id}/related/{id}/relationship_details | Update a video&#39;s relationship details
[**updateVideoUsingPUT**](SWGMediaVideosApi.md#updatevideousingput) | **PUT** /media/videos/{id} | Modifies a video&#39;s details
[**viewVideoUsingPOST**](SWGMediaVideosApi.md#viewvideousingpost) | **POST** /media/videos/{id}/views | Increment a video&#39;s view count


# **addCommentUsingPOST1**
```objc
-(NSNumber*) addCommentUsingPOST1WithVideoId: (NSNumber*) videoId
    commentResource: (SWGCommentResource*) commentResource
        completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;
```

Add a new video comment

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id 
SWGCommentResource* commentResource = [[SWGCommentResource alloc] init]; // The comment object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Add a new video comment
[apiInstance addCommentUsingPOST1WithVideoId:videoId
              commentResource:commentResource
          completionHandler: ^(SWGCommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addCommentUsingPOST1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id  | 
 **commentResource** | [**SWGCommentResource***](SWGCommentResource*.md)| The comment object | [optional] 

### Return type

[**SWGCommentResource***](SWGCommentResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addContributorUsingPOST**
```objc
-(NSNumber*) addContributorUsingPOSTWithVideoId: (NSNumber*) videoId
    contributionResource: (SWGContributionResource*) contributionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a contributor to a video

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
SWGContributionResource* contributionResource = [[SWGContributionResource alloc] init]; // The contribution object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a contributor to a video
[apiInstance addContributorUsingPOSTWithVideoId:videoId
              contributionResource:contributionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addContributorUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **contributionResource** | [**SWGContributionResource***](SWGContributionResource*.md)| The contribution object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addDispositionUsingPOST1**
```objc
-(NSNumber*) addDispositionUsingPOST1WithVideoId: (NSNumber*) videoId
    dispositionResource: (SWGDispositionResource*) dispositionResource
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Add a new Video disposition

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id
SWGDispositionResource* dispositionResource = [[SWGDispositionResource alloc] init]; // The disposition object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Add a new Video disposition
[apiInstance addDispositionUsingPOST1WithVideoId:videoId
              dispositionResource:dispositionResource
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addDispositionUsingPOST1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **dispositionResource** | [**SWGDispositionResource***](SWGDispositionResource*.md)| The disposition object | [optional] 

### Return type

[**SWGDispositionResource***](SWGDispositionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addFlagUsingPOST**
```objc
-(NSNumber*) addFlagUsingPOSTWithVideoId: (NSNumber*) videoId
    reason: (NSString*) reason
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a new flag

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSString* reason = reason_example; // The flag reason (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Add a new flag
[apiInstance addFlagUsingPOSTWithVideoId:videoId
              reason:reason
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addFlagUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **reason** | **NSString***| The flag reason | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addRelatedUsingPOST**
```objc
-(NSNumber*) addRelatedUsingPOSTWithVideoId: (NSNumber*) videoId
    videoRelationshipResource: (SWGVideoRelationshipResource*) videoRelationshipResource
        completionHandler: (void (^)(SWGVideoRelationshipResource* output, NSError* error)) handler;
```

Adds one or more existing videos as related to this one

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
SWGVideoRelationshipResource* videoRelationshipResource = [[SWGVideoRelationshipResource alloc] init]; // The video relationship object  (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds one or more existing videos as related to this one
[apiInstance addRelatedUsingPOSTWithVideoId:videoId
              videoRelationshipResource:videoRelationshipResource
          completionHandler: ^(SWGVideoRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addRelatedUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **videoRelationshipResource** | [**SWGVideoRelationshipResource***](SWGVideoRelationshipResource*.md)| The video relationship object  | [optional] 

### Return type

[**SWGVideoRelationshipResource***](SWGVideoRelationshipResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoUsingPOST**
```objc
-(NSNumber*) addVideoUsingPOSTWithVideoResource: (SWGVideoResource*) videoResource
        completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;
```

Adds a new video in the system

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGVideoResource* videoResource = [[SWGVideoResource alloc] init]; // The video object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a new video in the system
[apiInstance addVideoUsingPOSTWithVideoResource:videoResource
          completionHandler: ^(SWGVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideoUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoResource** | [**SWGVideoResource***](SWGVideoResource*.md)| The video object | [optional] 

### Return type

[**SWGVideoResource***](SWGVideoResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addWhitelistUsingPOST**
```objc
-(NSNumber*) addWhitelistUsingPOSTWithId: (NSNumber*) _id
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a user to a video's whitelist

Whitelisted users can view video regardless of privacy setting.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
NSNumber* userId = 56; // The user id (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a user to a video's whitelist
[apiInstance addWhitelistUsingPOSTWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addWhitelistUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 
 **userId** | **NSNumber***| The user id | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCommentUsingDELETE1**
```objc
-(NSNumber*) deleteCommentUsingDELETE1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video comment

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video comment
[apiInstance deleteCommentUsingDELETE1WithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteCommentUsingDELETE1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The comment id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDispositionUsingDELETE1**
```objc
-(NSNumber*) deleteDispositionUsingDELETE1WithDispositionId: (NSNumber*) dispositionId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video comment

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* dispositionId = @789; // The disposition id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video comment
[apiInstance deleteDispositionUsingDELETE1WithDispositionId:dispositionId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteDispositionUsingDELETE1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **dispositionId** | **NSNumber***| The disposition id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteFlagUsingDELETE**
```objc
-(NSNumber*) deleteFlagUsingDELETEWithVideoId: (NSNumber*) videoId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a flag

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a flag
[apiInstance deleteFlagUsingDELETEWithVideoId:videoId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteFlagUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRelationshipUsingDELETE1**
```objc
-(NSNumber*) deleteRelationshipUsingDELETE1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video's relationship

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The relationship id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video's relationship
[apiInstance deleteRelationshipUsingDELETE1WithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteRelationshipUsingDELETE1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The relationship id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoUsingDELETE**
```objc
-(NSNumber*) deleteVideoUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a video from the system if no resources are attached to it

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Removes a video from the system if no resources are attached to it
[apiInstance deleteVideoUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideoUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCommentsUsingGET1**
```objc
-(NSNumber*) getCommentsUsingGET1WithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageCommentResource_* output, NSError* error)) handler;
```

Returns a page of comments for a video

### Example 
```objc

NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of comments for a video
[apiInstance getCommentsUsingGET1WithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageCommentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getCommentsUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageCommentResource_***](SWGPageCommentResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDispositionsUsingGET1**
```objc
-(NSNumber*) getDispositionsUsingGET1WithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions for a video

### Example 
```objc

NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of dispositions for a video
[apiInstance getDispositionsUsingGET1WithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getDispositionsUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageDispositionResource_***](SWGPageDispositionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRelatedUsingGET**
```objc
-(NSNumber*) getRelatedUsingGETWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageVideoRelationshipResource_* output, NSError* error)) handler;
```

Returns a page of video relationships

### Example 
```objc

NSNumber* videoId = @789; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of video relationships
[apiInstance getRelatedUsingGETWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageVideoRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getRelatedUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageVideoRelationshipResource_***](SWGPageVideoRelationshipResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserVideosUsingGET**
```objc
-(NSNumber*) getUserVideosUsingGETWithUserId: (NSNumber*) userId
    excludeFlagged: (NSNumber*) excludeFlagged
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageVideoResource_* output, NSError* error)) handler;
```

Get user videos

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id
NSNumber* excludeFlagged = @true; // Skip videos that have been flagged by the current user (optional) (default to true)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Get user videos
[apiInstance getUserVideosUsingGETWithUserId:userId
              excludeFlagged:excludeFlagged
              size:size
              page:page
          completionHandler: ^(SWGPageVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getUserVideosUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The user id | 
 **excludeFlagged** | **NSNumber***| Skip videos that have been flagged by the current user | [optional] [default to true]
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageVideoResource_***](SWGPageVideoResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoUsingGET**
```objc
-(NSNumber*) getVideoUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;
```

Loads a specific video details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Loads a specific video details
[apiInstance getVideoUsingGETWithId:_id
          completionHandler: ^(SWGVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideoUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 

### Return type

[**SWGVideoResource***](SWGVideoResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeContributorUsingDELETE**
```objc
-(NSNumber*) removeContributorUsingDELETEWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a contributor from a video

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The contributor id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Removes a contributor from a video
[apiInstance removeContributorUsingDELETEWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->removeContributorUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The contributor id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeWhitelistUsingDELETE**
```objc
-(NSNumber*) removeWhitelistUsingDELETEWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a video's whitelist

Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The user id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Removes a user from a video's whitelist
[apiInstance removeWhitelistUsingDELETEWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->removeWhitelistUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The user id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchVideosUsingGET**
```objc
-(NSNumber*) searchVideosUsingGETWithExcludeFlagged: (NSNumber*) excludeFlagged
    filterVideosByUploader: (NSString*) filterVideosByUploader
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterVideosByName: (NSString*) filterVideosByName
    filterVideosByContributor: (NSString*) filterVideosByContributor
    filterVideosByAuthor: (NSString*) filterVideosByAuthor
    filterHasAuthor: (NSNumber*) filterHasAuthor
    filterHasUploader: (NSNumber*) filterHasUploader
    filterRelatedTo: (NSString*) filterRelatedTo
    filterFriends: (NSNumber*) filterFriends
    filterDisposition: (NSString*) filterDisposition
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageVideoResource_* output, NSError* error)) handler;
```

Search videos using the documented filters

### Example 
```objc

NSNumber* excludeFlagged = @true; // Skip videos that have been flagged by the current user (optional) (default to true)
NSString* filterVideosByUploader = @"filterVideosByUploader_example"; // Filter for videos by uploader id (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for videos from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for videos with specified tags (separated by comma) (optional)
NSString* filterVideosByName = @"filterVideosByName_example"; // Filter for videos which name *STARTS* with the given string (optional)
NSString* filterVideosByContributor = @"filterVideosByContributor_example"; // Filter for videos with contribution from the artist specified by ID (optional)
NSString* filterVideosByAuthor = @"filterVideosByAuthor_example"; // Filter for videos with an artist as author specified by ID (optional)
NSNumber* filterHasAuthor = @true; // Filter for videos that have an author set if true, or that have no author if false (optional)
NSNumber* filterHasUploader = @true; // Filter for videos that have an uploader set if true, or that have no uploader if false (optional)
NSString* filterRelatedTo = @"filterRelatedTo_example"; // Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well (optional)
NSNumber* filterFriends = @true; // Filter for videos uploaded by friends. 'true' for friends of the caller (requires user token) or a user id for a specific user's friends (requires VIDEOS_ADMIN permission) (optional)
NSString* filterDisposition = @"filterDisposition_example"; // Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or 'me' for the caller (requires user token for 'me') and DISPOSITION is the name of the disposition. E.G. filter_disposition=123:like or filter_disposition=me:favorite (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Search videos using the documented filters
[apiInstance searchVideosUsingGETWithExcludeFlagged:excludeFlagged
              filterVideosByUploader:filterVideosByUploader
              filterCategory:filterCategory
              filterTagset:filterTagset
              filterVideosByName:filterVideosByName
              filterVideosByContributor:filterVideosByContributor
              filterVideosByAuthor:filterVideosByAuthor
              filterHasAuthor:filterHasAuthor
              filterHasUploader:filterHasUploader
              filterRelatedTo:filterRelatedTo
              filterFriends:filterFriends
              filterDisposition:filterDisposition
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->searchVideosUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excludeFlagged** | **NSNumber***| Skip videos that have been flagged by the current user | [optional] [default to true]
 **filterVideosByUploader** | **NSString***| Filter for videos by uploader id | [optional] 
 **filterCategory** | **NSString***| Filter for videos from a specific category by id | [optional] 
 **filterTagset** | **NSString***| Filter for videos with specified tags (separated by comma) | [optional] 
 **filterVideosByName** | **NSString***| Filter for videos which name *STARTS* with the given string | [optional] 
 **filterVideosByContributor** | **NSString***| Filter for videos with contribution from the artist specified by ID | [optional] 
 **filterVideosByAuthor** | **NSString***| Filter for videos with an artist as author specified by ID | [optional] 
 **filterHasAuthor** | **NSNumber***| Filter for videos that have an author set if true, or that have no author if false | [optional] 
 **filterHasUploader** | **NSNumber***| Filter for videos that have an uploader set if true, or that have no uploader if false | [optional] 
 **filterRelatedTo** | **NSString***| Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well | [optional] 
 **filterFriends** | **NSNumber***| Filter for videos uploaded by friends. &#39;true&#39; for friends of the caller (requires user token) or a user id for a specific user&#39;s friends (requires VIDEOS_ADMIN permission) | [optional] 
 **filterDisposition** | **NSString***| Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or &#39;me&#39; for the caller (requires user token for &#39;me&#39;) and DISPOSITION is the name of the disposition. E.G. filter_disposition&#x3D;123:like or filter_disposition&#x3D;me:favorite | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageVideoResource_***](SWGPageVideoResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCommentUsingPUT1**
```objc
-(NSNumber*) updateCommentUsingPUT1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    content: (NSString*) content
        completionHandler: (void (^)(NSError* error)) handler;
```

Update video comment content 

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id
NSString* content = content_example; // The comment content (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Update video comment content 
[apiInstance updateCommentUsingPUT1WithVideoId:videoId
              _id:_id
              content:content
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateCommentUsingPUT1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The comment id | 
 **content** | **NSString***| The comment content | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRelationshipUsingPUT1**
```objc
-(NSNumber*) updateRelationshipUsingPUT1WithVideoId: (NSNumber*) videoId
    relationshipId: (NSNumber*) relationshipId
    details: (NSString*) details
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a video's relationship details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* relationshipId = @789; // The relationship id
NSString* details = details_example; // The video relationship details (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Update a video's relationship details
[apiInstance updateRelationshipUsingPUT1WithVideoId:videoId
              relationshipId:relationshipId
              details:details
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateRelationshipUsingPUT1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **relationshipId** | **NSNumber***| The relationship id | 
 **details** | **NSString***| The video relationship details | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoUsingPUT**
```objc
-(NSNumber*) updateVideoUsingPUTWithId: (NSNumber*) _id
    videoResource: (SWGVideoResource*) videoResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies a video's details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
SWGVideoResource* videoResource = [[SWGVideoResource alloc] init]; // The video object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Modifies a video's details
[apiInstance updateVideoUsingPUTWithId:_id
              videoResource:videoResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateVideoUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 
 **videoResource** | [**SWGVideoResource***](SWGVideoResource*.md)| The video object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **viewVideoUsingPOST**
```objc
-(NSNumber*) viewVideoUsingPOSTWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Increment a video's view count

### Example 
```objc

NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Increment a video's view count
[apiInstance viewVideoUsingPOSTWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->viewVideoUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

