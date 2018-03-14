# JSAPIStoreVendorsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createVendor**](JSAPIStoreVendorsApi.md#createvendor) | **POST** /vendors | Create a vendor
[**createVendorTemplate**](JSAPIStoreVendorsApi.md#createvendortemplate) | **POST** /vendors/templates | Create a vendor template
[**deleteVendor**](JSAPIStoreVendorsApi.md#deletevendor) | **DELETE** /vendors/{id} | Delete a vendor
[**deleteVendorTemplate**](JSAPIStoreVendorsApi.md#deletevendortemplate) | **DELETE** /vendors/templates/{id} | Delete a vendor template
[**getVendor**](JSAPIStoreVendorsApi.md#getvendor) | **GET** /vendors/{id} | Get a single vendor
[**getVendorTemplate**](JSAPIStoreVendorsApi.md#getvendortemplate) | **GET** /vendors/templates/{id} | Get a single vendor template
[**getVendorTemplates**](JSAPIStoreVendorsApi.md#getvendortemplates) | **GET** /vendors/templates | List and search vendor templates
[**getVendors**](JSAPIStoreVendorsApi.md#getvendors) | **GET** /vendors | List and search vendors
[**updateVendor**](JSAPIStoreVendorsApi.md#updatevendor) | **PUT** /vendors/{id} | Update a vendor
[**updateVendorTemplate**](JSAPIStoreVendorsApi.md#updatevendortemplate) | **PUT** /vendors/templates/{id} | Update a vendor template


# **createVendor**
```objc
-(NSURLSessionTask*) createVendorWithVendor: (JSAPIVendorResource*) vendor
        completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;
```

Create a vendor

<b>Permissions Needed:</b> VENDORS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIVendorResource* vendor = [[JSAPIVendorResource alloc] init]; // The vendor (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Create a vendor
[apiInstance createVendorWithVendor:vendor
          completionHandler: ^(JSAPIVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->createVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vendor** | [**JSAPIVendorResource***](JSAPIVendorResource.md)| The vendor | [optional] 

### Return type

[**JSAPIVendorResource***](JSAPIVendorResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createVendorTemplate**
```objc
-(NSURLSessionTask*) createVendorTemplateWithVendorTemplateResource: (JSAPIItemTemplateResource*) vendorTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Create a vendor template

Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIItemTemplateResource* vendorTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The new vendor template (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Create a vendor template
[apiInstance createVendorTemplateWithVendorTemplateResource:vendorTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->createVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **vendorTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The new vendor template | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVendor**
```objc
-(NSURLSessionTask*) deleteVendorWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a vendor

<b>Permissions Needed:</b> VENDORS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Delete a vendor
[apiInstance deleteVendorWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->deleteVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteVendorTemplate**
```objc
-(NSURLSessionTask*) deleteVendorTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a vendor template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Delete a vendor template
[apiInstance deleteVendorTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->deleteVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendor**
```objc
-(NSURLSessionTask*) getVendorWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;
```

Get a single vendor

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Get a single vendor
[apiInstance getVendorWithId:_id
          completionHandler: ^(JSAPIVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->getVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 

### Return type

[**JSAPIVendorResource***](JSAPIVendorResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendorTemplate**
```objc
-(NSURLSessionTask*) getVendorTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Get a single vendor template

Vendor Templates define a type of vendor and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Get a single vendor template
[apiInstance getVendorTemplateWithId:_id
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->getVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendorTemplates**
```objc
-(NSURLSessionTask*) getVendorTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search vendor templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// List and search vendor templates
[apiInstance getVendorTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->getVendorTemplates: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceItemTemplateResource_***](JSAPIPageResourceItemTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getVendors**
```objc
-(NSURLSessionTask*) getVendorsWithFilterName: (NSString*) filterName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceVendorResource_* output, NSError* error)) handler;
```

List and search vendors

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filterName = @"filterName_example"; // Filters vendors by name starting with the text provided in the filter (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// List and search vendors
[apiInstance getVendorsWithFilterName:filterName
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceVendorResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->getVendors: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterName** | **NSString***| Filters vendors by name starting with the text provided in the filter | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceVendorResource_***](JSAPIPageResourceVendorResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVendor**
```objc
-(NSURLSessionTask*) updateVendorWithId: (NSNumber*) _id
    vendor: (JSAPIVendorResource*) vendor
        completionHandler: (void (^)(JSAPIVendorResource* output, NSError* error)) handler;
```

Update a vendor

<b>Permissions Needed:</b> VENDORS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the vendor
JSAPIVendorResource* vendor = [[JSAPIVendorResource alloc] init]; // The vendor (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Update a vendor
[apiInstance updateVendorWithId:_id
              vendor:vendor
          completionHandler: ^(JSAPIVendorResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->updateVendor: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the vendor | 
 **vendor** | [**JSAPIVendorResource***](JSAPIVendorResource.md)| The vendor | [optional] 

### Return type

[**JSAPIVendorResource***](JSAPIVendorResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateVendorTemplate**
```objc
-(NSURLSessionTask*) updateVendorTemplateWithId: (NSString*) _id
    vendorTemplateResource: (JSAPIItemTemplateResource*) vendorTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Update a vendor template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIItemTemplateResource* vendorTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The vendor template resource object (optional)

JSAPIStoreVendorsApi*apiInstance = [[JSAPIStoreVendorsApi alloc] init];

// Update a vendor template
[apiInstance updateVendorTemplateWithId:_id
              vendorTemplateResource:vendorTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreVendorsApi->updateVendorTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **vendorTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The vendor template resource object | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

