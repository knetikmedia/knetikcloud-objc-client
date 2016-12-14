# SWGBRERuleEngineRulesApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**convertExpressionToStringUsingPOST**](SWGBRERuleEngineRulesApi.md#convertexpressiontostringusingpost) | **POST** /bre/rules/expression-as-string | Returns a string representation of the provided expression
[**createRuleUsingPOST**](SWGBRERuleEngineRulesApi.md#createruleusingpost) | **POST** /bre/rules | Create a rule
[**deleteRuleUsingDELETE**](SWGBRERuleEngineRulesApi.md#deleteruleusingdelete) | **DELETE** /bre/rules/{id} | Delete a rule
[**enableRuleUsingPUT**](SWGBRERuleEngineRulesApi.md#enableruleusingput) | **PUT** /bre/rules/{id}/enabled | Enable or disable a rule
[**getRuleUsingGET**](SWGBRERuleEngineRulesApi.md#getruleusingget) | **GET** /bre/rules/{id} | Get a single rule
[**getRulesUsingGET**](SWGBRERuleEngineRulesApi.md#getrulesusingget) | **GET** /bre/rules | List rules
[**updateRuleUsingPUT**](SWGBRERuleEngineRulesApi.md#updateruleusingput) | **PUT** /bre/rules/{id} | Update a rule


# **convertExpressionToStringUsingPOST**
```objc
-(NSNumber*) convertExpressionToStringUsingPOSTWithExpression: (SWGExpressionObject_*) expression
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Returns a string representation of the provided expression

### Example 
```objc

SWGExpressionObject_* expression = [[SWGExpressionObject_ alloc] init]; // The expression (optional)

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Returns a string representation of the provided expression
[apiInstance convertExpressionToStringUsingPOSTWithExpression:expression
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->convertExpressionToStringUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **expression** | [**SWGExpressionObject_***](SWGExpressionObject_*.md)| The expression | [optional] 

### Return type

**NSString***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createRuleUsingPOST**
```objc
-(NSNumber*) createRuleUsingPOSTWithBreRule: (SWGBreRule*) breRule
        completionHandler: (void (^)(SWGBreRule* output, NSError* error)) handler;
```

Create a rule

Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...<h1>Boolean Operators</h1><br /><br />1 arg:<br />======<br /><br /><ul> <li>IS_NULL</li> <li>IS_NOT_NULL</li> <li>STRING_IS_EMPTY</li> <li>NOT </li> <li>MAP_IS_EMPTY</li></ul><br />2 args:<br />=======<br /><br /><ul> <li>EQ</li> <li>NE (Not Equals)</li> <li>GT (Greater Than)</li> <li>GOE (Greater Or Equals)</li> <li>LT (Lesser Than)</li> <li>LOE (Lesser Or Equals)</li> <li>OR</li> <li>AND</li> <li>XNOR</li> <li>XOR</li> <li>CONTAINS_KEY (for maps only)</li> <li>CONTAINS_VALUE (for maps only)</li> <li>MATCHES (regex)</li> <li>MATCHES_IC (regex ignore case)</li> <li>STARTS_WITH</li> <li>STARTS_WITH_IC</li> <li>EQ_IGNORE_CASE</li> <li>ENDS_WITH</li> <li>ENDS_WITH_IC</li> <li>STRING_CONTAINS</li> <li>STRING_CONTAINS_IC</li> <li>LIKE (SQL like)</li></ul><br />3 args exceptions:<br />=================<br /><br /><ul> <li>BETWEEN</li></ul><br />n args:<br />=======<br /><br /><ul> <li>IN</li> <li>NOT_INT</li></ul><h1>Math Operators</h1>1 arg:<br />=====<br /><br /><ul> <li>NEGATE</li> <li>MAP_SIZE</li> <li>STRING_LENGTH</li> <li>CEIL</li> <li>ABS</li> <li>FLOOR</li> <li>ROUND</li> <li>RANDOM (no arg)</li> <li>RANDOM2 (seed arg)</li> <li>NUMCAST</li> <li>HOUR</li> <li>MINUTE</li> <li>SECOND</li> <li>MILLISECOND</li> <li>YEAR</li> <li>WEEK</li> <li>YEAR_MONTH</li> <li>YEAR_WEEK</li> <li>DAY_OF_WEEK</li> <li>DAY_OF_MONTH</li> <li>DAY_OF_YEAR</li> <li>WEEK</li> <li>WEEK</li> <li>WEEK</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>ADD</li> <li>DIV</li> <li>MULT</li> <li>SUB</li> <li>POWER</li> <li>MOD</li> <li>LOCATE (index of (string, char))</li> <li>DIFF_YEARS</li> <li>DIFF_MONTHS</li> <li>DIFF_WEEKS</li> <li>DIFF_DAYS</li> <li>DIFF_HOURS</li> <li>DIFF_MINUTES</li> <li>DIFF_SECONDS</li></ul><br /><br />2 args:<br />======<br /><br /><ul> <li>MIN</li> <li>MAX</li></ul><h1>String Operators</h1>0 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li></ul><br /><br />1 arg:<br />=====<br /><br /><ul> <li>CURRENT_TIME</li> <li>LOWER</li> <li>UPPER</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />2 args:<br />=====<br /><br /><ul> <li>CHAR_AT</li> <li>SUBSTR_1ARG (substr(string, start))</li> <li>CONCAT</li> <li>TRIM</li> <li>STRING_CAST</li></ul><br /><br />3 args:<br />=====<br /><br /><ul> <li>SUBSTR_2ARGS (substr(string, start, length))</li></ul>

### Example 
```objc

SWGBreRule* breRule = [[SWGBreRule alloc] init]; // The BRE rule object (optional)

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Create a rule
[apiInstance createRuleUsingPOSTWithBreRule:breRule
          completionHandler: ^(SWGBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->createRuleUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breRule** | [**SWGBreRule***](SWGBreRule*.md)| The BRE rule object | [optional] 

### Return type

[**SWGBreRule***](SWGBreRule.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRuleUsingDELETE**
```objc
-(NSNumber*) deleteRuleUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a rule

May fail if there are existing rules against it. Cannot delete core rules

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Delete a rule
[apiInstance deleteRuleUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->deleteRuleUsingDELETE: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **enableRuleUsingPUT**
```objc
-(NSNumber*) enableRuleUsingPUTWithId: (NSString*) _id
    enabled: (SWGBooleanResource*) enabled
        completionHandler: (void (^)(NSError* error)) handler;
```

Enable or disable a rule

This is helpful for turning off systems rules which cannot be deleted or modified otherwise

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule
SWGBooleanResource* enabled = [[SWGBooleanResource alloc] init]; // The boolean value (optional)

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Enable or disable a rule
[apiInstance enableRuleUsingPUTWithId:_id
              enabled:enabled
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->enableRuleUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 
 **enabled** | [**SWGBooleanResource***](SWGBooleanResource*.md)| The boolean value | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRuleUsingGET**
```objc
-(NSNumber*) getRuleUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGBreRule* output, NSError* error)) handler;
```

Get a single rule

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Get a single rule
[apiInstance getRuleUsingGETWithId:_id
          completionHandler: ^(SWGBreRule* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->getRuleUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 

### Return type

[**SWGBreRule***](SWGBreRule.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRulesUsingGET**
```objc
-(NSNumber*) getRulesUsingGETWithFilterName: (NSString*) filterName
    filterEnabled: (NSNumber*) filterEnabled
    filterSystem: (NSNumber*) filterSystem
    filterTrigger: (NSString*) filterTrigger
    filterAction: (NSString*) filterAction
    filterCondition: (NSString*) filterCondition
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageBreRule_* output, NSError* error)) handler;
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

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// List rules
[apiInstance getRulesUsingGETWithFilterName:filterName
              filterEnabled:filterEnabled
              filterSystem:filterSystem
              filterTrigger:filterTrigger
              filterAction:filterAction
              filterCondition:filterCondition
              size:size
              page:page
          completionHandler: ^(SWGPageBreRule_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->getRulesUsingGET: %@", error);
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

[**SWGPageBreRule_***](SWGPageBreRule_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateRuleUsingPUT**
```objc
-(NSNumber*) updateRuleUsingPUTWithId: (NSString*) _id
    breRule: (SWGBreRule*) breRule
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a rule

Cannot update system rules

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the rule
SWGBreRule* breRule = [[SWGBreRule alloc] init]; // The BRE rule object (optional)

SWGBRERuleEngineRulesApi*apiInstance = [[SWGBRERuleEngineRulesApi alloc] init];

// Update a rule
[apiInstance updateRuleUsingPUTWithId:_id
              breRule:breRule
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineRulesApi->updateRuleUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the rule | 
 **breRule** | [**SWGBreRule***](SWGBreRule*.md)| The BRE rule object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

