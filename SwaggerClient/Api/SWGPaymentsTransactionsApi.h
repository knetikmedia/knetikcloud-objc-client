#import <Foundation/Foundation.h>
#import "SWGPageResourceTransactionResource_.h"
#import "SWGRefundRequest.h"
#import "SWGRefundResource.h"
#import "SWGTransactionResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGPaymentsTransactionsApi: NSObject <SWGApi>

extern NSString* kSWGPaymentsTransactionsApiErrorDomain;
extern NSInteger kSWGPaymentsTransactionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get the details for a single transaction
/// 
///
/// @param _id id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGTransactionResource*
-(NSURLSessionTask*) getTransactionWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGTransactionResource* output, NSError* error)) handler;


/// List and search transactions
/// 
///
/// @param filterInvoice Filter for transactions from a specific invoice (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceTransactionResource_*
-(NSURLSessionTask*) getTransactionsWithFilterInvoice: (NSNumber*) filterInvoice
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceTransactionResource_* output, NSError* error)) handler;


/// Refund a payment transaction, in full or in part
/// Will not allow for refunding more than the full amount even with multiple partial refunds. Money is refunded to the payment method used to make the original payment. Payment method must support refunds.
///
/// @param _id The id of the transaction to refund
/// @param request Request containing refund details (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRefundResource*
-(NSURLSessionTask*) refundTransactionWithId: (NSNumber*) _id
    request: (SWGRefundRequest*) request
    completionHandler: (void (^)(SWGRefundResource* output, NSError* error)) handler;



@end
