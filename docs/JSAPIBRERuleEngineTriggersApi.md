# JSAPIBRERuleEngineTriggersApi

All URIs are relative to *https://devsandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBRETrigger**](JSAPIBRERuleEngineTriggersApi.md#createbretrigger) | **POST** /bre/triggers | Create a trigger
[**deleteBRETrigger**](JSAPIBRERuleEngineTriggersApi.md#deletebretrigger) | **DELETE** /bre/triggers/{event_name} | Delete a trigger
[**getBRETrigger**](JSAPIBRERuleEngineTriggersApi.md#getbretrigger) | **GET** /bre/triggers/{event_name} | Get a single trigger
[**getBRETriggers**](JSAPIBRERuleEngineTriggersApi.md#getbretriggers) | **GET** /bre/triggers | List triggers
[**updateBRETrigger**](JSAPIBRERuleEngineTriggersApi.md#updatebretrigger) | **PUT** /bre/triggers/{event_name} | Update a trigger


# **createBRETrigger**
```objc
-(NSURLSessionTask*) createBRETriggerWithBreTriggerResource: (JSAPIBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(JSAPIBreTriggerResource* output, NSError* error)) handler;
```

Create a trigger

Customer added triggers will not be fired automatically or have rules associated with them by default. Custom rules must be added to get use from the trigger and it must then be fired from the outside. See the Bre Event services

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBreTriggerResource* breTriggerResource = [[JSAPIBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

JSAPIBRERuleEngineTriggersApi*apiInstance = [[JSAPIBRERuleEngineTriggersApi alloc] init];

// Create a trigger
[apiInstance createBRETriggerWithBreTriggerResource:breTriggerResource
          completionHandler: ^(JSAPIBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineTriggersApi->createBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breTriggerResource** | [**JSAPIBreTriggerResource***](JSAPIBreTriggerResource.md)| The BRE trigger resource object | [optional] 

### Return type

[**JSAPIBreTriggerResource***](JSAPIBreTriggerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name

JSAPIBRERuleEngineTriggersApi*apiInstance = [[JSAPIBRERuleEngineTriggersApi alloc] init];

// Delete a trigger
[apiInstance deleteBRETriggerWithEventName:eventName
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineTriggersApi->deleteBRETrigger: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRETrigger**
```objc
-(NSURLSessionTask*) getBRETriggerWithEventName: (NSString*) eventName
        completionHandler: (void (^)(JSAPIBreTriggerResource* output, NSError* error)) handler;
```

Get a single trigger

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name

JSAPIBRERuleEngineTriggersApi*apiInstance = [[JSAPIBRERuleEngineTriggersApi alloc] init];

// Get a single trigger
[apiInstance getBRETriggerWithEventName:eventName
          completionHandler: ^(JSAPIBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineTriggersApi->getBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 

### Return type

[**JSAPIBreTriggerResource***](JSAPIBreTriggerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBRETriggers**
```objc
-(NSURLSessionTask*) getBRETriggersWithFilterSystem: (NSNumber*) filterSystem
    filterCategory: (NSString*) filterCategory
    filterTags: (NSString*) filterTags
    filterName: (NSString*) filterName
    filterSearch: (NSString*) filterSearch
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceBreTriggerResource_* output, NSError* error)) handler;
```

List triggers

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterSystem = @true; // Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed (optional)
NSString* filterCategory = @"filterCategory_example"; // Filter for triggers that are within a specific category (optional)
NSString* filterTags = @"filterTags_example"; // Filter for triggers that have all of the given tags (comma separated list) (optional)
NSString* filterName = @"filterName_example"; // Filter for triggers that have names containing the given string (optional)
NSString* filterSearch = @"filterSearch_example"; // Filter for triggers containing the given words somewhere within name, description and tags (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIBRERuleEngineTriggersApi*apiInstance = [[JSAPIBRERuleEngineTriggersApi alloc] init];

// List triggers
[apiInstance getBRETriggersWithFilterSystem:filterSystem
              filterCategory:filterCategory
              filterTags:filterTags
              filterName:filterName
              filterSearch:filterSearch
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceBreTriggerResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineTriggersApi->getBRETriggers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSystem** | **NSNumber***| Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed | [optional] 
 **filterCategory** | **NSString***| Filter for triggers that are within a specific category | [optional] 
 **filterTags** | **NSString***| Filter for triggers that have all of the given tags (comma separated list) | [optional] 
 **filterName** | **NSString***| Filter for triggers that have names containing the given string | [optional] 
 **filterSearch** | **NSString***| Filter for triggers containing the given words somewhere within name, description and tags | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**JSAPIPageResourceBreTriggerResource_***](JSAPIPageResourceBreTriggerResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBRETrigger**
```objc
-(NSURLSessionTask*) updateBRETriggerWithEventName: (NSString*) eventName
    breTriggerResource: (JSAPIBreTriggerResource*) breTriggerResource
        completionHandler: (void (^)(JSAPIBreTriggerResource* output, NSError* error)) handler;
```

Update a trigger

May fail if new parameters mismatch requirements of existing rules. Cannot update core triggers

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* eventName = @"eventName_example"; // The trigger event name
JSAPIBreTriggerResource* breTriggerResource = [[JSAPIBreTriggerResource alloc] init]; // The BRE trigger resource object (optional)

JSAPIBRERuleEngineTriggersApi*apiInstance = [[JSAPIBRERuleEngineTriggersApi alloc] init];

// Update a trigger
[apiInstance updateBRETriggerWithEventName:eventName
              breTriggerResource:breTriggerResource
          completionHandler: ^(JSAPIBreTriggerResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineTriggersApi->updateBRETrigger: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **eventName** | **NSString***| The trigger event name | 
 **breTriggerResource** | [**JSAPIBreTriggerResource***](JSAPIBreTriggerResource.md)| The BRE trigger resource object | [optional] 

### Return type

[**JSAPIBreTriggerResource***](JSAPIBreTriggerResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

