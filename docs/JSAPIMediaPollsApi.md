# JSAPIMediaPollsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**answerPoll**](JSAPIMediaPollsApi.md#answerpoll) | **POST** /media/polls/{id}/response | Add your vote to a poll
[**createPoll**](JSAPIMediaPollsApi.md#createpoll) | **POST** /media/polls | Create a new poll
[**createPollTemplate**](JSAPIMediaPollsApi.md#createpolltemplate) | **POST** /media/polls/templates | Create a poll template
[**deletePoll**](JSAPIMediaPollsApi.md#deletepoll) | **DELETE** /media/polls/{id} | Delete an existing poll
[**deletePollTemplate**](JSAPIMediaPollsApi.md#deletepolltemplate) | **DELETE** /media/polls/templates/{id} | Delete a poll template
[**getPoll**](JSAPIMediaPollsApi.md#getpoll) | **GET** /media/polls/{id} | Get a single poll
[**getPollAnswer**](JSAPIMediaPollsApi.md#getpollanswer) | **GET** /media/polls/{id}/response | Get poll answer
[**getPollTemplate**](JSAPIMediaPollsApi.md#getpolltemplate) | **GET** /media/polls/templates/{id} | Get a single poll template
[**getPollTemplates**](JSAPIMediaPollsApi.md#getpolltemplates) | **GET** /media/polls/templates | List and search poll templates
[**getPolls**](JSAPIMediaPollsApi.md#getpolls) | **GET** /media/polls | List and search polls
[**updatePoll**](JSAPIMediaPollsApi.md#updatepoll) | **PUT** /media/polls/{id} | Update an existing poll
[**updatePollTemplate**](JSAPIMediaPollsApi.md#updatepolltemplate) | **PUT** /media/polls/templates/{id} | Update a poll template


# **answerPoll**
```objc
-(NSURLSessionTask*) answerPollWithId: (NSString*) _id
    answerKey: (JSAPIStringWrapper*) answerKey
        completionHandler: (void (^)(JSAPIPollResponseResource* output, NSError* error)) handler;
```

Add your vote to a poll

<b>Permissions Needed:</b> POLLS_ADMIN or POLLS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
JSAPIStringWrapper* answerKey = [[JSAPIStringWrapper alloc] init]; // The answer key (optional)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Add your vote to a poll
[apiInstance answerPollWithId:_id
              answerKey:answerKey
          completionHandler: ^(JSAPIPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->answerPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 
 **answerKey** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The answer key | [optional] 

### Return type

[**JSAPIPollResponseResource***](JSAPIPollResponseResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPoll**
```objc
-(NSURLSessionTask*) createPollWithPollResource: (JSAPIPollResource*) pollResource
        completionHandler: (void (^)(JSAPIPollResource* output, NSError* error)) handler;
```

Create a new poll

Polls are blobs of text with titles, a category and assets. Formatting and display of the text is in the hands of the front end. <br><br><b>Permissions Needed:</b> POLLS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIPollResource* pollResource = [[JSAPIPollResource alloc] init]; // The poll object (optional)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Create a new poll
[apiInstance createPollWithPollResource:pollResource
          completionHandler: ^(JSAPIPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->createPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pollResource** | [**JSAPIPollResource***](JSAPIPollResource.md)| The poll object | [optional] 

### Return type

[**JSAPIPollResource***](JSAPIPollResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createPollTemplate**
```objc
-(NSURLSessionTask*) createPollTemplateWithPollTemplateResource: (JSAPITemplateResource*) pollTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a poll template

Poll templates define a type of poll and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* pollTemplateResource = [[JSAPITemplateResource alloc] init]; // The poll template resource object (optional)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Create a poll template
[apiInstance createPollTemplateWithPollTemplateResource:pollTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->createPollTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pollTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The poll template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> POLLS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Delete an existing poll
[apiInstance deletePollWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->deletePoll: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePollTemplate**
```objc
-(NSURLSessionTask*) deletePollTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a poll template

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

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Delete a poll template
[apiInstance deletePollTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->deletePollTemplate: %@", error);
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

# **getPoll**
```objc
-(NSURLSessionTask*) getPollWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIPollResource* output, NSError* error)) handler;
```

Get a single poll

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Get a single poll
[apiInstance getPollWithId:_id
          completionHandler: ^(JSAPIPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->getPoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 

### Return type

[**JSAPIPollResource***](JSAPIPollResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPollAnswer**
```objc
-(NSURLSessionTask*) getPollAnswerWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIPollResponseResource* output, NSError* error)) handler;
```

Get poll answer

<b>Permissions Needed:</b> POLLS_ADMIN or POLLS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Get poll answer
[apiInstance getPollAnswerWithId:_id
          completionHandler: ^(JSAPIPollResponseResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->getPollAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 

### Return type

[**JSAPIPollResponseResource***](JSAPIPollResponseResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPollTemplate**
```objc
-(NSURLSessionTask*) getPollTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single poll template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or POLLS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Get a single poll template
[apiInstance getPollTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->getPollTemplate: %@", error);
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

# **getPollTemplates**
```objc
-(NSURLSessionTask*) getPollTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search poll templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or POLLS_ADMIN

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

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// List and search poll templates
[apiInstance getPollTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->getPollTemplates: %@", error);
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

# **getPolls**
```objc
-(NSURLSessionTask*) getPollsWithFilterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterText: (NSString*) filterText
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourcePollResource_* output, NSError* error)) handler;
```

List and search polls

Get a list of polls with optional filtering. Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterCategory = @"filterCategory_example"; // Filter for polls from a specific category by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for polls with specified tags (separated by comma) (optional)
NSString* filterText = @"filterText_example"; // Filter for polls whose text contains a string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// List and search polls
[apiInstance getPollsWithFilterCategory:filterCategory
              filterTagset:filterTagset
              filterText:filterText
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourcePollResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->getPolls: %@", error);
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

[**JSAPIPageResourcePollResource_***](JSAPIPageResourcePollResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePoll**
```objc
-(NSURLSessionTask*) updatePollWithId: (NSString*) _id
    pollResource: (JSAPIPollResource*) pollResource
        completionHandler: (void (^)(JSAPIPollResource* output, NSError* error)) handler;
```

Update an existing poll

<b>Permissions Needed:</b> POLLS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The poll id
JSAPIPollResource* pollResource = [[JSAPIPollResource alloc] init]; // The poll object (optional)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Update an existing poll
[apiInstance updatePollWithId:_id
              pollResource:pollResource
          completionHandler: ^(JSAPIPollResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->updatePoll: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The poll id | 
 **pollResource** | [**JSAPIPollResource***](JSAPIPollResource.md)| The poll object | [optional] 

### Return type

[**JSAPIPollResource***](JSAPIPollResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updatePollTemplate**
```objc
-(NSURLSessionTask*) updatePollTemplateWithId: (NSString*) _id
    pollTemplateResource: (JSAPITemplateResource*) pollTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update a poll template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* pollTemplateResource = [[JSAPITemplateResource alloc] init]; // The poll template resource object (optional)

JSAPIMediaPollsApi*apiInstance = [[JSAPIMediaPollsApi alloc] init];

// Update a poll template
[apiInstance updatePollTemplateWithId:_id
              pollTemplateResource:pollTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIMediaPollsApi->updatePollTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **pollTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The poll template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

