# JSAPIBRERuleEngineEventsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**sendBREEvent**](JSAPIBRERuleEngineEventsApi.md#sendbreevent) | **POST** /bre/events | Fire a new event, based on an existing trigger


# **sendBREEvent**
```objc
-(NSURLSessionTask*) sendBREEventWithBreEvent: (JSAPIBreEvent*) breEvent
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Fire a new event, based on an existing trigger

Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBreEvent* breEvent = [[JSAPIBreEvent alloc] init]; // The BRE event object (optional)

JSAPIBRERuleEngineEventsApi*apiInstance = [[JSAPIBRERuleEngineEventsApi alloc] init];

// Fire a new event, based on an existing trigger
[apiInstance sendBREEventWithBreEvent:breEvent
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineEventsApi->sendBREEvent: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breEvent** | [**JSAPIBreEvent***](JSAPIBreEvent.md)| The BRE event object | [optional] 

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
