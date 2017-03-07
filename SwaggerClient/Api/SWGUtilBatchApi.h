#import <Foundation/Foundation.h>
#import "SWGBatch.h"
#import "SWGBatchReturn.h"
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



@interface SWGUtilBatchApi: NSObject <SWGApi>

extern NSString* kSWGUtilBatchApiErrorDomain;
extern NSInteger kSWGUtilBatchApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Request to run API call given the method, content type, path url, and body of request
/// 
///
/// @param batch The batch object (optional)
/// 
///  code:207 message:"Multi-Status",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGBatchReturn>*
-(NSURLSessionTask*) sendBatchWithBatch: (SWGBatch*) batch
    completionHandler: (void (^)(NSArray<SWGBatchReturn>* output, NSError* error)) handler;



@end
