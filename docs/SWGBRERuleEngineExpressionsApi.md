# SWGBRERuleEngineExpressionsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getLookupTypesUsingGET**](SWGBRERuleEngineExpressionsApi.md#getlookuptypesusingget) | **GET** /bre/expressions/lookup | Get a list of &#39;lookup&#39; type expressions


# **getLookupTypesUsingGET**
```objc
-(NSNumber*) getLookupTypesUsingGETWithCompletionHandler: 
        (void (^)(NSArray<SWGLookupTypeResource>* output, NSError* error)) handler;
```

Get a list of 'lookup' type expressions

These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).

### Example 
```objc


SWGBRERuleEngineExpressionsApi*apiInstance = [[SWGBRERuleEngineExpressionsApi alloc] init];

// Get a list of 'lookup' type expressions
[apiInstance getLookupTypesUsingGETWithCompletionHandler: 
          ^(NSArray<SWGLookupTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineExpressionsApi->getLookupTypesUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<SWGLookupTypeResource>***](SWGLookupTypeResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

