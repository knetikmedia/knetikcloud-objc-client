#import <Foundation/Foundation.h>
#import "JSAPIPageResourceSimpleWallet_.h"
#import "JSAPIPageResourceWalletTotalResponse_.h"
#import "JSAPIPageResourceWalletTransactionResource_.h"
#import "JSAPIResult.h"
#import "JSAPISimpleWallet.h"
#import "JSAPIWalletAlterRequest.h"
#import "JSAPIWalletTransactionResource.h"
#import "JSAPIApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface JSAPIPaymentsWalletsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIPaymentsWalletsApiErrorDomain;
extern NSInteger kJSAPIPaymentsWalletsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Returns the user's wallet for the given currency code
/// 
///
/// @param userId The ID of the user for whom wallet is being retrieved
/// @param currencyCode Currency code of the user&#39;s wallet
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPISimpleWallet*
-(NSURLSessionTask*) getUserWalletWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    completionHandler: (void (^)(JSAPISimpleWallet* output, NSError* error)) handler;


/// Retrieve a user's wallet transactions
/// 
///
/// @param userId The ID of the user for whom wallet transactions are being retrieved
/// @param currencyCode Currency code of the user&#39;s wallet
/// @param filterType Filter for transactions with specified type (optional)
/// @param filterMaxDate Filter for transactions from no earlier than the specified date as a unix timestamp in seconds (optional)
/// @param filterMinDate Filter for transactions from no later than the specified date as a unix timestamp in seconds (optional)
/// @param filterSign Filter for transactions with amount with the given sign.  Allowable values: (&#39;positive&#39;, &#39;negative&#39;) (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceWalletTransactionResource_*
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


/// List all of a user's wallets
/// 
///
/// @param userId The ID of the user for whom wallets are being retrieved
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPISimpleWallet>*
-(NSURLSessionTask*) getUserWalletsWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(NSArray<JSAPISimpleWallet>* output, NSError* error)) handler;


/// Retrieves a summation of wallet balances by currency code
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceWalletTotalResponse_*
-(NSURLSessionTask*) getWalletBalancesWithCompletionHandler: 
    (void (^)(JSAPIPageResourceWalletTotalResponse_* output, NSError* error)) handler;


/// Retrieve wallet transactions across the system
/// 
///
/// @param filterInvoice Filter for transactions from a specific invoice (optional)
/// @param filterType Filter for transactions with specified type (optional)
/// @param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
/// @param filterSign Filter for transactions with amount with the given sign (optional)
/// @param filterUserId Filter for transactions for specific userId (optional)
/// @param filterUsername Filter for transactions for specific username that start with the given string (optional)
/// @param filterDetails Filter for transactions for specific details that start with the given string (optional)
/// @param filterCurrencyCode Filter for transactions for specific currency code (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceWalletTransactionResource_*
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


/// Retrieve a list of wallets across the system
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceSimpleWallet_*
-(NSURLSessionTask*) getWalletsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceSimpleWallet_* output, NSError* error)) handler;


/// Updates the balance for a user's wallet
/// 
///
/// @param userId The ID of the user for whom wallet is being modified
/// @param currencyCode Currency code of the user&#39;s wallet
/// @param request The requested balance modification to be made to the user&#39;s wallet (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIWalletTransactionResource*
-(NSURLSessionTask*) updateWalletBalanceWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    request: (JSAPIWalletAlterRequest*) request
    completionHandler: (void (^)(JSAPIWalletTransactionResource* output, NSError* error)) handler;



@end