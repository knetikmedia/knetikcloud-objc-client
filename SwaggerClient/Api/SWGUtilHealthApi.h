#import <Foundation/Foundation.h>
#import "SWGResult.h"
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



@interface SWGUtilHealthApi: NSObject <SWGApi>

extern NSString* kSWGUtilHealthApiErrorDomain;
extern NSInteger kSWGUtilHealthApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get health info
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) getHealthWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;



@end
