#import <Foundation/Foundation.h>
#import "JSAPIResult.h"
#import "JSAPIXsollaPaymentRequest.h"
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



@interface JSAPIPaymentsXsollaApi: NSObject <JSAPIApi>

extern NSString* kJSAPIPaymentsXsollaApiErrorDomain;
extern NSInteger kJSAPIPaymentsXsollaApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a payment token that should be used to forward the user to Xsolla so they can complete payment
/// 
///
/// @param request The payment request to be sent to XSolla (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) createXsollaTokenUrlWithRequest: (JSAPIXsollaPaymentRequest*) request
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Receives payment response from Xsolla
/// Only used by Xsolla to call back to JSAPI after processing user payment action
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) receiveXsollaNotificationWithCompletionHandler: 
    (void (^)(NSError* error)) handler;



@end
