# JSAPIUsersAddressesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createAddress**](JSAPIUsersAddressesApi.md#createaddress) | **POST** /users/{user_id}/addresses | Create a new address
[**deleteAddress**](JSAPIUsersAddressesApi.md#deleteaddress) | **DELETE** /users/{user_id}/addresses/{id} | Delete an address
[**getAddress**](JSAPIUsersAddressesApi.md#getaddress) | **GET** /users/{user_id}/addresses/{id} | Get a single address
[**getAddresses**](JSAPIUsersAddressesApi.md#getaddresses) | **GET** /users/{user_id}/addresses | List and search addresses
[**updateAddress**](JSAPIUsersAddressesApi.md#updateaddress) | **PUT** /users/{user_id}/addresses/{id} | Update an address


# **createAddress**
```objc
-(NSURLSessionTask*) createAddressWithUserId: (NSString*) userId
    savedAddressResource: (JSAPISavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;
```

Create a new address

<b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
JSAPISavedAddressResource* savedAddressResource = [[JSAPISavedAddressResource alloc] init]; // The new address (optional)

JSAPIUsersAddressesApi*apiInstance = [[JSAPIUsersAddressesApi alloc] init];

// Create a new address
[apiInstance createAddressWithUserId:userId
              savedAddressResource:savedAddressResource
          completionHandler: ^(JSAPISavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersAddressesApi->createAddress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **savedAddressResource** | [**JSAPISavedAddressResource***](JSAPISavedAddressResource.md)| The new address | [optional] 

### Return type

[**JSAPISavedAddressResource***](JSAPISavedAddressResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

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

<b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

JSAPIUsersAddressesApi*apiInstance = [[JSAPIUsersAddressesApi alloc] init];

// Delete an address
[apiInstance deleteAddressWithUserId:userId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersAddressesApi->deleteAddress: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddress**
```objc
-(NSURLSessionTask*) getAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;
```

Get a single address

<b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address

JSAPIUsersAddressesApi*apiInstance = [[JSAPIUsersAddressesApi alloc] init];

// Get a single address
[apiInstance getAddressWithUserId:userId
              _id:_id
          completionHandler: ^(JSAPISavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersAddressesApi->getAddress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **_id** | **NSNumber***| The id of the address | 

### Return type

[**JSAPISavedAddressResource***](JSAPISavedAddressResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAddresses**
```objc
-(NSURLSessionTask*) getAddressesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceSavedAddressResource_* output, NSError* error)) handler;
```

List and search addresses

<b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIUsersAddressesApi*apiInstance = [[JSAPIUsersAddressesApi alloc] init];

// List and search addresses
[apiInstance getAddressesWithUserId:userId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceSavedAddressResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersAddressesApi->getAddresses: %@", error);
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

[**JSAPIPageResourceSavedAddressResource_***](JSAPIPageResourceSavedAddressResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAddress**
```objc
-(NSURLSessionTask*) updateAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    savedAddressResource: (JSAPISavedAddressResource*) savedAddressResource
        completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;
```

Update an address

<b>Permissions Needed:</b> USERS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* userId = @"userId_example"; // The id of the user
NSNumber* _id = @56; // The id of the address
JSAPISavedAddressResource* savedAddressResource = [[JSAPISavedAddressResource alloc] init]; // The saved address resource object (optional)

JSAPIUsersAddressesApi*apiInstance = [[JSAPIUsersAddressesApi alloc] init];

// Update an address
[apiInstance updateAddressWithUserId:userId
              _id:_id
              savedAddressResource:savedAddressResource
          completionHandler: ^(JSAPISavedAddressResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersAddressesApi->updateAddress: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSString***| The id of the user | 
 **_id** | **NSNumber***| The id of the address | 
 **savedAddressResource** | [**JSAPISavedAddressResource***](JSAPISavedAddressResource.md)| The saved address resource object | [optional] 

### Return type

[**JSAPISavedAddressResource***](JSAPISavedAddressResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

