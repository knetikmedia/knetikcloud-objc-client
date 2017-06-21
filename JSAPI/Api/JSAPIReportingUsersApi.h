#import <Foundation/Foundation.h>
#import "JSAPIPageResourceAggregateCountResource_.h"
#import "JSAPIResult.h"
#import "JSAPIApi.h"

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



@interface JSAPIReportingUsersApi: NSObject <JSAPIApi>

extern NSString* kJSAPIReportingUsersApiErrorDomain;
extern NSInteger kJSAPIReportingUsersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get user registration info
/// Get user registration counts grouped by time range
///
/// @param granularity The time duration to aggregate by (optional) (default to day)
/// @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
/// @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceAggregateCountResource_*
-(NSURLSessionTask*) getUserRegistrationsWithGranularity: (NSString*) granularity
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAggregateCountResource_* output, NSError* error)) handler;



@end
