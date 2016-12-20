# SWGPaymentsWalletsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getWalletTotalsUsingGET**](SWGPaymentsWalletsApi.md#getwallettotalsusingget) | **GET** /wallets/totals | Retrieves a summation of wallet balances by currency code
[**getWalletUsingGET**](SWGPaymentsWalletsApi.md#getwalletusingget) | **GET** /users/{user_id}/wallets/{currency_code} | Returns the user&#39;s wallet for the given currency code
[**getWalletsUsingGET**](SWGPaymentsWalletsApi.md#getwalletsusingget) | **GET** /users/{user_id}/wallets | List all of a user&#39;s wallets
[**getWalletsUsingGET1**](SWGPaymentsWalletsApi.md#getwalletsusingget1) | **GET** /wallets | Retrieve a list of wallets across the system
[**transactionHistoryUsingGET**](SWGPaymentsWalletsApi.md#transactionhistoryusingget) | **GET** /wallets/transactions | Retrieve wallet transactions across the system
[**updateBalanceUsingPUT**](SWGPaymentsWalletsApi.md#updatebalanceusingput) | **PUT** /users/{user_id}/wallets/{currency_code}/balance | Updates the balance for a user&#39;s wallet
[**userTransactionHistoryUsingGET**](SWGPaymentsWalletsApi.md#usertransactionhistoryusingget) | **GET** /users/{user_id}/wallets/{currency_code}/transactions | Retrieve a user&#39;s wallet transactions


# **getWalletTotalsUsingGET**
```objc
-(NSNumber*) getWalletTotalsUsingGETWithCompletionHandler: 
        (void (^)(SWGPageWalletTotalResponse_* output, NSError* error)) handler;
```

Retrieves a summation of wallet balances by currency code

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Retrieves a summation of wallet balances by currency code
[apiInstance getWalletTotalsUsingGETWithCompletionHandler: 
          ^(SWGPageWalletTotalResponse_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->getWalletTotalsUsingGET: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SWGPageWalletTotalResponse_***](SWGPageWalletTotalResponse_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWalletUsingGET**
```objc
-(NSNumber*) getWalletUsingGETWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
        completionHandler: (void (^)(SWGSimpleWallet* output, NSError* error)) handler;
```

Returns the user's wallet for the given currency code

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallet is being retrieved
NSString* currencyCode = @"currencyCode_example"; // Currency code of the user's wallet

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Returns the user's wallet for the given currency code
[apiInstance getWalletUsingGETWithUserId:userId
              currencyCode:currencyCode
          completionHandler: ^(SWGSimpleWallet* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->getWalletUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallet is being retrieved | 
 **currencyCode** | **NSString***| Currency code of the user&#39;s wallet | 

### Return type

[**SWGSimpleWallet***](SWGSimpleWallet.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWalletsUsingGET**
```objc
-(NSNumber*) getWalletsUsingGETWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<SWGSimpleWallet>* output, NSError* error)) handler;
```

List all of a user's wallets

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallets are being retrieved

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// List all of a user's wallets
[apiInstance getWalletsUsingGETWithUserId:userId
          completionHandler: ^(NSArray<SWGSimpleWallet>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->getWalletsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallets are being retrieved | 

### Return type

[**NSArray<SWGSimpleWallet>***](SWGSimpleWallet.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWalletsUsingGET1**
```objc
-(NSNumber*) getWalletsUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageSimpleWallet_* output, NSError* error)) handler;
```

Retrieve a list of wallets across the system

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Retrieve a list of wallets across the system
[apiInstance getWalletsUsingGET1WithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageSimpleWallet_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->getWalletsUsingGET1: %@", error);
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

[**SWGPageSimpleWallet_***](SWGPageSimpleWallet_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transactionHistoryUsingGET**
```objc
-(NSNumber*) transactionHistoryUsingGETWithFilterInvoice: (NSNumber*) filterInvoice
    filterType: (NSString*) filterType
    filterMaxDate: (NSNumber*) filterMaxDate
    filterMinDate: (NSNumber*) filterMinDate
    filterSign: (NSString*) filterSign
    filterUserId: (NSNumber*) filterUserId
    filterUsername: (NSString*) filterUsername
    filterDetails: (NSString*) filterDetails
    filterCurrencyCode: (NSString*) filterCurrencyCode
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageWalletTransactionResource_* output, NSError* error)) handler;
```

Retrieve wallet transactions across the system

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterInvoice = @56; // Filter for transactions from a specific invoice (optional)
NSString* filterType = @"filterType_example"; // Filter for transactions with specified type (optional)
NSNumber* filterMaxDate = @789; // Filter for transactions from no earlier than the specified date as a unix timestamp in seconds (optional)
NSNumber* filterMinDate = @789; // Filter for transactions from no later than the specified date as a unix timestamp in seconds (optional)
NSString* filterSign = @"filterSign_example"; // Filter for transactions with amount with the given sign (optional)
NSNumber* filterUserId = @56; // Filter for transactions for specific userId (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter for transactions for specific username that start with the given string (optional)
NSString* filterDetails = @"filterDetails_example"; // Filter for transactions for specific details that start with the given string (optional)
NSString* filterCurrencyCode = @"filterCurrencyCode_example"; // Filter for transactions for specific currency code (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Retrieve wallet transactions across the system
[apiInstance transactionHistoryUsingGETWithFilterInvoice:filterInvoice
              filterType:filterType
              filterMaxDate:filterMaxDate
              filterMinDate:filterMinDate
              filterSign:filterSign
              filterUserId:filterUserId
              filterUsername:filterUsername
              filterDetails:filterDetails
              filterCurrencyCode:filterCurrencyCode
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageWalletTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->transactionHistoryUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterInvoice** | **NSNumber***| Filter for transactions from a specific invoice | [optional] 
 **filterType** | **NSString***| Filter for transactions with specified type | [optional] 
 **filterMaxDate** | **NSNumber***| Filter for transactions from no earlier than the specified date as a unix timestamp in seconds | [optional] 
 **filterMinDate** | **NSNumber***| Filter for transactions from no later than the specified date as a unix timestamp in seconds | [optional] 
 **filterSign** | **NSString***| Filter for transactions with amount with the given sign | [optional] 
 **filterUserId** | **NSNumber***| Filter for transactions for specific userId | [optional] 
 **filterUsername** | **NSString***| Filter for transactions for specific username that start with the given string | [optional] 
 **filterDetails** | **NSString***| Filter for transactions for specific details that start with the given string | [optional] 
 **filterCurrencyCode** | **NSString***| Filter for transactions for specific currency code | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageWalletTransactionResource_***](SWGPageWalletTransactionResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateBalanceUsingPUT**
```objc
-(NSNumber*) updateBalanceUsingPUTWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    request: (SWGWalletAlterRequest*) request
        completionHandler: (void (^)(SWGWalletTransactionResource* output, NSError* error)) handler;
```

Updates the balance for a user's wallet

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallet is being modified
NSString* currencyCode = @"currencyCode_example"; // Currency code of the user's wallet
SWGWalletAlterRequest* request = [[SWGWalletAlterRequest alloc] init]; // The requested balance modification to be made to the user's wallet (optional)

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Updates the balance for a user's wallet
[apiInstance updateBalanceUsingPUTWithUserId:userId
              currencyCode:currencyCode
              request:request
          completionHandler: ^(SWGWalletTransactionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->updateBalanceUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallet is being modified | 
 **currencyCode** | **NSString***| Currency code of the user&#39;s wallet | 
 **request** | [**SWGWalletAlterRequest***](SWGWalletAlterRequest*.md)| The requested balance modification to be made to the user&#39;s wallet | [optional] 

### Return type

[**SWGWalletTransactionResource***](SWGWalletTransactionResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **userTransactionHistoryUsingGET**
```objc
-(NSNumber*) userTransactionHistoryUsingGETWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    filterType: (NSString*) filterType
    filterMaxDate: (NSNumber*) filterMaxDate
    filterMinDate: (NSNumber*) filterMinDate
    filterSign: (NSString*) filterSign
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageWalletTransactionResource_* output, NSError* error)) handler;
```

Retrieve a user's wallet transactions

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallet transactions are being retrieved
NSString* currencyCode = @"currencyCode_example"; // Currency code of the user's wallet
NSString* filterType = @"filterType_example"; // Filter for transactions with specified type (optional)
NSNumber* filterMaxDate = @789; // Filter for transactions from no earlier than the specified date as a unix timestamp in seconds (optional)
NSNumber* filterMinDate = @789; // Filter for transactions from no later than the specified date as a unix timestamp in seconds (optional)
NSString* filterSign = @"filterSign_example"; // Filter for transactions with amount with the given sign.  Allowable values: ('positive', 'negative') (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGPaymentsWalletsApi*apiInstance = [[SWGPaymentsWalletsApi alloc] init];

// Retrieve a user's wallet transactions
[apiInstance userTransactionHistoryUsingGETWithUserId:userId
              currencyCode:currencyCode
              filterType:filterType
              filterMaxDate:filterMaxDate
              filterMinDate:filterMinDate
              filterSign:filterSign
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageWalletTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGPaymentsWalletsApi->userTransactionHistoryUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallet transactions are being retrieved | 
 **currencyCode** | **NSString***| Currency code of the user&#39;s wallet | 
 **filterType** | **NSString***| Filter for transactions with specified type | [optional] 
 **filterMaxDate** | **NSNumber***| Filter for transactions from no earlier than the specified date as a unix timestamp in seconds | [optional] 
 **filterMinDate** | **NSNumber***| Filter for transactions from no later than the specified date as a unix timestamp in seconds | [optional] 
 **filterSign** | **NSString***| Filter for transactions with amount with the given sign.  Allowable values: (&#39;positive&#39;, &#39;negative&#39;) | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageWalletTransactionResource_***](SWGPageWalletTransactionResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

