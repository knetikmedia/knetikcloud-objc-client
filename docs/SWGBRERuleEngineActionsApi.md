# SWGBRERuleEngineActionsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getActionsUsingGET**](SWGBRERuleEngineActionsApi.md#getactionsusingget) | **GET** /bre/actions | Get a list of available actions


# **getActionsUsingGET**
```objc
-(NSNumber*) getActionsUsingGETWithFilterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
        completionHandler: (void (^)(NSArray<SWGActionResource>* output, NSError* error)) handler;
```

Get a list of available actions

### Example 
```objc

NSString* filterCategory = @"filterCategory_example"; // Filter for actions that are within a specific category (optional)
NSString* filterName = @"filterName_example"; // Filter for actions that have names containing the given string (optional)

SWGBRERuleEngineActionsApi*apiInstance = [[SWGBRERuleEngineActionsApi alloc] init];

// Get a list of available actions
[apiInstance getActionsUsingGETWithFilterCategory:filterCategory
              filterName:filterName
          completionHandler: ^(NSArray<SWGActionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineActionsApi->getActionsUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

