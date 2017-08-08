#import <Foundation/Foundation.h>
#import "JSAPIFlagReportResource.h"
#import "JSAPIPageResourceFlagReportResource_.h"
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



@interface JSAPIMediaModerationApi: NSObject <JSAPIApi>

extern NSString* kJSAPIMediaModerationApiErrorDomain;
extern NSInteger kJSAPIMediaModerationApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a flag report
/// 
///
/// @param _id The flag report id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIFlagReportResource*
-(NSURLSessionTask*) getModerationReportWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIFlagReportResource* output, NSError* error)) handler;


/// Returns a page of flag reports
/// Context can be either a free-form string or a pre-defined context name
///
/// @param excludeResolved Ignore resolved context (optional) (default to true)
/// @param filterContext Filter by moderation context (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceFlagReportResource_*
-(NSURLSessionTask*) getModerationReportsWithExcludeResolved: (NSNumber*) excludeResolved
    filterContext: (NSString*) filterContext
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceFlagReportResource_* output, NSError* error)) handler;


/// Update a flag report
/// Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.
///
/// @param _id The flag report id
/// @param flagReportResource The new flag report (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateModerationReportWithId: (NSNumber*) _id
    flagReportResource: (JSAPIFlagReportResource*) flagReportResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
