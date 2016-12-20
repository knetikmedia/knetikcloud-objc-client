# SWGContentPollsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**answerPollUsingPOST**](SWGContentPollsApi.md#answerpollusingpost) | **POST** /media/polls/{id}/response | Add your vote to a poll
[**createPollTemplateUsingPOST**](SWGContentPollsApi.md#createpolltemplateusingpost) | **POST** /media/polls/templates | Create a poll template
[**createPollUsingPOST**](SWGContentPollsApi.md#createpollusingpost) | **POST** /media/polls | Create a new poll
[**deletePollTemplateUsingDELETE**](SWGContentPollsApi.md#deletepolltemplateusingdelete) | **DELETE** /media/polls/templates/{id} | Delete a poll template
[**deletePollUsingDELETE**](SWGContentPollsApi.md#deletepollusingdelete) | **DELETE** /media/polls/{id} | Delete an existing poll
[**getPollAnswerUsingGET**](SWGContentPollsApi.md#getpollanswerusingget) | **GET** /media/polls/{id}/response | Get poll answer
[**getPollTemplateUsingGET**](SWGContentPollsApi.md#getpolltemplateusingget) | **GET** /media/polls/templates/{id} | Get a single poll template
[**getPollTemplatesUsingGET**](SWGContentPollsApi.md#getpolltemplatesusingget) | **GET** /media/polls/templates | List and search poll templates
[**getPollUsingGET**](SWGContentPollsApi.md#getpollusingget) | **GET** /media/polls/{id} | Get a single poll
[**getPollsUsingGET**](SWGContentPollsApi.md#getpollsusingget) | **GET** /media/polls | List and search polls
[**updatePollTemplateUsingPUT**](SWGContentPollsApi.md#updatepolltemplateusingput) | **PUT** /media/polls/templates/{id} | Update a poll template
[**updatePollUsingPUT**](SWGContentPollsApi.md#updatepollusingput) | **PUT** /media/polls/{id} | Update an existing poll


# **answerPollUsingPOST**
```objc
-(NSNumber*) answerPollUsingPOSTWithId: (NSString*) _id
    answerKey: (NSString*) answerKey
        completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;
```

Add your vote to a poll

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
NSString* answerKey = answerKey_example; // The answer key (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Add your vote to a poll
[apiInstance answerPollUsingPOSTWithId:_id
              answerKey:answerKey
          completionHandler: ^(SWGPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->answerPollUsingPOST: %@", error);
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

# **createPollTemplateUsingPOST**
```objc
-(NSNumber*) createPollTemplateUsingPOSTWithPollTemplateResource: (SWGTemplateResource*) pollTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a poll template

Poll templates define a type of poll and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* pollTemplateResource = [[SWGTemplateResource alloc] init]; // The poll template resource object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Create a poll template
[apiInstance createPollTemplateUsingPOSTWithPollTemplateResource:pollTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->createPollTemplateUsingPOST: %@", error);
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

# **createPollUsingPOST**
```objc
-(NSNumber*) createPollUsingPOSTWithPollResource: (SWGPollResource*) pollResource
        completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;
```

Create a new poll

Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGPollResource* pollResource = [[SWGPollResource alloc] init]; // The poll object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Create a new poll
[apiInstance createPollUsingPOSTWithPollResource:pollResource
          completionHandler: ^(SWGPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->createPollUsingPOST: %@", error);
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

# **deletePollTemplateUsingDELETE**
```objc
-(NSNumber*) deletePollTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a poll template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Delete a poll template
[apiInstance deletePollTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->deletePollTemplateUsingDELETE: %@", error);
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

# **deletePollUsingDELETE**
```objc
-(NSNumber*) deletePollUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an existing poll

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Delete an existing poll
[apiInstance deletePollUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->deletePollUsingDELETE: %@", error);
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

# **getPollAnswerUsingGET**
```objc
-(NSNumber*) getPollAnswerUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGPollResponseResource* output, NSError* error)) handler;
```

Get poll answer

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get poll answer
[apiInstance getPollAnswerUsingGETWithId:_id
          completionHandler: ^(SWGPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollAnswerUsingGET: %@", error);
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

# **getPollTemplateUsingGET**
```objc
-(NSNumber*) getPollTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single poll template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get a single poll template
[apiInstance getPollTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollTemplateUsingGET: %@", error);
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

# **getPollTemplatesUsingGET**
```objc
-(NSNumber*) getPollTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search poll templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// List and search poll templates
[apiInstance getPollTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollTemplatesUsingGET: %@", error);
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

# **getPollUsingGET**
```objc
-(NSNumber*) getPollUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGPollResource* output, NSError* error)) handler;
```

Get a single poll

### Example 
```objc

NSString* _id = @"_id_example"; // The poll id

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Get a single poll
[apiInstance getPollUsingGETWithId:_id
          completionHandler: ^(SWGPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->getPollUsingGET: %@", error);
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

# **getPollsUsingGET**
```objc
-(NSNumber*) getPollsUsingGETWithFilterCategory: (NSString*) filterCategory
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
[apiInstance getPollsUsingGETWithFilterCategory:filterCategory
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
                            NSLog(@"Error calling SWGContentPollsApi->getPollsUsingGET: %@", error);
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

# **updatePollTemplateUsingPUT**
```objc
-(NSNumber*) updatePollTemplateUsingPUTWithId: (NSString*) _id
    pollTemplateResource: (SWGTemplateResource*) pollTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a poll template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* pollTemplateResource = [[SWGTemplateResource alloc] init]; // The poll template resource object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Update a poll template
[apiInstance updatePollTemplateUsingPUTWithId:_id
              pollTemplateResource:pollTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->updatePollTemplateUsingPUT: %@", error);
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

# **updatePollUsingPUT**
```objc
-(NSNumber*) updatePollUsingPUTWithId: (NSString*) _id
    pollResource: (SWGPollResource*) pollResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an existing poll

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
SWGPollResource* pollResource = [[SWGPollResource alloc] init]; // The poll object (optional)

SWGContentPollsApi*apiInstance = [[SWGContentPollsApi alloc] init];

// Update an existing poll
[apiInstance updatePollUsingPUTWithId:_id
              pollResource:pollResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGContentPollsApi->updatePollUsingPUT: %@", error);
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

