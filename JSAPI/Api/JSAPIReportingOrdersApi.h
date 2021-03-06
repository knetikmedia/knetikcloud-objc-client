#import <Foundation/Foundation.h>
#import "JSAPIPageResourceAggregateInvoiceReportResource_.h"
#import "JSAPIResult.h"
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



@interface JSAPIReportingOrdersApi: NSObject <JSAPIApi>

extern NSString* kJSAPIReportingOrdersApiErrorDomain;
extern NSInteger kJSAPIReportingOrdersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Retrieve invoice counts aggregated by time ranges
/// <b>Permissions Needed:</b> REPORTING_ORDERS_ADMIN
///
/// @param currencyCode The code for a currency to get sales data for
/// @param granularity The time duration to aggregate by (optional) (default to day)
/// @param filterPaymentStatus A payment status to filter results by, can be a comma separated list (optional)
/// @param filterFulfillmentStatus An invoice fulfillment status to filter results by, can be a comma separated list (optional)
/// @param startDate The start of the time range to return, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to return, unix timestamp in seconds. Default is end of time (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAggregateInvoiceReportResource_*
-(NSURLSessionTask*) getInvoiceReportsWithCurrencyCode: (NSString*) currencyCode
    granularity: (NSString*) granularity
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAggregateInvoiceReportResource_* output, NSError* error)) handler;



@end
