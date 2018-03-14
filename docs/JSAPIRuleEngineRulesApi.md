# JSAPIRuleEngineRulesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRERule**](JSAPIRuleEngineRulesApi.md#createbrerule) | **POST** /bre/rules | Create a rule
[**deleteBRERule**](JSAPIRuleEngineRulesApi.md#deletebrerule) | **DELETE** /bre/rules/{id} | Delete a rule
[**getBREExpressionAsString**](JSAPIRuleEngineRulesApi.md#getbreexpressionasstring) | **POST** /bre/rules/expression-as-string | Returns a string representation of the provided expression
[**getBRERule**](JSAPIRuleEngineRulesApi.md#getbrerule) | **GET** /bre/rules/{id} | Get a single rule
[**getBRERules**](JSAPIRuleEngineRulesApi.md#getbrerules) | **GET** /bre/rules | List rules
[**setBRERule**](JSAPIRuleEngineRulesApi.md#setbrerule) | **PUT** /bre/rules/{id}/enabled | Enable or disable a rule
[**updateBRERule**](JSAPIRuleEngineRulesApi.md#updatebrerule) | **PUT** /bre/rules/{id} | Update a rule


# **createBRERule**
```objc
-(NSURLSessionTask*) createBRERuleWithBreRule: (JSAPIBreRule*) breRule
        completionHandler: (void (^)(JSAPIBreRule* output, NSError* error)) handler;
```

Create a rule

Rules define which actions to run when a given event verifies the specified condition. Full list of predicates and other type of expressions can be found at GET /bre/expressions/. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBreRule* breRule = [[JSAPIBreRule alloc] init]; // The BRE rule object (optional)

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Create a rule
[apiInstance createBRERuleWithBreRule:breRule
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->createBRERule: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breRule** | [**JSAPIBreRule***](JSAPIBreRule.md)| The BRE rule object | [optional] 

### Return type

[**JSAPIBreRule***](JSAPIBreRule.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBRERule**
```objc
-(NSURLSessionTask*) deleteBRERuleWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a rule

May fail if there are existing rules against it. Cannot delete core rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the rule

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Delete a rule
[apiInstance deleteBRERuleWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->deleteBRERule: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREExpressionAsString**
```objc
-(NSURLSessionTask*) getBREExpressionAsStringWithExpression: (JSAPIExpressionObject_*) expression
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns a string representation of the provided expression

<b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIExpressionObject_* expression = [[JSAPIExpressionObject_ alloc] init]; // The expression (optional)

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Returns a string representation of the provided expression
[apiInstance getBREExpressionAsStringWithExpression:expression
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->getBREExpressionAsString: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **expression** | [**JSAPIExpressionObject_***](JSAPIExpressionObject_.md)| The expression | [optional] 

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRERule**
```objc
-(NSURLSessionTask*) getBRERuleWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIBreRule* output, NSError* error)) handler;
```

Get a single rule

<b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the rule

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Get a single rule
[apiInstance getBRERuleWithId:_id
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->getBRERule: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 

### Return type

[**JSAPIBreRule***](JSAPIBreRule.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRERules**
```objc
-(NSURLSessionTask*) getBRERulesWithFilterName: (NSString*) filterName
    filterEnabled: (NSNumber*) filterEnabled
    filterSystem: (NSNumber*) filterSystem
    filterTrigger: (NSString*) filterTrigger
    filterAction: (NSString*) filterAction
    filterCondition: (NSString*) filterCondition
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceBreRule_* output, NSError* error)) handler;
```

List rules

<b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filter for rules containing the given name (optional)
NSNumber* filterEnabled = @null; // Filter for rules by active status, null for both (optional) (default to null)
NSNumber* filterSystem = @true; // Filter for rules that are system rules when true, or not when false. Leave off for both mixed (optional)
NSString* filterTrigger = @"filterTrigger_example"; // Filter for rules that are for the trigger with the given name (optional)
NSString* filterAction = @"filterAction_example"; // Filter for rules that use the action with the given name (optional)
NSString* filterCondition = @"filterCondition_example"; // Filter for rules that have a condition containing the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// List rules
[apiInstance getBRERulesWithFilterName:filterName
              filterEnabled:filterEnabled
              filterSystem:filterSystem
              filterTrigger:filterTrigger
              filterAction:filterAction
              filterCondition:filterCondition
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceBreRule_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->getBRERules: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filter for rules containing the given name | [optional] 
 **filterEnabled** | **NSNumber***| Filter for rules by active status, null for both | [optional] [default to null]
 **filterSystem** | **NSNumber***| Filter for rules that are system rules when true, or not when false. Leave off for both mixed | [optional] 
 **filterTrigger** | **NSString***| Filter for rules that are for the trigger with the given name | [optional] 
 **filterAction** | **NSString***| Filter for rules that use the action with the given name | [optional] 
 **filterCondition** | **NSString***| Filter for rules that have a condition containing the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceBreRule_***](JSAPIPageResourceBreRule_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setBRERule**
```objc
-(NSURLSessionTask*) setBRERuleWithId: (NSString*) _id
    enabled: (JSAPIBooleanResource*) enabled
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable a rule

This is helpful for turning off systems rules which cannot be deleted or modified otherwise. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the rule
JSAPIBooleanResource* enabled = [[JSAPIBooleanResource alloc] init]; // The boolean value (optional)

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Enable or disable a rule
[apiInstance setBRERuleWithId:_id
              enabled:enabled
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->setBRERule: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 
 **enabled** | [**JSAPIBooleanResource***](JSAPIBooleanResource.md)| The boolean value | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRERule**
```objc
-(NSURLSessionTask*) updateBRERuleWithId: (NSString*) _id
    breRule: (JSAPIBreRule*) breRule
        completionHandler: (void (^)(JSAPIBreRule* output, NSError* error)) handler;
```

Update a rule

Cannot update system rules. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_RULES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the rule
JSAPIBreRule* breRule = [[JSAPIBreRule alloc] init]; // The BRE rule object (optional)

JSAPIRuleEngineRulesApi*apiInstance = [[JSAPIRuleEngineRulesApi alloc] init];

// Update a rule
[apiInstance updateBRERuleWithId:_id
              breRule:breRule
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineRulesApi->updateBRERule: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 
 **breRule** | [**JSAPIBreRule***](JSAPIBreRule.md)| The BRE rule object | [optional] 

### Return type

[**JSAPIBreRule***](JSAPIBreRule.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

