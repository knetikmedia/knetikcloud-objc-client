# JSAPIGamificationTriviaApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addQuestionAnswers**](JSAPIGamificationTriviaApi.md#addquestionanswers) | **POST** /trivia/questions/{question_id}/answers | Add an answer to a question
[**addQuestionTag**](JSAPIGamificationTriviaApi.md#addquestiontag) | **POST** /trivia/questions/{id}/tags | Add a tag to a question
[**addTagToQuestionsBatch**](JSAPIGamificationTriviaApi.md#addtagtoquestionsbatch) | **POST** /trivia/questions/tags | Add a tag to a batch of questions
[**createImportJob**](JSAPIGamificationTriviaApi.md#createimportjob) | **POST** /trivia/import | Create an import job
[**createQuestion**](JSAPIGamificationTriviaApi.md#createquestion) | **POST** /trivia/questions | Create a question
[**createQuestionTemplate**](JSAPIGamificationTriviaApi.md#createquestiontemplate) | **POST** /trivia/questions/templates | Create a question template
[**deleteImportJob**](JSAPIGamificationTriviaApi.md#deleteimportjob) | **DELETE** /trivia/import/{id} | Delete an import job
[**deleteQuestion**](JSAPIGamificationTriviaApi.md#deletequestion) | **DELETE** /trivia/questions/{id} | Delete a question
[**deleteQuestionAnswers**](JSAPIGamificationTriviaApi.md#deletequestionanswers) | **DELETE** /trivia/questions/{question_id}/answers/{id} | Remove an answer from a question
[**deleteQuestionTemplate**](JSAPIGamificationTriviaApi.md#deletequestiontemplate) | **DELETE** /trivia/questions/templates/{id} | Delete a question template
[**getImportJob**](JSAPIGamificationTriviaApi.md#getimportjob) | **GET** /trivia/import/{id} | Get an import job
[**getImportJobs**](JSAPIGamificationTriviaApi.md#getimportjobs) | **GET** /trivia/import | Get a list of import job
[**getQuestion**](JSAPIGamificationTriviaApi.md#getquestion) | **GET** /trivia/questions/{id} | Get a single question
[**getQuestionAnswer**](JSAPIGamificationTriviaApi.md#getquestionanswer) | **GET** /trivia/questions/{question_id}/answers/{id} | Get an answer for a question
[**getQuestionAnswers**](JSAPIGamificationTriviaApi.md#getquestionanswers) | **GET** /trivia/questions/{question_id}/answers | List the answers available for a question
[**getQuestionDeltas**](JSAPIGamificationTriviaApi.md#getquestiondeltas) | **GET** /trivia/questions/delta | List question deltas in ascending order of updated date
[**getQuestionTags**](JSAPIGamificationTriviaApi.md#getquestiontags) | **GET** /trivia/questions/{id}/tags | List the tags for a question
[**getQuestionTemplate**](JSAPIGamificationTriviaApi.md#getquestiontemplate) | **GET** /trivia/questions/templates/{id} | Get a single question template
[**getQuestionTemplates**](JSAPIGamificationTriviaApi.md#getquestiontemplates) | **GET** /trivia/questions/templates | List and search question templates
[**getQuestions**](JSAPIGamificationTriviaApi.md#getquestions) | **GET** /trivia/questions | List and search questions
[**getQuestionsCount**](JSAPIGamificationTriviaApi.md#getquestionscount) | **GET** /trivia/questions/count | Count questions based on filters
[**processImportJob**](JSAPIGamificationTriviaApi.md#processimportjob) | **POST** /trivia/import/{id}/process | Start processing an import job
[**removeQuestionTag**](JSAPIGamificationTriviaApi.md#removequestiontag) | **DELETE** /trivia/questions/{id}/tags/{tag} | Remove a tag from a question
[**removeTagToQuestionsBatch**](JSAPIGamificationTriviaApi.md#removetagtoquestionsbatch) | **DELETE** /trivia/questions/tags/{tag} | Remove a tag from a batch of questions
[**searchQuestionTags**](JSAPIGamificationTriviaApi.md#searchquestiontags) | **GET** /trivia/tags | List and search tags by the beginning of the string
[**updateImportJob**](JSAPIGamificationTriviaApi.md#updateimportjob) | **PUT** /trivia/import/{id} | Update an import job
[**updateQuestion**](JSAPIGamificationTriviaApi.md#updatequestion) | **PUT** /trivia/questions/{id} | Update a question
[**updateQuestionAnswer**](JSAPIGamificationTriviaApi.md#updatequestionanswer) | **PUT** /trivia/questions/{question_id}/answers/{id} | Update an answer for a question
[**updateQuestionTemplate**](JSAPIGamificationTriviaApi.md#updatequestiontemplate) | **PUT** /trivia/questions/templates/{id} | Update a question template
[**updateQuestionsInBulk**](JSAPIGamificationTriviaApi.md#updatequestionsinbulk) | **PUT** /trivia/questions | Bulk update questions


# **addQuestionAnswers**
```objc
-(NSURLSessionTask*) addQuestionAnswersWithQuestionId: (NSString*) questionId
    answer: (JSAPIAnswerResource*) answer
        completionHandler: (void (^)(JSAPIAnswerResource* output, NSError* error)) handler;
```

Add an answer to a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
JSAPIAnswerResource* answer = [[JSAPIAnswerResource alloc] init]; // The new answer (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Add an answer to a question
[apiInstance addQuestionAnswersWithQuestionId:questionId
              answer:answer
          completionHandler: ^(JSAPIAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->addQuestionAnswers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **answer** | [**JSAPIAnswerResource***](JSAPIAnswerResource.md)| The new answer | [optional] 

### Return type

[**JSAPIAnswerResource***](JSAPIAnswerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addQuestionTag**
```objc
-(NSURLSessionTask*) addQuestionTagWithId: (NSString*) _id
    tag: (JSAPIStringWrapper*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
JSAPIStringWrapper* tag = [[JSAPIStringWrapper alloc] init]; // The new tag (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Add a tag to a question
[apiInstance addQuestionTagWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->addQuestionTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 
 **tag** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The new tag | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addTagToQuestionsBatch**
```objc
-(NSURLSessionTask*) addTagToQuestionsBatchWithTag: (JSAPIStringWrapper*) tag
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Add a tag to a batch of questions

All questions that dont't have the tag and match filters will have it added. The returned number is the number of questions updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIStringWrapper* tag = [[JSAPIStringWrapper alloc] init]; // The tag to add (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Add a tag to a batch of questions
[apiInstance addTagToQuestionsBatchWithTag:tag
              filterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTag:filterTag
              filterTagset:filterTagset
              filterType:filterType
              filterPublished:filterPublished
              filterImportId:filterImportId
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->addTagToQuestionsBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The tag to add | [optional] 
 **filterSearch** | **NSString***| Filter for documents whose question, answers or tags contains provided string | [optional] 
 **filterIdset** | **NSString***| Filter for documents whose id is in the comma separated list provided | [optional] 
 **filterCategory** | **NSString***| Filter for questions with specified category, by id | [optional] 
 **filterTag** | **NSString***| Filter for questions with specified tag | [optional] 
 **filterTagset** | **NSString***| Filter for questions with specified tags (separated by comma) | [optional] 
 **filterType** | **NSString***| Filter for questions with specified type | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 
 **filterImportId** | **NSNumber***| Filter for questions from a specific import job | [optional] 

### Return type

**NSNumber***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createImportJob**
```objc
-(NSURLSessionTask*) createImportJobWithRequest: (JSAPIImportJobResource*) request
        completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;
```

Create an import job

Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIImportJobResource* request = [[JSAPIImportJobResource alloc] init]; // The new import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Create an import job
[apiInstance createImportJobWithRequest:request
          completionHandler: ^(JSAPIImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->createImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**JSAPIImportJobResource***](JSAPIImportJobResource.md)| The new import job | [optional] 

### Return type

[**JSAPIImportJobResource***](JSAPIImportJobResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestion**
```objc
-(NSURLSessionTask*) createQuestionWithQuestion: (JSAPIQuestionResource*) question
        completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;
```

Create a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIQuestionResource* question = [[JSAPIQuestionResource alloc] init]; // The new question (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Create a question
[apiInstance createQuestionWithQuestion:question
          completionHandler: ^(JSAPIQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->createQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **question** | [**JSAPIQuestionResource***](JSAPIQuestionResource.md)| The new question | [optional] 

### Return type

[**JSAPIQuestionResource***](JSAPIQuestionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestionTemplate**
```objc
-(NSURLSessionTask*) createQuestionTemplateWithQuestionTemplateResource: (JSAPIQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;
```

Create a question template

Question templates define a type of question and the properties they have. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIQuestionTemplateResource* questionTemplateResource = [[JSAPIQuestionTemplateResource alloc] init]; // The question template resource object (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Create a question template
[apiInstance createQuestionTemplateWithQuestionTemplateResource:questionTemplateResource
          completionHandler: ^(JSAPIQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->createQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionTemplateResource** | [**JSAPIQuestionTemplateResource***](JSAPIQuestionTemplateResource.md)| The question template resource object | [optional] 

### Return type

[**JSAPIQuestionTemplateResource***](JSAPIQuestionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteImportJob**
```objc
-(NSURLSessionTask*) deleteImportJobWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an import job

Also deletes all questions that were imported by it. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Delete an import job
[apiInstance deleteImportJobWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->deleteImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestion**
```objc
-(NSURLSessionTask*) deleteQuestionWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Delete a question
[apiInstance deleteQuestionWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->deleteQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestionAnswers**
```objc
-(NSURLSessionTask*) deleteQuestionAnswersWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove an answer from a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Remove an answer from a question
[apiInstance deleteQuestionAnswersWithQuestionId:questionId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->deleteQuestionAnswers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **_id** | **NSString***| The id of the answer | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestionTemplate**
```objc
-(NSURLSessionTask*) deleteQuestionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question template

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

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Delete a question template
[apiInstance deleteQuestionTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->deleteQuestionTemplate: %@", error);
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

# **getImportJob**
```objc
-(NSURLSessionTask*) getImportJobWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;
```

Get an import job

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Get an import job
[apiInstance getImportJobWithId:_id
          completionHandler: ^(JSAPIImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 

### Return type

[**JSAPIImportJobResource***](JSAPIImportJobResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getImportJobs**
```objc
-(NSURLSessionTask*) getImportJobsWithFilterVendor: (NSString*) filterVendor
    filterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceImportJobResource_* output, NSError* error)) handler;
```

Get a list of import job

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterVendor = @"filterVendor_example"; // Filter for jobs by vendor id (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for jobs by category id (optional)
NSString* filterName = @"filterName_example"; // Filter for jobs which name *STARTS* with the given string (optional)
NSString* filterStatus = @"filterStatus_example"; // Filter for jobs that are in a specific set of statuses (comma separated) (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Get a list of import job
[apiInstance getImportJobsWithFilterVendor:filterVendor
              filterCategory:filterCategory
              filterName:filterName
              filterStatus:filterStatus
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceImportJobResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getImportJobs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterVendor** | **NSString***| Filter for jobs by vendor id | [optional] 
 **filterCategory** | **NSString***| Filter for jobs by category id | [optional] 
 **filterName** | **NSString***| Filter for jobs which name *STARTS* with the given string | [optional] 
 **filterStatus** | **NSString***| Filter for jobs that are in a specific set of statuses (comma separated) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceImportJobResource_***](JSAPIPageResourceImportJobResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestion**
```objc
-(NSURLSessionTask*) getQuestionWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;
```

Get a single question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Get a single question
[apiInstance getQuestionWithId:_id
          completionHandler: ^(JSAPIQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 

### Return type

[**JSAPIQuestionResource***](JSAPIQuestionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionAnswer**
```objc
-(NSURLSessionTask*) getQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPIAnswerResource* output, NSError* error)) handler;
```

Get an answer for a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Get an answer for a question
[apiInstance getQuestionAnswerWithQuestionId:questionId
              _id:_id
          completionHandler: ^(JSAPIAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **_id** | **NSString***| The id of the answer | 

### Return type

[**JSAPIAnswerResource***](JSAPIAnswerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionAnswers**
```objc
-(NSURLSessionTask*) getQuestionAnswersWithQuestionId: (NSString*) questionId
        completionHandler: (void (^)(NSArray<JSAPIAnswerResource>* output, NSError* error)) handler;
```

List the answers available for a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List the answers available for a question
[apiInstance getQuestionAnswersWithQuestionId:questionId
          completionHandler: ^(NSArray<JSAPIAnswerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionAnswers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 

### Return type

[**NSArray<JSAPIAnswerResource>***](JSAPIAnswerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionDeltas**
```objc
-(NSURLSessionTask*) getQuestionDeltasWithSince: (NSNumber*) since
        completionHandler: (void (^)(NSArray<JSAPIDeltaResource>* output, NSError* error)) handler;
```

List question deltas in ascending order of updated date

The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* since = @789; // Timestamp in seconds (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List question deltas in ascending order of updated date
[apiInstance getQuestionDeltasWithSince:since
          completionHandler: ^(NSArray<JSAPIDeltaResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionDeltas: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **since** | **NSNumber***| Timestamp in seconds | [optional] 

### Return type

[**NSArray<JSAPIDeltaResource>***](JSAPIDeltaResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTags**
```objc
-(NSURLSessionTask*) getQuestionTagsWithId: (NSString*) _id
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List the tags for a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List the tags for a question
[apiInstance getQuestionTagsWithId:_id
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionTags: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplate**
```objc
-(NSURLSessionTask*) getQuestionTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;
```

Get a single question template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Get a single question template
[apiInstance getQuestionTemplateWithId:_id
          completionHandler: ^(JSAPIQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPIQuestionTemplateResource***](JSAPIQuestionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplates**
```objc
-(NSURLSessionTask*) getQuestionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceQuestionTemplateResource_* output, NSError* error)) handler;
```

List and search question templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or TRIVIA_ADMIN

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

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List and search question templates
[apiInstance getQuestionTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceQuestionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionTemplates: %@", error);
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

[**JSAPIPageResourceQuestionTemplateResource_***](JSAPIPageResourceQuestionTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestions**
```objc
-(NSURLSessionTask*) getQuestionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterTag: (NSString*) filterTag
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(JSAPIPageResourceQuestionResource_* output, NSError* error)) handler;
```

List and search questions

<b>Permissions Needed:</b> TRIVIA_ADMIN

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
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List and search questions
[apiInstance getQuestionsWithSize:size
              page:page
              order:order
              filterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTagset:filterTagset
              filterTag:filterTag
              filterType:filterType
              filterPublished:filterPublished
              filterImportId:filterImportId
          completionHandler: ^(JSAPIPageResourceQuestionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]
 **filterSearch** | **NSString***| Filter for documents whose question, answers or tags contains provided string | [optional] 
 **filterIdset** | **NSString***| Filter for documents whose id is in the comma separated list provided | [optional] 
 **filterCategory** | **NSString***| Filter for questions with specified category, by id | [optional] 
 **filterTagset** | **NSString***| Filter for questions with specified tags (separated by comma) | [optional] 
 **filterTag** | **NSString***| Filter for questions with specified tag | [optional] 
 **filterType** | **NSString***| Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 
 **filterImportId** | **NSNumber***| Filter for questions from a specific import job | [optional] 

### Return type

[**JSAPIPageResourceQuestionResource_***](JSAPIPageResourceQuestionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionsCount**
```objc
-(NSURLSessionTask*) getQuestionsCountWithFilterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Count questions based on filters

This is also provided by the list endpoint so you don't need to call this for pagination purposes. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Count questions based on filters
[apiInstance getQuestionsCountWithFilterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTag:filterTag
              filterTagset:filterTagset
              filterType:filterType
              filterPublished:filterPublished
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->getQuestionsCount: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for documents whose question, answers or tags contains provided string | [optional] 
 **filterIdset** | **NSString***| Filter for documents whose id is in the comma separated list provided | [optional] 
 **filterCategory** | **NSString***| Filter for questions with specified category, by id | [optional] 
 **filterTag** | **NSString***| Filter for questions with specified tag | [optional] 
 **filterTagset** | **NSString***| Filter for questions with specified tags (separated by comma) | [optional] 
 **filterType** | **NSString***| Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 

### Return type

**NSNumber***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **processImportJob**
```objc
-(NSURLSessionTask*) processImportJobWithId: (NSNumber*) _id
    publishNow: (NSNumber*) publishNow
        completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;
```

Start processing an import job

Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
NSNumber* publishNow = @true; // Whether the new questions should be published live immediately

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Start processing an import job
[apiInstance processImportJobWithId:_id
              publishNow:publishNow
          completionHandler: ^(JSAPIImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->processImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 
 **publishNow** | **NSNumber***| Whether the new questions should be published live immediately | 

### Return type

[**JSAPIImportJobResource***](JSAPIImportJobResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeQuestionTag**
```objc
-(NSURLSessionTask*) removeQuestionTagWithId: (NSString*) _id
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a tag from a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
NSString* tag = @"tag_example"; // The tag to remove

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Remove a tag from a question
[apiInstance removeQuestionTagWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->removeQuestionTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 
 **tag** | **NSString***| The tag to remove | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeTagToQuestionsBatch**
```objc
-(NSURLSessionTask*) removeTagToQuestionsBatchWithTag: (NSString*) tag
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Remove a tag from a batch of questions

ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* tag = @"tag_example"; // The tag to remove
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Remove a tag from a batch of questions
[apiInstance removeTagToQuestionsBatchWithTag:tag
              filterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTag:filterTag
              filterTagset:filterTagset
              filterType:filterType
              filterPublished:filterPublished
              filterImportId:filterImportId
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->removeTagToQuestionsBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag** | **NSString***| The tag to remove | 
 **filterSearch** | **NSString***| Filter for documents whose question, answers or tags contains provided string | [optional] 
 **filterIdset** | **NSString***| Filter for documents whose id is in the comma separated list provided | [optional] 
 **filterCategory** | **NSString***| Filter for questions with specified category, by id | [optional] 
 **filterTag** | **NSString***| Filter for questions with specified tag | [optional] 
 **filterTagset** | **NSString***| Filter for questions with specified tags (separated by comma) | [optional] 
 **filterType** | **NSString***| Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 
 **filterImportId** | **NSNumber***| Filter for questions from a specific import job | [optional] 

### Return type

**NSNumber***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchQuestionTags**
```objc
-(NSURLSessionTask*) searchQuestionTagsWithFilterSearch: (NSString*) filterSearch
    filterCategory: (NSString*) filterCategory
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List and search tags by the beginning of the string

For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for tags starting with the given text (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for tags on questions from a specific category (optional)
NSNumber* filterImportId = @789; // Filter for tags on questions from a specific import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// List and search tags by the beginning of the string
[apiInstance searchQuestionTagsWithFilterSearch:filterSearch
              filterCategory:filterCategory
              filterImportId:filterImportId
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->searchQuestionTags: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSearch** | **NSString***| Filter for tags starting with the given text | [optional] 
 **filterCategory** | **NSString***| Filter for tags on questions from a specific category | [optional] 
 **filterImportId** | **NSNumber***| Filter for tags on questions from a specific import job | [optional] 

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateImportJob**
```objc
-(NSURLSessionTask*) updateImportJobWithId: (NSNumber*) _id
    request: (JSAPIImportJobResource*) request
        completionHandler: (void (^)(JSAPIImportJobResource* output, NSError* error)) handler;
```

Update an import job

Changes should be made before process is started for there to be any effect. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
JSAPIImportJobResource* request = [[JSAPIImportJobResource alloc] init]; // The updated job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Update an import job
[apiInstance updateImportJobWithId:_id
              request:request
          completionHandler: ^(JSAPIImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->updateImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 
 **request** | [**JSAPIImportJobResource***](JSAPIImportJobResource.md)| The updated job | [optional] 

### Return type

[**JSAPIImportJobResource***](JSAPIImportJobResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestion**
```objc
-(NSURLSessionTask*) updateQuestionWithId: (NSString*) _id
    question: (JSAPIQuestionResource*) question
        completionHandler: (void (^)(JSAPIQuestionResource* output, NSError* error)) handler;
```

Update a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
JSAPIQuestionResource* question = [[JSAPIQuestionResource alloc] init]; // The updated question (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Update a question
[apiInstance updateQuestionWithId:_id
              question:question
          completionHandler: ^(JSAPIQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->updateQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 
 **question** | [**JSAPIQuestionResource***](JSAPIQuestionResource.md)| The updated question | [optional] 

### Return type

[**JSAPIQuestionResource***](JSAPIQuestionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionAnswer**
```objc
-(NSURLSessionTask*) updateQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    answer: (JSAPIAnswerResource*) answer
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an answer for a question

<b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer
JSAPIAnswerResource* answer = [[JSAPIAnswerResource alloc] init]; // The updated answer (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Update an answer for a question
[apiInstance updateQuestionAnswerWithQuestionId:questionId
              _id:_id
              answer:answer
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->updateQuestionAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **_id** | **NSString***| The id of the answer | 
 **answer** | [**JSAPIAnswerResource***](JSAPIAnswerResource.md)| The updated answer | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionTemplate**
```objc
-(NSURLSessionTask*) updateQuestionTemplateWithId: (NSString*) _id
    questionTemplateResource: (JSAPIQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(JSAPIQuestionTemplateResource* output, NSError* error)) handler;
```

Update a question template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIQuestionTemplateResource* questionTemplateResource = [[JSAPIQuestionTemplateResource alloc] init]; // The question template resource object (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Update a question template
[apiInstance updateQuestionTemplateWithId:_id
              questionTemplateResource:questionTemplateResource
          completionHandler: ^(JSAPIQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->updateQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **questionTemplateResource** | [**JSAPIQuestionTemplateResource***](JSAPIQuestionTemplateResource.md)| The question template resource object | [optional] 

### Return type

[**JSAPIQuestionTemplateResource***](JSAPIQuestionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionsInBulk**
```objc
-(NSURLSessionTask*) updateQuestionsInBulkWithQuestion: (JSAPIQuestionResource*) question
    filterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Bulk update questions

Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated. <br><br><b>Permissions Needed:</b> TRIVIA_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIQuestionResource* question = [[JSAPIQuestionResource alloc] init]; // New values for a set of question fields (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

JSAPIGamificationTriviaApi*apiInstance = [[JSAPIGamificationTriviaApi alloc] init];

// Bulk update questions
[apiInstance updateQuestionsInBulkWithQuestion:question
              filterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTagset:filterTagset
              filterType:filterType
              filterPublished:filterPublished
              filterImportId:filterImportId
          completionHandler: ^(NSNumber* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIGamificationTriviaApi->updateQuestionsInBulk: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **question** | [**JSAPIQuestionResource***](JSAPIQuestionResource.md)| New values for a set of question fields | [optional] 
 **filterSearch** | **NSString***| Filter for documents whose question, answers or tags contains provided string | [optional] 
 **filterIdset** | **NSString***| Filter for documents whose id is in the comma separated list provided | [optional] 
 **filterCategory** | **NSString***| Filter for questions with specified category, by id | [optional] 
 **filterTagset** | **NSString***| Filter for questions with specified tags (separated by comma) | [optional] 
 **filterType** | **NSString***| Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 
 **filterImportId** | **NSNumber***| Filter for questions from a specific import job | [optional] 

### Return type

**NSNumber***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

