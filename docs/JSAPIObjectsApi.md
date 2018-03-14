# JSAPIObjectsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createObjectItem**](JSAPIObjectsApi.md#createobjectitem) | **POST** /objects/{template_id} | Create an object
[**createObjectTemplate**](JSAPIObjectsApi.md#createobjecttemplate) | **POST** /objects/templates | Create an object template
[**deleteObjectItem**](JSAPIObjectsApi.md#deleteobjectitem) | **DELETE** /objects/{template_id}/{object_id} | Delete an object
[**deleteObjectTemplate**](JSAPIObjectsApi.md#deleteobjecttemplate) | **DELETE** /objects/templates/{id} | Delete an entitlement template
[**getObjectItem**](JSAPIObjectsApi.md#getobjectitem) | **GET** /objects/{template_id}/{object_id} | Get a single object
[**getObjectItems**](JSAPIObjectsApi.md#getobjectitems) | **GET** /objects/{template_id} | List and search objects
[**getObjectTemplate**](JSAPIObjectsApi.md#getobjecttemplate) | **GET** /objects/templates/{id} | Get a single entitlement template
[**getObjectTemplates**](JSAPIObjectsApi.md#getobjecttemplates) | **GET** /objects/templates | List and search entitlement templates
[**updateObjectItem**](JSAPIObjectsApi.md#updateobjectitem) | **PUT** /objects/{template_id}/{object_id} | Update an object
[**updateObjectTemplate**](JSAPIObjectsApi.md#updateobjecttemplate) | **PUT** /objects/templates/{id} | Update an entitlement template


# **createObjectItem**
```objc
-(NSURLSessionTask*) createObjectItemWithTemplateId: (NSString*) templateId
    cascade: (NSNumber*) cascade
    objectItem: (JSAPIObjectResource*) objectItem
        completionHandler: (void (^)(JSAPIObjectResource* output, NSError* error)) handler;
```

Create an object

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* templateId = @"templateId_example"; // The id of the template this object is to be part of
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIObjectResource* objectItem = [[JSAPIObjectResource alloc] init]; // The object item object (optional)

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Create an object
[apiInstance createObjectItemWithTemplateId:templateId
              cascade:cascade
              objectItem:objectItem
          completionHandler: ^(JSAPIObjectResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->createObjectItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateId** | **NSString***| The id of the template this object is to be part of | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **objectItem** | [**JSAPIObjectResource***](JSAPIObjectResource.md)| The object item object | [optional] 

### Return type

[**JSAPIObjectResource***](JSAPIObjectResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createObjectTemplate**
```objc
-(NSURLSessionTask*) createObjectTemplateWithTemplate: (JSAPIItemTemplateResource*) template
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Create an object template

Object templates define a type of entitlement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIItemTemplateResource* template = [[JSAPIItemTemplateResource alloc] init]; // The entitlement template to be created (optional)

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Create an object template
[apiInstance createObjectTemplateWithTemplate:template
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->createObjectTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **template** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The entitlement template to be created | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteObjectItem**
```objc
-(NSURLSessionTask*) deleteObjectItemWithTemplateId: (NSString*) templateId
    objectId: (NSNumber*) objectId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an object

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* templateId = @"templateId_example"; // The id of the template this object is part of
NSNumber* objectId = @56; // The id of the object

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Delete an object
[apiInstance deleteObjectItemWithTemplateId:templateId
              objectId:objectId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->deleteObjectItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateId** | **NSString***| The id of the template this object is part of | 
 **objectId** | **NSNumber***| The id of the object | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteObjectTemplate**
```objc
-(NSURLSessionTask*) deleteObjectTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an entitlement template

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

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Delete an entitlement template
[apiInstance deleteObjectTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->deleteObjectTemplate: %@", error);
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

# **getObjectItem**
```objc
-(NSURLSessionTask*) getObjectItemWithTemplateId: (NSString*) templateId
    objectId: (NSNumber*) objectId
        completionHandler: (void (^)(JSAPIObjectResource* output, NSError* error)) handler;
```

Get a single object

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* templateId = @"templateId_example"; // The id of the template this object is part of
NSNumber* objectId = @56; // The id of the object

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Get a single object
[apiInstance getObjectItemWithTemplateId:templateId
              objectId:objectId
          completionHandler: ^(JSAPIObjectResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->getObjectItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateId** | **NSString***| The id of the template this object is part of | 
 **objectId** | **NSNumber***| The id of the object | 

### Return type

[**JSAPIObjectResource***](JSAPIObjectResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getObjectItems**
```objc
-(NSURLSessionTask*) getObjectItemsWithTemplateId: (NSString*) templateId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceObjectResource_* output, NSError* error)) handler;
```

List and search objects

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* templateId = @"templateId_example"; // The id of the template to get objects for
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// List and search objects
[apiInstance getObjectItemsWithTemplateId:templateId
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceObjectResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->getObjectItems: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateId** | **NSString***| The id of the template to get objects for | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceObjectResource_***](JSAPIPageResourceObjectResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getObjectTemplate**
```objc
-(NSURLSessionTask*) getObjectTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Get a single entitlement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Get a single entitlement template
[apiInstance getObjectTemplateWithId:_id
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->getObjectTemplate: %@", error);
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

# **getObjectTemplates**
```objc
-(NSURLSessionTask*) getObjectTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceItemTemplateResource_* output, NSError* error)) handler;
```

List and search entitlement templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN

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

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// List and search entitlement templates
[apiInstance getObjectTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceItemTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->getObjectTemplates: %@", error);
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

# **updateObjectItem**
```objc
-(NSURLSessionTask*) updateObjectItemWithTemplateId: (NSString*) templateId
    objectId: (NSNumber*) objectId
    cascade: (NSNumber*) cascade
    objectItem: (JSAPIObjectResource*) objectItem
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an object

<b>Permissions Needed:</b> INVENTORY_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* templateId = @"templateId_example"; // The id of the template this object is part of
NSNumber* objectId = @56; // The id of the object
NSNumber* cascade = @false; // Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. (optional) (default to false)
JSAPIObjectResource* objectItem = [[JSAPIObjectResource alloc] init]; // The object item object (optional)

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Update an object
[apiInstance updateObjectItemWithTemplateId:templateId
              objectId:objectId
              cascade:cascade
              objectItem:objectItem
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->updateObjectItem: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **templateId** | **NSString***| The id of the template this object is part of | 
 **objectId** | **NSNumber***| The id of the object | 
 **cascade** | **NSNumber***| Whether to cascade group changes, such as in the limited gettable behavior. A 400 error will return otherwise if the group is already in use with different values. | [optional] [default to false]
 **objectItem** | [**JSAPIObjectResource***](JSAPIObjectResource.md)| The object item object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateObjectTemplate**
```objc
-(NSURLSessionTask*) updateObjectTemplateWithId: (NSString*) _id
    template: (JSAPIItemTemplateResource*) template
        completionHandler: (void (^)(JSAPIItemTemplateResource* output, NSError* error)) handler;
```

Update an entitlement template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPIItemTemplateResource* template = [[JSAPIItemTemplateResource alloc] init]; // The updated template (optional)

JSAPIObjectsApi*apiInstance = [[JSAPIObjectsApi alloc] init];

// Update an entitlement template
[apiInstance updateObjectTemplateWithId:_id
              template:template
          completionHandler: ^(JSAPIItemTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIObjectsApi->updateObjectTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **template** | [**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)| The updated template | [optional] 

### Return type

[**JSAPIItemTemplateResource***](JSAPIItemTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

