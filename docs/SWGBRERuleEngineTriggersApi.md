# SWGBRERuleEngineTriggersApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRETrigger**](SWGBRERuleEngineTriggersApi.md#createbretrigger) | **POST** /bre/triggers | Create a trigger
[**deleteBRETrigger**](SWGBRERuleEngineTriggersApi.md#deletebretrigger) | **DELETE** /bre/triggers/{event_name} | Delete a trigger
[**getBRETrigger**](SWGBRERuleEngineTriggersApi.md#getbretrigger) | **GET** /bre/triggers/{event_name} | Get a single trigger
[**getBRETriggers**](SWGBRERuleEngineTriggersApi.md#getbretriggers) | **GET** /bre/triggers | List triggers
[**updateBRETrigger**](SWGBRERuleEngineTriggersApi.md#updatebretrigger) | **PUT** /bre/triggers/{event_name} | Update a trigger


# **createBRETrigger**
```objc
-(NSURLSessionTask*) createBRETriggerWithBreTriggerResource: (SWGBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(SWGBreTriggerResource* output, NSError* error)) handler;
```

Create a trigger

Customer added triggers will not be fired automatically or have rules associated with them by default. Custom rules must be added to get use from the trigger and it must then be fired from the outside. See the Bre Event services

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGBreTriggerResource* breTriggerResource = [[SWGBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Create a trigger
[apiInstance createBRETriggerWithBreTriggerResource:breTriggerResource
          completionHandler: ^(SWGBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->createBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breTriggerResource** | [**SWGBreTriggerResource***](SWGBreTriggerResource*.md)| The BRE trigger resource object | [optional] 

### Return type

[**SWGBreTriggerResource***](SWGBreTriggerResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBRETrigger**
```objc
-(NSURLSessionTask*) deleteBRETriggerWithEventName: (NSString*) eventName
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a trigger

May fail if there are existing rules against it. Cannot delete core triggers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Delete a trigger
[apiInstance deleteBRETriggerWithEventName:eventName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->deleteBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRETrigger**
```objc
-(NSURLSessionTask*) getBRETriggerWithEventName: (NSString*) eventName
        completionHandler: (void (^)(SWGBreTriggerResource* output, NSError* error)) handler;
```

Get a single trigger

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Get a single trigger
[apiInstance getBRETriggerWithEventName:eventName
          completionHandler: ^(SWGBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->getBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 

### Return type

[**SWGBreTriggerResource***](SWGBreTriggerResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRETriggers**
```objc
-(NSURLSessionTask*) getBRETriggersWithFilterSystem: (NSNumber*) filterSystem
    filterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBreTriggerResource_* output, NSError* error)) handler;
```

List triggers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterSystem = @true; // Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for triggers that are within a specific category (optional)
NSString* filterName = @"filterName_example"; // Filter for triggers that have names containing the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// List triggers
[apiInstance getBRETriggersWithFilterSystem:filterSystem
              filterCategory:filterCategory
              filterName:filterName
              size:size
              page:page
          completionHandler: ^(SWGPageResourceBreTriggerResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->getBRETriggers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSystem** | **NSNumber***| Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed | [optional] 
 **filterCategory** | **NSString***| Filter for triggers that are within a specific category | [optional] 
 **filterName** | **NSString***| Filter for triggers that have names containing the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceBreTriggerResource_***](SWGPageResourceBreTriggerResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRETrigger**
```objc
-(NSURLSessionTask*) updateBRETriggerWithEventName: (NSString*) eventName
    breTriggerResource: (SWGBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(SWGBreTriggerResource* output, NSError* error)) handler;
```

Update a trigger

May fail if new parameters mismatch requirements of existing rules. Cannot update core triggers

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name
SWGBreTriggerResource* breTriggerResource = [[SWGBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Update a trigger
[apiInstance updateBRETriggerWithEventName:eventName
              breTriggerResource:breTriggerResource
          completionHandler: ^(SWGBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->updateBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 
 **breTriggerResource** | [**SWGBreTriggerResource***](SWGBreTriggerResource*.md)| The BRE trigger resource object | [optional] 

### Return type

[**SWGBreTriggerResource***](SWGBreTriggerResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

