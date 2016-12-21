# SWGBRERuleEngineGlobalsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createGlobalUsingPOST**](SWGBRERuleEngineGlobalsApi.md#createglobalusingpost) | **POST** /bre/globals/definitions | Create a global definition
[**deleteGlobalUsingDELETE**](SWGBRERuleEngineGlobalsApi.md#deleteglobalusingdelete) | **DELETE** /bre/globals/definitions/{id} | Delete a global
[**getGlobalUsingGET**](SWGBRERuleEngineGlobalsApi.md#getglobalusingget) | **GET** /bre/globals/definitions/{id} | Get a single global definition
[**getGlobalsUsingGET**](SWGBRERuleEngineGlobalsApi.md#getglobalsusingget) | **GET** /bre/globals/definitions | List global definitions
[**updateGlobalUsingPUT**](SWGBRERuleEngineGlobalsApi.md#updateglobalusingput) | **PUT** /bre/globals/definitions/{id} | Update a global definition


# **createGlobalUsingPOST**
```objc
-(NSNumber*) createGlobalUsingPOSTWithBreGlobalResource: (SWGBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;
```

Create a global definition

Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGBreGlobalResource* breGlobalResource = [[SWGBreGlobalResource alloc] init]; // The BRE global resource object (optional)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Create a global definition
[apiInstance createGlobalUsingPOSTWithBreGlobalResource:breGlobalResource
          completionHandler: ^(SWGBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->createGlobalUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breGlobalResource** | [**SWGBreGlobalResource***](SWGBreGlobalResource*.md)| The BRE global resource object | [optional] 

### Return type

[**SWGBreGlobalResource***](SWGBreGlobalResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGlobalUsingDELETE**
```objc
-(NSNumber*) deleteGlobalUsingDELETEWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a global

May fail if there are existing rules against it. Cannot delete core globals

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Delete a global
[apiInstance deleteGlobalUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->deleteGlobalUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGlobalUsingGET**
```objc
-(NSNumber*) getGlobalUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;
```

Get a single global definition

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Get a single global definition
[apiInstance getGlobalUsingGETWithId:_id
          completionHandler: ^(SWGBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->getGlobalUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 

### Return type

[**SWGBreGlobalResource***](SWGBreGlobalResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGlobalsUsingGET**
```objc
-(NSNumber*) getGlobalsUsingGETWithFilterSystem: (NSNumber*) filterSystem
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBreGlobalResource_* output, NSError* error)) handler;
```

List global definitions

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterSystem = @true; // Filter for globals that are system globals when true, or not when false. Leave off for both mixed (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// List global definitions
[apiInstance getGlobalsUsingGETWithFilterSystem:filterSystem
              size:size
              page:page
          completionHandler: ^(SWGPageResourceBreGlobalResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->getGlobalsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterSystem** | **NSNumber***| Filter for globals that are system globals when true, or not when false. Leave off for both mixed | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceBreGlobalResource_***](SWGPageResourceBreGlobalResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGlobalUsingPUT**
```objc
-(NSNumber*) updateGlobalUsingPUTWithId: (NSString*) _id
    breGlobalResource: (SWGBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a global definition

May fail if new parameters mismatch requirements of existing rules. Cannot update core globals

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition
SWGBreGlobalResource* breGlobalResource = [[SWGBreGlobalResource alloc] init]; // The BRE global resource object (optional)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Update a global definition
[apiInstance updateGlobalUsingPUTWithId:_id
              breGlobalResource:breGlobalResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->updateGlobalUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 
 **breGlobalResource** | [**SWGBreGlobalResource***](SWGBreGlobalResource*.md)| The BRE global resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

