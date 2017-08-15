# JSAPIBRERuleEngineRulesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRERule**](JSAPIBRERuleEngineRulesApi.md#createbrerule) | **POST** /bre/rules | Create a rule
[**deleteBRERule**](JSAPIBRERuleEngineRulesApi.md#deletebrerule) | **DELETE** /bre/rules/{id} | Delete a rule
[**getBREExpressionAsString**](JSAPIBRERuleEngineRulesApi.md#getbreexpressionasstring) | **POST** /bre/rules/expression-as-string | Returns a string representation of the provided expression
[**getBRERule**](JSAPIBRERuleEngineRulesApi.md#getbrerule) | **GET** /bre/rules/{id} | Get a single rule
[**getBRERules**](JSAPIBRERuleEngineRulesApi.md#getbrerules) | **GET** /bre/rules | List rules
[**setBRERule**](JSAPIBRERuleEngineRulesApi.md#setbrerule) | **PUT** /bre/rules/{id}/enabled | Enable or disable a rule
[**updateBRERule**](JSAPIBRERuleEngineRulesApi.md#updatebrerule) | **PUT** /bre/rules/{id} | Update a rule


# **createBRERule**
```objc
-(NSURLSessionTask*) createBRERuleWithBreRule: (JSAPIBreRule*) breRule
        completionHandler: (void (^)(JSAPIBreRule* output, NSError* error)) handler;
```

Create a rule

Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...<h1>Boolean Operators</h1><br /><br />1 arg:<br />======<br /><br /><ul> <li>IS_NULL</li> <li>IS_NOT_NULL</li> <li>STRING_IS_EMPTY</li> <li>NOT </li> <li>MAP_IS_EMPTY</li></ul><br />2 args:<br />=======<br /><br /><ul> <li>EQ</li> <li>NE (Not Equals)</li> <li>GT (Greater Than)</li> <li>GOE (Greater Or Equals)</li> <li>LT (Lesser Than)</li> <li>LOE (Lesser Or Equals)</li> <li>OR</li> <li>AND</li> <li>XNOR</li> <li>XOR</li> <li>CONTAINS_KEY (for maps only)</li> <li>CONTAINS_VALUE (for maps only)</li> <li>MATCHES (regex)</li> <li>MATCHES_IC (regex ignore case)</li> <li>STARTS_WITH</li> <li>STARTS_WITH_IC</li> <li>EQ_IGNORE_CASE</li> <li>ENDS_WITH</li> <li>ENDS_WITH_IC</li> <li>STRING_CONTAINS</li> <li>STRING_CONTAINS_IC</li> <li>LIKE (SQL like)</li></ul><br />3 args exceptions:<br />=================<br /><br /><ul> <li>BETWEEN</li></ul><br />n args:<br />=======<br /><br /><ul> <li>IN</li> <li>NOT_INT</li></ul><h1>Math Operators</h1>1 arg:<br />=====<br /><br /><ul> <li>NEGATE</li> <li>MAP_SIZE</li> <li>STRING_LENGTH</li> <li>CEIL</li> <li>ABS</li> <li>FLOOR</li> <li>ROUND</li> <li>RANDOM (no arg)</li> <li>RANDOM2 (seed arg)</li> <li>NUMCAST</li> <li>HOUR</li> <li>MINUTE</li> <li>SECOND</li> <li>MILLISECOND</li> <li>YEAR</li> <li>WEEK</li> <li>YEAR_MONTH</li> <li>YEAR_WEEK</li> <li>DAY_OF_WEEK</li> <li>DAY_OF_MONTH</li> <li>DAY_OF_YEAR</li> <li>WEEK</li> <li>WEEK</li> <li>WEEK</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>ADD</li> <li>DIV</li> <li>MULT</li> <li>SUB</li> <li>POWER</li> <li>MOD</li> <li>LOCATE (index of (string, char))</li> <li>DIFF_YEARS</li> <li>DIFF_MONTHS</li> <li>DIFF_WEEKS</li> <li>DIFF_DAYS</li> <li>DIFF_HOURS</li> <li>DIFF_MINUTES</li> <li>DIFF_SECONDS</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>MIN</li> <li>MAX</li></ul><h1>String Operators</h1>0 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li></ul><br /><br />1 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li> <li>LOWER</li> <li>UPPER</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />2 args:<br />=====<br /><br /><ul> <li>CHAR_AT</li> <li>SUBSTR_1ARG (substr(string, start))</li> <li>CONCAT</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />3 args:<br />=====<br /><br /><ul> <li>SUBSTR_2ARGS (substr(string, start, length))</li></ul>

### Example 
```objc

JSAPIBreRule* breRule = [[JSAPIBreRule alloc] init]; // The BRE rule object (optional)

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Create a rule
[apiInstance createBRERuleWithBreRule:breRule
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->createBRERule: %@", error);
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

No authorization required

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

May fail if there are existing rules against it. Cannot delete core rules

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Delete a rule
[apiInstance deleteBRERuleWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->deleteBRERule: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREExpressionAsString**
```objc
-(NSURLSessionTask*) getBREExpressionAsStringWithExpression: (JSAPIExpressionObject_*) expression
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns a string representation of the provided expression

### Example 
```objc

JSAPIExpressionObject_* expression = [[JSAPIExpressionObject_ alloc] init]; // The expression (optional)

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Returns a string representation of the provided expression
[apiInstance getBREExpressionAsStringWithExpression:expression
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->getBREExpressionAsString: %@", error);
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

No authorization required

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

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Get a single rule
[apiInstance getBRERuleWithId:_id
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->getBRERule: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
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

### Example 
```objc

NSString* filterName = @"filterName_example"; // Filter for rules containing the given name (optional)
NSNumber* filterEnabled = @null; // Filter for rules by active status, null for both (optional) (default to null)
NSNumber* filterSystem = @true; // Filter for rules that are system rules when true, or not when false. Leave off for both mixed (optional)
NSString* filterTrigger = @"filterTrigger_example"; // Filter for rules that are for the trigger with the given name (optional)
NSString* filterAction = @"filterAction_example"; // Filter for rules that use the action with the given name (optional)
NSString* filterCondition = @"filterCondition_example"; // Filter for rules that have a condition containing the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

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
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->getBRERules: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setBRERule**
```objc
-(NSURLSessionTask*) setBRERuleWithId: (NSString*) _id
    enabled: (JSAPIBooleanResource*) enabled
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable a rule

This is helpful for turning off systems rules which cannot be deleted or modified otherwise

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule
JSAPIBooleanResource* enabled = [[JSAPIBooleanResource alloc] init]; // The boolean value (optional)

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Enable or disable a rule
[apiInstance setBRERuleWithId:_id
              enabled:enabled
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->setBRERule: %@", error);
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

No authorization required

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

Cannot update system rules

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule
JSAPIBreRule* breRule = [[JSAPIBreRule alloc] init]; // The BRE rule object (optional)

JSAPIBRERuleEngineRulesApi*apiInstance = [[JSAPIBRERuleEngineRulesApi alloc] init];

// Update a rule
[apiInstance updateBRERuleWithId:_id
              breRule:breRule
          completionHandler: ^(JSAPIBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineRulesApi->updateBRERule: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

