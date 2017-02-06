# SWGInvoicesApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createInvoice**](SWGInvoicesApi.md#createinvoice) | **POST** /invoices | Create an invoice
[**getInvoice**](SWGInvoicesApi.md#getinvoice) | **GET** /invoices/{id} | Retrieve an invoice
[**getInvoiceLogs**](SWGInvoicesApi.md#getinvoicelogs) | **GET** /invoices/{id}/logs | List invoice logs
[**getInvoices**](SWGInvoicesApi.md#getinvoices) | **GET** /invoices | Retrieve invoices
[**listFulFillmentStatuses**](SWGInvoicesApi.md#listfulfillmentstatuses) | **GET** /invoices/fulfillment-statuses | Lists available fulfillment statuses
[**listPaymentStatuses**](SWGInvoicesApi.md#listpaymentstatuses) | **GET** /invoices/payment-statuses | Lists available payment statuses
[**payInvoice**](SWGInvoicesApi.md#payinvoice) | **POST** /invoices/{id}/payments | Trigger payment of an invoice
[**setInvoiceItemFulfillmentStatus**](SWGInvoicesApi.md#setinvoiceitemfulfillmentstatus) | **PUT** /invoices/{id}/items/{sku}/fulfillment-status | Set the fulfillment status of an invoice item
[**setOrderNotes**](SWGInvoicesApi.md#setordernotes) | **PUT** /invoices/{id}/order-notes | Set the order notes of an invoice
[**setPaymentStatusUsingPUT**](SWGInvoicesApi.md#setpaymentstatususingput) | **PUT** /invoices/{id}/payment-status | Set the payment status of an invoice
[**updateBillingInfo**](SWGInvoicesApi.md#updatebillinginfo) | **PUT** /invoices/{id}/billing-address | Set or update billing info


# **createInvoice**
```objc
-(NSURLSessionTask*) createInvoiceWithReq: (SWGInvoiceCreateRequest*) req
        completionHandler: (void (^)(NSArray<SWGInvoiceResource>* output, NSError* error)) handler;
```

Create an invoice

Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGInvoiceCreateRequest* req = [[SWGInvoiceCreateRequest alloc] init]; // Invoice to be created (optional)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Create an invoice
[apiInstance createInvoiceWithReq:req
          completionHandler: ^(NSArray<SWGInvoiceResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->createInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **req** | [**SWGInvoiceCreateRequest***](SWGInvoiceCreateRequest*.md)| Invoice to be created | [optional] 

### Return type

[**NSArray<SWGInvoiceResource>***](SWGInvoiceResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoice**
```objc
-(NSURLSessionTask*) getInvoiceWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGInvoiceResource* output, NSError* error)) handler;
```

Retrieve an invoice

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Retrieve an invoice
[apiInstance getInvoiceWithId:_id
          completionHandler: ^(SWGInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->getInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 

### Return type

[**SWGInvoiceResource***](SWGInvoiceResource.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoiceLogs**
```objc
-(NSURLSessionTask*) getInvoiceLogsWithId: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(SWGPageResourceInvoiceLogEntry_* output, NSError* error)) handler;
```

List invoice logs

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// List invoice logs
[apiInstance getInvoiceLogsWithId:_id
              size:size
              page:page
          completionHandler: ^(SWGPageResourceInvoiceLogEntry_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->getInvoiceLogs: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]

### Return type

[**SWGPageResourceInvoiceLogEntry_***](SWGPageResourceInvoiceLogEntry_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoices**
```objc
-(NSURLSessionTask*) getInvoicesWithFilterUser: (NSNumber*) filterUser
    filterEmail: (NSString*) filterEmail
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterItemName: (NSString*) filterItemName
    filterCreatedDate: (NSString*) filterCreatedDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceInvoiceResource_* output, NSError* error)) handler;
```

Retrieve invoices

Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user's invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterUser = @56; // The id of a user to get invoices for. Automtically added if not being called with admin permissions. (optional)
NSString* filterEmail = @"filterEmail_example"; // Filters invoices by customer's email. Admins only. (optional)
NSString* filterFulfillmentStatus = @"filterFulfillmentStatus_example"; // Filters invoices by fulfillment status type. Can be a comma separated list of statuses (optional)
NSString* filterPaymentStatus = @"filterPaymentStatus_example"; // Filters invoices by payment status type. Can be a comma separated list of statuses (optional)
NSString* filterItemName = @"filterItemName_example"; // Filters invoices by item name containing the given string (optional)
NSString* filterCreatedDate = @"filterCreatedDate_example"; // Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date=GT,1452154258,LT,1554254874 (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Retrieve invoices
[apiInstance getInvoicesWithFilterUser:filterUser
              filterEmail:filterEmail
              filterFulfillmentStatus:filterFulfillmentStatus
              filterPaymentStatus:filterPaymentStatus
              filterItemName:filterItemName
              filterCreatedDate:filterCreatedDate
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceInvoiceResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->getInvoices: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterUser** | **NSNumber***| The id of a user to get invoices for. Automtically added if not being called with admin permissions. | [optional] 
 **filterEmail** | **NSString***| Filters invoices by customer&#39;s email. Admins only. | [optional] 
 **filterFulfillmentStatus** | **NSString***| Filters invoices by fulfillment status type. Can be a comma separated list of statuses | [optional] 
 **filterPaymentStatus** | **NSString***| Filters invoices by payment status type. Can be a comma separated list of statuses | [optional] 
 **filterItemName** | **NSString***| Filters invoices by item name containing the given string | [optional] 
 **filterCreatedDate** | **NSString***| Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date&#x3D;GT,1452154258,LT,1554254874 | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageResourceInvoiceResource_***](SWGPageResourceInvoiceResource_.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listFulFillmentStatuses**
```objc
-(NSURLSessionTask*) listFulFillmentStatusesWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Lists available fulfillment statuses

### Example 
```objc


SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Lists available fulfillment statuses
[apiInstance listFulFillmentStatusesWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->listFulFillmentStatuses: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSArray<NSString*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **listPaymentStatuses**
```objc
-(NSURLSessionTask*) listPaymentStatusesWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Lists available payment statuses

### Example 
```objc


SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Lists available payment statuses
[apiInstance listPaymentStatusesWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->listPaymentStatuses: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSArray<NSString*>***

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **payInvoice**
```objc
-(NSURLSessionTask*) payInvoiceWithId: (NSNumber*) _id
    request: (SWGPayBySavedMethodRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Trigger payment of an invoice

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
SWGPayBySavedMethodRequest* request = [[SWGPayBySavedMethodRequest alloc] init]; // Payment info (optional)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Trigger payment of an invoice
[apiInstance payInvoiceWithId:_id
              request:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->payInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **request** | [**SWGPayBySavedMethodRequest***](SWGPayBySavedMethodRequest*.md)| Payment info | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setInvoiceItemFulfillmentStatus**
```objc
-(NSURLSessionTask*) setInvoiceItemFulfillmentStatusWithId: (NSNumber*) _id
    sku: (NSString*) sku
    status: (NSString*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the fulfillment status of an invoice item

This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSString* sku = @"sku_example"; // The sku of an item in the invoice
NSString* status = status_example; // The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed'

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Set the fulfillment status of an invoice item
[apiInstance setInvoiceItemFulfillmentStatusWithId:_id
              sku:sku
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->setInvoiceItemFulfillmentStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **sku** | **NSString***| The sku of an item in the invoice | 
 **status** | **NSString***| The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39; | 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setOrderNotes**
```objc
-(NSURLSessionTask*) setOrderNotesWithId: (NSNumber*) _id
    orderNotes: (NSString*) orderNotes
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the order notes of an invoice

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSString* orderNotes = orderNotes_example; // Payment status info (optional)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Set the order notes of an invoice
[apiInstance setOrderNotesWithId:_id
              orderNotes:orderNotes
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->setOrderNotes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **orderNotes** | **NSString***| Payment status info | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPaymentStatusUsingPUT**
```objc
-(NSURLSessionTask*) setPaymentStatusUsingPUTWithId: (NSNumber*) _id
    request: (SWGInvoicePaymentStatusRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the payment status of an invoice

This may trigger fulfillment if setting the status to 'paid'. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which.

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
SWGInvoicePaymentStatusRequest* request = [[SWGInvoicePaymentStatusRequest alloc] init]; // Payment status info (optional)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Set the payment status of an invoice
[apiInstance setPaymentStatusUsingPUTWithId:_id
              request:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->setPaymentStatusUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **request** | [**SWGInvoicePaymentStatusRequest***](SWGInvoicePaymentStatusRequest*.md)| Payment status info | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBillingInfo**
```objc
-(NSURLSessionTask*) updateBillingInfoWithId: (NSNumber*) _id
    billingInfoRequest: (SWGAddressResource*) billingInfoRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Set or update billing info

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
SWGAddressResource* billingInfoRequest = [[SWGAddressResource alloc] init]; // Address info (optional)

SWGInvoicesApi*apiInstance = [[SWGInvoicesApi alloc] init];

// Set or update billing info
[apiInstance updateBillingInfoWithId:_id
              billingInfoRequest:billingInfoRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGInvoicesApi->updateBillingInfo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **billingInfoRequest** | [**SWGAddressResource***](SWGAddressResource*.md)| Address info | [optional] 

### Return type

void (empty response body)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
