# JSAPIBRERuleEngineVariablesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBREVariableTypes**](JSAPIBRERuleEngineVariablesApi.md#getbrevariabletypes) | **GET** /bre/variable-types | Get a list of variable types available
[**getBREVariableValues**](JSAPIBRERuleEngineVariablesApi.md#getbrevariablevalues) | **GET** /bre/variable-types/{name}/values | List valid values for a type


# **getBREVariableTypes**
```objc
-(NSURLSessionTask*) getBREVariableTypesWithCompletionHandler: 
        (void (^)(NSArray<JSAPIVariableTypeResource>* output, NSError* error)) handler;
```

Get a list of variable types available

Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIBRERuleEngineVariablesApi*apiInstance = [[JSAPIBRERuleEngineVariablesApi alloc] init];

// Get a list of variable types available
[apiInstance getBREVariableTypesWithCompletionHandler: 
          ^(NSArray<JSAPIVariableTypeResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineVariablesApi->getBREVariableTypes: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**NSArray<JSAPIVariableTypeResource>***](JSAPIVariableTypeResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREVariableValues**
```objc
-(NSURLSessionTask*) getBREVariableValuesWithName: (NSString*) name
    filterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceSimpleReferenceResourceObject_* output, NSError* error)) handler;
```

List valid values for a type

Used to lookup users to fill in a user constant for example. Only types marked as enumerable are suppoorted here.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* name = @"name_example"; // The name of the type
NSString* filterName = @"filterName_example"; // Filter results by those with names starting with this string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIBRERuleEngineVariablesApi*apiInstance = [[JSAPIBRERuleEngineVariablesApi alloc] init];

// List valid values for a type
[apiInstance getBREVariableValuesWithName:name
              filterName:filterName
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceSimpleReferenceResourceObject_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineVariablesApi->getBREVariableValues: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **NSString***| The name of the type | 
 **filterName** | **NSString***| Filter results by those with names starting with this string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceSimpleReferenceResourceObject_***](JSAPIPageResourceSimpleReferenceResourceObject_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

