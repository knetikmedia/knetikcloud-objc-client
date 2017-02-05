# SWGBRERuleEngineVariablesApi

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getListUsingGET**](SWGBRERuleEngineVariablesApi.md#getlistusingget) | **GET** /bre/variable-types | Get a list of variable types available


# **getListUsingGET**
```objc
-(NSURLSessionTask*) getListUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGVariableTypeResource>* output, NSError* error)) handler;
```

Get a list of variable types available

Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGBRERuleEngineVariablesApi*apiInstance = [[SWGBRERuleEngineVariablesApi alloc] init];

// Get a list of variable types available
[apiInstance getListUsingGETWithCompletionHandler: 
          ^(NSArray<SWGVariableTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineVariablesApi->getListUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGVariableTypeResource>***](SWGVariableTypeResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

