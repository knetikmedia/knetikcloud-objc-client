#import <Foundation/Foundation.h>
#import "SWGPageResourceRevenueCountryReportResource_.h"
#import "SWGPageResourceRevenueProductReportResource_.h"
#import "SWGRevenueReportResource.h"
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



@interface SWGReportingRevenueApi: NSObject <SWGApi>

extern NSString* kSWGReportingRevenueApiErrorDomain;
extern NSInteger kSWGReportingRevenueApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get item revenue info
/// Get basic info about revenue from sales of items and bundles (not subscriptions, shipping, etc), summed up within a time range
///
/// @param currencyCode The code for a currency to get sales data for
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRevenueReportResource*
-(NSURLSessionTask*) getItemRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;


/// Get refund revenue info
/// Get basic info about revenue loss from refunds (for all item types), summed up within a time range.
///
/// @param currencyCode The code for a currency to get refund data for
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRevenueReportResource*
-(NSURLSessionTask*) getRefundRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;


/// Get revenue info by country
/// Get basic info about revenue from sales of all types, summed up within a time range and split out by country. Sorted for largest revenue at the top
///
/// @param currencyCode The code for a currency to get sales data for
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceRevenueCountryReportResource_*
-(NSURLSessionTask*) getRevenueByCountryWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceRevenueCountryReportResource_* output, NSError* error)) handler;


/// Get revenue info by item
/// Get basic info about revenue from sales of all types, summed up within a time range and split out by specific item. Sorted for largest revenue at the top
///
/// @param currencyCode The code for a currency to get sales data for
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceRevenueProductReportResource_*
-(NSURLSessionTask*) getRevenueByItemWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceRevenueProductReportResource_* output, NSError* error)) handler;


/// Get subscription revenue info
/// Get basic info about revenue from sales of new subscriptions as well as recurring payemnts, summed up within a time range
///
/// @param currencyCode The code for a currency to get sales data for
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRevenueReportResource*
-(NSURLSessionTask*) getSubscriptionRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGRevenueReportResource* output, NSError* error)) handler;



@end
