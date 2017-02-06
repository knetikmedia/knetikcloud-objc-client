# SWGUsersAddressesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAddress**](SWGUsersAddressesApi.md#createaddress) | **POST** /users/{user_id}/addresses | Create a new address
[**deleteAddress**](SWGUsersAddressesApi.md#deleteaddress) | **DELETE** /users/{user_id}/addresses/{id} | Delete an address
[**getAddress**](SWGUsersAddressesApi.md#getaddress) | **GET** /users/{user_id}/addresses/{id} | Get a single address
[**getAddresses**](SWGUsersAddressesApi.md#getaddresses) | **GET** /users/{user_id}/addresses | List and search addresses
[**updateAddress**](SWGUsersAddressesApi.md#updateaddress) | **PUT** /users/{user_id}/addresses/{id} | Update an address


# **createAddress**
```objc
-(NSURLSessionTask*) createAddressWithUserId: (NSString*) userId
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;
```

Create a new address

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
SWGSavedAddressResource* savedAddressResource = [[SWGSavedAddressResource alloc] init]; // The new address (optional)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Create a new address
[apiInstance createAddressWithUserId:userId
              savedAddressResource:savedAddressResource
          completionHandler: ^(SWGSavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->createAddress: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAddress**
```objc
-(NSURLSessionTask*) deleteAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an address

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Delete an address
[apiInstance deleteAddressWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->deleteAddress: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddress**
```objc
-(NSURLSessionTask*) getAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;
```

Get a single address

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Get a single address
[apiInstance getAddressWithUserId:userId
              _id:_id
          completionHandler: ^(SWGSavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->getAddress: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddresses**
```objc
-(NSURLSessionTask*) getAddressesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceSavedAddressResource_* output, NSError* error)) handler;
```

List and search addresses

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// List and search addresses
[apiInstance getAddressesWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceSavedAddressResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->getAddresses: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceSavedAddressResource_***](SWGPageResourceSavedAddressResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAddress**
```objc
-(NSURLSessionTask*) updateAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an address

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address
SWGSavedAddressResource* savedAddressResource = [[SWGSavedAddressResource alloc] init]; // The saved address resource object (optional)

SWGUsersAddressesApi*apiInstance = [[SWGUsersAddressesApi alloc] init];

// Update an address
[apiInstance updateAddressWithUserId:userId
              _id:_id
              savedAddressResource:savedAddressResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersAddressesApi->updateAddress: %@", error);
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

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

