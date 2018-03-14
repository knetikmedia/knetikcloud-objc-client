# JSAPIStoreSubscriptionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createSubscription**](JSAPIStoreSubscriptionsApi.md#createsubscription) | **POST** /subscriptions | Creates a subscription item and associated plans
[**createSubscriptionTemplate**](JSAPIStoreSubscriptionsApi.md#createsubscriptiontemplate) | **POST** /subscriptions/templates | Create a subscription template
[**deleteSubscription**](JSAPIStoreSubscriptionsApi.md#deletesubscription) | **DELETE** /subscriptions/{id}/plans/{plan_id} | Delete a subscription plan
[**deleteSubscriptionTemplate**](JSAPIStoreSubscriptionsApi.md#deletesubscriptiontemplate) | **DELETE** /subscriptions/templates/{id} | Delete a subscription template
[**getSubscription**](JSAPIStoreSubscriptionsApi.md#getsubscription) | **GET** /subscriptions/{id} | Retrieve a single subscription item and associated plans
[**getSubscriptionTemplate**](JSAPIStoreSubscriptionsApi.md#getsubscriptiontemplate) | **GET** /subscriptions/templates/{id} | Get a single subscription template
[**getSubscriptionTemplates**](JSAPIStoreSubscriptionsApi.md#getsubscriptiontemplates) | **GET** /subscriptions/templates | List and search subscription templates
[**getSubscriptions**](JSAPIStoreSubscriptionsApi.md#getsubscriptions) | **GET** /subscriptions | List available subscription items and associated plans
[**processSubscriptions**](JSAPIStoreSubscriptionsApi.md#processsubscriptions) | **POST** /subscriptions/process | Processes subscriptions and charge dues
[**updateSubscription**](JSAPIStoreSubscriptionsApi.md#updatesubscription) | **PUT** /subscriptions/{id} | Updates a subscription item and associated plans
[**updateSubscriptionTemplate**](JSAPIStoreSubscriptionsApi.md#updatesubscriptiontemplate) | **PUT** /subscriptions/templates/{id} | Update a subscription template


# **createSubscription**
```objc
-(NSURLSessionTask*) createSubscriptionWithSubscriptionResource: (JSAPISubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(JSAPISubscriptionResource* output, NSError* error)) handler;
```

Creates a subscription item and associated plans

<b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPISubscriptionResource* subscriptionResource = [[JSAPISubscriptionResource alloc] init]; // The subscription to be created (optional)

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Creates a subscription item and associated plans
[apiInstance createSubscriptionWithSubscriptionResource:subscriptionResource
          completionHandler: ^(JSAPISubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->createSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriptionResource** | [**JSAPISubscriptionResource***](JSAPISubscriptionResource.md)| The subscription to be created | [optional] 

### Return type

[**JSAPISubscriptionResource***](JSAPISubscriptionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createSubscriptionTemplate**
```objc
-(NSURLSessionTask*) createSubscriptionTemplateWithSubscriptionTemplateResource: (JSAPISubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(JSAPISubscriptionTemplateResource* output, NSError* error)) handler;
```

Create a subscription template

Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPISubscriptionTemplateResource* subscriptionTemplateResource = [[JSAPISubscriptionTemplateResource alloc] init]; // The new subscription template (optional)

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Create a subscription template
[apiInstance createSubscriptionTemplateWithSubscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(JSAPISubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->createSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriptionTemplateResource** | [**JSAPISubscriptionTemplateResource***](JSAPISubscriptionTemplateResource.md)| The new subscription template | [optional] 

### Return type

[**JSAPISubscriptionTemplateResource***](JSAPISubscriptionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSubscription**
```objc
-(NSURLSessionTask*) deleteSubscriptionWithId: (NSNumber*) _id
    planId: (NSString*) planId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a subscription plan

Must not be locked or a migration target. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the subscription
NSString* planId = @"planId_example"; // The id of the plan

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Delete a subscription plan
[apiInstance deleteSubscriptionWithId:_id
              planId:planId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->deleteSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the subscription | 
 **planId** | **NSString***| The id of the plan | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSubscriptionTemplate**
```objc
-(NSURLSessionTask*) deleteSubscriptionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a subscription template

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

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Delete a subscription template
[apiInstance deleteSubscriptionTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->deleteSubscriptionTemplate: %@", error);
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

# **getSubscription**
```objc
-(NSURLSessionTask*) getSubscriptionWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPISubscriptionResource* output, NSError* error)) handler;
```

Retrieve a single subscription item and associated plans

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the subscription

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Retrieve a single subscription item and associated plans
[apiInstance getSubscriptionWithId:_id
          completionHandler: ^(JSAPISubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->getSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the subscription | 

### Return type

[**JSAPISubscriptionResource***](JSAPISubscriptionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplate**
```objc
-(NSURLSessionTask*) getSubscriptionTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPISubscriptionTemplateResource* output, NSError* error)) handler;
```

Get a single subscription template

Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Get a single subscription template
[apiInstance getSubscriptionTemplateWithId:_id
          completionHandler: ^(JSAPISubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->getSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPISubscriptionTemplateResource***](JSAPISubscriptionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplates**
```objc
-(NSURLSessionTask*) getSubscriptionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceSubscriptionTemplateResource_* output, NSError* error)) handler;
```

List and search subscription templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or SUBSCRIPTIONS_ADMIN

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

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// List and search subscription templates
[apiInstance getSubscriptionTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceSubscriptionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->getSubscriptionTemplates: %@", error);
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

[**JSAPIPageResourceSubscriptionTemplateResource_***](JSAPIPageResourceSubscriptionTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptions**
```objc
-(NSURLSessionTask*) getSubscriptionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceSubscriptionResource_* output, NSError* error)) handler;
```

List available subscription items and associated plans

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

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// List available subscription items and associated plans
[apiInstance getSubscriptionsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceSubscriptionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->getSubscriptions: %@", error);
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

[**JSAPIPageResourceSubscriptionResource_***](JSAPIPageResourceSubscriptionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **processSubscriptions**
```objc
-(NSURLSessionTask*) processSubscriptionsWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Processes subscriptions and charge dues

<b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Processes subscriptions and charge dues
[apiInstance processSubscriptionsWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->processSubscriptions: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscription**
```objc
-(NSURLSessionTask*) updateSubscriptionWithId: (NSNumber*) _id
    subscriptionResource: (JSAPISubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Updates a subscription item and associated plans

Will not remove plans left out. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the subscription
JSAPISubscriptionResource* subscriptionResource = [[JSAPISubscriptionResource alloc] init]; // The subscription resource object (optional)

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Updates a subscription item and associated plans
[apiInstance updateSubscriptionWithId:_id
              subscriptionResource:subscriptionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->updateSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the subscription | 
 **subscriptionResource** | [**JSAPISubscriptionResource***](JSAPISubscriptionResource.md)| The subscription resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscriptionTemplate**
```objc
-(NSURLSessionTask*) updateSubscriptionTemplateWithId: (NSString*) _id
    subscriptionTemplateResource: (JSAPISubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(JSAPISubscriptionTemplateResource* output, NSError* error)) handler;
```

Update a subscription template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPISubscriptionTemplateResource* subscriptionTemplateResource = [[JSAPISubscriptionTemplateResource alloc] init]; // The subscription template resource object (optional)

JSAPIStoreSubscriptionsApi*apiInstance = [[JSAPIStoreSubscriptionsApi alloc] init];

// Update a subscription template
[apiInstance updateSubscriptionTemplateWithId:_id
              subscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(JSAPISubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIStoreSubscriptionsApi->updateSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **subscriptionTemplateResource** | [**JSAPISubscriptionTemplateResource***](JSAPISubscriptionTemplateResource.md)| The subscription template resource object | [optional] 

### Return type

[**JSAPISubscriptionTemplateResource***](JSAPISubscriptionTemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

