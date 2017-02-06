# SWGGamificationTriviaApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addQuestionAnswers**](SWGGamificationTriviaApi.md#addquestionanswers) | **POST** /trivia/questions/{question_id}/answers | Add an answer to a question
[**addQuestionTag**](SWGGamificationTriviaApi.md#addquestiontag) | **POST** /trivia/questions/{id}/tags | Add a tag to a question
[**addTagToQuestionsBatch**](SWGGamificationTriviaApi.md#addtagtoquestionsbatch) | **POST** /trivia/questions/tags | Add a tag to a batch of questions
[**createImportJob**](SWGGamificationTriviaApi.md#createimportjob) | **POST** /trivia/import | Create an import job
[**createQuestion**](SWGGamificationTriviaApi.md#createquestion) | **POST** /trivia/questions | Create a question
[**createQuestionTemplate**](SWGGamificationTriviaApi.md#createquestiontemplate) | **POST** /trivia/questions/templates | Create a question template
[**deleteImportJob**](SWGGamificationTriviaApi.md#deleteimportjob) | **DELETE** /trivia/import/{id} | Delete an import job
[**deleteQuestion**](SWGGamificationTriviaApi.md#deletequestion) | **DELETE** /trivia/questions/{id} | Delete a question
[**deleteQuestionAnswers**](SWGGamificationTriviaApi.md#deletequestionanswers) | **DELETE** /trivia/questions/{question_id}/answers/{id} | Remove an answer from a question
[**deleteQuestionTemplate**](SWGGamificationTriviaApi.md#deletequestiontemplate) | **DELETE** /trivia/questions/templates/{id} | Delete a question template
[**getImportJob**](SWGGamificationTriviaApi.md#getimportjob) | **GET** /trivia/import/{id} | Get an import job
[**getImportJobs**](SWGGamificationTriviaApi.md#getimportjobs) | **GET** /trivia/import | Get a list of import job
[**getQuestion**](SWGGamificationTriviaApi.md#getquestion) | **GET** /trivia/questions/{id} | Get a single question
[**getQuestionAnswer**](SWGGamificationTriviaApi.md#getquestionanswer) | **GET** /trivia/questions/{question_id}/answers/{id} | Get an answer for a question
[**getQuestionAnswers**](SWGGamificationTriviaApi.md#getquestionanswers) | **GET** /trivia/questions/{question_id}/answers | List the answers available for a question
[**getQuestionDeltas**](SWGGamificationTriviaApi.md#getquestiondeltas) | **GET** /trivia/questions/delta | List question deltas in ascending order of updated date
[**getQuestionTags**](SWGGamificationTriviaApi.md#getquestiontags) | **GET** /trivia/questions/{id}/tags | List the tags for a question
[**getQuestionTags1**](SWGGamificationTriviaApi.md#getquestiontags1) | **GET** /trivia/tags | List and search tags by the beginning of the string
[**getQuestionTemplate**](SWGGamificationTriviaApi.md#getquestiontemplate) | **GET** /trivia/questions/templates/{id} | Get a single question template
[**getQuestionTemplates**](SWGGamificationTriviaApi.md#getquestiontemplates) | **GET** /trivia/questions/templates | List and search question templates
[**getQuestions**](SWGGamificationTriviaApi.md#getquestions) | **GET** /trivia/questions | List and search questions
[**getQuestionsCount**](SWGGamificationTriviaApi.md#getquestionscount) | **GET** /trivia/questions/count | Count questions based on filters
[**processImportJob**](SWGGamificationTriviaApi.md#processimportjob) | **POST** /trivia/import/{id}/process | Start processing an import job
[**removeQuestionTag**](SWGGamificationTriviaApi.md#removequestiontag) | **DELETE** /trivia/questions/{id}/tags/{tag} | Remove a tag from a question
[**removeTagToQuestionsBatch**](SWGGamificationTriviaApi.md#removetagtoquestionsbatch) | **DELETE** /trivia/questions/tags/{tag} | Remove a tag from a batch of questions
[**updateImportJob**](SWGGamificationTriviaApi.md#updateimportjob) | **PUT** /trivia/import/{id} | Update an import job
[**updateQuestion**](SWGGamificationTriviaApi.md#updatequestion) | **PUT** /trivia/questions/{id} | Update a question
[**updateQuestionAnswer**](SWGGamificationTriviaApi.md#updatequestionanswer) | **PUT** /trivia/questions/{question_id}/answers/{id} | Update an answer for a question
[**updateQuestionTemplate**](SWGGamificationTriviaApi.md#updatequestiontemplate) | **PUT** /trivia/questions/templates/{id} | Update a question template
[**updateQuestionsInBulk**](SWGGamificationTriviaApi.md#updatequestionsinbulk) | **PUT** /trivia/questions | Bulk update questions


# **addQuestionAnswers**
```objc
-(NSURLSessionTask*) addQuestionAnswersWithQuestionId: (NSString*) questionId
    answer: (SWGAnswerResource*) answer
        completionHandler: (void (^)(SWGAnswerResource* output, NSError* error)) handler;
```

Add an answer to a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
SWGAnswerResource* answer = [[SWGAnswerResource alloc] init]; // The new answer (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Add an answer to a question
[apiInstance addQuestionAnswersWithQuestionId:questionId
              answer:answer
          completionHandler: ^(SWGAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->addQuestionAnswers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **answer** | [**SWGAnswerResource***](SWGAnswerResource*.md)| The new answer | [optional] 

### Return type

[**SWGAnswerResource***](SWGAnswerResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addQuestionTag**
```objc
-(NSURLSessionTask*) addQuestionTagWithId: (NSString*) _id
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
NSString* tag = tag_example; // The new tag (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Add a tag to a question
[apiInstance addQuestionTagWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->addQuestionTag: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 
 **tag** | **NSString***| The new tag | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addTagToQuestionsBatch**
```objc
-(NSURLSessionTask*) addTagToQuestionsBatchWithTag: (NSString*) tag
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

All questions that dont't have the tag and match filters will have it added. The returned number is the number of questions updated.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* tag = tag_example; // The tag to add (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

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
                            NSLog(@"Error calling SWGGamificationTriviaApi->addTagToQuestionsBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **tag** | **NSString***| The tag to add | [optional] 
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createImportJob**
```objc
-(NSURLSessionTask*) createImportJobWithRequest: (SWGImportJobResource*) request
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Create an import job

Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGImportJobResource* request = [[SWGImportJobResource alloc] init]; // The new import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create an import job
[apiInstance createImportJobWithRequest:request
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **request** | [**SWGImportJobResource***](SWGImportJobResource*.md)| The new import job | [optional] 

### Return type

[**SWGImportJobResource***](SWGImportJobResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestion**
```objc
-(NSURLSessionTask*) createQuestionWithQuestion: (SWGQuestionResource*) question
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Create a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGQuestionResource* question = [[SWGQuestionResource alloc] init]; // The new question (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create a question
[apiInstance createQuestionWithQuestion:question
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **question** | [**SWGQuestionResource***](SWGQuestionResource*.md)| The new question | [optional] 

### Return type

[**SWGQuestionResource***](SWGQuestionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestionTemplate**
```objc
-(NSURLSessionTask*) createQuestionTemplateWithQuestionTemplateResource: (SWGQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(SWGQuestionTemplateResource* output, NSError* error)) handler;
```

Create a question template

Question templates define a type of question and the properties they have

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGQuestionTemplateResource* questionTemplateResource = [[SWGQuestionTemplateResource alloc] init]; // The question template resource object (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create a question template
[apiInstance createQuestionTemplateWithQuestionTemplateResource:questionTemplateResource
          completionHandler: ^(SWGQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionTemplateResource** | [**SWGQuestionTemplateResource***](SWGQuestionTemplateResource*.md)| The question template resource object | [optional] 

### Return type

[**SWGQuestionTemplateResource***](SWGQuestionTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

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

Also deletes all questions that were imported by it

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete an import job
[apiInstance deleteImportJobWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteImportJob: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestion**
```objc
-(NSURLSessionTask*) deleteQuestionWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete a question
[apiInstance deleteQuestionWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteQuestion: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestionAnswers**
```objc
-(NSURLSessionTask*) deleteQuestionAnswersWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove an answer from a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Remove an answer from a question
[apiInstance deleteQuestionAnswersWithQuestionId:questionId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteQuestionAnswers: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestionTemplate**
```objc
-(NSURLSessionTask*) deleteQuestionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete a question template
[apiInstance deleteQuestionTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteQuestionTemplate: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getImportJob**
```objc
-(NSURLSessionTask*) getImportJobWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Get an import job

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get an import job
[apiInstance getImportJobWithId:_id
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 

### Return type

[**SWGImportJobResource***](SWGImportJobResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
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
        completionHandler: (void (^)(SWGPageResourceImportJobResource_* output, NSError* error)) handler;
```

Get a list of import job

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterVendor = @"filterVendor_example"; // Filter for jobs by vendor id (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for jobs by category id (optional)
NSString* filterName = @"filterName_example"; // Filter for jobs which name *STARTS* with the given string (optional)
NSString* filterStatus = @"filterStatus_example"; // Filter for jobs that are in a specific set of statuses (comma separated) (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get a list of import job
[apiInstance getImportJobsWithFilterVendor:filterVendor
              filterCategory:filterCategory
              filterName:filterName
              filterStatus:filterStatus
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceImportJobResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getImportJobs: %@", error);
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

[**SWGPageResourceImportJobResource_***](SWGPageResourceImportJobResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestion**
```objc
-(NSURLSessionTask*) getQuestionWithId: (NSString*) _id
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Get a single question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get a single question
[apiInstance getQuestionWithId:_id
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 

### Return type

[**SWGQuestionResource***](SWGQuestionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionAnswer**
```objc
-(NSURLSessionTask*) getQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(SWGAnswerResource* output, NSError* error)) handler;
```

Get an answer for a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get an answer for a question
[apiInstance getQuestionAnswerWithQuestionId:questionId
              _id:_id
          completionHandler: ^(SWGAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **_id** | **NSString***| The id of the answer | 

### Return type

[**SWGAnswerResource***](SWGAnswerResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionAnswers**
```objc
-(NSURLSessionTask*) getQuestionAnswersWithQuestionId: (NSString*) questionId
        completionHandler: (void (^)(NSArray<SWGAnswerResource>* output, NSError* error)) handler;
```

List the answers available for a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List the answers available for a question
[apiInstance getQuestionAnswersWithQuestionId:questionId
          completionHandler: ^(NSArray<SWGAnswerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionAnswers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 

### Return type

[**NSArray<SWGAnswerResource>***](SWGAnswerResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionDeltas**
```objc
-(NSURLSessionTask*) getQuestionDeltasWithSince: (NSNumber*) since
        completionHandler: (void (^)(NSArray<SWGDeltaResource>* output, NSError* error)) handler;
```

List question deltas in ascending order of updated date

The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* since = @789; // Timestamp in seconds (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List question deltas in ascending order of updated date
[apiInstance getQuestionDeltasWithSince:since
          completionHandler: ^(NSArray<SWGDeltaResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionDeltas: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **since** | **NSNumber***| Timestamp in seconds | [optional] 

### Return type

[**NSArray<SWGDeltaResource>***](SWGDeltaResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTags**
```objc
-(NSURLSessionTask*) getQuestionTagsWithId: (NSString*) _id
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List the tags for a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List the tags for a question
[apiInstance getQuestionTagsWithId:_id
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTags: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTags1**
```objc
-(NSURLSessionTask*) getQuestionTags1WithFilterSearch: (NSString*) filterSearch
    filterCategory: (NSString*) filterCategory
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(SWGCollectionString_* output, NSError* error)) handler;
```

List and search tags by the beginning of the string

For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for tags starting with the given text (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for tags on questions from a specific category (optional)
NSNumber* filterImportId = @789; // Filter for tags on questions from a specific import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List and search tags by the beginning of the string
[apiInstance getQuestionTags1WithFilterSearch:filterSearch
              filterCategory:filterCategory
              filterImportId:filterImportId
          completionHandler: ^(SWGCollectionString_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTags1: %@", error);
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

[**SWGCollectionString_***](SWGCollectionString_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplate**
```objc
-(NSURLSessionTask*) getQuestionTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGQuestionTemplateResource* output, NSError* error)) handler;
```

Get a single question template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get a single question template
[apiInstance getQuestionTemplateWithId:_id
          completionHandler: ^(SWGQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGQuestionTemplateResource***](SWGQuestionTemplateResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplates**
```objc
-(NSURLSessionTask*) getQuestionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceQuestionTemplateResource_* output, NSError* error)) handler;
```

List and search question templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List and search question templates
[apiInstance getQuestionTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceQuestionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTemplates: %@", error);
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

[**SWGPageResourceQuestionTemplateResource_***](SWGPageResourceQuestionTemplateResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
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
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(SWGPageResourceQuestionResource_* output, NSError* error)) handler;
```

List and search questions

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List and search questions
[apiInstance getQuestionsWithSize:size
              page:page
              order:order
              filterSearch:filterSearch
              filterIdset:filterIdset
              filterCategory:filterCategory
              filterTagset:filterTagset
              filterType:filterType
              filterPublished:filterPublished
              filterImportId:filterImportId
          completionHandler: ^(SWGPageResourceQuestionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestions: %@", error);
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
 **filterType** | **NSString***| Filter for questions with specified type.  Allowable values: (&#39;TEXT&#39;, &#39;IMAGE&#39;, &#39;VIDEO&#39;, &#39;AUDIO&#39;) | [optional] 
 **filterPublished** | **NSNumber***| Filter for questions currenctly published or not | [optional] 
 **filterImportId** | **NSNumber***| Filter for questions from a specific import job | [optional] 

### Return type

[**SWGPageResourceQuestionResource_***](SWGPageResourceQuestionResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
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

This is also provided by the list endpoint so you don't need to call this for pagination purposes

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

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
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionsCount: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **processImportJob**
```objc
-(NSURLSessionTask*) processImportJobWithId: (NSNumber*) _id
    publishNow: (NSNumber*) publishNow
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Start processing an import job

Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
NSNumber* publishNow = @true; // Whether the new questions should be published live immediately

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Start processing an import job
[apiInstance processImportJobWithId:_id
              publishNow:publishNow
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->processImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 
 **publishNow** | **NSNumber***| Whether the new questions should be published live immediately | 

### Return type

[**SWGImportJobResource***](SWGImportJobResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

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

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
NSString* tag = @"tag_example"; // The tag to remove

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Remove a tag from a question
[apiInstance removeQuestionTagWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->removeQuestionTag: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
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

ll questions that have the tag and match filters will have it removed. The returned number is the number of questions updated.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
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

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

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
                            NSLog(@"Error calling SWGGamificationTriviaApi->removeTagToQuestionsBatch: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateImportJob**
```objc
-(NSURLSessionTask*) updateImportJobWithId: (NSNumber*) _id
    request: (SWGImportJobResource*) request
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Update an import job

Changes should be made before process is started for there to be any effect.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
SWGImportJobResource* request = [[SWGImportJobResource alloc] init]; // The updated job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update an import job
[apiInstance updateImportJobWithId:_id
              request:request
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateImportJob: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the job | 
 **request** | [**SWGImportJobResource***](SWGImportJobResource*.md)| The updated job | [optional] 

### Return type

[**SWGImportJobResource***](SWGImportJobResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestion**
```objc
-(NSURLSessionTask*) updateQuestionWithId: (NSString*) _id
    question: (SWGQuestionResource*) question
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Update a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
SWGQuestionResource* question = [[SWGQuestionResource alloc] init]; // The updated question (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update a question
[apiInstance updateQuestionWithId:_id
              question:question
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestion: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the question | 
 **question** | [**SWGQuestionResource***](SWGQuestionResource*.md)| The updated question | [optional] 

### Return type

[**SWGQuestionResource***](SWGQuestionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionAnswer**
```objc
-(NSURLSessionTask*) updateQuestionAnswerWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    answer: (SWGAnswerResource*) answer
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an answer for a question

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer
SWGAnswerResource* answer = [[SWGAnswerResource alloc] init]; // The updated answer (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update an answer for a question
[apiInstance updateQuestionAnswerWithQuestionId:questionId
              _id:_id
              answer:answer
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestionAnswer: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **questionId** | **NSString***| The id of the question | 
 **_id** | **NSString***| The id of the answer | 
 **answer** | [**SWGAnswerResource***](SWGAnswerResource*.md)| The updated answer | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionTemplate**
```objc
-(NSURLSessionTask*) updateQuestionTemplateWithId: (NSString*) _id
    questionTemplateResource: (SWGQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a question template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGQuestionTemplateResource* questionTemplateResource = [[SWGQuestionTemplateResource alloc] init]; // The question template resource object (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update a question template
[apiInstance updateQuestionTemplateWithId:_id
              questionTemplateResource:questionTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **questionTemplateResource** | [**SWGQuestionTemplateResource***](SWGQuestionTemplateResource*.md)| The question template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionsInBulk**
```objc
-(NSURLSessionTask*) updateQuestionsInBulkWithQuestion: (SWGQuestionResource*) question
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

Will update all questions that match filters used (or all questions in system if no filters used). Body should match a question resource with only those properties you wish to set. Null values will be ignored. Returned number is how many were updated.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGQuestionResource* question = [[SWGQuestionResource alloc] init]; // New values for a set of question fields (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)
NSNumber* filterImportId = @789; // Filter for questions from a specific import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

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
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestionsInBulk: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **question** | [**SWGQuestionResource***](SWGQuestionResource*.md)| New values for a set of question fields | [optional] 
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

