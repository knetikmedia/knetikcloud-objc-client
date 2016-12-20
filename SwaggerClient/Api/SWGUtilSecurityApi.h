#import <Foundation/Foundation.h>
#import "SWGPageLocationLogResource_.h"
#import "SWGTokenDetailsResource.h"
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



@interface SWGUtilSecurityApi: NSObject <SWGApi>

extern NSString* kSWGUtilSecurityApiErrorDomain;
extern NSInteger kSWGUtilSecurityApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Returns the authentication log for a user
/// A log entry is recorded everytime a user requests a new token. Standard pagination available
///
/// @param userId The user id (optional)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageLocationLogResource_*
-(NSNumber*) getUserLocationLogUsingGETWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(SWGPageLocationLogResource_* output, NSError* error)) handler;

/// Returns the authentication token details. Use /users endpoint for detailed user's info
///
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGTokenDetailsResource*
-(NSNumber*) userUsingGETWithCompletionHandler: 
    (void (^)(SWGTokenDetailsResource* output, NSError* error)) handler;


@end
