# SWGUsersSubscriptionsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getSubscriptionDetailsUsingGET**](SWGUsersSubscriptionsApi.md#getsubscriptiondetailsusingget) | **GET** /users/{user_id}/subscriptions/{inventory_id} | Get details about a user&#39;s subscription
[**getSubscriptionDetailsUsingGET1**](SWGUsersSubscriptionsApi.md#getsubscriptiondetailsusingget1) | **GET** /users/{user_id}/subscriptions | Get details about a user&#39;s subscriptions
[**reactivateUsingPOST**](SWGUsersSubscriptionsApi.md#reactivateusingpost) | **POST** /users/{user_id}/subscriptions/{inventory_id}/reactivate | Reactivate a subscription and charge fee
[**setBillDateUsingPUT**](SWGUsersSubscriptionsApi.md#setbilldateusingput) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/bill-date | Set a new date to bill a subscription on
[**setPaymentMethodUsingPUT**](SWGUsersSubscriptionsApi.md#setpaymentmethodusingput) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/payment-method | Set the payment method to use for a subscription
[**setStatusUsingPUT**](SWGUsersSubscriptionsApi.md#setstatususingput) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/status | Set the status of a subscription
[**setUserPlanUsingPUT**](SWGUsersSubscriptionsApi.md#setuserplanusingput) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/plan | Set a new subscription plan for a user


# **getSubscriptionDetailsUsingGET**
```objc
-(NSNumber*) getSubscriptionDetailsUsingGETWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
        completionHandler: (void (^)(SWGInventorySubscriptionResource* output, NSError* error)) handler;
```

Get details about a user's subscription

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Get details about a user's subscription
[apiInstance getSubscriptionDetailsUsingGETWithUserId:userId
              inventoryId:inventoryId
          completionHandler: ^(SWGInventorySubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->getSubscriptionDetailsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 

### Return type

[**SWGInventorySubscriptionResource***](SWGInventorySubscriptionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSubscriptionDetailsUsingGET1**
```objc
-(NSNumber*) getSubscriptionDetailsUsingGET1WithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<SWGInventorySubscriptionResource>* output, NSError* error)) handler;
```

Get details about a user's subscriptions

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Get details about a user's subscriptions
[apiInstance getSubscriptionDetailsUsingGET1WithUserId:userId
          completionHandler: ^(NSArray<SWGInventorySubscriptionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->getSubscriptionDetailsUsingGET1: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 

### Return type

[**NSArray<SWGInventorySubscriptionResource>***](SWGInventorySubscriptionResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reactivateUsingPOST**
```objc
-(NSNumber*) reactivateUsingPOSTWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    reactivateSubscriptionRequest: (SWGReactivateSubscriptionRequest*) reactivateSubscriptionRequest
        completionHandler: (void (^)(SWGInvoiceResource* output, NSError* error)) handler;
```

Reactivate a subscription and charge fee

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
SWGReactivateSubscriptionRequest* reactivateSubscriptionRequest = [[SWGReactivateSubscriptionRequest alloc] init]; // The reactivate subscription request object inventory (optional)

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Reactivate a subscription and charge fee
[apiInstance reactivateUsingPOSTWithUserId:userId
              inventoryId:inventoryId
              reactivateSubscriptionRequest:reactivateSubscriptionRequest
          completionHandler: ^(SWGInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->reactivateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **reactivateSubscriptionRequest** | [**SWGReactivateSubscriptionRequest***](SWGReactivateSubscriptionRequest*.md)| The reactivate subscription request object inventory | [optional] 

### Return type

[**SWGInvoiceResource***](SWGInvoiceResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setBillDateUsingPUT**
```objc
-(NSNumber*) setBillDateUsingPUTWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    billDate: (NSNumber*) billDate
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a new date to bill a subscription on

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
NSNumber* billDate = 789; // The new bill date. Unix timestamp in seconds

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Set a new date to bill a subscription on
[apiInstance setBillDateUsingPUTWithUserId:userId
              inventoryId:inventoryId
              billDate:billDate
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->setBillDateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **billDate** | **NSNumber***| The new bill date. Unix timestamp in seconds | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPaymentMethodUsingPUT**
```objc
-(NSNumber*) setPaymentMethodUsingPUTWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    paymentMethodId: (NSNumber*) paymentMethodId
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the payment method to use for a subscription

May send null to use floating default

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
NSNumber* paymentMethodId = 56; // The id of the payment method (optional)

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Set the payment method to use for a subscription
[apiInstance setPaymentMethodUsingPUTWithUserId:userId
              inventoryId:inventoryId
              paymentMethodId:paymentMethodId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->setPaymentMethodUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **paymentMethodId** | **NSNumber***| The id of the payment method | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setStatusUsingPUT**
```objc
-(NSNumber*) setStatusUsingPUTWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    status: (NSString*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the status of a subscription

The body is a json string (put in quotes) that should match a desired invoice status type. Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
NSString* status = status_example; // The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: ('current', 'canceled', 'stopped', 'payment_failed', 'suspended')

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Set the status of a subscription
[apiInstance setStatusUsingPUTWithUserId:userId
              inventoryId:inventoryId
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->setStatusUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **status** | **NSString***| The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: (&#39;current&#39;, &#39;canceled&#39;, &#39;stopped&#39;, &#39;payment_failed&#39;, &#39;suspended&#39;) | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserPlanUsingPUT**
```objc
-(NSNumber*) setUserPlanUsingPUTWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    planId: (NSString*) planId
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a new subscription plan for a user

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
NSString* planId = planId_example; // The id of the new plan. Must be from the same subscription (optional)

SWGUsersSubscriptionsApi*apiInstance = [[SWGUsersSubscriptionsApi alloc] init];

// Set a new subscription plan for a user
[apiInstance setUserPlanUsingPUTWithUserId:userId
              inventoryId:inventoryId
              planId:planId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGUsersSubscriptionsApi->setUserPlanUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **planId** | **NSString***| The id of the new plan. Must be from the same subscription | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

