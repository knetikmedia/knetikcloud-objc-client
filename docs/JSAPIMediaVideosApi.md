# JSAPIMediaVideosApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addUserToVideoWhitelist**](JSAPIMediaVideosApi.md#addusertovideowhitelist) | **POST** /media/videos/{id}/whitelist | Adds a user to a video&#39;s whitelist
[**addVideo**](JSAPIMediaVideosApi.md#addvideo) | **POST** /media/videos | Adds a new video in the system
[**addVideoComment**](JSAPIMediaVideosApi.md#addvideocomment) | **POST** /media/videos/{video_id}/comments | Add a new video comment
[**addVideoContributor**](JSAPIMediaVideosApi.md#addvideocontributor) | **POST** /media/videos/{video_id}/contributors | Adds a contributor to a video
[**addVideoFlag**](JSAPIMediaVideosApi.md#addvideoflag) | **POST** /media/videos/{video_id}/moderation | Add a new flag
[**addVideoRelationships**](JSAPIMediaVideosApi.md#addvideorelationships) | **POST** /media/videos/{video_id}/related | Adds one or more existing videos as related to this one
[**createVideoDisposition**](JSAPIMediaVideosApi.md#createvideodisposition) | **POST** /media/videos/{video_id}/dispositions | Create a video disposition
[**createVideoTemplate**](JSAPIMediaVideosApi.md#createvideotemplate) | **POST** /media/videos/templates | Create a video template
[**deleteVideo**](JSAPIMediaVideosApi.md#deletevideo) | **DELETE** /media/videos/{id} | Deletes a video from the system if no resources are attached to it
[**deleteVideoComment**](JSAPIMediaVideosApi.md#deletevideocomment) | **DELETE** /media/videos/{video_id}/comments/{id} | Delete a video comment
[**deleteVideoDisposition**](JSAPIMediaVideosApi.md#deletevideodisposition) | **DELETE** /media/videos/{video_id}/dispositions/{disposition_id} | Delete a video disposition
[**deleteVideoFlag**](JSAPIMediaVideosApi.md#deletevideoflag) | **DELETE** /media/videos/{video_id}/moderation | Delete a flag
[**deleteVideoRelationship**](JSAPIMediaVideosApi.md#deletevideorelationship) | **DELETE** /media/videos/{video_id}/related/{id} | Delete a video&#39;s relationship
[**deleteVideoTemplate**](JSAPIMediaVideosApi.md#deletevideotemplate) | **DELETE** /media/videos/templates/{id} | Delete a video template
[**getUserVideos**](JSAPIMediaVideosApi.md#getuservideos) | **GET** /users/{user_id}/videos | Get user videos
[**getVideo**](JSAPIMediaVideosApi.md#getvideo) | **GET** /media/videos/{id} | Loads a specific video details
[**getVideoComments**](JSAPIMediaVideosApi.md#getvideocomments) | **GET** /media/videos/{video_id}/comments | Returns a page of comments for a video
[**getVideoDispositions**](JSAPIMediaVideosApi.md#getvideodispositions) | **GET** /media/videos/{video_id}/dispositions | Returns a page of dispositions for a video
[**getVideoRelationships**](JSAPIMediaVideosApi.md#getvideorelationships) | **GET** /media/videos/{video_id}/related | Returns a page of video relationships
[**getVideoTemplate**](JSAPIMediaVideosApi.md#getvideotemplate) | **GET** /media/videos/templates/{id} | Get a single video template
[**getVideoTemplates**](JSAPIMediaVideosApi.md#getvideotemplates) | **GET** /media/videos/templates | List and search video templates
[**getVideos**](JSAPIMediaVideosApi.md#getvideos) | **GET** /media/videos | Search videos using the documented filters
[**removeUserFromVideoWhitelist**](JSAPIMediaVideosApi.md#removeuserfromvideowhitelist) | **DELETE** /media/videos/{video_id}/whitelist/{id} | Removes a user from a video&#39;s whitelist
[**removeVideoContributor**](JSAPIMediaVideosApi.md#removevideocontributor) | **DELETE** /media/videos/{video_id}/contributors/{id} | Removes a contributor from a video
[**updateVideo**](JSAPIMediaVideosApi.md#updatevideo) | **PUT** /media/videos/{id} | Modifies a video&#39;s details
[**updateVideoComment**](JSAPIMediaVideosApi.md#updatevideocomment) | **PUT** /media/videos/{video_id}/comments/{id}/content | Update a video comment
[**updateVideoRelationship**](JSAPIMediaVideosApi.md#updatevideorelationship) | **PUT** /media/videos/{video_id}/related/{id}/relationship_details | Update a video&#39;s relationship details
[**updateVideoTemplate**](JSAPIMediaVideosApi.md#updatevideotemplate) | **PUT** /media/videos/templates/{id} | Update a video template
[**viewVideo**](JSAPIMediaVideosApi.md#viewvideo) | **POST** /media/videos/{id}/views | Increment a video&#39;s view count


# **addUserToVideoWhitelist**
```objc
-(NSURLSessionTask*) addUserToVideoWhitelistWithId: (NSNumber*) _id
    userId: (JSAPIIntWrapper*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a user to a video's whitelist

Whitelisted users can view video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
JSAPIIntWrapper* userId = [[JSAPIIntWrapper alloc] init]; // The user id (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Adds a user to a video's whitelist
[apiInstance addUserToVideoWhitelistWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addUserToVideoWhitelist: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 
 **userId** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The user id | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideo**
```objc
-(NSURLSessionTask*) addVideoWithVideoResource: (JSAPIVideoResource*) videoResource
        completionHandler: (void (^)(JSAPIVideoResource* output, NSError* error)) handler;
```

Adds a new video in the system

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIVideoResource* videoResource = [[JSAPIVideoResource alloc] init]; // The video object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Adds a new video in the system
[apiInstance addVideoWithVideoResource:videoResource
          completionHandler: ^(JSAPIVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addVideo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoResource** | [**JSAPIVideoResource***](JSAPIVideoResource.md)| The video object | [optional] 

### Return type

[**JSAPIVideoResource***](JSAPIVideoResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoComment**
```objc
-(NSURLSessionTask*) addVideoCommentWithVideoId: (NSNumber*) videoId
    commentResource: (JSAPICommentResource*) commentResource
        completionHandler: (void (^)(JSAPICommentResource* output, NSError* error)) handler;
```

Add a new video comment

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id 
JSAPICommentResource* commentResource = [[JSAPICommentResource alloc] init]; // The comment object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Add a new video comment
[apiInstance addVideoCommentWithVideoId:videoId
              commentResource:commentResource
          completionHandler: ^(JSAPICommentResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addVideoComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id  | 
 **commentResource** | [**JSAPICommentResource***](JSAPICommentResource.md)| The comment object | [optional] 

### Return type

[**JSAPICommentResource***](JSAPICommentResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoContributor**
```objc
-(NSURLSessionTask*) addVideoContributorWithVideoId: (NSNumber*) videoId
    contributionResource: (JSAPIContributionResource*) contributionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Adds a contributor to a video

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
JSAPIContributionResource* contributionResource = [[JSAPIContributionResource alloc] init]; // The contribution object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Adds a contributor to a video
[apiInstance addVideoContributorWithVideoId:videoId
              contributionResource:contributionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addVideoContributor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **contributionResource** | [**JSAPIContributionResource***](JSAPIContributionResource.md)| The contribution object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoFlag**
```objc
-(NSURLSessionTask*) addVideoFlagWithVideoId: (NSNumber*) videoId
    reason: (JSAPIStringWrapper*) reason
        completionHandler: (void (^)(JSAPIFlagResource* output, NSError* error)) handler;
```

Add a new flag

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
JSAPIStringWrapper* reason = [[JSAPIStringWrapper alloc] init]; // The flag reason (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Add a new flag
[apiInstance addVideoFlagWithVideoId:videoId
              reason:reason
          completionHandler: ^(JSAPIFlagResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addVideoFlag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **reason** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The flag reason | [optional] 

### Return type

[**JSAPIFlagResource***](JSAPIFlagResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addVideoRelationships**
```objc
-(NSURLSessionTask*) addVideoRelationshipsWithVideoId: (NSNumber*) videoId
    videoRelationshipResource: (JSAPIVideoRelationshipResource*) videoRelationshipResource
        completionHandler: (void (^)(JSAPIVideoRelationshipResource* output, NSError* error)) handler;
```

Adds one or more existing videos as related to this one

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
JSAPIVideoRelationshipResource* videoRelationshipResource = [[JSAPIVideoRelationshipResource alloc] init]; // The video relationship object  (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Adds one or more existing videos as related to this one
[apiInstance addVideoRelationshipsWithVideoId:videoId
              videoRelationshipResource:videoRelationshipResource
          completionHandler: ^(JSAPIVideoRelationshipResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->addVideoRelationships: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **videoRelationshipResource** | [**JSAPIVideoRelationshipResource***](JSAPIVideoRelationshipResource.md)| The video relationship object  | [optional] 

### Return type

[**JSAPIVideoRelationshipResource***](JSAPIVideoRelationshipResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVideoDisposition**
```objc
-(NSURLSessionTask*) createVideoDispositionWithVideoId: (NSNumber*) videoId
    dispositionResource: (JSAPIDispositionResource*) dispositionResource
        completionHandler: (void (^)(JSAPIDispositionResource* output, NSError* error)) handler;
```

Create a video disposition

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id
JSAPIDispositionResource* dispositionResource = [[JSAPIDispositionResource alloc] init]; // The disposition object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Create a video disposition
[apiInstance createVideoDispositionWithVideoId:videoId
              dispositionResource:dispositionResource
          completionHandler: ^(JSAPIDispositionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->createVideoDisposition: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **dispositionResource** | [**JSAPIDispositionResource***](JSAPIDispositionResource.md)| The disposition object | [optional] 

### Return type

[**JSAPIDispositionResource***](JSAPIDispositionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVideoTemplate**
```objc
-(NSURLSessionTask*) createVideoTemplateWithVideoTemplateResource: (JSAPITemplateResource*) videoTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a video template

Video Templates define a type of video and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* videoTemplateResource = [[JSAPITemplateResource alloc] init]; // The video template resource object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Create a video template
[apiInstance createVideoTemplateWithVideoTemplateResource:videoTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->createVideoTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The video template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Deletes a video from the system if no resources are attached to it
[apiInstance deleteVideoWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideo: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoComment**
```objc
-(NSURLSessionTask*) deleteVideoCommentWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video comment

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Delete a video comment
[apiInstance deleteVideoCommentWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideoComment: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoDisposition**
```objc
-(NSURLSessionTask*) deleteVideoDispositionWithDispositionId: (NSNumber*) dispositionId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video disposition

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* dispositionId = @789; // The disposition id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Delete a video disposition
[apiInstance deleteVideoDispositionWithDispositionId:dispositionId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideoDisposition: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoFlag**
```objc
-(NSURLSessionTask*) deleteVideoFlagWithVideoId: (NSNumber*) videoId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a flag

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Delete a flag
[apiInstance deleteVideoFlagWithVideoId:videoId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideoFlag: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoRelationship**
```objc
-(NSURLSessionTask*) deleteVideoRelationshipWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video's relationship

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The relationship id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Delete a video's relationship
[apiInstance deleteVideoRelationshipWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideoRelationship: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVideoTemplate**
```objc
-(NSURLSessionTask*) deleteVideoTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a video template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Delete a video template
[apiInstance deleteVideoTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->deleteVideoTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserVideos**
```objc
-(NSURLSessionTask*) getUserVideosWithUserId: (NSNumber*) userId
    excludeFlagged: (NSNumber*) excludeFlagged
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceVideoResource_* output, NSError* error)) handler;
```

Get user videos

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The user id
NSNumber* excludeFlagged = @true; // Skip videos that have been flagged by the current user (optional) (default to true)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Get user videos
[apiInstance getUserVideosWithUserId:userId
              excludeFlagged:excludeFlagged
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getUserVideos: %@", error);
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

[**JSAPIPageResourceVideoResource_***](JSAPIPageResourceVideoResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideo**
```objc
-(NSURLSessionTask*) getVideoWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIVideoResource* output, NSError* error)) handler;
```

Loads a specific video details

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Loads a specific video details
[apiInstance getVideoWithId:_id
          completionHandler: ^(JSAPIVideoResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 

### Return type

[**JSAPIVideoResource***](JSAPIVideoResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoComments**
```objc
-(NSURLSessionTask*) getVideoCommentsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceCommentResource_* output, NSError* error)) handler;
```

Returns a page of comments for a video

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Returns a page of comments for a video
[apiInstance getVideoCommentsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceCommentResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideoComments: %@", error);
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

[**JSAPIPageResourceCommentResource_***](JSAPIPageResourceCommentResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoDispositions**
```objc
-(NSURLSessionTask*) getVideoDispositionsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceDispositionResource_* output, NSError* error)) handler;
```

Returns a page of dispositions for a video

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @56; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Returns a page of dispositions for a video
[apiInstance getVideoDispositionsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceDispositionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideoDispositions: %@", error);
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

[**JSAPIPageResourceDispositionResource_***](JSAPIPageResourceDispositionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoRelationships**
```objc
-(NSURLSessionTask*) getVideoRelationshipsWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceVideoRelationshipResource_* output, NSError* error)) handler;
```

Returns a page of video relationships

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Returns a page of video relationships
[apiInstance getVideoRelationshipsWithVideoId:videoId
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceVideoRelationshipResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideoRelationships: %@", error);
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

[**JSAPIPageResourceVideoRelationshipResource_***](JSAPIPageResourceVideoRelationshipResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoTemplate**
```objc
-(NSURLSessionTask*) getVideoTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single video template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Get a single video template
[apiInstance getVideoTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideoTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideoTemplates**
```objc
-(NSURLSessionTask*) getVideoTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search video templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN

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

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// List and search video templates
[apiInstance getVideoTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideoTemplates: %@", error);
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

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVideos**
```objc
-(NSURLSessionTask*) getVideosWithExcludeFlagged: (NSNumber*) excludeFlagged
    filterVideosByUploader: (NSNumber*) filterVideosByUploader
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterVideosByName: (NSString*) filterVideosByName
    filterVideosByContributor: (NSNumber*) filterVideosByContributor
    filterVideosByAuthor: (NSNumber*) filterVideosByAuthor
    filterHasAuthor: (NSNumber*) filterHasAuthor
    filterHasUploader: (NSNumber*) filterHasUploader
    filterRelatedTo: (NSString*) filterRelatedTo
    filterFriends: (NSNumber*) filterFriends
    filterDisposition: (NSString*) filterDisposition
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceVideoResource_* output, NSError* error)) handler;
```

Search videos using the documented filters

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* excludeFlagged = @true; // Skip videos that have been flagged by the current user (optional) (default to true)
NSNumber* filterVideosByUploader = @56; // Filter for videos by uploader id (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for videos from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for videos with specified tags (separated by comma) (optional)
NSString* filterVideosByName = @"filterVideosByName_example"; // Filter for videos which name *STARTS* with the given string (optional)
NSNumber* filterVideosByContributor = @56; // Filter for videos with contribution from the artist specified by ID (optional)
NSNumber* filterVideosByAuthor = @56; // Filter for videos with an artist as author specified by ID (optional)
NSNumber* filterHasAuthor = @true; // Filter for videos that have an author set if true, or that have no author if false (optional)
NSNumber* filterHasUploader = @true; // Filter for videos that have an uploader set if true, or that have no uploader if false (optional)
NSString* filterRelatedTo = @"filterRelatedTo_example"; // Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well (optional)
NSNumber* filterFriends = @true; // Filter for videos uploaded by friends. 'true' for friends of the caller (requires user token) or a user id for a specific user's friends (requires VIDEOS_ADMIN permission) (optional)
NSString* filterDisposition = @"filterDisposition_example"; // Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or 'me' for the caller (requires user token for 'me') and DISPOSITION is the name of the disposition. E.G. filter_disposition=123:like or filter_disposition=me:favorite (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"author:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to author:ASC)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

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
          completionHandler: ^(JSAPIPageResourceVideoResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->getVideos: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **excludeFlagged** | **NSNumber***| Skip videos that have been flagged by the current user | [optional] [default to true]
 **filterVideosByUploader** | **NSNumber***| Filter for videos by uploader id | [optional] 
 **filterCategory** | **NSString***| Filter for videos from a specific category by id | [optional] 
 **filterTagset** | **NSString***| Filter for videos with specified tags (separated by comma) | [optional] 
 **filterVideosByName** | **NSString***| Filter for videos which name *STARTS* with the given string | [optional] 
 **filterVideosByContributor** | **NSNumber***| Filter for videos with contribution from the artist specified by ID | [optional] 
 **filterVideosByAuthor** | **NSNumber***| Filter for videos with an artist as author specified by ID | [optional] 
 **filterHasAuthor** | **NSNumber***| Filter for videos that have an author set if true, or that have no author if false | [optional] 
 **filterHasUploader** | **NSNumber***| Filter for videos that have an uploader set if true, or that have no uploader if false | [optional] 
 **filterRelatedTo** | **NSString***| Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well | [optional] 
 **filterFriends** | **NSNumber***| Filter for videos uploaded by friends. &#39;true&#39; for friends of the caller (requires user token) or a user id for a specific user&#39;s friends (requires VIDEOS_ADMIN permission) | [optional] 
 **filterDisposition** | **NSString***| Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or &#39;me&#39; for the caller (requires user token for &#39;me&#39;) and DISPOSITION is the name of the disposition. E.G. filter_disposition&#x3D;123:like or filter_disposition&#x3D;me:favorite | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to author:ASC]

### Return type

[**JSAPIPageResourceVideoResource_***](JSAPIPageResourceVideoResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeUserFromVideoWhitelist**
```objc
-(NSURLSessionTask*) removeUserFromVideoWhitelistWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a user from a video's whitelist

Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The user id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Removes a user from a video's whitelist
[apiInstance removeUserFromVideoWhitelistWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->removeUserFromVideoWhitelist: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeVideoContributor**
```objc
-(NSURLSessionTask*) removeVideoContributorWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes a contributor from a video

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @56; // The contributor id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Removes a contributor from a video
[apiInstance removeVideoContributorWithVideoId:videoId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->removeVideoContributor: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideo**
```objc
-(NSURLSessionTask*) updateVideoWithId: (NSNumber*) _id
    videoResource: (JSAPIVideoResource*) videoResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies a video's details

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id
JSAPIVideoResource* videoResource = [[JSAPIVideoResource alloc] init]; // The video object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Modifies a video's details
[apiInstance updateVideoWithId:_id
              videoResource:videoResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->updateVideo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The video id | 
 **videoResource** | [**JSAPIVideoResource***](JSAPIVideoResource.md)| The video object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoComment**
```objc
-(NSURLSessionTask*) updateVideoCommentWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    content: (JSAPIStringWrapper*) content
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a video comment

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* _id = @789; // The comment id
JSAPIStringWrapper* content = [[JSAPIStringWrapper alloc] init]; // The comment content (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Update a video comment
[apiInstance updateVideoCommentWithVideoId:videoId
              _id:_id
              content:content
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->updateVideoComment: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **_id** | **NSNumber***| The comment id | 
 **content** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The comment content | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoRelationship**
```objc
-(NSURLSessionTask*) updateVideoRelationshipWithVideoId: (NSNumber*) videoId
    relationshipId: (NSNumber*) relationshipId
    details: (JSAPIStringWrapper*) details
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a video's relationship details

<b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* videoId = @789; // The video id
NSNumber* relationshipId = @789; // The relationship id
JSAPIStringWrapper* details = [[JSAPIStringWrapper alloc] init]; // The video relationship details (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Update a video's relationship details
[apiInstance updateVideoRelationshipWithVideoId:videoId
              relationshipId:relationshipId
              details:details
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->updateVideoRelationship: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **videoId** | **NSNumber***| The video id | 
 **relationshipId** | **NSNumber***| The relationship id | 
 **details** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The video relationship details | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVideoTemplate**
```objc
-(NSURLSessionTask*) updateVideoTemplateWithId: (NSString*) _id
    videoTemplateResource: (JSAPITemplateResource*) videoTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a video template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* videoTemplateResource = [[JSAPITemplateResource alloc] init]; // The video template resource object (optional)

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Update a video template
[apiInstance updateVideoTemplateWithId:_id
              videoTemplateResource:videoTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->updateVideoTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **videoTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The video template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The video id

JSAPIMediaVideosApi*apiInstance = [[JSAPIMediaVideosApi alloc] init];

// Increment a video's view count
[apiInstance viewVideoWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaVideosApi->viewVideo: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

