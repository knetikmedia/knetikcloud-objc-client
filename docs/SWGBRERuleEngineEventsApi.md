# SWGBRERuleEngineEventsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**fireEventUsingPOST**](SWGBRERuleEngineEventsApi.md#fireeventusingpost) | **POST** /bre/events | Fire a new event, based on an existing trigger


# **fireEventUsingPOST**
```objc
-(NSNumber*) fireEventUsingPOSTWithBreEvent: (SWGBreEvent*) breEvent
        completionHandler: (void (^)(NSError* error)) handler;
```

Fire a new event, based on an existing trigger

Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGBreEvent* breEvent = [[SWGBreEvent alloc] init]; // The BRE event object (optional)

SWGBRERuleEngineEventsApi*apiInstance = [[SWGBRERuleEngineEventsApi alloc] init];

// Fire a new event, based on an existing trigger
[apiInstance fireEventUsingPOSTWithBreEvent:breEvent
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

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

