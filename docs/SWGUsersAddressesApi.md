# SWGUsersAddressesApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAddressUsingPOST**](SWGUsersAddressesApi.md#createaddressusingpost) | **POST** /users/{user_id}/addresses | Save a new address
[**deleteAddressUsingDELETE**](SWGUsersAddressesApi.md#deleteaddressusingdelete) | **DELETE** /users/{user_id}/addresses/{id} | Delete an address
[**getAddressUsingGET**](SWGUsersAddressesApi.md#getaddressusingget) | **GET** /users/{user_id}/addresses/{id} | Get a single address
[**getAddressesUsingGET**](SWGUsersAddressesApi.md#getaddressesusingget) | **GET** /users/{user_id}/addresses | List and search addresses
[**updateAddressUsingPUT**](SWGUsersAddressesApi.md#updateaddressusingput) | **PUT** /users/{user_id}/addresses/{id} | Update an address


# **createAddressUsingPOST**
```objc
-(NSNumber*) createAddressUsingPOSTWithUserId: (NSString*) userId
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;
```

Save a new address

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user
SWGSavedAddressResource* savedAddressResource = [[SWGSavedAddressResource alloc] init]; // The new address (optional)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Save a new address
[apiInstance createAddressUsingPOSTWithUserId:userId
              savedAddressResource:savedAddressResource
          completionHandler: ^(SWGSavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->createAddressUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **savedAddressResource** | [**SWGSavedAddressResource***](SWGSavedAddressResource*.md)| The new address | [optional] 

### Return type

[**SWGSavedAddressResource***](SWGSavedAddressResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAddressUsingDELETE**
```objc
-(NSNumber*) deleteAddressUsingDELETEWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an address

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Delete an address
[apiInstance deleteAddressUsingDELETEWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->deleteAddressUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **_id** | **NSNumber***| The id of the address | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddressUsingGET**
```objc
-(NSNumber*) getAddressUsingGETWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;
```

Get a single address

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Get a single address
[apiInstance getAddressUsingGETWithUserId:userId
              _id:_id
          completionHandler: ^(SWGSavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->getAddressUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **_id** | **NSNumber***| The id of the address | 

### Return type

[**SWGSavedAddressResource***](SWGSavedAddressResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddressesUsingGET**
```objc
-(NSNumber*) getAddressesUsingGETWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSavedAddressResource_* output, NSError* error)) handler;
```

List and search addresses

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// List and search addresses
[apiInstance getAddressesUsingGETWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageSavedAddressResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->getAddressesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageSavedAddressResource_***](SWGPageSavedAddressResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAddressUsingPUT**
```objc
-(NSNumber*) updateAddressUsingPUTWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an address

### Example 
```objc

NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address
SWGSavedAddressResource* savedAddressResource = [[SWGSavedAddressResource alloc] init]; // The saved address resource object (optional)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Update an address
[apiInstance updateAddressUsingPUTWithUserId:userId
              _id:_id
              savedAddressResource:savedAddressResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->updateAddressUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **_id** | **NSNumber***| The id of the address | 
 **savedAddressResource** | [**SWGSavedAddressResource***](SWGSavedAddressResource*.md)| The saved address resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

