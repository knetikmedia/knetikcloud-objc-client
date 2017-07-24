#import <Foundation/Foundation.h>
#import "JSAPIOptimalPaymentRequest.h"
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



@interface JSAPIPaymentsOptimalApi: NSObject <JSAPIApi>

extern NSString* kJSAPIPaymentsOptimalApiErrorDomain;
extern NSInteger kJSAPIPaymentsOptimalApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Initiate silent post with Optimal
/// Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details.
///
/// @param request The payment request to initiate (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) silentPostOptimalWithRequest: (JSAPIOptimalPaymentRequest*) request
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end
