# JSAPIPaymentsTransactionsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTransaction**](JSAPIPaymentsTransactionsApi.md#gettransaction) | **GET** /transactions/{id} | Get the details for a single transaction
[**getTransactions**](JSAPIPaymentsTransactionsApi.md#gettransactions) | **GET** /transactions | List and search transactions
[**refundTransaction**](JSAPIPaymentsTransactionsApi.md#refundtransaction) | **POST** /transactions/{id}/refunds | Refund a payment transaction, in full or in part


# **getTransaction**
```objc
-(NSURLSessionTask*) getTransactionWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPITransactionResource* output, NSError* error)) handler;
```

Get the details for a single transaction

<b>Permissions Needed:</b> TRANSACTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

JSAPIPaymentsTransactionsApi*apiInstance = [[JSAPIPaymentsTransactionsApi alloc] init];

// Get the details for a single transaction
[apiInstance getTransactionWithId:_id
          completionHandler: ^(JSAPITransactionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsTransactionsApi->getTransaction: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| id | 

### Return type

[**JSAPITransactionResource***](JSAPITransactionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTransactions**
```objc
-(NSURLSessionTask*) getTransactionsWithFilterInvoice: (NSNumber*) filterInvoice
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTransactionResource_* output, NSError* error)) handler;
```

List and search transactions

<b>Permissions Needed:</b> TRANSACTIONS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterInvoice = @56; // Filter for transactions from a specific invoice (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIPaymentsTransactionsApi*apiInstance = [[JSAPIPaymentsTransactionsApi alloc] init];

// List and search transactions
[apiInstance getTransactionsWithFilterInvoice:filterInvoice
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsTransactionsApi->getTransactions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterInvoice** | **NSNumber***| Filter for transactions from a specific invoice | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceTransactionResource_***](JSAPIPageResourceTransactionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **refundTransaction**
```objc
-(NSURLSessionTask*) refundTransactionWithId: (NSNumber*) _id
    request: (JSAPIRefundRequest*) request
        completionHandler: (void (^)(JSAPIRefundResource* output, NSError* error)) handler;
```

Refund a payment transaction, in full or in part

Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds. <br><br><b>Permissions Needed:</b> PAYMENTS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the transaction to refund
JSAPIRefundRequest* request = [[JSAPIRefundRequest alloc] init]; // Request containing refund details (optional)

JSAPIPaymentsTransactionsApi*apiInstance = [[JSAPIPaymentsTransactionsApi alloc] init];

// Refund a payment transaction, in full or in part
[apiInstance refundTransactionWithId:_id
              request:request
          completionHandler: ^(JSAPIRefundResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsTransactionsApi->refundTransaction: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the transaction to refund | 
 **request** | [**JSAPIRefundRequest***](JSAPIRefundRequest.md)| Request containing refund details | [optional] 

### Return type

[**JSAPIRefundResource***](JSAPIRefundResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

