# SWGStoreSubscriptionsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createSubscriptionTemplateUsingPOST**](SWGStoreSubscriptionsApi.md#createsubscriptiontemplateusingpost) | **POST** /subscriptions/templates | Create a subscription template
[**createSubscriptionUsingPOST**](SWGStoreSubscriptionsApi.md#createsubscriptionusingpost) | **POST** /subscriptions | Creates a subscription item and associated plans
[**deletePlanUsingDELETE**](SWGStoreSubscriptionsApi.md#deleteplanusingdelete) | **DELETE** /subscriptions/{id}/plans/{plan_id} | Delete a subscription plan
[**deleteSubscriptionTemplateUsingDELETE**](SWGStoreSubscriptionsApi.md#deletesubscriptiontemplateusingdelete) | **DELETE** /subscriptions/templates/{id} | Delete a subscription template
[**getSubscriptionTemplateUsingGET**](SWGStoreSubscriptionsApi.md#getsubscriptiontemplateusingget) | **GET** /subscriptions/templates/{id} | Get a single subscription template
[**getSubscriptionTemplatesUsingGET**](SWGStoreSubscriptionsApi.md#getsubscriptiontemplatesusingget) | **GET** /subscriptions/templates | List and search subscription templates
[**getSubscriptionUsingGET**](SWGStoreSubscriptionsApi.md#getsubscriptionusingget) | **GET** /subscriptions/{id} | Retrieve a single subscription item and associated plans
[**listBillingReportsUsingGET**](SWGStoreSubscriptionsApi.md#listbillingreportsusingget) | **GET** /subscriptions/reports | Get a list of available subscription reports in most recent first order
[**listSubscriptionsUsingGET**](SWGStoreSubscriptionsApi.md#listsubscriptionsusingget) | **GET** /subscriptions | List available subscription items and associated plans
[**processUsingPOST**](SWGStoreSubscriptionsApi.md#processusingpost) | **POST** /subscriptions/process | Processes subscriptions and charge dues
[**updateSubscriptionTemplateUsingPUT**](SWGStoreSubscriptionsApi.md#updatesubscriptiontemplateusingput) | **PUT** /subscriptions/templates/{id} | Update a subscription template
[**updateSubscriptionUsingPUT**](SWGStoreSubscriptionsApi.md#updatesubscriptionusingput) | **PUT** /subscriptions/{id} | Updates a subscription item and associated plans


# **createSubscriptionTemplateUsingPOST**
```objc
-(NSNumber*) createSubscriptionTemplateUsingPOSTWithSubscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;
```

Create a subscription template

Subscription Templates define a type of subscription and the properties they have.

### Example 
```objc

SWGSubscriptionTemplateResource* subscriptionTemplateResource = [[SWGSubscriptionTemplateResource alloc] init]; // The new subscription template (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Create a subscription template
[apiInstance createSubscriptionTemplateUsingPOSTWithSubscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(SWGSubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->createSubscriptionTemplateUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createSubscriptionUsingPOST**
```objc
-(NSNumber*) createSubscriptionUsingPOSTWithSubscriptionResource: (SWGSubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;
```

Creates a subscription item and associated plans

### Example 
```objc

SWGSubscriptionResource* subscriptionResource = [[SWGSubscriptionResource alloc] init]; // The subscription to be created (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Creates a subscription item and associated plans
[apiInstance createSubscriptionUsingPOSTWithSubscriptionResource:subscriptionResource
          completionHandler: ^(SWGSubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->createSubscriptionUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deletePlanUsingDELETE**
```objc
-(NSNumber*) deletePlanUsingDELETEWithId: (NSNumber*) _id
    planId: (NSString*) planId
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a subscription plan

Must not be locked or a migration target

### Example 
```objc

NSNumber* _id = @56; // The id of the subscription
NSString* planId = @"planId_example"; // The id of the plan

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Delete a subscription plan
[apiInstance deletePlanUsingDELETEWithId:_id
              planId:planId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->deletePlanUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteSubscriptionTemplateUsingDELETE**
```objc
-(NSNumber*) deleteSubscriptionTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a subscription template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // force deleting the template if it's attached to other objects, cascade = detach (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Delete a subscription template
[apiInstance deleteSubscriptionTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->deleteSubscriptionTemplateUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplateUsingGET**
```objc
-(NSNumber*) getSubscriptionTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGSubscriptionTemplateResource* output, NSError* error)) handler;
```

Get a single subscription template

Subscription Templates define a type of subscription and the properties they have.

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Get a single subscription template
[apiInstance getSubscriptionTemplateUsingGETWithId:_id
          completionHandler: ^(SWGSubscriptionTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptionTemplateUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionTemplatesUsingGET**
```objc
-(NSNumber*) getSubscriptionTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSubscriptionTemplateResource_* output, NSError* error)) handler;
```

List and search subscription templates

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// List and search subscription templates
[apiInstance getSubscriptionTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageSubscriptionTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptionTemplatesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageSubscriptionTemplateResource_***](SWGPageSubscriptionTemplateResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionUsingGET**
```objc
-(NSNumber*) getSubscriptionUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGSubscriptionResource* output, NSError* error)) handler;
```

Retrieve a single subscription item and associated plans

### Example 
```objc

NSNumber* _id = @56; // The id of the subscription

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Retrieve a single subscription item and associated plans
[apiInstance getSubscriptionUsingGETWithId:_id
          completionHandler: ^(SWGSubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->getSubscriptionUsingGET: %@", error);
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
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listBillingReportsUsingGET**
```objc
-(NSNumber*) listBillingReportsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageBillingReport_* output, NSError* error)) handler;
```

Get a list of available subscription reports in most recent first order

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Get a list of available subscription reports in most recent first order
[apiInstance listBillingReportsUsingGETWithSize:size
              page:page
          completionHandler: ^(SWGPageBillingReport_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->listBillingReportsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageBillingReport_***](SWGPageBillingReport_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listSubscriptionsUsingGET**
```objc
-(NSNumber*) listSubscriptionsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSubscriptionResource_* output, NSError* error)) handler;
```

List available subscription items and associated plans

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// List available subscription items and associated plans
[apiInstance listSubscriptionsUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageSubscriptionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->listSubscriptionsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageSubscriptionResource_***](SWGPageSubscriptionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **processUsingPOST**
```objc
-(NSNumber*) processUsingPOSTWithCompletionHandler: 
        (void (^)(NSError* error)) handler;
```

Processes subscriptions and charge dues

### Example 
```objc


SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Processes subscriptions and charge dues
[apiInstance processUsingPOSTWithCompletionHandler: 
          ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->processUsingPOST: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscriptionTemplateUsingPUT**
```objc
-(NSNumber*) updateSubscriptionTemplateUsingPUTWithId: (NSString*) _id
    subscriptionTemplateResource: (SWGSubscriptionTemplateResource*) subscriptionTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a subscription template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
SWGSubscriptionTemplateResource* subscriptionTemplateResource = [[SWGSubscriptionTemplateResource alloc] init]; // The subscription template resource object (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Update a subscription template
[apiInstance updateSubscriptionTemplateUsingPUTWithId:_id
              subscriptionTemplateResource:subscriptionTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->updateSubscriptionTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **subscriptionTemplateResource** | [**SWGSubscriptionTemplateResource***](SWGSubscriptionTemplateResource*.md)| The subscription template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateSubscriptionUsingPUT**
```objc
-(NSNumber*) updateSubscriptionUsingPUTWithId: (NSNumber*) _id
    subscriptionResource: (SWGSubscriptionResource*) subscriptionResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Updates a subscription item and associated plans

Will not remove plans left out

### Example 
```objc

NSNumber* _id = @56; // The id of the subscription
SWGSubscriptionResource* subscriptionResource = [[SWGSubscriptionResource alloc] init]; // The subscription resource object (optional)

SWGStoreSubscriptionsApi*apiInstance = [[SWGStoreSubscriptionsApi alloc] init];

// Updates a subscription item and associated plans
[apiInstance updateSubscriptionUsingPUTWithId:_id
              subscriptionResource:subscriptionResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGStoreSubscriptionsApi->updateSubscriptionUsingPUT: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

