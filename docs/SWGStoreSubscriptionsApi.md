# SWGStoreSubscriptionsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createSubscription**](SWGStoreSubscriptionsApi.md#createsubscription) | **POST** /subscriptions | Creates a subscription item and associated plans
[**createSubscriptionTemplate**](SWGStoreSubscriptionsApi.md#createsubscriptiontemplate) | **POST** /subscriptions/templates | Create a subscription template
[**deleteSubscription**](SWGStoreSubscriptionsApi.md#deletesubscription) | **DELETE** /subscriptions/{id}/plans/{plan_id} | Delete a subscription plan
[**deleteSubscriptionTemplate**](SWGStoreSubscriptionsApi.md#deletesubscriptiontemplate) | **DELETE** /subscriptions/templates/{id} | Delete a subscription template
[**getSubscription**](SWGStoreSubscriptionsApi.md#getsubscription) | **GET** /subscriptions/{id} | Retrieve a single subscription item and associated plans
[**getSubscriptionTemplate**](SWGStoreSubscriptionsApi.md#getsubscriptiontemplate) | **GET** /subscriptions/templates/{id} | Get a single subscription template
[**getSubscriptionTemplates**](SWGStoreSubscriptionsApi.md#getsubscriptiontemplates) | **GET** /subscriptions/templates | List and search subscription templates
[**getSubscriptions**](SWGStoreSubscriptionsApi.md#getsubscriptions) | **GET** /subscriptions | List available subscription items and associated plans
[**processSubscriptions**](SWGStoreSubscriptionsApi.md#processsubscriptions) | **POST** /subscriptions/process | Processes subscriptions and charge dues
[**updateSubscription**](SWGStoreSubscriptionsApi.md#updatesubscription) | **PUT** /subscriptions/{id} | Updates a subscription item and associated plans
[**updateSubscriptionTemplate**](SWGStoreSubscriptionsApi.md#updatesubscriptiontemplate) | **PUT** /subscriptions/templates/{id} | Update a subscription template


# **createSubscription**
```objc
-(NSURLSessionTask*) createSubscriptionWithSubscriptionResource: (SWGSubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;
```

Creates a subscription item and associated plans

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGSubscriptionResource* subscriptionResource = [[SWGSubscriptionResource alloc] init]; // The subscription to be created (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Creates a subscription item and associated plans
[apiInstance createSubscriptionWithSubscriptionResource:subscriptionResource
          completionHandler: ^(SWGSubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->createSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriptionResource** | [**SWGSubscriptionResource***](SWGSubscriptionResource*.md)| The subscription to be created | [optional] 

### Return type

[**SWGSubscriptionResource***](SWGSubscriptionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createSubscriptionTemplate**
```objc
-(NSURLSessionTask*) createSubscriptionTemplateWithSubscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;
```

Create a subscription template

Subscription Templates define a type of subscription and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGSubscriptionTemplateResource* subscriptionTemplateResource = [[SWGSubscriptionTemplateResource alloc] init]; // The new subscription template (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Create a subscription template
[apiInstance createSubscriptionTemplateWithSubscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(SWGSubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->createSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subscriptionTemplateResource** | [**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource*.md)| The new subscription template | [optional] 

### Return type

[**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

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

Must not be locked or a migration target

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the subscription
NSString* planId = @"planId_example"; // The id of the plan

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Delete a subscription plan
[apiInstance deleteSubscriptionWithId:_id
              planId:planId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->deleteSubscription: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSubscriptionTemplate**
```objc
-(NSURLSessionTask*) deleteSubscriptionTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a subscription template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Delete a subscription template
[apiInstance deleteSubscriptionTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->deleteSubscriptionTemplate: %@", error);
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscription**
```objc
-(NSURLSessionTask*) getSubscriptionWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;
```

Retrieve a single subscription item and associated plans

### Example 
```objc

NSNumber* _id = @56; // The id of the subscription

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Retrieve a single subscription item and associated plans
[apiInstance getSubscriptionWithId:_id
          completionHandler: ^(SWGSubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the subscription | 

### Return type

[**SWGSubscriptionResource***](SWGSubscriptionResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplate**
```objc
-(NSURLSessionTask*) getSubscriptionTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;
```

Get a single subscription template

Subscription Templates define a type of subscription and the properties they have.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Get a single subscription template
[apiInstance getSubscriptionTemplateWithId:_id
          completionHandler: ^(SWGSubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplates**
```objc
-(NSURLSessionTask*) getSubscriptionTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceSubscriptionTemplateResource_* output, NSError* error)) handler;
```

List and search subscription templates

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// List and search subscription templates
[apiInstance getSubscriptionTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceSubscriptionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptionTemplates: %@", error);
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

[**SWGPageResourceSubscriptionTemplateResource_***](SWGPageResourceSubscriptionTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptions**
```objc
-(NSURLSessionTask*) getSubscriptionsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceSubscriptionResource_* output, NSError* error)) handler;
```

List available subscription items and associated plans

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// List available subscription items and associated plans
[apiInstance getSubscriptionsWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceSubscriptionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptions: %@", error);
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

[**SWGPageResourceSubscriptionResource_***](SWGPageResourceSubscriptionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **processSubscriptions**
```objc
-(NSURLSessionTask*) processSubscriptionsWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Processes subscriptions and charge dues

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Processes subscriptions and charge dues
[apiInstance processSubscriptionsWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->processSubscriptions: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscription**
```objc
-(NSURLSessionTask*) updateSubscriptionWithId: (NSNumber*) _id
    subscriptionResource: (SWGSubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Updates a subscription item and associated plans

Will not remove plans left out

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the subscription
SWGSubscriptionResource* subscriptionResource = [[SWGSubscriptionResource alloc] init]; // The subscription resource object (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Updates a subscription item and associated plans
[apiInstance updateSubscriptionWithId:_id
              subscriptionResource:subscriptionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->updateSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the subscription | 
 **subscriptionResource** | [**SWGSubscriptionResource***](SWGSubscriptionResource*.md)| The subscription resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscriptionTemplate**
```objc
-(NSURLSessionTask*) updateSubscriptionTemplateWithId: (NSString*) _id
    subscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;
```

Update a subscription template

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGSubscriptionTemplateResource* subscriptionTemplateResource = [[SWGSubscriptionTemplateResource alloc] init]; // The subscription template resource object (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Update a subscription template
[apiInstance updateSubscriptionTemplateWithId:_id
              subscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(SWGSubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->updateSubscriptionTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **subscriptionTemplateResource** | [**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource*.md)| The subscription template resource object | [optional] 

### Return type

[**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

