# SWGBRERuleEngineTriggersApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createTriggerUsingPOST**](SWGBRERuleEngineTriggersApi.md#createtriggerusingpost) | **POST** /bre/triggers | Create a trigger
[**deleteTriggerUsingDELETE**](SWGBRERuleEngineTriggersApi.md#deletetriggerusingdelete) | **DELETE** /bre/triggers/{event_name} | Delete a trigger
[**getTriggerUsingGET**](SWGBRERuleEngineTriggersApi.md#gettriggerusingget) | **GET** /bre/triggers/{event_name} | Get a single trigger
[**getTriggersUsingGET**](SWGBRERuleEngineTriggersApi.md#gettriggersusingget) | **GET** /bre/triggers | List triggers
[**updateTriggerUsingPUT**](SWGBRERuleEngineTriggersApi.md#updatetriggerusingput) | **PUT** /bre/triggers/{event_name} | Update a trigger


# **createTriggerUsingPOST**
```objc
-(NSNumber*) createTriggerUsingPOSTWithBreTriggerResource: (SWGBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(SWGBreTriggerResource* output, NSError* error)) handler;
```

Create a trigger

Customer added triggers will not be fired automatically or have rules associated with them by default. Custom rules must be added to get use from the trigger and it must then be fired from the outside. See the Bre Event services

### Example 
```objc

SWGBreTriggerResource* breTriggerResource = [[SWGBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Create a trigger
[apiInstance createTriggerUsingPOSTWithBreTriggerResource:breTriggerResource
          completionHandler: ^(SWGBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->createTriggerUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteTriggerUsingDELETE**
```objc
-(NSNumber*) deleteTriggerUsingDELETEWithEventName: (NSString*) eventName
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a trigger

May fail if there are existing rules against it. Cannot delete core triggers

### Example 
```objc

NSString* eventName = @"eventName_example"; // The trigger event name

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Delete a trigger
[apiInstance deleteTriggerUsingDELETEWithEventName:eventName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->deleteTriggerUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTriggerUsingGET**
```objc
-(NSNumber*) getTriggerUsingGETWithEventName: (NSString*) eventName
        completionHandler: (void (^)(SWGBreTriggerResource* output, NSError* error)) handler;
```

Get a single trigger

### Example 
```objc

NSString* eventName = @"eventName_example"; // The trigger event name

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Get a single trigger
[apiInstance getTriggerUsingGETWithEventName:eventName
          completionHandler: ^(SWGBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->getTriggerUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTriggersUsingGET**
```objc
-(NSNumber*) getTriggersUsingGETWithFilterSystem: (NSNumber*) filterSystem
    filterCategory: (NSString*) filterCategory
    filterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageBreTriggerResource_* output, NSError* error)) handler;
```

List triggers

### Example 
```objc

NSNumber* filterSystem = @true; // Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for triggers that are within a specific category (optional)
NSString* filterName = @"filterName_example"; // Filter for triggers that have names containing the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// List triggers
[apiInstance getTriggersUsingGETWithFilterSystem:filterSystem
              filterCategory:filterCategory
              filterName:filterName
              size:size
              page:page
          completionHandler: ^(SWGPageBreTriggerResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->getTriggersUsingGET: %@", error);
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

[**SWGPageBreTriggerResource_***](SWGPageBreTriggerResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateTriggerUsingPUT**
```objc
-(NSNumber*) updateTriggerUsingPUTWithEventName: (NSString*) eventName
    breTriggerResource: (SWGBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a trigger

May fail if new parameters mismatch requirements of existing rules. Cannot update core triggers

### Example 
```objc

NSString* eventName = @"eventName_example"; // The trigger event name
SWGBreTriggerResource* breTriggerResource = [[SWGBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

SWGBRERuleEngineTriggersApi*apiInstance = [[SWGBRERuleEngineTriggersApi alloc] init];

// Update a trigger
[apiInstance updateTriggerUsingPUTWithEventName:eventName
              breTriggerResource:breTriggerResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineTriggersApi->updateTriggerUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 
 **breTriggerResource** | [**SWGBreTriggerResource***](SWGBreTriggerResource*.md)| The BRE trigger resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

