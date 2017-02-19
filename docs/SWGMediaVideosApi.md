# SWGMediaVideosApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserToVideoWhitelist**](SWGMediaVideosApi.md#addusertovideowhitelist) | **POST** /media/videos/{id}/whitelist | Adds a user to a video&#39;s whitelist
[**addVideo**](SWGMediaVideosApi.md#addvideo) | **POST** /media/videos | Adds a new video in the system
[**addVideoComment**](SWGMediaVideosApi.md#addvideocomment) | **POST** /media/videos/{video_id}/comments | Add a new video comment
[**addVideoContributor**](SWGMediaVideosApi.md#addvideocontributor) | **POST** /media/videos/{video_id}/contributors | Adds a contributor to a video
[**addVideoFlag**](SWGMediaVideosApi.md#addvideoflag) | **POST** /media/videos/{video_id}/moderation | Add a new flag
[**addVideoRelationships**](SWGMediaVideosApi.md#addvideorelationships) | **POST** /media/videos/{video_id}/related | Adds one or more existing videos as related to this one
[**createVideoDisposition**](SWGMediaVideosApi.md#createvideodisposition) | **POST** /media/videos/{video_id}/dispositions | Create a video disposition
[**deleteVideo**](SWGMediaVideosApi.md#deletevideo) | **DELETE** /media/videos/{id} | Deletes a video from the system if no resources are attached to it
[**deleteVideoComment**](SWGMediaVideosApi.md#deletevideocomment) | **DELETE** /media/videos/{video_id}/comments/{id} | Delete a video comment
[**deleteVideoDisposition**](SWGMediaVideosApi.md#deletevideodisposition) | **DELETE** /media/videos/{video_id}/dispositions/{disposition_id} | Delete a video disposition
[**deleteVideoFlag**](SWGMediaVideosApi.md#deletevideoflag) | **DELETE** /media/videos/{video_id}/moderation | Delete a flag
[**deleteVideoRelationship**](SWGMediaVideosApi.md#deletevideorelationship) | **DELETE** /media/videos/{video_id}/related/{id} | Delete a video&#39;s relationship
[**getUserVideos**](SWGMediaVideosApi.md#getuservideos) | **GET** /users/{user_id}/videos | Get user videos
[**getVideo**](SWGMediaVideosApi.md#getvideo) | **GET** /media/videos/{id} | Loads a specific video details
[**getVideoComments**](SWGMediaVideosApi.md#getvideocomments) | **GET** /media/videos/{video_id}/comments | Returns a page of comments for a video
[**getVideoDispositions**](SWGMediaVideosApi.md#getvideodispositions) | **GET** /media/videos/{video_id}/dispositions | Returns a page of dispositions for a video
[**getVideoRelationships**](SWGMediaVideosApi.md#getvideorelationships) | **GET** /media/videos/{video_id}/related | Returns a page of video relationships
[**getVideos**](SWGMediaVideosApi.md#getvideos) | **GET** /media/videos | Search videos using the documented filters
[**removeUserFromVideoWhitelist**](SWGMediaVideosApi.md#removeuserfromvideowhitelist) | **DELETE** /media/videos/{video_id}/whitelist/{id} | Removes a user from a video&#39;s whitelist
[**removeVideoContributor**](SWGMediaVideosApi.md#removevideocontributor) | **DELETE** /media/videos/{video_id}/contributors/{id} | Removes a contributor from a video
[**updateVideo**](SWGMediaVideosApi.md#updatevideo) | **PUT** /media/videos/{id} | Modifies a video&#39;s details
[**updateVideoComment**](SWGMediaVideosApi.md#updatevideocomment) | **PUT** /media/videos/{video_id}/comments/{id}/content | Update a video comment
[**updateVideoRelationship**](SWGMediaVideosApi.md#updatevideorelationship) | **PUT** /media/videos/{video_id}/related/{id}/relationship_details | Update a video&#39;s relationship details
[**viewVideo**](SWGMediaVideosApi.md#viewvideo) | **POST** /media/videos/{id}/views | Increment a video&#39;s view count


# **addUserToVideoWhitelist**
```objc
-(NSURLSessionTask*) addUserToVideoWhitelistWithId: (NSNumber*) _id
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a user to a video's whitelist

Whitelisted users can view video regardless of privacy setting.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
NSNumber* userId = 56; // The user id (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a user to a video's whitelist
[apiInstance addUserToVideoWhitelistWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addUserToVideoWhitelist: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideo**
```objc
-(NSURLSessionTask*) addVideoWithVideoResource: (SWGVideoResource*) videoResource
        completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;
```

Adds a new video in the system

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGVideoResource* videoResource = [[SWGVideoResource alloc] init]; // The video object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a new video in the system
[apiInstance addVideoWithVideoResource:videoResource
          completionHandler: ^(SWGVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideo: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoComment**
```objc
-(NSURLSessionTask*) addVideoCommentWithVideoId: (NSNumber*) videoId
    commentResource: (SWGCommentResource*) commentResource
        completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;
```

Add a new video comment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id 
SWGCommentResource* commentResource = [[SWGCommentResource alloc] init]; // The comment object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Add a new video comment
[apiInstance addVideoCommentWithVideoId:videoId
              commentResource:commentResource
          completionHandler: ^(SWGCommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideoComment: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoContributor**
```objc
-(NSURLSessionTask*) addVideoContributorWithVideoId: (NSNumber*) videoId
    contributionResource: (SWGContributionResource*) contributionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a contributor to a video

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
SWGContributionResource* contributionResource = [[SWGContributionResource alloc] init]; // The contribution object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds a contributor to a video
[apiInstance addVideoContributorWithVideoId:videoId
              contributionResource:contributionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideoContributor: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoFlag**
```objc
-(NSURLSessionTask*) addVideoFlagWithVideoId: (NSNumber*) videoId
    reason: (NSString*) reason
        completionHandler: (void (^)(SWGFlagResource* output, NSError* error)) handler;
```

Add a new flag

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSString* reason = reason_example; // The flag reason (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Add a new flag
[apiInstance addVideoFlagWithVideoId:videoId
              reason:reason
          completionHandler: ^(SWGFlagResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideoFlag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **reason** | **NSString***| The flag reason | [optional] 

### Return type

[**SWGFlagResource***](SWGFlagResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoRelationships**
```objc
-(NSURLSessionTask*) addVideoRelationshipsWithVideoId: (NSNumber*) videoId
    videoRelationshipResource: (SWGVideoRelationshipResource*) videoRelationshipResource
        completionHandler: (void (^)(SWGVideoRelationshipResource* output, NSError* error)) handler;
```

Adds one or more existing videos as related to this one

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
SWGVideoRelationshipResource* videoRelationshipResource = [[SWGVideoRelationshipResource alloc] init]; // The video relationship object  (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Adds one or more existing videos as related to this one
[apiInstance addVideoRelationshipsWithVideoId:videoId
              videoRelationshipResource:videoRelationshipResource
          completionHandler: ^(SWGVideoRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->addVideoRelationships: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVideoDisposition**
```objc
-(NSURLSessionTask*) createVideoDispositionWithVideoId: (NSNumber*) videoId
    dispositionResource: (SWGDispositionResource*) dispositionResource
        completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;
```

Create a video disposition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id
SWGDispositionResource* dispositionResource = [[SWGDispositionResource alloc] init]; // The disposition object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Create a video disposition
[apiInstance createVideoDispositionWithVideoId:videoId
              dispositionResource:dispositionResource
          completionHandler: ^(SWGDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->createVideoDisposition: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideo**
```objc
-(NSURLSessionTask*) deleteVideoWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Deletes a video from the system if no resources are attached to it

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Deletes a video from the system if no resources are attached to it
[apiInstance deleteVideoWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideo: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoComment**
```objc
-(NSURLSessionTask*) deleteVideoCommentWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video comment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video comment
[apiInstance deleteVideoCommentWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideoComment: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoDisposition**
```objc
-(NSURLSessionTask*) deleteVideoDispositionWithDispositionId: (NSNumber*) dispositionId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video disposition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* dispositionId = @789; // The disposition id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video disposition
[apiInstance deleteVideoDispositionWithDispositionId:dispositionId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideoDisposition: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoFlag**
```objc
-(NSURLSessionTask*) deleteVideoFlagWithVideoId: (NSNumber*) videoId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a flag

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a flag
[apiInstance deleteVideoFlagWithVideoId:videoId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideoFlag: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoRelationship**
```objc
-(NSURLSessionTask*) deleteVideoRelationshipWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video's relationship

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The relationship id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Delete a video's relationship
[apiInstance deleteVideoRelationshipWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->deleteVideoRelationship: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserVideos**
```objc
-(NSURLSessionTask*) getUserVideosWithUserId: (NSNumber*) userId
    excludeFlagged: (NSNumber*) excludeFlagged
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceVideoResource_* output, NSError* error)) handler;
```

Get user videos

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id
NSNumber* excludeFlagged = @true; // Skip videos that have been flagged by the current user (optional) (default to true)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Get user videos
[apiInstance getUserVideosWithUserId:userId
              excludeFlagged:excludeFlagged
              size:size
              page:page
          completionHandler: ^(SWGPageResourceVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getUserVideos: %@", error);
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

[**SWGPageResourceVideoResource_***](SWGPageResourceVideoResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideo**
```objc
-(NSURLSessionTask*) getVideoWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;
```

Loads a specific video details

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Loads a specific video details
[apiInstance getVideoWithId:_id
          completionHandler: ^(SWGVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideo: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoComments**
```objc
-(NSURLSessionTask*) getVideoCommentsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceCommentResource_* output, NSError* error)) handler;
```

Returns a page of comments for a video

### Example 
```objc

NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of comments for a video
[apiInstance getVideoCommentsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageResourceCommentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideoComments: %@", error);
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

[**SWGPageResourceCommentResource_***](SWGPageResourceCommentResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoDispositions**
```objc
-(NSURLSessionTask*) getVideoDispositionsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions for a video

### Example 
```objc

NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of dispositions for a video
[apiInstance getVideoDispositionsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageResourceDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideoDispositions: %@", error);
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

[**SWGPageResourceDispositionResource_***](SWGPageResourceDispositionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoRelationships**
```objc
-(NSURLSessionTask*) getVideoRelationshipsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceVideoRelationshipResource_* output, NSError* error)) handler;
```

Returns a page of video relationships

### Example 
```objc

NSNumber* videoId = @789; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Returns a page of video relationships
[apiInstance getVideoRelationshipsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(SWGPageResourceVideoRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideoRelationships: %@", error);
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

[**SWGPageResourceVideoRelationshipResource_***](SWGPageResourceVideoRelationshipResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideos**
```objc
-(NSURLSessionTask*) getVideosWithExcludeFlagged: (NSNumber*) excludeFlagged
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
        completionHandler: (void (^)(SWGPageResourceVideoResource_* output, NSError* error)) handler;
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
NSString* order = @"author:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to author:ASC)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Search videos using the documented filters
[apiInstance getVideosWithExcludeFlagged:excludeFlagged
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
          completionHandler: ^(SWGPageResourceVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->getVideos: %@", error);
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
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to author:ASC]

### Return type

[**SWGPageResourceVideoResource_***](SWGPageResourceVideoResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeUserFromVideoWhitelist**
```objc
-(NSURLSessionTask*) removeUserFromVideoWhitelistWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a video's whitelist

Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The user id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Removes a user from a video's whitelist
[apiInstance removeUserFromVideoWhitelistWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->removeUserFromVideoWhitelist: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeVideoContributor**
```objc
-(NSURLSessionTask*) removeVideoContributorWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a contributor from a video

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The contributor id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Removes a contributor from a video
[apiInstance removeVideoContributorWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->removeVideoContributor: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideo**
```objc
-(NSURLSessionTask*) updateVideoWithId: (NSNumber*) _id
    videoResource: (SWGVideoResource*) videoResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies a video's details

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
SWGVideoResource* videoResource = [[SWGVideoResource alloc] init]; // The video object (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Modifies a video's details
[apiInstance updateVideoWithId:_id
              videoResource:videoResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateVideo: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoComment**
```objc
-(NSURLSessionTask*) updateVideoCommentWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    content: (NSString*) content
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a video comment

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id
NSString* content = content_example; // The comment content (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Update a video comment
[apiInstance updateVideoCommentWithVideoId:videoId
              _id:_id
              content:content
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateVideoComment: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoRelationship**
```objc
-(NSURLSessionTask*) updateVideoRelationshipWithVideoId: (NSNumber*) videoId
    relationshipId: (NSNumber*) relationshipId
    details: (NSString*) details
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a video's relationship details

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* relationshipId = @789; // The relationship id
NSString* details = details_example; // The video relationship details (optional)

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Update a video's relationship details
[apiInstance updateVideoRelationshipWithVideoId:videoId
              relationshipId:relationshipId
              details:details
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->updateVideoRelationship: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **viewVideo**
```objc
-(NSURLSessionTask*) viewVideoWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Increment a video's view count

### Example 
```objc

NSNumber* _id = @789; // The video id

SWGMediaVideosApi*apiInstance = [[SWGMediaVideosApi alloc] init];

// Increment a video's view count
[apiInstance viewVideoWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaVideosApi->viewVideo: %@", error);
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
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

