# JSAPIBRERuleEngineExpressionsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBREExpressions**](JSAPIBRERuleEngineExpressionsApi.md#getbreexpressions) | **GET** /bre/expressions/lookup | Get a list of &#39;lookup&#39; type expressions


# **getBREExpressions**
```objc
-(NSURLSessionTask*) getBREExpressionsWithCompletionHandler: 
        (void (^)(NSArray<JSAPILookupTypeResource>* output, NSError* error)) handler;
```

Get a list of 'lookup' type expressions

These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIBRERuleEngineExpressionsApi*apiInstance = [[JSAPIBRERuleEngineExpressionsApi alloc] init];

// Get a list of 'lookup' type expressions
[apiInstance getBREExpressionsWithCompletionHandler: 
          ^(NSArray<JSAPILookupTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineExpressionsApi->getBREExpressions: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPILookupTypeResource>***](JSAPILookupTypeResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

