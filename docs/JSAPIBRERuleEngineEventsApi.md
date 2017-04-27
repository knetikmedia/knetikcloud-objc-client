# JSAPIBRERuleEngineEventsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendBREEvent**](JSAPIBRERuleEngineEventsApi.md#sendbreevent) | **POST** /bre/events | Fire a new event, based on an existing trigger


# **sendBREEvent**
```objc
-(NSURLSessionTask*) sendBREEventWithBreEvent: (JSAPIBreEvent*) breEvent
        completionHandler: (void (^)(NSError* error)) handler;
```

Fire a new event, based on an existing trigger

Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBreEvent* breEvent = [[JSAPIBreEvent alloc] init]; // The BRE event object (optional)

JSAPIBRERuleEngineEventsApi*apiInstance = [[JSAPIBRERuleEngineEventsApi alloc] init];

// Fire a new event, based on an existing trigger
[apiInstance sendBREEventWithBreEvent:breEvent
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineEventsApi->sendBREEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breEvent** | [**JSAPIBreEvent***](JSAPIBreEvent*.md)| The BRE event object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

