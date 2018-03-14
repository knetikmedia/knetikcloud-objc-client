# JSAPIRuleEngineActionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBREActions**](JSAPIRuleEngineActionsApi.md#getbreactions) | **GET** /bre/actions | Get a list of available actions


# **getBREActions**
```objc
-(NSURLSessionTask*) getBREActionsWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    filterTags: (NSString*) filterTags
    filterSearch: (NSString*) filterSearch
        completionHandler: (void (^)(NSArray<JSAPIActionResource>* output, NSError* error)) handler;
```

Get a list of available actions

<b>Permissions Needed:</b> BRE_RULE_ENGINE_ACTIONS_USER

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterCategory = @"filterCategory_example"; // Filter for actions that are within a specific category (optional)
NSString* filterName = @"filterName_example"; // Filter for actions that have names containing the given string (optional)
NSString* filterTags = @"filterTags_example"; // Filter for actions that have all of the given tags (comma separated list) (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for actions containing the given words somewhere within name, description and tags (optional)

JSAPIRuleEngineActionsApi*apiInstance = [[JSAPIRuleEngineActionsApi alloc] init];

// Get a list of available actions
[apiInstance getBREActionsWithFilterCategory:filterCategory
              filterName:filterName
              filterTags:filterTags
              filterSearch:filterSearch
          completionHandler: ^(NSArray<JSAPIActionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIRuleEngineActionsApi->getBREActions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterCategory** | **NSString***| Filter for actions that are within a specific category | [optional] 
 **filterName** | **NSString***| Filter for actions that have names containing the given string | [optional] 
 **filterTags** | **NSString***| Filter for actions that have all of the given tags (comma separated list) | [optional] 
 **filterSearch** | **NSString***| Filter for actions containing the given words somewhere within name, description and tags | [optional] 

### Return type

[**NSArray<JSAPIActionResource>***](JSAPIActionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

