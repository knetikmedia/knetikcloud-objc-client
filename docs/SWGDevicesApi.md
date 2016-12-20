# SWGDevicesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createDeviceUsingPOST**](SWGDevicesApi.md#createdeviceusingpost) | **POST** /devices | Create a device
[**deleteDeviceUsingDELETE**](SWGDevicesApi.md#deletedeviceusingdelete) | **DELETE** /devices/{id} | Delete a device
[**getDeviceUsingGET**](SWGDevicesApi.md#getdeviceusingget) | **GET** /devices/{id} | Get a single device
[**getDevicesUsingGET**](SWGDevicesApi.md#getdevicesusingget) | **GET** /devices | List and search devices
[**updateDeviceUsingPUT**](SWGDevicesApi.md#updatedeviceusingput) | **PUT** /devices/{id} | Update a device


# **createDeviceUsingPOST**
```objc
-(NSNumber*) createDeviceUsingPOSTWithDevice: (SWGDeviceResource*) device
        completionHandler: (void (^)(SWGDeviceResource* output, NSError* error)) handler;
```

Create a device

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGDeviceResource* device = [[SWGDeviceResource alloc] init]; // device

SWGDevicesApi*apiInstance = [[SWGDevicesApi alloc] init];

// Create a device
[apiInstance createDeviceUsingPOSTWithDevice:device
          completionHandler: ^(SWGDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDevicesApi->createDeviceUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **device** | [**SWGDeviceResource***](SWGDeviceResource*.md)| device | 

### Return type

[**SWGDeviceResource***](SWGDeviceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceUsingDELETE**
```objc
-(NSNumber*) deleteDeviceUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a device

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

SWGDevicesApi*apiInstance = [[SWGDevicesApi alloc] init];

// Delete a device
[apiInstance deleteDeviceUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGDevicesApi->deleteDeviceUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDeviceUsingGET**
```objc
-(NSNumber*) getDeviceUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGDeviceResource* output, NSError* error)) handler;
```

Get a single device

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

SWGDevicesApi*apiInstance = [[SWGDevicesApi alloc] init];

// Get a single device
[apiInstance getDeviceUsingGETWithId:_id
          completionHandler: ^(SWGDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDevicesApi->getDeviceUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| id | 

### Return type

[**SWGDeviceResource***](SWGDeviceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDevicesUsingGET**
```objc
-(NSNumber*) getDevicesUsingGETWithFilterMake: (NSString*) filterMake
    filterModel: (NSString*) filterModel
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceDeviceResource_* output, NSError* error)) handler;
```

List and search devices

Get a list of devices with optional filtering

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterMake = @"filterMake_example"; // Filter for devices with specified make (optional)
NSString* filterModel = @"filterModel_example"; // Filter for devices with specified model (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGDevicesApi*apiInstance = [[SWGDevicesApi alloc] init];

// List and search devices
[apiInstance getDevicesUsingGETWithFilterMake:filterMake
              filterModel:filterModel
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceDeviceResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGDevicesApi->getDevicesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterMake** | **NSString***| Filter for devices with specified make | [optional] 
 **filterModel** | **NSString***| Filter for devices with specified model | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceDeviceResource_***](SWGPageResourceDeviceResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDeviceUsingPUT**
```objc
-(NSNumber*) updateDeviceUsingPUTWithDevice: (SWGDeviceResource*) device
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a device

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGDeviceResource* device = [[SWGDeviceResource alloc] init]; // device
NSNumber* _id = @56; // id

SWGDevicesApi*apiInstance = [[SWGDevicesApi alloc] init];

// Update a device
[apiInstance updateDeviceUsingPUTWithDevice:device
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGDevicesApi->updateDeviceUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **device** | [**SWGDeviceResource***](SWGDeviceResource*.md)| device | 
 **_id** | **NSNumber***| id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

