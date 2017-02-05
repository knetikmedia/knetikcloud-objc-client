#import <Foundation/Foundation.h>
#import "SWGPageResourceAggregateCountResource_.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGReportingUsersApi: NSObject <SWGApi>

extern NSString* kSWGReportingUsersApiErrorDomain;
extern NSInteger kSWGReportingUsersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get user registration info
/// Get user registration counts grouped by time range
///
/// @param granularity The time duration to aggregate by (optional) (default to day)
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceAggregateCountResource_*
-(NSURLSessionTask*) executiveRevenueItemSalesUsingGET1WithGranularity: (NSString*) granularity
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGPageResourceAggregateCountResource_* output, NSError* error)) handler;



@end
