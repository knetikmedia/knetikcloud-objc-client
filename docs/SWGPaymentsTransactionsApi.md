# SWGPaymentsTransactionsApi

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTransaction**](SWGPaymentsTransactionsApi.md#gettransaction) | **GET** /transactions/{id} | Get the details for a single transaction
[**getTransactions**](SWGPaymentsTransactionsApi.md#gettransactions) | **GET** /transactions | List and search transactions
[**refundTransaction**](SWGPaymentsTransactionsApi.md#refundtransaction) | **POST** /transactions/{id}/refunds | Refund a payment transaction, in full or in part


# **getTransaction**
```objc
-(NSURLSessionTask*) getTransactionWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGTransactionResource* output, NSError* error)) handler;
```

Get the details for a single transaction

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // id

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// Get the details for a single transaction
[apiInstance getTransactionWithId:_id
          completionHandler: ^(SWGTransactionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->getTransaction: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| id | 

### Return type

[**SWGTransactionResource***](SWGTransactionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTransactions**
```objc
-(NSURLSessionTask*) getTransactionsWithFilterInvoice: (NSNumber*) filterInvoice
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTransactionResource_* output, NSError* error)) handler;
```

List and search transactions

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterInvoice = @56; // Filter for transactions from a specific invoice (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// List and search transactions
[apiInstance getTransactionsWithFilterInvoice:filterInvoice
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->getTransactions: %@", error);
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

[**SWGPageResourceTransactionResource_***](SWGPageResourceTransactionResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **refundTransaction**
```objc
-(NSURLSessionTask*) refundTransactionWithId: (NSNumber*) _id
    request: (SWGRefundRequest*) request
        completionHandler: (void (^)(SWGRefundResource* output, NSError* error)) handler;
```

Refund a payment transaction, in full or in part

Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the transaction to refund
SWGRefundRequest* request = [[SWGRefundRequest alloc] init]; // Request containing refund details (optional)

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// Refund a payment transaction, in full or in part
[apiInstance refundTransactionWithId:_id
              request:request
          completionHandler: ^(SWGRefundResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->refundTransaction: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the transaction to refund | 
 **request** | [**SWGRefundRequest***](SWGRefundRequest*.md)| Request containing refund details | [optional] 

### Return type

[**SWGRefundResource***](SWGRefundResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

