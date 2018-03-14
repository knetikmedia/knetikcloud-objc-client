# JSAPIDevicesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addDeviceUsers**](JSAPIDevicesApi.md#adddeviceusers) | **POST** /devices/{id}/users | Add device users
[**createDevice**](JSAPIDevicesApi.md#createdevice) | **POST** /devices | Create a device
[**createDeviceTemplate**](JSAPIDevicesApi.md#createdevicetemplate) | **POST** /devices/templates | Create a device template
[**deleteDevice**](JSAPIDevicesApi.md#deletedevice) | **DELETE** /devices/{id} | Delete a device
[**deleteDeviceTemplate**](JSAPIDevicesApi.md#deletedevicetemplate) | **DELETE** /devices/templates/{id} | Delete an device template
[**deleteDeviceUser**](JSAPIDevicesApi.md#deletedeviceuser) | **DELETE** /devices/{id}/users/{user_id} | Delete a device user
[**deleteDeviceUsers**](JSAPIDevicesApi.md#deletedeviceusers) | **DELETE** /devices/{id}/users | Delete all device users
[**getDevice**](JSAPIDevicesApi.md#getdevice) | **GET** /devices/{id} | Get a single device
[**getDeviceTemplate**](JSAPIDevicesApi.md#getdevicetemplate) | **GET** /devices/templates/{id} | Get a single device template
[**getDeviceTemplates**](JSAPIDevicesApi.md#getdevicetemplates) | **GET** /devices/templates | List and search device templates
[**getDevices**](JSAPIDevicesApi.md#getdevices) | **GET** /devices | List and search devices
[**updateDevice**](JSAPIDevicesApi.md#updatedevice) | **PUT** /devices/{id} | Update a device
[**updateDeviceTemplate**](JSAPIDevicesApi.md#updatedevicetemplate) | **PUT** /devices/templates/{id} | Update an device template


# **addDeviceUsers**
```objc
-(NSURLSessionTask*) addDeviceUsersWithUserResources: (NSArray<JSAPISimpleUserResource>*) userResources
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Add device users

<b>Permissions Needed:</b> DEVICES_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSArray<JSAPISimpleUserResource>* userResources = @[[[JSAPISimpleUserResource alloc] init]]; // userResources
NSString* _id = @"_id_example"; // id

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
 **_id** | **NSString***| id | 

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

<b>Permissions Needed:</b> ANY

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

# **createDeviceTemplate**
```objc
-(NSURLSessionTask*) createDeviceTemplateWithDeviceTemplateResource: (JSAPITemplateResource*) deviceTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a device template

Device Templates define a type of device and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* deviceTemplateResource = [[JSAPITemplateResource alloc] init]; // The device template resource object (optional)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Create a device template
[apiInstance createDeviceTemplateWithDeviceTemplateResource:deviceTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->createDeviceTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **deviceTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The device template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDevice**
```objc
-(NSURLSessionTask*) deleteDeviceWithId: (NSString*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a device

<b>Permissions Needed:</b> DEVICES_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // id

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
 **_id** | **NSString***| id | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceTemplate**
```objc
-(NSURLSessionTask*) deleteDeviceTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an device template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Delete an device template
[apiInstance deleteDeviceTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->deleteDeviceTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceUser**
```objc
-(NSURLSessionTask*) deleteDeviceUserWithId: (NSString*) _id
    userId: (NSNumber*) userId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a device user

<b>Permissions Needed:</b> DEVICES_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the device
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
 **_id** | **NSString***| The id of the device | 
 **userId** | **NSNumber***| The user id of the device user | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteDeviceUsers**
```objc
-(NSURLSessionTask*) deleteDeviceUsersWithId: (NSString*) _id
    filterId: (NSString*) filterId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete all device users

<b>Permissions Needed:</b> DEVICES_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the device
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
 **_id** | **NSString***| The id of the device | 
 **filterId** | **NSString***| Filter for device users to delete with a user id in a given comma separated list of ids | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDevice**
```objc
-(NSURLSessionTask*) getDeviceWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Get a single device

<b>Permissions Needed:</b> DEVICES_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // id

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
 **_id** | **NSString***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDeviceTemplate**
```objc
-(NSURLSessionTask*) getDeviceTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single device template

<b>Permissions Needed:</b> description

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Get a single device template
[apiInstance getDeviceTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->getDeviceTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDeviceTemplates**
```objc
-(NSURLSessionTask*) getDeviceTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search device templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or DEVICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// List and search device templates
[apiInstance getDeviceTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->getDeviceTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getDevices**
```objc
-(NSURLSessionTask*) getDevicesWithFilterMake: (NSString*) filterMake
    filterModel: (NSString*) filterModel
    filterOs: (NSString*) filterOs
    filterSerial: (NSString*) filterSerial
    filterType: (NSString*) filterType
    filterTag: (NSString*) filterTag
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceDeviceResource_* output, NSError* error)) handler;
```

List and search devices

Get a list of devices with optional filtering. <br><br><b>Permissions Needed:</b> DEVICES_ADMIN or user

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterMake = @"filterMake_example"; // Filter for devices with specified make (optional)
NSString* filterModel = @"filterModel_example"; // Filter for devices with specified model (optional)
NSString* filterOs = @"filterOs_example"; // Filter for devices with specified OS (optional)
NSString* filterSerial = @"filterSerial_example"; // Filter for devices with specified serial (optional)
NSString* filterType = @"filterType_example"; // Filter for devices with specified type (optional)
NSString* filterTag = @"filterTag_example"; // A comma separated list without spaces to filter for devices with specified tags (matches any) (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// List and search devices
[apiInstance getDevicesWithFilterMake:filterMake
              filterModel:filterModel
              filterOs:filterOs
              filterSerial:filterSerial
              filterType:filterType
              filterTag:filterTag
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
 **filterOs** | **NSString***| Filter for devices with specified OS | [optional] 
 **filterSerial** | **NSString***| Filter for devices with specified serial | [optional] 
 **filterType** | **NSString***| Filter for devices with specified type | [optional] 
 **filterTag** | **NSString***| A comma separated list without spaces to filter for devices with specified tags (matches any) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceDeviceResource_***](JSAPIPageResourceDeviceResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDevice**
```objc
-(NSURLSessionTask*) updateDeviceWithDevice: (JSAPIDeviceResource*) device
    _id: (NSString*) _id
        completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;
```

Update a device

<b>Permissions Needed:</b> CUSTOMERS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIDeviceResource* device = [[JSAPIDeviceResource alloc] init]; // device
NSString* _id = @"_id_example"; // id

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
 **_id** | **NSString***| id | 

### Return type

[**JSAPIDeviceResource***](JSAPIDeviceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateDeviceTemplate**
```objc
-(NSURLSessionTask*) updateDeviceTemplateWithId: (NSString*) _id
    deviceTemplateResource: (JSAPITemplateResource*) deviceTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an device template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* deviceTemplateResource = [[JSAPITemplateResource alloc] init]; // The device template resource object (optional)

JSAPIDevicesApi*apiInstance = [[JSAPIDevicesApi alloc] init];

// Update an device template
[apiInstance updateDeviceTemplateWithId:_id
              deviceTemplateResource:deviceTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIDevicesApi->updateDeviceTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **deviceTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The device template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

