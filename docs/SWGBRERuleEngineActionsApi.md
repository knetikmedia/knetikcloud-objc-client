# SWGBRERuleEngineActionsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBREActions**](SWGBRERuleEngineActionsApi.md#getbreactions) | **GET** /bre/actions | Get a list of available actions


# **getBREActions**
```objc
-(NSURLSessionTask*) getBREActionsWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
        completionHandler: (void (^)(NSArray<SWGActionResource>* output, NSError* error)) handler;
```

Get a list of available actions

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterCategory = @"filterCategory_example"; // Filter for actions that are within a specific category (optional)
NSString* filterName = @"filterName_example"; // Filter for actions that have names containing the given string (optional)

SWGBRERuleEngineActionsApi*apiInstance = [[SWGBRERuleEngineActionsApi alloc] init];

// Get a list of available actions
[apiInstance getBREActionsWithFilterCategory:filterCategory
              filterName:filterName
          completionHandler: ^(NSArray<SWGActionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineActionsApi->getBREActions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterCategory** | **NSString***| Filter for actions that are within a specific category | [optional] 
 **filterName** | **NSString***| Filter for actions that have names containing the given string | [optional] 

### Return type

[**NSArray<SWGActionResource>***](SWGActionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

