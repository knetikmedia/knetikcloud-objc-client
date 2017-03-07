# SWGBRERuleEngineGlobalsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBREGlobal**](SWGBRERuleEngineGlobalsApi.md#createbreglobal) | **POST** /bre/globals/definitions | Create a global definition
[**deleteBREGlobal**](SWGBRERuleEngineGlobalsApi.md#deletebreglobal) | **DELETE** /bre/globals/definitions/{id} | Delete a global
[**getBREGlobal**](SWGBRERuleEngineGlobalsApi.md#getbreglobal) | **GET** /bre/globals/definitions/{id} | Get a single global definition
[**getBREGlobals**](SWGBRERuleEngineGlobalsApi.md#getbreglobals) | **GET** /bre/globals/definitions | List global definitions
[**updateBREGlobal**](SWGBRERuleEngineGlobalsApi.md#updatebreglobal) | **PUT** /bre/globals/definitions/{id} | Update a global definition


# **createBREGlobal**
```objc
-(NSURLSessionTask*) createBREGlobalWithBreGlobalResource: (SWGBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;
```

Create a global definition

Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGBreGlobalResource* breGlobalResource = [[SWGBreGlobalResource alloc] init]; // The BRE global resource object (optional)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Create a global definition
[apiInstance createBREGlobalWithBreGlobalResource:breGlobalResource
          completionHandler: ^(SWGBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->createBREGlobal: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBREGlobal**
```objc
-(NSURLSessionTask*) deleteBREGlobalWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a global

May fail if there are existing rules against it. Cannot delete core globals

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Delete a global
[apiInstance deleteBREGlobalWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->deleteBREGlobal: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREGlobal**
```objc
-(NSURLSessionTask*) getBREGlobalWithId: (NSString*) _id
        completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;
```

Get a single global definition

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Get a single global definition
[apiInstance getBREGlobalWithId:_id
          completionHandler: ^(SWGBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->getBREGlobal: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREGlobals**
```objc
-(NSURLSessionTask*) getBREGlobalsWithFilterSystem: (NSNumber*) filterSystem
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceBreGlobalResource_* output, NSError* error)) handler;
```

List global definitions

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterSystem = @true; // Filter for globals that are system globals when true, or not when false. Leave off for both mixed (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// List global definitions
[apiInstance getBREGlobalsWithFilterSystem:filterSystem
              size:size
              page:page
          completionHandler: ^(SWGPageResourceBreGlobalResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->getBREGlobals: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBREGlobal**
```objc
-(NSURLSessionTask*) updateBREGlobalWithId: (NSString*) _id
    breGlobalResource: (SWGBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;
```

Update a global definition

May fail if new parameters mismatch requirements of existing rules. Cannot update core globals

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition
SWGBreGlobalResource* breGlobalResource = [[SWGBreGlobalResource alloc] init]; // The BRE global resource object (optional)

SWGBRERuleEngineGlobalsApi*apiInstance = [[SWGBRERuleEngineGlobalsApi alloc] init];

// Update a global definition
[apiInstance updateBREGlobalWithId:_id
              breGlobalResource:breGlobalResource
          completionHandler: ^(SWGBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBRERuleEngineGlobalsApi->updateBREGlobal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 
 **breGlobalResource** | [**SWGBreGlobalResource***](SWGBreGlobalResource*.md)| The BRE global resource object | [optional] 

### Return type

[**SWGBreGlobalResource***](SWGBreGlobalResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

