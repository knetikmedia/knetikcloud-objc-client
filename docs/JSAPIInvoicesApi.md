# JSAPIInvoicesApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createInvoice**](JSAPIInvoicesApi.md#createinvoice) | **POST** /invoices | Create an invoice
[**getFulFillmentStatuses**](JSAPIInvoicesApi.md#getfulfillmentstatuses) | **GET** /invoices/fulfillment-statuses | Lists available fulfillment statuses
[**getInvoice**](JSAPIInvoicesApi.md#getinvoice) | **GET** /invoices/{id} | Retrieve an invoice
[**getInvoiceLogs**](JSAPIInvoicesApi.md#getinvoicelogs) | **GET** /invoices/{id}/logs | List invoice logs
[**getInvoices**](JSAPIInvoicesApi.md#getinvoices) | **GET** /invoices | Retrieve invoices
[**getPaymentStatuses**](JSAPIInvoicesApi.md#getpaymentstatuses) | **GET** /invoices/payment-statuses | Lists available payment statuses
[**payInvoice**](JSAPIInvoicesApi.md#payinvoice) | **POST** /invoices/{id}/payments | Pay an invoice using a saved payment method
[**setBundledInvoiceItemFulfillmentStatus**](JSAPIInvoicesApi.md#setbundledinvoiceitemfulfillmentstatus) | **PUT** /invoices/{id}/items/{bundleSku}/bundled-skus/{sku}/fulfillment-status | Set the fulfillment status of a bundled invoice item
[**setExternalRef**](JSAPIInvoicesApi.md#setexternalref) | **PUT** /invoices/{id}/external-ref | Set the external reference of an invoice
[**setInvoiceItemFulfillmentStatus**](JSAPIInvoicesApi.md#setinvoiceitemfulfillmentstatus) | **PUT** /invoices/{id}/items/{sku}/fulfillment-status | Set the fulfillment status of an invoice item
[**setOrderNotes**](JSAPIInvoicesApi.md#setordernotes) | **PUT** /invoices/{id}/order-notes | Set the order notes of an invoice
[**setPaymentStatus**](JSAPIInvoicesApi.md#setpaymentstatus) | **PUT** /invoices/{id}/payment-status | Set the payment status of an invoice
[**updateBillingInfo**](JSAPIInvoicesApi.md#updatebillinginfo) | **PUT** /invoices/{id}/billing-address | Set or update billing info


# **createInvoice**
```objc
-(NSURLSessionTask*) createInvoiceWithReq: (JSAPIInvoiceCreateRequest*) req
        completionHandler: (void (^)(NSArray<JSAPIInvoiceResource>* output, NSError* error)) handler;
```

Create an invoice

Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor. <br><br><b>Permissions Needed:</b> INVOICES_USER or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIInvoiceCreateRequest* req = [[JSAPIInvoiceCreateRequest alloc] init]; // Invoice to be created (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Create an invoice
[apiInstance createInvoiceWithReq:req
          completionHandler: ^(NSArray<JSAPIInvoiceResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->createInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **req** | [**JSAPIInvoiceCreateRequest***](JSAPIInvoiceCreateRequest.md)| Invoice to be created | [optional] 

### Return type

[**NSArray<JSAPIInvoiceResource>***](JSAPIInvoiceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getFulFillmentStatuses**
```objc
-(NSURLSessionTask*) getFulFillmentStatusesWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Lists available fulfillment statuses

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Lists available fulfillment statuses
[apiInstance getFulFillmentStatusesWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->getFulFillmentStatuses: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoice**
```objc
-(NSURLSessionTask*) getInvoiceWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPIInvoiceResource* output, NSError* error)) handler;
```

Retrieve an invoice

<b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Retrieve an invoice
[apiInstance getInvoiceWithId:_id
          completionHandler: ^(JSAPIInvoiceResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->getInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 

### Return type

[**JSAPIInvoiceResource***](JSAPIInvoiceResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoiceLogs**
```objc
-(NSURLSessionTask*) getInvoiceLogsWithId: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
        completionHandler: (void (^)(JSAPIPageResourceInvoiceLogEntry_* output, NSError* error)) handler;
```

List invoice logs

<b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// List invoice logs
[apiInstance getInvoiceLogsWithId:_id
              size:size
              page:page
          completionHandler: ^(JSAPIPageResourceInvoiceLogEntry_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->getInvoiceLogs: %@", error);
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

[**JSAPIPageResourceInvoiceLogEntry_***](JSAPIPageResourceInvoiceLogEntry_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getInvoices**
```objc
-(NSURLSessionTask*) getInvoicesWithFilterUser: (NSNumber*) filterUser
    filterEmail: (NSString*) filterEmail
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterItemName: (NSString*) filterItemName
    filterExternalRef: (NSString*) filterExternalRef
    filterCreatedDate: (NSString*) filterCreatedDate
    filterVendorIds: (NSString*) filterVendorIds
    filterCurrency: (NSString*) filterCurrency
    filterShippingStateName: (NSString*) filterShippingStateName
    filterShippingCountryName: (NSString*) filterShippingCountryName
    filterShipping: (NSString*) filterShipping
    filterVendorName: (NSString*) filterVendorName
    filterSku: (NSString*) filterSku
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceInvoiceResource_* output, NSError* error)) handler;
```

Retrieve invoices

Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user's invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices. <br><br><b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterUser = @56; // The id of a user to get invoices for. Automtically added if not being called with admin permissions. (optional)
NSString* filterEmail = @"filterEmail_example"; // Filters invoices by customer's email. Admins only. (optional)
NSString* filterFulfillmentStatus = @"filterFulfillmentStatus_example"; // Filters invoices by fulfillment status type. Can be a comma separated list of statuses (optional)
NSString* filterPaymentStatus = @"filterPaymentStatus_example"; // Filters invoices by payment status type. Can be a comma separated list of statuses (optional)
NSString* filterItemName = @"filterItemName_example"; // Filters invoices by item name containing the given string (optional)
NSString* filterExternalRef = @"filterExternalRef_example"; // Filters invoices by external reference. (optional)
NSString* filterCreatedDate = @"filterCreatedDate_example"; // Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date=GT,1452154258,LT,1554254874 (optional)
NSString* filterVendorIds = @"filterVendorIds_example"; // Filters invoices for ones from one of the vendors whose id is in the given comma separated list (optional)
NSString* filterCurrency = @"filterCurrency_example"; // Filters invoices by currency. ISO3 currency code (optional)
NSString* filterShippingStateName = @"filterShippingStateName_example"; // Filters invoices by shipping address: Exact match state name (optional)
NSString* filterShippingCountryName = @"filterShippingCountryName_example"; // Filters invoices by shipping address: Exact match country name (optional)
NSString* filterShipping = @"filterShipping_example"; // Filters invoices by shipping price. Multiple values possible for range search. Format: filter_shipping=OP,ts&... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_shipping=GT,14.58,LT,15.54 (optional)
NSString* filterVendorName = @"filterVendorName_example"; // Filters invoices by vendor name starting with given string (optional)
NSString* filterSku = @"filterSku_example"; // Filters invoices by item sku (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"order_example"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Retrieve invoices
[apiInstance getInvoicesWithFilterUser:filterUser
              filterEmail:filterEmail
              filterFulfillmentStatus:filterFulfillmentStatus
              filterPaymentStatus:filterPaymentStatus
              filterItemName:filterItemName
              filterExternalRef:filterExternalRef
              filterCreatedDate:filterCreatedDate
              filterVendorIds:filterVendorIds
              filterCurrency:filterCurrency
              filterShippingStateName:filterShippingStateName
              filterShippingCountryName:filterShippingCountryName
              filterShipping:filterShipping
              filterVendorName:filterVendorName
              filterSku:filterSku
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceInvoiceResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->getInvoices: %@", error);
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
 **filterExternalRef** | **NSString***| Filters invoices by external reference. | [optional] 
 **filterCreatedDate** | **NSString***| Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date&#x3D;GT,1452154258,LT,1554254874 | [optional] 
 **filterVendorIds** | **NSString***| Filters invoices for ones from one of the vendors whose id is in the given comma separated list | [optional] 
 **filterCurrency** | **NSString***| Filters invoices by currency. ISO3 currency code | [optional] 
 **filterShippingStateName** | **NSString***| Filters invoices by shipping address: Exact match state name | [optional] 
 **filterShippingCountryName** | **NSString***| Filters invoices by shipping address: Exact match country name | [optional] 
 **filterShipping** | **NSString***| Filters invoices by shipping price. Multiple values possible for range search. Format: filter_shipping&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_shipping&#x3D;GT,14.58,LT,15.54 | [optional] 
 **filterVendorName** | **NSString***| Filters invoices by vendor name starting with given string | [optional] 
 **filterSku** | **NSString***| Filters invoices by item sku | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] 

### Return type

[**JSAPIPageResourceInvoiceResource_***](JSAPIPageResourceInvoiceResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPaymentStatuses**
```objc
-(NSURLSessionTask*) getPaymentStatusesWithCompletionHandler: 
        (void (^)(NSArray<NSString*>* output, NSError* error)) handler;
```

Lists available payment statuses

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Lists available payment statuses
[apiInstance getPaymentStatusesWithCompletionHandler: 
          ^(NSArray<NSString*>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->getPaymentStatuses: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

**NSArray<NSString*>***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **payInvoice**
```objc
-(NSURLSessionTask*) payInvoiceWithId: (NSNumber*) _id
    request: (JSAPIPayBySavedMethodRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Pay an invoice using a saved payment method

<b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
JSAPIPayBySavedMethodRequest* request = [[JSAPIPayBySavedMethodRequest alloc] init]; // The payment method details. Will default to the appropriate user's wallet in the invoice currency if ommited. (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Pay an invoice using a saved payment method
[apiInstance payInvoiceWithId:_id
              request:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->payInvoice: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **request** | [**JSAPIPayBySavedMethodRequest***](JSAPIPayBySavedMethodRequest.md)| The payment method details. Will default to the appropriate user&#39;s wallet in the invoice currency if ommited. | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setBundledInvoiceItemFulfillmentStatus**
```objc
-(NSURLSessionTask*) setBundledInvoiceItemFulfillmentStatusWithId: (NSNumber*) _id
    bundleSku: (NSString*) bundleSku
    sku: (NSString*) sku
    status: (JSAPIStringWrapper*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the fulfillment status of a bundled invoice item

This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSString* bundleSku = @"bundleSku_example"; // The sku of the bundle in the invoice that contains the given target
NSString* sku = @"sku_example"; // The sku of an item in the bundle in the invoice
JSAPIStringWrapper* status = [[JSAPIStringWrapper alloc] init]; // The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed'

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set the fulfillment status of a bundled invoice item
[apiInstance setBundledInvoiceItemFulfillmentStatusWithId:_id
              bundleSku:bundleSku
              sku:sku
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->setBundledInvoiceItemFulfillmentStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **bundleSku** | **NSString***| The sku of the bundle in the invoice that contains the given target | 
 **sku** | **NSString***| The sku of an item in the bundle in the invoice | 
 **status** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39; | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setExternalRef**
```objc
-(NSURLSessionTask*) setExternalRefWithId: (NSNumber*) _id
    externalRef: (JSAPIStringWrapper*) externalRef
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the external reference of an invoice

<b>Permissions Needed:</b> INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
JSAPIStringWrapper* externalRef = [[JSAPIStringWrapper alloc] init]; // External reference info (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set the external reference of an invoice
[apiInstance setExternalRefWithId:_id
              externalRef:externalRef
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->setExternalRef: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **externalRef** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| External reference info | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setInvoiceItemFulfillmentStatus**
```objc
-(NSURLSessionTask*) setInvoiceItemFulfillmentStatusWithId: (NSNumber*) _id
    sku: (NSString*) sku
    status: (JSAPIStringWrapper*) status
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the fulfillment status of an invoice item

This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
NSString* sku = @"sku_example"; // The sku of an item in the invoice
JSAPIStringWrapper* status = [[JSAPIStringWrapper alloc] init]; // The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  'unfulfilled', 'fulfilled', 'not fulfillable', 'failed', 'processing', 'failed_permanent', 'delayed'

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set the fulfillment status of an invoice item
[apiInstance setInvoiceItemFulfillmentStatusWithId:_id
              sku:sku
              status:status
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->setInvoiceItemFulfillmentStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **sku** | **NSString***| The sku of an item in the invoice | 
 **status** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39; | 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setOrderNotes**
```objc
-(NSURLSessionTask*) setOrderNotesWithId: (NSNumber*) _id
    orderNotes: (JSAPIStringWrapper*) orderNotes
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the order notes of an invoice

<b>Permissions Needed:</b> INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
JSAPIStringWrapper* orderNotes = [[JSAPIStringWrapper alloc] init]; // Payment status info (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set the order notes of an invoice
[apiInstance setOrderNotesWithId:_id
              orderNotes:orderNotes
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->setOrderNotes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **orderNotes** | [**JSAPIStringWrapper***](JSAPIStringWrapper.md)| Payment status info | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **setPaymentStatus**
```objc
-(NSURLSessionTask*) setPaymentStatusWithId: (NSNumber*) _id
    request: (JSAPIInvoicePaymentStatusRequest*) request
        completionHandler: (void (^)(NSError* error)) handler;
```

Set the payment status of an invoice

This may trigger fulfillment if setting the status to 'paid'. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which. <br><br><b>Permissions Needed:</b> INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
JSAPIInvoicePaymentStatusRequest* request = [[JSAPIInvoicePaymentStatusRequest alloc] init]; // Payment status info (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set the payment status of an invoice
[apiInstance setPaymentStatusWithId:_id
              request:request
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->setPaymentStatus: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **request** | [**JSAPIInvoicePaymentStatusRequest***](JSAPIInvoicePaymentStatusRequest.md)| Payment status info | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBillingInfo**
```objc
-(NSURLSessionTask*) updateBillingInfoWithId: (NSNumber*) _id
    billingInfoRequest: (JSAPIAddressResource*) billingInfoRequest
        completionHandler: (void (^)(NSError* error)) handler;
```

Set or update billing info

<b>Permissions Needed:</b> INVOICES_USER and owner, or INVOICES_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @56; // The id of the invoice
JSAPIAddressResource* billingInfoRequest = [[JSAPIAddressResource alloc] init]; // Address info (optional)

JSAPIInvoicesApi*apiInstance = [[JSAPIInvoicesApi alloc] init];

// Set or update billing info
[apiInstance updateBillingInfoWithId:_id
              billingInfoRequest:billingInfoRequest
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPIInvoicesApi->updateBillingInfo: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the invoice | 
 **billingInfoRequest** | [**JSAPIAddressResource***](JSAPIAddressResource.md)| Address info | [optional] 

### Return type

void (empty response body)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

