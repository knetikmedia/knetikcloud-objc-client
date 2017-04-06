# JSAPIDevicesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createDevice**](JSAPIDevicesApi.md#createdevice) | **POST** /devices | Create a device
[**deleteDevice**](JSAPIDevicesApi.md#deletedevice) | **DELETE** /devices/{id} | Delete a device
[**getDevice**](JSAPIDevicesApi.md#getdevice) | **GET** /devices/{id} | Get a single device
[**getDevices**](JSAPIDevicesApi.md#getdevices) | **GET** /devices | List and search devices
[**updateDevice**](JSAPIDevicesApi.md#updatedevice) | **PUT** /devices/{id} | Update a device


# **createDevice**
```objc
-(NSURLSessionTask*) createDeviceWithDevice: (JSAPIDeviceResource*) device
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Create a device

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIDeviceResource* device = [[JSAPIDeviceResource alloc] init]; // device

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Create a device
[apiInstance createDeviceWithDevice:device
          completionHandler: ^(JSAPIDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->createDevice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **device** | [**JSAPIDeviceResource***](JSAPIDeviceResource*.md)| device | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDevice**
```objc
-(NSURLSessionTask*) deleteDeviceWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a device

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Delete a device
[apiInstance deleteDeviceWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->deleteDevice: %@", error);
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

# **getDevice**
```objc
-(NSURLSessionTask*) getDeviceWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Get a single device

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Get a single device
[apiInstance getDeviceWithId:_id
          completionHandler: ^(JSAPIDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->getDevice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDevices**
```objc
-(NSURLSessionTask*) getDevicesWithFilterMake: (NSString*) filterMake
    filterModel: (NSString*) filterModel
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceDeviceResource_* output, NSError* error)) handler;
```

List and search devices

Get a list of devices with optional filtering

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterMake = @"filterMake_example"; // Filter for devices with specified make (optional)
NSString* filterModel = @"filterModel_example"; // Filter for devices with specified model (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// List and search devices
[apiInstance getDevicesWithFilterMake:filterMake
              filterModel:filterModel
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceDeviceResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->getDevices: %@", error);
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

[**JSAPIPageResourceDeviceResource_***](JSAPIPageResourceDeviceResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDevice**
```objc
-(NSURLSessionTask*) updateDeviceWithDevice: (JSAPIDeviceResource*) device
    _id: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Update a device

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIDeviceResource* device = [[JSAPIDeviceResource alloc] init]; // device
NSNumber* _id = @56; // id

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Update a device
[apiInstance updateDeviceWithDevice:device
              _id:_id
          completionHandler: ^(JSAPIDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->updateDevice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **device** | [**JSAPIDeviceResource***](JSAPIDeviceResource*.md)| device | 
 **_id** | **NSNumber***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

