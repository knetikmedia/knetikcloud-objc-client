#import <Foundation/Foundation.h>
#import "JSAPIPageResourceLocationLogResource_.h"
#import "JSAPIResult.h"
#import "JSAPITokenDetailsResource.h"
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



@interface JSAPIUtilSecurityApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUtilSecurityApiErrorDomain;
extern NSInteger kJSAPIUtilSecurityApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Returns the authentication log for a user
/// A log entry is recorded everytime a user requests a new token. Standard pagination available. <br><br><b>Permissions Needed:</b> SECURITY_ADMIN
///
/// @param userId The user id (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceLocationLogResource_*
-(NSURLSessionTask*) getUserLocationLogWithUserId: (NSNumber*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceLocationLogResource_* output, NSError* error)) handler;


/// Returns the authentication token details. Use /users endpoint for detailed user's info
/// <b>Permissions Needed:</b> SECURITY_ADMIN
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITokenDetailsResource*
-(NSURLSessionTask*) getUserTokenDetailsWithCompletionHandler: 
    (void (^)(JSAPITokenDetailsResource* output, NSError* error)) handler;



@end
