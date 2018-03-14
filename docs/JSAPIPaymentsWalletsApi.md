# JSAPIPaymentsWalletsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getUserWallet**](JSAPIPaymentsWalletsApi.md#getuserwallet) | **GET** /users/{user_id}/wallets/{currency_code} | Returns the user&#39;s wallet for the given currency code
[**getUserWalletTransactions**](JSAPIPaymentsWalletsApi.md#getuserwallettransactions) | **GET** /users/{user_id}/wallets/{currency_code}/transactions | Retrieve a user&#39;s wallet transactions
[**getUserWallets**](JSAPIPaymentsWalletsApi.md#getuserwallets) | **GET** /users/{user_id}/wallets | List all of a user&#39;s wallets
[**getWalletBalances**](JSAPIPaymentsWalletsApi.md#getwalletbalances) | **GET** /wallets/totals | Retrieves a summation of wallet balances by currency code
[**getWalletTransactions**](JSAPIPaymentsWalletsApi.md#getwallettransactions) | **GET** /wallets/transactions | Retrieve wallet transactions across the system
[**getWallets**](JSAPIPaymentsWalletsApi.md#getwallets) | **GET** /wallets | Retrieve a list of wallets across the system
[**updateWalletBalance**](JSAPIPaymentsWalletsApi.md#updatewalletbalance) | **PUT** /users/{user_id}/wallets/{currency_code}/balance | Updates the balance for a user&#39;s wallet


# **getUserWallet**
```objc
-(NSURLSessionTask*) getUserWalletWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
        completionHandler: (void (^)(JSAPISimpleWallet* output, NSError* error)) handler;
```

Returns the user's wallet for the given currency code

<b>Permissions Needed:</b> WALLETS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallet is being retrieved
NSString* currencyCode = @"currencyCode_example"; // Currency code of the user's wallet

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Returns the user's wallet for the given currency code
[apiInstance getUserWalletWithUserId:userId
              currencyCode:currencyCode
          completionHandler: ^(JSAPISimpleWallet* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getUserWallet: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallet is being retrieved | 
 **currencyCode** | **NSString***| Currency code of the user&#39;s wallet | 

### Return type

[**JSAPISimpleWallet***](JSAPISimpleWallet.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserWalletTransactions**
```objc
-(NSURLSessionTask*) getUserWalletTransactionsWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    filterType: (NSString*) filterType
    filterMaxDate: (NSNumber*) filterMaxDate
    filterMinDate: (NSNumber*) filterMinDate
    filterSign: (NSString*) filterSign
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceWalletTransactionResource_* output, NSError* error)) handler;
```

Retrieve a user's wallet transactions

<b>Permissions Needed:</b> WALLETS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
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

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Retrieve a user's wallet transactions
[apiInstance getUserWalletTransactionsWithUserId:userId
              currencyCode:currencyCode
              filterType:filterType
              filterMaxDate:filterMaxDate
              filterMinDate:filterMinDate
              filterSign:filterSign
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceWalletTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getUserWalletTransactions: %@", error);
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

[**JSAPIPageResourceWalletTransactionResource_***](JSAPIPageResourceWalletTransactionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getUserWallets**
```objc
-(NSURLSessionTask*) getUserWalletsWithUserId: (NSNumber*) userId
        completionHandler: (void (^)(NSArray<JSAPISimpleWallet>* output, NSError* error)) handler;
```

List all of a user's wallets

<b>Permissions Needed:</b> WALLETS_ADMIN or owner

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallets are being retrieved

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// List all of a user's wallets
[apiInstance getUserWalletsWithUserId:userId
          completionHandler: ^(NSArray<JSAPISimpleWallet>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getUserWallets: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallets are being retrieved | 

### Return type

[**NSArray<JSAPISimpleWallet>***](JSAPISimpleWallet.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWalletBalances**
```objc
-(NSURLSessionTask*) getWalletBalancesWithCompletionHandler: 
        (void (^)(JSAPIPageResourceWalletTotalResponse_* output, NSError* error)) handler;
```

Retrieves a summation of wallet balances by currency code

<b>Permissions Needed:</b> WALLETS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];



JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Retrieves a summation of wallet balances by currency code
[apiInstance getWalletBalancesWithCompletionHandler: 
          ^(JSAPIPageResourceWalletTotalResponse_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getWalletBalances: %@", error);
                        }
                    }];
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**JSAPIPageResourceWalletTotalResponse_***](JSAPIPageResourceWalletTotalResponse_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWalletTransactions**
```objc
-(NSURLSessionTask*) getWalletTransactionsWithFilterInvoice: (NSNumber*) filterInvoice
    filterType: (NSString*) filterType
    filterDate: (NSString*) filterDate
    filterSign: (NSString*) filterSign
    filterUserId: (NSNumber*) filterUserId
    filterUsername: (NSString*) filterUsername
    filterDetails: (NSString*) filterDetails
    filterCurrencyCode: (NSString*) filterCurrencyCode
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceWalletTransactionResource_* output, NSError* error)) handler;
```

Retrieve wallet transactions across the system

<b>Permissions Needed:</b> WALLETS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterInvoice = @56; // Filter for transactions from a specific invoice (optional)
NSString* filterType = @"filterType_example"; // Filter for transactions with specified type (optional)
NSString* filterDate = @"filterDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterSign = @"filterSign_example"; // Filter for transactions with amount with the given sign (optional)
NSNumber* filterUserId = @56; // Filter for transactions for specific userId (optional)
NSString* filterUsername = @"filterUsername_example"; // Filter for transactions for specific username that start with the given string (optional)
NSString* filterDetails = @"filterDetails_example"; // Filter for transactions for specific details that start with the given string (optional)
NSString* filterCurrencyCode = @"filterCurrencyCode_example"; // Filter for transactions for specific currency code (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Retrieve wallet transactions across the system
[apiInstance getWalletTransactionsWithFilterInvoice:filterInvoice
              filterType:filterType
              filterDate:filterDate
              filterSign:filterSign
              filterUserId:filterUserId
              filterUsername:filterUsername
              filterDetails:filterDetails
              filterCurrencyCode:filterCurrencyCode
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceWalletTransactionResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getWalletTransactions: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterInvoice** | **NSNumber***| Filter for transactions from a specific invoice | [optional] 
 **filterType** | **NSString***| Filter for transactions with specified type | [optional] 
 **filterDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterSign** | **NSString***| Filter for transactions with amount with the given sign | [optional] 
 **filterUserId** | **NSNumber***| Filter for transactions for specific userId | [optional] 
 **filterUsername** | **NSString***| Filter for transactions for specific username that start with the given string | [optional] 
 **filterDetails** | **NSString***| Filter for transactions for specific details that start with the given string | [optional] 
 **filterCurrencyCode** | **NSString***| Filter for transactions for specific currency code | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceWalletTransactionResource_***](JSAPIPageResourceWalletTransactionResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getWallets**
```objc
-(NSURLSessionTask*) getWalletsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceSimpleWallet_* output, NSError* error)) handler;
```

Retrieve a list of wallets across the system

<b>Permissions Needed:</b> WALLETS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Retrieve a list of wallets across the system
[apiInstance getWalletsWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceSimpleWallet_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->getWallets: %@", error);
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

[**JSAPIPageResourceSimpleWallet_***](JSAPIPageResourceSimpleWallet_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateWalletBalance**
```objc
-(NSURLSessionTask*) updateWalletBalanceWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    request: (JSAPIWalletAlterRequest*) request
        completionHandler: (void (^)(JSAPIWalletTransactionResource* output, NSError* error)) handler;
```

Updates the balance for a user's wallet

<b>Permissions Needed:</b> WALLETS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* userId = @56; // The ID of the user for whom wallet is being modified
NSString* currencyCode = @"currencyCode_example"; // Currency code of the user's wallet
JSAPIWalletAlterRequest* request = [[JSAPIWalletAlterRequest alloc] init]; // The requested balance modification to be made to the user's wallet (optional)

JSAPIPaymentsWalletsApi*apiInstance = [[JSAPIPaymentsWalletsApi alloc] init];

// Updates the balance for a user's wallet
[apiInstance updateWalletBalanceWithUserId:userId
              currencyCode:currencyCode
              request:request
          completionHandler: ^(JSAPIWalletTransactionResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIPaymentsWalletsApi->updateWalletBalance: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **userId** | **NSNumber***| The ID of the user for whom wallet is being modified | 
 **currencyCode** | **NSString***| Currency code of the user&#39;s wallet | 
 **request** | [**JSAPIWalletAlterRequest***](JSAPIWalletAlterRequest.md)| The requested balance modification to be made to the user&#39;s wallet | [optional] 

### Return type

[**JSAPIWalletTransactionResource***](JSAPIWalletTransactionResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

