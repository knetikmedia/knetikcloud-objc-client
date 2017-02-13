# SWGContentPollsApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**answerPoll**](SWGContentPollsApi.md#answerpoll) | **POST** /media/polls/{id}/response | Add your vote to a poll
[**createPoll**](SWGContentPollsApi.md#createpoll) | **POST** /media/polls | Create a new poll
[**createPollTemplate**](SWGContentPollsApi.md#createpolltemplate) | **POST** /media/polls/templates | Create a poll template
[**deletePoll**](SWGContentPollsApi.md#deletepoll) | **DELETE** /media/polls/{id} | Delete an existing poll
[**deletePollTemplate**](SWGContentPollsApi.md#deletepolltemplate) | **DELETE** /media/polls/templates/{id} | Delete a poll template
[**getPoll**](SWGContentPollsApi.md#getpoll) | **GET** /media/polls/{id} | Get a single poll
[**getPollAnswer**](SWGContentPollsApi.md#getpollanswer) | **GET** /media/polls/{id}/response | Get poll answer
[**getPollTemplate**](SWGContentPollsApi.md#getpolltemplate) | **GET** /media/polls/templates/{id} | Get a single poll template
[**getPollTemplates**](SWGContentPollsApi.md#getpolltemplates) | **GET** /media/polls/templates | List and search poll templates
[**getPolls**](SWGContentPollsApi.md#getpolls) | **GET** /media/polls | List and search polls
[**updatePoll**](SWGContentPollsApi.md#updatepoll) | **PUT** /media/polls/{id} | Update an existing poll
[**updatePollTemplate**](SWGContentPollsApi.md#updatepolltemplate) | **PUT** /media/polls/templates/{id} | Update a poll template


# **answerPoll**
```objc
-(NSURLSessionTask*) answerPollWithId: (NSString*) _id
    answerKey: (NSString*) answerKey
        completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;
```

Add your vote to a poll

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
NSString* answerKey = answerKey_example; // The answer key (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Add your vote to a poll
[apiInstance answerPollWithId:_id
              answerKey:answerKey
          completionHandler: ^(SWGPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->answerPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 
 **answerKey** | **NSString***| The answer key | [optional] 

### Return type

[**SWGPollResponseResource***](SWGPollResponseResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPoll**
```objc
-(NSURLSessionTask*) createPollWithPollResource: (SWGPollResource*) pollResource
        completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;
```

Create a new poll

Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGPollResource* pollResource = [[SWGPollResource alloc] init]; // The poll object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Create a new poll
[apiInstance createPollWithPollResource:pollResource
          completionHandler: ^(SWGPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->createPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pollResource** | [**SWGPollResource***](SWGPollResource*.md)| The poll object | [optional] 

### Return type

[**SWGPollResource***](SWGPollResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPollTemplate**
```objc
-(NSURLSessionTask*) createPollTemplateWithPollTemplateResource: (SWGTemplateResource*) pollTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a poll template

Poll templates define a type of poll and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* pollTemplateResource = [[SWGTemplateResource alloc] init]; // The poll template resource object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Create a poll template
[apiInstance createPollTemplateWithPollTemplateResource:pollTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->createPollTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pollTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The poll template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePoll**
```objc
-(NSURLSessionTask*) deletePollWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing poll

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Delete an existing poll
[apiInstance deletePollWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->deletePoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePollTemplate**
```objc
-(NSURLSessionTask*) deletePollTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a poll template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Delete a poll template
[apiInstance deletePollTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->deletePollTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPoll**
```objc
-(NSURLSessionTask*) getPollWithId: (NSString*) _id
        completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;
```

Get a single poll

### Example 
```objc

NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get a single poll
[apiInstance getPollWithId:_id
          completionHandler: ^(SWGPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 

### Return type

[**SWGPollResource***](SWGPollResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPollAnswer**
```objc
-(NSURLSessionTask*) getPollAnswerWithId: (NSString*) _id
        completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;
```

Get poll answer

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get poll answer
[apiInstance getPollAnswerWithId:_id
          completionHandler: ^(SWGPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 

### Return type

[**SWGPollResponseResource***](SWGPollResponseResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPollTemplate**
```objc
-(NSURLSessionTask*) getPollTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single poll template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get a single poll template
[apiInstance getPollTemplateWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPollTemplates**
```objc
-(NSURLSessionTask*) getPollTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search poll templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// List and search poll templates
[apiInstance getPollTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollTemplates: %@", error);
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

[**SWGPageResourceTemplateResource_***](SWGPageResourceTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPolls**
```objc
-(NSURLSessionTask*) getPollsWithFilterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterText: (NSString*) filterText
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourcePollResource_* output, NSError* error)) handler;
```

List and search polls

Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed.

### Example 
```objc

NSString* filterCategory = @"filterCategory_example"; // Filter for polls from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for polls with specified tags (separated by comma) (optional)
NSString* filterText = @"filterText_example"; // Filter for polls whose text contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// List and search polls
[apiInstance getPollsWithFilterCategory:filterCategory
              filterTagset:filterTagset
              filterText:filterText
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourcePollResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPolls: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterCategory** | **NSString***| Filter for polls from a specific category by id | [optional] 
 **filterTagset** | **NSString***| Filter for polls with specified tags (separated by comma) | [optional] 
 **filterText** | **NSString***| Filter for polls whose text contains a string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourcePollResource_***](SWGPageResourcePollResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePoll**
```objc
-(NSURLSessionTask*) updatePollWithId: (NSString*) _id
    pollResource: (SWGPollResource*) pollResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing poll

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
SWGPollResource* pollResource = [[SWGPollResource alloc] init]; // The poll object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Update an existing poll
[apiInstance updatePollWithId:_id
              pollResource:pollResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->updatePoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 
 **pollResource** | [**SWGPollResource***](SWGPollResource*.md)| The poll object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePollTemplate**
```objc
-(NSURLSessionTask*) updatePollTemplateWithId: (NSString*) _id
    pollTemplateResource: (SWGTemplateResource*) pollTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a poll template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* pollTemplateResource = [[SWGTemplateResource alloc] init]; // The poll template resource object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Update a poll template
[apiInstance updatePollTemplateWithId:_id
              pollTemplateResource:pollTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->updatePollTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **pollTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The poll template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

