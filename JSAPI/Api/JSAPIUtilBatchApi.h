#import <Foundation/Foundation.h>
#import "JSAPIBatch.h"
#import "JSAPIBatchResult.h"
#import "JSAPIBatchReturn.h"
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



@interface JSAPIUtilBatchApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUtilBatchApiErrorDomain;
extern NSInteger kJSAPIUtilBatchApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get batch result with token
/// Tokens expire in 24 hours. <br><br><b>Permissions Needed:</b> ANY
///
/// @param token token
/// 
///  code:200 message:"OK",
///  code:202 message:"Accepted",
///  code:207 message:"Multi-Status",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIBatchReturn>*
-(NSURLSessionTask*) getBatchWithToken: (NSString*) token
    completionHandler: (void (^)(NSArray<JSAPIBatchReturn>* output, NSError* error)) handler;


/// Request to run API call given the method, content type, path url, and body of request
/// Should the request take longer than one of the alloted timeout parameters, a token will be returned instead, which can be used on the token endpoint in this service. <br><br><b>Permissions Needed:</b> ANY
///
/// @param batch The batch object (optional)
/// 
///  code:207 message:"Multi-Status",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIBatchReturn>*
-(NSURLSessionTask*) sendBatchWithBatch: (JSAPIBatch*) batch
    completionHandler: (void (^)(NSArray<JSAPIBatchReturn>* output, NSError* error)) handler;



@end
