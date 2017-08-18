# JSAPIDevicesApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDeviceUsers**](JSAPIDevicesApi.md#adddeviceusers) | **POST** /devices/{id}/users | Add device users
[**createDevice**](JSAPIDevicesApi.md#createdevice) | **POST** /devices | Create a device
[**deleteDevice**](JSAPIDevicesApi.md#deletedevice) | **DELETE** /devices/{id} | Delete a device
[**deleteDeviceUser**](JSAPIDevicesApi.md#deletedeviceuser) | **DELETE** /devices/{id}/users/{user_id} | Delete a device user
[**deleteDeviceUsers**](JSAPIDevicesApi.md#deletedeviceusers) | **DELETE** /devices/{id}/users | Delete all device users
[**getDevice**](JSAPIDevicesApi.md#getdevice) | **GET** /devices/{id} | Get a single device
[**getDevices**](JSAPIDevicesApi.md#getdevices) | **GET** /devices | List and search devices
[**updateDevice**](JSAPIDevicesApi.md#updatedevice) | **PUT** /devices/{id} | Update a device


# **addDeviceUsers**
```objc
-(NSURLSessionTask*) addDeviceUsersWithUserResources: (NSArray<JSAPISimpleUserResource>*) userResources
    _id: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Add device users

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSArray<JSAPISimpleUserResource>* userResources = @[[[JSAPISimpleUserResource alloc] init]]; // userResources
NSNumber* _id = @56; // id

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Add device users
[apiInstance addDeviceUsersWithUserResources:userResources
              _id:_id
          completionHandler: ^(JSAPIDeviceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->addDeviceUsers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userResources** | [**NSArray&lt;JSAPISimpleUserResource&gt;***](JSAPISimpleUserResource.md)| userResources | 
 **_id** | **NSNumber***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createDevice**
```objc
-(NSURLSessionTask*) createDeviceWithDevice: (JSAPIDeviceResource*) device
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Create a device

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **device** | [**JSAPIDeviceResource***](JSAPIDeviceResource.md)| device | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceUser**
```objc
-(NSURLSessionTask*) deleteDeviceUserWithId: (NSNumber*) _id
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a device user

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the device
NSNumber* userId = @56; // The user id of the device user

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Delete a device user
[apiInstance deleteDeviceUserWithId:_id
              userId:userId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->deleteDeviceUser: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the device | 
 **userId** | **NSNumber***| The user id of the device user | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceUsers**
```objc
-(NSURLSessionTask*) deleteDeviceUsersWithId: (NSNumber*) _id
    filterId: (NSString*) filterId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all device users

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the device
NSString* filterId = @"filterId_example"; // Filter for device users to delete with a user id in a given comma separated list of ids (optional)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Delete all device users
[apiInstance deleteDeviceUsersWithId:_id
              filterId:filterId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->deleteDeviceUsers: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the device | 
 **filterId** | **NSString***| Filter for device users to delete with a user id in a given comma separated list of ids | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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
 **device** | [**JSAPIDeviceResource***](JSAPIDeviceResource.md)| device | 
 **_id** | **NSNumber***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

