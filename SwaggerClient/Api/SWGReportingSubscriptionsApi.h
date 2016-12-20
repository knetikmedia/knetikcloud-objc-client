#import <Foundation/Foundation.h>
#import "SWGPageBillingReport_.h"
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



@interface SWGReportingSubscriptionsApi: NSObject <SWGApi>

extern NSString* kSWGReportingSubscriptionsApiErrorDomain;
extern NSInteger kSWGReportingSubscriptionsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Get a list of available subscription reports in most recent first order
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageBillingReport_*
-(NSNumber*) listBillingReportsUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageBillingReport_* output, NSError* error)) handler;


@end
