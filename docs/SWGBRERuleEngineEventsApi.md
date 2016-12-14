# SWGBRERuleEngineEventsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**fireEventUsingPOST**](SWGBRERuleEngineEventsApi.md#fireeventusingpost) | **POST** /bre/events | Fire a new event, based on an existing trigger


# **fireEventUsingPOST**
```objc
-(NSNumber*) fireEventUsingPOSTWithBreEvent: (SWGBreEvent*) breEvent
    authentication: (SWGOAuth2Authentication*) authentication
        completionHandler: (void (^)(NSError* error)) handler;
```

Fire a new event, based on an existing trigger

Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.

### Example 
```objc

SWGBreEvent* breEvent = [[SWGBreEvent alloc] init]; // The BRE event object (optional)
SWGOAuth2Authentication* authentication = [[SWGOAuth2Authentication alloc] init]; // The authentication object (optional)

SWGBRERuleEngineEventsApi*apiInstance = [[SWGBRERuleEngineEventsApi alloc] init];

// Fire a new event, based on an existing trigger
[apiInstance fireEventUsingPOSTWithBreEvent:breEvent
              authentication:authentication
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineEventsApi->fireEventUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breEvent** | [**SWGBreEvent***](SWGBreEvent*.md)| The BRE event object | [optional] 
 **authentication** | [**SWGOAuth2Authentication***](SWGOAuth2Authentication*.md)| The authentication object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

