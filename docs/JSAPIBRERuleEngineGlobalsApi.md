# JSAPIBRERuleEngineGlobalsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBREGlobal**](JSAPIBRERuleEngineGlobalsApi.md#createbreglobal) | **POST** /bre/globals/definitions | Create a global definition
[**deleteBREGlobal**](JSAPIBRERuleEngineGlobalsApi.md#deletebreglobal) | **DELETE** /bre/globals/definitions/{id} | Delete a global
[**getBREGlobal**](JSAPIBRERuleEngineGlobalsApi.md#getbreglobal) | **GET** /bre/globals/definitions/{id} | Get a single global definition
[**getBREGlobals**](JSAPIBRERuleEngineGlobalsApi.md#getbreglobals) | **GET** /bre/globals/definitions | List global definitions
[**updateBREGlobal**](JSAPIBRERuleEngineGlobalsApi.md#updatebreglobal) | **PUT** /bre/globals/definitions/{id} | Update a global definition


# **createBREGlobal**
```objc
-(NSURLSessionTask*) createBREGlobalWithBreGlobalResource: (JSAPIBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;
```

Create a global definition

Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBreGlobalResource* breGlobalResource = [[JSAPIBreGlobalResource alloc] init]; // The BRE global resource object (optional)

JSAPIBRERuleEngineGlobalsApi*apiInstance = [[JSAPIBRERuleEngineGlobalsApi alloc] init];

// Create a global definition
[apiInstance createBREGlobalWithBreGlobalResource:breGlobalResource
          completionHandler: ^(JSAPIBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineGlobalsApi->createBREGlobal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **breGlobalResource** | [**JSAPIBreGlobalResource***](JSAPIBreGlobalResource.md)| The BRE global resource object | [optional] 

### Return type

[**JSAPIBreGlobalResource***](JSAPIBreGlobalResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

JSAPIBRERuleEngineGlobalsApi*apiInstance = [[JSAPIBRERuleEngineGlobalsApi alloc] init];

// Delete a global
[apiInstance deleteBREGlobalWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineGlobalsApi->deleteBREGlobal: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREGlobal**
```objc
-(NSURLSessionTask*) getBREGlobalWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;
```

Get a single global definition

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition

JSAPIBRERuleEngineGlobalsApi*apiInstance = [[JSAPIBRERuleEngineGlobalsApi alloc] init];

// Get a single global definition
[apiInstance getBREGlobalWithId:_id
          completionHandler: ^(JSAPIBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineGlobalsApi->getBREGlobal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 

### Return type

[**JSAPIBreGlobalResource***](JSAPIBreGlobalResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBREGlobals**
```objc
-(NSURLSessionTask*) getBREGlobalsWithFilterSystem: (NSNumber*) filterSystem
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceBreGlobalResource_* output, NSError* error)) handler;
```

List global definitions

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterSystem = @true; // Filter for globals that are system globals when true, or not when false. Leave off for both mixed (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIBRERuleEngineGlobalsApi*apiInstance = [[JSAPIBRERuleEngineGlobalsApi alloc] init];

// List global definitions
[apiInstance getBREGlobalsWithFilterSystem:filterSystem
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceBreGlobalResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineGlobalsApi->getBREGlobals: %@", error);
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

[**JSAPIPageResourceBreGlobalResource_***](JSAPIPageResourceBreGlobalResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBREGlobal**
```objc
-(NSURLSessionTask*) updateBREGlobalWithId: (NSString*) _id
    breGlobalResource: (JSAPIBreGlobalResource*) breGlobalResource
        completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;
```

Update a global definition

May fail if new parameters mismatch requirements of existing rules. Cannot update core globals

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the global definition
JSAPIBreGlobalResource* breGlobalResource = [[JSAPIBreGlobalResource alloc] init]; // The BRE global resource object (optional)

JSAPIBRERuleEngineGlobalsApi*apiInstance = [[JSAPIBRERuleEngineGlobalsApi alloc] init];

// Update a global definition
[apiInstance updateBREGlobalWithId:_id
              breGlobalResource:breGlobalResource
          completionHandler: ^(JSAPIBreGlobalResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIBRERuleEngineGlobalsApi->updateBREGlobal: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the global definition | 
 **breGlobalResource** | [**JSAPIBreGlobalResource***](JSAPIBreGlobalResource.md)| The BRE global resource object | [optional] 

### Return type

[**JSAPIBreGlobalResource***](JSAPIBreGlobalResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
