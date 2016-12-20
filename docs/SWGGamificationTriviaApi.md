# SWGGamificationTriviaApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addAnswersUsingPOST**](SWGGamificationTriviaApi.md#addanswersusingpost) | **POST** /trivia/questions/{question_id}/answers | Add an answer to a question
[**addTagUsingPOST**](SWGGamificationTriviaApi.md#addtagusingpost) | **POST** /trivia/questions/{id}/tags | Add a tag to a question
[**batchAddTagUsingPOST**](SWGGamificationTriviaApi.md#batchaddtagusingpost) | **POST** /trivia/questions/tags | Add a tag to a batch of questions
[**batchRemoveTagUsingDELETE**](SWGGamificationTriviaApi.md#batchremovetagusingdelete) | **DELETE** /trivia/questions/tags/{tag} | Remove a tag from a batch of questions
[**bulkUpdateUsingPUT**](SWGGamificationTriviaApi.md#bulkupdateusingput) | **PUT** /trivia/questions | Bulk update questions
[**countQuestionsUsingGET**](SWGGamificationTriviaApi.md#countquestionsusingget) | **GET** /trivia/questions/count | Count questions based on filters.
[**createQuestionTemplateUsingPOST**](SWGGamificationTriviaApi.md#createquestiontemplateusingpost) | **POST** /trivia/questions/templates | Create a question template
[**createQuestionUsingPOST**](SWGGamificationTriviaApi.md#createquestionusingpost) | **POST** /trivia/questions | Create a question
[**createUsingPOST**](SWGGamificationTriviaApi.md#createusingpost) | **POST** /trivia/import | Create an import job
[**deleteQuestionTemplateUsingDELETE**](SWGGamificationTriviaApi.md#deletequestiontemplateusingdelete) | **DELETE** /trivia/questions/templates/{id} | Delete a question template
[**deleteQuestionUsingDELETE**](SWGGamificationTriviaApi.md#deletequestionusingdelete) | **DELETE** /trivia/questions/{id} | Delete a question
[**deleteUsingDELETE**](SWGGamificationTriviaApi.md#deleteusingdelete) | **DELETE** /trivia/import/{id} | Delete an import job
[**getAnswerUsingGET**](SWGGamificationTriviaApi.md#getanswerusingget) | **GET** /trivia/questions/{question_id}/answers/{id} | Get an answer for a question
[**getAnswersUsingGET**](SWGGamificationTriviaApi.md#getanswersusingget) | **GET** /trivia/questions/{question_id}/answers | List the answers available for a question
[**getListUsingGET1**](SWGGamificationTriviaApi.md#getlistusingget1) | **GET** /trivia/import | Get a list of import job
[**getQuestionTemplateUsingGET**](SWGGamificationTriviaApi.md#getquestiontemplateusingget) | **GET** /trivia/questions/templates/{id} | Get a single question template
[**getQuestionTemplatesUsingGET**](SWGGamificationTriviaApi.md#getquestiontemplatesusingget) | **GET** /trivia/questions/templates | List and search question templates
[**getQuestionUsingGET**](SWGGamificationTriviaApi.md#getquestionusingget) | **GET** /trivia/questions/{id} | Get a single question
[**getQuestionsDeltaUsingGET**](SWGGamificationTriviaApi.md#getquestionsdeltausingget) | **GET** /trivia/questions/delta | List question deltas in ascending order of updated date
[**getQuestionsUsingGET**](SWGGamificationTriviaApi.md#getquestionsusingget) | **GET** /trivia/questions | List and search questions
[**getTagsUsingGET1**](SWGGamificationTriviaApi.md#gettagsusingget1) | **GET** /trivia/questions/{id}/tags | List the tags for a question
[**getTagsUsingGET2**](SWGGamificationTriviaApi.md#gettagsusingget2) | **GET** /trivia/tags | List and search tags by the beginning of the string
[**getUsingGET**](SWGGamificationTriviaApi.md#getusingget) | **GET** /trivia/import/{id} | Get an import job
[**removeAnswersUsingDELETE**](SWGGamificationTriviaApi.md#removeanswersusingdelete) | **DELETE** /trivia/questions/{question_id}/answers/{id} | Remove an answer from a question
[**removeTagUsingDELETE**](SWGGamificationTriviaApi.md#removetagusingdelete) | **DELETE** /trivia/questions/{id}/tags/{tag} | Remove a tag from a question
[**startProcessUsingPOST**](SWGGamificationTriviaApi.md#startprocessusingpost) | **POST** /trivia/import/{id}/process | Start processing an import job
[**updateAnswerUsingPUT**](SWGGamificationTriviaApi.md#updateanswerusingput) | **PUT** /trivia/questions/{question_id}/answers/{id} | Update an answer for a question
[**updateQuestionTemplateUsingPUT**](SWGGamificationTriviaApi.md#updatequestiontemplateusingput) | **PUT** /trivia/questions/templates/{id} | Update a question template
[**updateQuestionUsingPUT**](SWGGamificationTriviaApi.md#updatequestionusingput) | **PUT** /trivia/questions/{id} | Update a question
[**updateUsingPUT**](SWGGamificationTriviaApi.md#updateusingput) | **PUT** /trivia/import/{id} | Update an import job


# **addAnswersUsingPOST**
```objc
-(NSNumber*) addAnswersUsingPOSTWithQuestionId: (NSString*) questionId
    answer: (SWGAnswerResource*) answer
        completionHandler: (void (^)(SWGAnswerResource* output, NSError* error)) handler;
```

Add an answer to a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
SWGAnswerResource* answer = [[SWGAnswerResource alloc] init]; // The new answer (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Add an answer to a question
[apiInstance addAnswersUsingPOSTWithQuestionId:questionId
              answer:answer
          completionHandler: ^(SWGAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->addAnswersUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addTagUsingPOST**
```objc
-(NSNumber*) addTagUsingPOSTWithId: (NSString*) _id
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a tag to a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
NSString* tag = tag_example; // The new tag (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Add a tag to a question
[apiInstance addTagUsingPOSTWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->addTagUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **batchAddTagUsingPOST**
```objc
-(NSNumber*) batchAddTagUsingPOSTWithTag: (NSString*) tag
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
[apiInstance batchAddTagUsingPOSTWithTag:tag
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->batchAddTagUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **batchRemoveTagUsingDELETE**
```objc
-(NSNumber*) batchRemoveTagUsingDELETEWithTag: (NSString*) tag
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
[apiInstance batchRemoveTagUsingDELETEWithTag:tag
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->batchRemoveTagUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **bulkUpdateUsingPUT**
```objc
-(NSNumber*) bulkUpdateUsingPUTWithQuestion: (SWGQuestionResource*) question
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
[apiInstance bulkUpdateUsingPUTWithQuestion:question
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->bulkUpdateUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **countQuestionsUsingGET**
```objc
-(NSNumber*) countQuestionsUsingGETWithFilterSearch: (NSString*) filterSearch
    filterIdset: (NSString*) filterIdset
    filterCategory: (NSString*) filterCategory
    filterTag: (NSString*) filterTag
    filterTagset: (NSString*) filterTagset
    filterType: (NSString*) filterType
    filterPublished: (NSNumber*) filterPublished
        completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;
```

Count questions based on filters.

This is also provided by the list endpoint so you don't need to call this for pagination purposes

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for documents whose question, answers or tags contains provided string (optional)
NSString* filterIdset = @"filterIdset_example"; // Filter for documents whose id is in the comma separated list provided (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for questions with specified category, by id (optional)
NSString* filterTag = @"filterTag_example"; // Filter for questions with specified tag (optional)
NSString* filterTagset = @"filterTagset_example"; // Filter for questions with specified tags (separated by comma) (optional)
NSString* filterType = @"filterType_example"; // Filter for questions with specified type.  Allowable values: ('TEXT', 'IMAGE', 'VIDEO', 'AUDIO') (optional)
NSNumber* filterPublished = @true; // Filter for questions currenctly published or not (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Count questions based on filters.
[apiInstance countQuestionsUsingGETWithFilterSearch:filterSearch
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->countQuestionsUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestionTemplateUsingPOST**
```objc
-(NSNumber*) createQuestionTemplateUsingPOSTWithQuestionTemplateResource: (SWGQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(SWGQuestionTemplateResource* output, NSError* error)) handler;
```

Create a question template

Question templates define a type of question and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGQuestionTemplateResource* questionTemplateResource = [[SWGQuestionTemplateResource alloc] init]; // The question template resource object (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create a question template
[apiInstance createQuestionTemplateUsingPOSTWithQuestionTemplateResource:questionTemplateResource
          completionHandler: ^(SWGQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createQuestionTemplateUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createQuestionUsingPOST**
```objc
-(NSNumber*) createQuestionUsingPOSTWithQuestion: (SWGQuestionResource*) question
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Create a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGQuestionResource* question = [[SWGQuestionResource alloc] init]; // The new question (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create a question
[apiInstance createQuestionUsingPOSTWithQuestion:question
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createQuestionUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createUsingPOST**
```objc
-(NSNumber*) createUsingPOSTWithRequest: (SWGImportJobResource*) request
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Create an import job

Set up a job to import a set of trivia questions from a cvs file at a remote url. the file will be validated asynchronously but will not be processed until started manually with the process endpoint.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGImportJobResource* request = [[SWGImportJobResource alloc] init]; // The new import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Create an import job
[apiInstance createUsingPOSTWithRequest:request
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->createUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteQuestionTemplateUsingDELETE**
```objc
-(NSNumber*) deleteQuestionTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete a question template
[apiInstance deleteQuestionTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteQuestionTemplateUsingDELETE: %@", error);
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

# **deleteQuestionUsingDELETE**
```objc
-(NSNumber*) deleteQuestionUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete a question
[apiInstance deleteQuestionUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteQuestionUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteUsingDELETE**
```objc
-(NSNumber*) deleteUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an import job

Also deletes all questions that were imported by it

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Delete an import job
[apiInstance deleteUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->deleteUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAnswerUsingGET**
```objc
-(NSNumber*) getAnswerUsingGETWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(SWGAnswerResource* output, NSError* error)) handler;
```

Get an answer for a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get an answer for a question
[apiInstance getAnswerUsingGETWithQuestionId:questionId
              _id:_id
          completionHandler: ^(SWGAnswerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getAnswerUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAnswersUsingGET**
```objc
-(NSNumber*) getAnswersUsingGETWithQuestionId: (NSString*) questionId
        completionHandler: (void (^)(NSArray<SWGAnswerResource>* output, NSError* error)) handler;
```

List the answers available for a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List the answers available for a question
[apiInstance getAnswersUsingGETWithQuestionId:questionId
          completionHandler: ^(NSArray<SWGAnswerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getAnswersUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getListUsingGET1**
```objc
-(NSNumber*) getListUsingGET1WithFilterVendor: (NSString*) filterVendor
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
[apiInstance getListUsingGET1WithFilterVendor:filterVendor
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->getListUsingGET1: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplateUsingGET**
```objc
-(NSNumber*) getQuestionTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGQuestionTemplateResource* output, NSError* error)) handler;
```

Get a single question template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get a single question template
[apiInstance getQuestionTemplateUsingGETWithId:_id
          completionHandler: ^(SWGQuestionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTemplateUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionTemplatesUsingGET**
```objc
-(NSNumber*) getQuestionTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceQuestionTemplateResource_* output, NSError* error)) handler;
```

List and search question templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List and search question templates
[apiInstance getQuestionTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceQuestionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionTemplatesUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionUsingGET**
```objc
-(NSNumber*) getQuestionUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Get a single question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get a single question
[apiInstance getQuestionUsingGETWithId:_id
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionsDeltaUsingGET**
```objc
-(NSNumber*) getQuestionsDeltaUsingGETWithSince: (NSNumber*) since
        completionHandler: (void (^)(NSArray<SWGDeltaResource>* output, NSError* error)) handler;
```

List question deltas in ascending order of updated date

The 'since' parameter is important to avoid getting a full list of all questions. Implementors should make sure they pass the updated date of the last resource loaded, not the date of the last request, in order to avoid gaps

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* since = @789; // Timestamp in seconds (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List question deltas in ascending order of updated date
[apiInstance getQuestionsDeltaUsingGETWithSince:since
          completionHandler: ^(NSArray<SWGDeltaResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionsDeltaUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getQuestionsUsingGET**
```objc
-(NSNumber*) getQuestionsUsingGETWithSize: (NSNumber*) size
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
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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
[apiInstance getQuestionsUsingGETWithSize:size
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
                            NSLog(@"Error calling SWGGamificationTriviaApi->getQuestionsUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTagsUsingGET1**
```objc
-(NSNumber*) getTagsUsingGET1WithId: (NSString*) _id
        completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

List the tags for a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List the tags for a question
[apiInstance getTagsUsingGET1WithId:_id
          completionHandler: ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getTagsUsingGET1: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTagsUsingGET2**
```objc
-(NSNumber*) getTagsUsingGET2WithFilterSearch: (NSString*) filterSearch
    filterCategory: (NSString*) filterCategory
    filterImportId: (NSNumber*) filterImportId
        completionHandler: (void (^)(SWGCollectionString_* output, NSError* error)) handler;
```

List and search tags by the beginning of the string

For performance reasons, search & category filters are mutually exclusive. If category is specified, search filter will be ignored in order to do fast matches for typeahead.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterSearch = @"filterSearch_example"; // Filter for tags starting with the given text (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for tags on questions from a specific category (optional)
NSNumber* filterImportId = @789; // Filter for tags on questions from a specific import job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// List and search tags by the beginning of the string
[apiInstance getTagsUsingGET2WithFilterSearch:filterSearch
              filterCategory:filterCategory
              filterImportId:filterImportId
          completionHandler: ^(SWGCollectionString_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getTagsUsingGET2: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsingGET**
```objc
-(NSNumber*) getUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Get an import job

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Get an import job
[apiInstance getUsingGETWithId:_id
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->getUsingGET: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeAnswersUsingDELETE**
```objc
-(NSNumber*) removeAnswersUsingDELETEWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove an answer from a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Remove an answer from a question
[apiInstance removeAnswersUsingDELETEWithQuestionId:questionId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->removeAnswersUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeTagUsingDELETE**
```objc
-(NSNumber*) removeTagUsingDELETEWithId: (NSString*) _id
    tag: (NSString*) tag
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a tag from a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
NSString* tag = @"tag_example"; // The tag to remove

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Remove a tag from a question
[apiInstance removeTagUsingDELETEWithId:_id
              tag:tag
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->removeTagUsingDELETE: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **startProcessUsingPOST**
```objc
-(NSNumber*) startProcessUsingPOSTWithId: (NSNumber*) _id
    publishNow: (NSNumber*) publishNow
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Start processing an import job

Will process the CSV file and add new questions asynchronously. The status of the job must be 'VALID'.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
NSNumber* publishNow = @true; // Whether the new questions should be published live immediately

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Start processing an import job
[apiInstance startProcessUsingPOSTWithId:_id
              publishNow:publishNow
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->startProcessUsingPOST: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAnswerUsingPUT**
```objc
-(NSNumber*) updateAnswerUsingPUTWithQuestionId: (NSString*) questionId
    _id: (NSString*) _id
    answer: (SWGAnswerResource*) answer
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an answer for a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* questionId = @"questionId_example"; // The id of the question
NSString* _id = @"_id_example"; // The id of the answer
SWGAnswerResource* answer = [[SWGAnswerResource alloc] init]; // The updated answer (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update an answer for a question
[apiInstance updateAnswerUsingPUTWithQuestionId:questionId
              _id:_id
              answer:answer
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateAnswerUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionTemplateUsingPUT**
```objc
-(NSNumber*) updateQuestionTemplateUsingPUTWithId: (NSString*) _id
    questionTemplateResource: (SWGQuestionTemplateResource*) questionTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a question template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGQuestionTemplateResource* questionTemplateResource = [[SWGQuestionTemplateResource alloc] init]; // The question template resource object (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update a question template
[apiInstance updateQuestionTemplateUsingPUTWithId:_id
              questionTemplateResource:questionTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestionTemplateUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateQuestionUsingPUT**
```objc
-(NSNumber*) updateQuestionUsingPUTWithId: (NSString*) _id
    question: (SWGQuestionResource*) question
        completionHandler: (void (^)(SWGQuestionResource* output, NSError* error)) handler;
```

Update a question

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the question
SWGQuestionResource* question = [[SWGQuestionResource alloc] init]; // The updated question (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update a question
[apiInstance updateQuestionUsingPUTWithId:_id
              question:question
          completionHandler: ^(SWGQuestionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateQuestionUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateUsingPUT**
```objc
-(NSNumber*) updateUsingPUTWithId: (NSNumber*) _id
    request: (SWGImportJobResource*) request
        completionHandler: (void (^)(SWGImportJobResource* output, NSError* error)) handler;
```

Update an import job

Changes should be made before process is started for there to be any effect.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the job
SWGImportJobResource* request = [[SWGImportJobResource alloc] init]; // The updated job (optional)

SWGGamificationTriviaApi*apiInstance = [[SWGGamificationTriviaApi alloc] init];

// Update an import job
[apiInstance updateUsingPUTWithId:_id
              request:request
          completionHandler: ^(SWGImportJobResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGGamificationTriviaApi->updateUsingPUT: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

