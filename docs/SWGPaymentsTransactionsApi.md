# SWGPaymentsTransactionsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTransactionUsingGET**](SWGPaymentsTransactionsApi.md#gettransactionusingget) | **GET** /transactions/{id} | Get the details for a single transaction
[**getTransactionsUsingGET**](SWGPaymentsTransactionsApi.md#gettransactionsusingget) | **GET** /transactions | List and search transactions
[**refundTransactionUsingPOST**](SWGPaymentsTransactionsApi.md#refundtransactionusingpost) | **POST** /transactions/{id}/refunds | Refund a payment transaction, in full or in part


# **getTransactionUsingGET**
```objc
-(NSNumber*) getTransactionUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGTransactionResource* output, NSError* error)) handler;
```

Get the details for a single transaction

### Example 
```objc

NSNumber* _id = @56; // id

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// Get the details for a single transaction
[apiInstance getTransactionUsingGETWithId:_id
          completionHandler: ^(SWGTransactionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->getTransactionUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getTransactionsUsingGET**
```objc
-(NSNumber*) getTransactionsUsingGETWithFilterInvoice: (NSNumber*) filterInvoice
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageTransactionResource_* output, NSError* error)) handler;
```

List and search transactions

### Example 
```objc

NSNumber* filterInvoice = @56; // Filter for transactions from a specific invoice (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// List and search transactions
[apiInstance getTransactionsUsingGETWithFilterInvoice:filterInvoice
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->getTransactionsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterInvoice** | **NSNumber***| Filter for transactions from a specific invoice | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageTransactionResource_***](SWGPageTransactionResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **refundTransactionUsingPOST**
```objc
-(NSNumber*) refundTransactionUsingPOSTWithId: (NSNumber*) _id
    request: (SWGRefundRequest*) request
        completionHandler: (void (^)(SWGRefundResource* output, NSError* error)) handler;
```

Refund a payment transaction, in full or in part

Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds.

### Example 
```objc

NSNumber* _id = @56; // The id of the transaction to refund
SWGRefundRequest* request = [[SWGRefundRequest alloc] init]; // Request containing refund details (optional)

SWGPaymentsTransactionsApi*apiInstance = [[SWGPaymentsTransactionsApi alloc] init];

// Refund a payment transaction, in full or in part
[apiInstance refundTransactionUsingPOSTWithId:_id
              request:request
          completionHandler: ^(SWGRefundResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsTransactionsApi->refundTransactionUsingPOST: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

