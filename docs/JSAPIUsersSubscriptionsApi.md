# JSAPIUsersSubscriptionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserSubscriptionDetails**](JSAPIUsersSubscriptionsApi.md#getusersubscriptiondetails) | **GET** /users/{user_id}/subscriptions/{inventory_id} | Get details about a user&#39;s subscription
[**getUsersSubscriptionDetails**](JSAPIUsersSubscriptionsApi.md#getuserssubscriptiondetails) | **GET** /users/{user_id}/subscriptions | Get details about a user&#39;s subscriptions
[**reactivateUserSubscription**](JSAPIUsersSubscriptionsApi.md#reactivateusersubscription) | **POST** /users/{user_id}/subscriptions/{inventory_id}/reactivate | Reactivate a subscription and charge fee
[**setSubscriptionBillDate**](JSAPIUsersSubscriptionsApi.md#setsubscriptionbilldate) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/bill-date | Set a new date to bill a subscription on
[**setSubscriptionPaymentMethod**](JSAPIUsersSubscriptionsApi.md#setsubscriptionpaymentmethod) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/payment-method | Set the payment method to use for a subscription
[**setSubscriptionStatus**](JSAPIUsersSubscriptionsApi.md#setsubscriptionstatus) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/status | Set the status of a subscription
[**setUserSubscriptionPlan**](JSAPIUsersSubscriptionsApi.md#setusersubscriptionplan) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/plan | Set a new subscription plan for a user
[**setUserSubscriptionPrice**](JSAPIUsersSubscriptionsApi.md#setusersubscriptionprice) | **PUT** /users/{user_id}/subscriptions/{inventory_id}/price-override | Set a new subscription price for a user


# **getUserSubscriptionDetails**
```objc
-(NSURLSessionTask*) getUserSubscriptionDetailsWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
        completionHandler: (void (^)(JSAPIInventorySubscriptionResource* output, NSError* error)) handler;
```

Get details about a user's subscription

<b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Get details about a user's subscription
[apiInstance getUserSubscriptionDetailsWithUserId:userId
              inventoryId:inventoryId
          completionHandler: ^(JSAPIInventorySubscriptionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->getUserSubscriptionDetails: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 

### Return type

[**JSAPIInventorySubscriptionResource***](JSAPIInventorySubscriptionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUsersSubscriptionDetails**
```objc
-(NSURLSessionTask*) getUsersSubscriptionDetailsWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<JSAPIInventorySubscriptionResource>* output, NSError* error)) handler;
```

Get details about a user's subscriptions

<b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Get details about a user's subscriptions
[apiInstance getUsersSubscriptionDetailsWithUserId:userId
          completionHandler: ^(NSArray<JSAPIInventorySubscriptionResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->getUsersSubscriptionDetails: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 

### Return type

[**NSArray<JSAPIInventorySubscriptionResource>***](JSAPIInventorySubscriptionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reactivateUserSubscription**
```objc
-(NSURLSessionTask*) reactivateUserSubscriptionWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    reactivateSubscriptionRequest: (JSAPIReactivateSubscriptionRequest*) reactivateSubscriptionRequest
        completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;
```

Reactivate a subscription and charge fee

<b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
JSAPIReactivateSubscriptionRequest* reactivateSubscriptionRequest = [[JSAPIReactivateSubscriptionRequest alloc] init]; // The reactivate subscription request object inventory (optional)

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Reactivate a subscription and charge fee
[apiInstance reactivateUserSubscriptionWithUserId:userId
              inventoryId:inventoryId
              reactivateSubscriptionRequest:reactivateSubscriptionRequest
          completionHandler: ^(JSAPIInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->reactivateUserSubscription: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **reactivateSubscriptionRequest** | [**JSAPIReactivateSubscriptionRequest***](JSAPIReactivateSubscriptionRequest.md)| The reactivate subscription request object inventory | [optional] 

### Return type

[**JSAPIInvoiceResource***](JSAPIInvoiceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setSubscriptionBillDate**
```objc
-(NSURLSessionTask*) setSubscriptionBillDateWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    billDate: (NSNumber*) billDate
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a new date to bill a subscription on

<b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
NSNumber* billDate = 789; // The new bill date. Unix timestamp in seconds

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Set a new date to bill a subscription on
[apiInstance setSubscriptionBillDateWithUserId:userId
              inventoryId:inventoryId
              billDate:billDate
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->setSubscriptionBillDate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setSubscriptionPaymentMethod**
```objc
-(NSURLSessionTask*) setSubscriptionPaymentMethodWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    paymentMethodId: (JSAPIIntWrapper*) paymentMethodId
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the payment method to use for a subscription

May send null to use floating default. <br><br><b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
JSAPIIntWrapper* paymentMethodId = [[JSAPIIntWrapper alloc] init]; // The id of the payment method (optional)

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Set the payment method to use for a subscription
[apiInstance setSubscriptionPaymentMethodWithUserId:userId
              inventoryId:inventoryId
              paymentMethodId:paymentMethodId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->setSubscriptionPaymentMethod: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **paymentMethodId** | [**JSAPIIntWrapper***](JSAPIIntWrapper.md)| The id of the payment method | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setSubscriptionStatus**
```objc
-(NSURLSessionTask*) setSubscriptionStatusWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    status: (JSAPISubscriptionStatusWrapper*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the status of a subscription

Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases. <br><br><b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
JSAPISubscriptionStatusWrapper* status = [[JSAPISubscriptionStatusWrapper alloc] init]; // The new status for the subscription

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Set the status of a subscription
[apiInstance setSubscriptionStatusWithUserId:userId
              inventoryId:inventoryId
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->setSubscriptionStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **status** | [**JSAPISubscriptionStatusWrapper***](JSAPISubscriptionStatusWrapper.md)| The new status for the subscription | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserSubscriptionPlan**
```objc
-(NSURLSessionTask*) setUserSubscriptionPlanWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    planId: (JSAPIStringWrapper*) planId
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a new subscription plan for a user

<b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
JSAPIStringWrapper* planId = [[JSAPIStringWrapper alloc] init]; // The id of the new plan. Must be from the same subscription (optional)

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Set a new subscription plan for a user
[apiInstance setUserSubscriptionPlanWithUserId:userId
              inventoryId:inventoryId
              planId:planId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->setUserSubscriptionPlan: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **planId** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The id of the new plan. Must be from the same subscription | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setUserSubscriptionPrice**
```objc
-(NSURLSessionTask*) setUserSubscriptionPriceWithUserId: (NSNumber*) userId
    inventoryId: (NSNumber*) inventoryId
    theOverrideDetails: (JSAPISubscriptionPriceOverrideRequest*) theOverrideDetails
        completionHandler: (void (^)(NSError* error)) handler;
```

Set a new subscription price for a user

This new price will be what the user is charged at the begining of each new period. This override is specific to the current subscription and will not carry over if they end and later re-subscribe. It will persist if the plan is changed using the setUserSubscriptionPlan endpoint. <br><br><b>Permissions Needed:</b> USERS_SUBSCRIPTIONS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The id of the user
NSNumber* inventoryId = @56; // The id of the user's inventory
JSAPISubscriptionPriceOverrideRequest* theOverrideDetails = [[JSAPISubscriptionPriceOverrideRequest alloc] init]; // override (optional)

JSAPIUsersSubscriptionsApi*apiInstance = [[JSAPIUsersSubscriptionsApi alloc] init];

// Set a new subscription price for a user
[apiInstance setUserSubscriptionPriceWithUserId:userId
              inventoryId:inventoryId
              theOverrideDetails:theOverrideDetails
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIUsersSubscriptionsApi->setUserSubscriptionPrice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The id of the user | 
 **inventoryId** | **NSNumber***| The id of the user&#39;s inventory | 
 **theOverrideDetails** | [**JSAPISubscriptionPriceOverrideRequest***](JSAPISubscriptionPriceOverrideRequest.md)| override | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

