# JSAPIStoreBundlesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createBundleItem**](JSAPIStoreBundlesApi.md#createbundleitem) | **POST** /store/bundles | Create a bundle item
[**createBundleTemplate**](JSAPIStoreBundlesApi.md#createbundletemplate) | **POST** /store/bundles/templates | Create a bundle template
[**deleteBundleItem**](JSAPIStoreBundlesApi.md#deletebundleitem) | **DELETE** /store/bundles/{id} | Delete a bundle item
[**deleteBundleTemplate**](JSAPIStoreBundlesApi.md#deletebundletemplate) | **DELETE** /store/bundles/templates/{id} | Delete a bundle template
[**getBundleItem**](JSAPIStoreBundlesApi.md#getbundleitem) | **GET** /store/bundles/{id} | Get a single bundle item
[**getBundleTemplate**](JSAPIStoreBundlesApi.md#getbundletemplate) | **GET** /store/bundles/templates/{id} | Get a single bundle template
[**getBundleTemplates**](JSAPIStoreBundlesApi.md#getbundletemplates) | **GET** /store/bundles/templates | List and search bundle templates
[**updateBundleItem**](JSAPIStoreBundlesApi.md#updatebundleitem) | **PUT** /store/bundles/{id} | Update a bundle item
[**updateBundleTemplate**](JSAPIStoreBundlesApi.md#updatebundletemplate) | **PUT** /store/bundles/templates/{id} | Update a bundle template


# **createBundleItem**
```objc
-(NSURLSessionTask*) createBundleItemWithCascade: (NSNumber*) cascade
    bundleItem: (JSAPIBundleItem*) bundleItem
        completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;
```

Create a bundle item

The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item. <br><br><b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIBundleItem* bundleItem = [[JSAPIBundleItem alloc] init]; // The bundle item object (optional)

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Create a bundle item
[apiInstance createBundleItemWithCascade:cascade
              bundleItem:bundleItem
          completionHandler: ^(JSAPIBundleItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->createBundleItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **bundleItem** | [**JSAPIBundleItem***](JSAPIBundleItem.md)| The bundle item object | [optional] 

### Return type

[**JSAPIBundleItem***](JSAPIBundleItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createBundleTemplate**
```objc
-(NSURLSessionTask*) createBundleTemplateWithBundleTemplateResource: (JSAPIItemTemplateResource*) bundleTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Create a bundle template

Bundle Templates define a type of bundle and the properties they have. <br><br><b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIItemTemplateResource* bundleTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The new bundle template (optional)

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Create a bundle template
[apiInstance createBundleTemplateWithBundleTemplateResource:bundleTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->createBundleTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bundleTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The new bundle template | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBundleItem**
```objc
-(NSURLSessionTask*) deleteBundleItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a bundle item

<b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the bundle

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Delete a bundle item
[apiInstance deleteBundleItemWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->deleteBundleItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteBundleTemplate**
```objc
-(NSURLSessionTask*) deleteBundleTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a bundle template

<b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Delete a bundle template
[apiInstance deleteBundleTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->deleteBundleTemplate: %@", error);
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

# **getBundleItem**
```objc
-(NSURLSessionTask*) getBundleItemWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;
```

Get a single bundle item

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the bundle

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Get a single bundle item
[apiInstance getBundleItemWithId:_id
          completionHandler: ^(JSAPIBundleItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->getBundleItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 

### Return type

[**JSAPIBundleItem***](JSAPIBundleItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBundleTemplate**
```objc
-(NSURLSessionTask*) getBundleTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Get a single bundle template

Bundle Templates define a type of bundle and the properties they have. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Get a single bundle template
[apiInstance getBundleTemplateWithId:_id
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->getBundleTemplate: %@", error);
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

# **getBundleTemplates**
```objc
-(NSURLSessionTask*) getBundleTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search bundle templates

<b>Permissions Needed:</b> ANY

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

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// List and search bundle templates
[apiInstance getBundleTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->getBundleTemplates: %@", error);
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

[**JSAPIPageResourceItemTemplateResource_***](JSAPIPageResourceItemTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBundleItem**
```objc
-(NSURLSessionTask*) updateBundleItemWithId: (NSNumber*) _id
    cascade: (NSNumber*) cascade
    bundleItem: (JSAPIBundleItem*) bundleItem
        completionHandler: (void (^)(JSAPIBundleItem* output, NSError* error)) handler;
```

Update a bundle item

<b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the bundle
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIBundleItem* bundleItem = [[JSAPIBundleItem alloc] init]; // The bundle item object (optional)

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Update a bundle item
[apiInstance updateBundleItemWithId:_id
              cascade:cascade
              bundleItem:bundleItem
          completionHandler: ^(JSAPIBundleItem* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->updateBundleItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the bundle | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **bundleItem** | [**JSAPIBundleItem***](JSAPIBundleItem.md)| The bundle item object | [optional] 

### Return type

[**JSAPIBundleItem***](JSAPIBundleItem.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBundleTemplate**
```objc
-(NSURLSessionTask*) updateBundleTemplateWithId: (NSString*) _id
    bundleTemplateResource: (JSAPIItemTemplateResource*) bundleTemplateResource
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Update a bundle template

<b>Permissions Needed:</b> BUNDLES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIItemTemplateResource* bundleTemplateResource = [[JSAPIItemTemplateResource alloc] init]; // The bundle template resource object (optional)

JSAPIStoreBundlesApi*apiInstance = [[JSAPIStoreBundlesApi alloc] init];

// Update a bundle template
[apiInstance updateBundleTemplateWithId:_id
              bundleTemplateResource:bundleTemplateResource
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreBundlesApi->updateBundleTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **bundleTemplateResource** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The bundle template resource object | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

