#import <Foundation/Foundation.h>
#import "SWGFlagReportResource.h"
#import "SWGPageResourceFlagReportResource_.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGMediaModerationApi: NSObject <SWGApi>

extern NSString* kSWGMediaModerationApiErrorDomain;
extern NSInteger kSWGMediaModerationApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Get a flag report
///
/// @param _id The flag report id
///  code:200 message:"OK",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) getFlagReportUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Returns a page of flag reports
/// Context can be either a free-form string or a pre-defined context name
///
/// @param excludeResolved Ignore resolved context (optional) (default to true)
/// @param filterContext Filter by moderation context (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceFlagReportResource_*
-(NSNumber*) getFlagsReportUsingGETWithExcludeResolved: (NSNumber*) excludeResolved
    filterContext: (NSString*) filterContext
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceFlagReportResource_* output, NSError* error)) handler;

/// Update a flag report
/// Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.
///
/// @param _id The flag report id
/// @param flagReportResource The new flag report (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) setFlagResolutionUsingPUTWithId: (NSNumber*) _id
    flagReportResource: (SWGFlagReportResource*) flagReportResource
    completionHandler: (void (^)(NSError* error)) handler;


@end
