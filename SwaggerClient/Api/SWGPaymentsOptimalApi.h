#import <Foundation/Foundation.h>
#import "SWGOptimalPaymentRequest.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGPaymentsOptimalApi: NSObject <SWGApi>

extern NSString* kSWGPaymentsOptimalApiErrorDomain;
extern NSInteger kSWGPaymentsOptimalApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Initiate silent post with Optimal
/// Will return the url for a hosted payment endpoint to post to. See Optimal documentation for details.
///
/// @param request The payment request to initiate (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSNumber*) silentPostUsingPOSTWithRequest: (SWGOptimalPaymentRequest*) request
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;



@end
