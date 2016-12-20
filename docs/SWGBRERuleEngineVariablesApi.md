# SWGBRERuleEngineVariablesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getListUsingGET**](SWGBRERuleEngineVariablesApi.md#getlistusingget) | **GET** /bre/variable-types | Get a list of variable types available


# **getListUsingGET**
```objc
-(NSNumber*) getListUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGVariableTypeResource>* output, NSError* error)) handler;
```

Get a list of variable types available

Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

