#import <Foundation/Foundation.h>
#import "SWGLookupTypeResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGBRERuleEngineExpressionsApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineExpressionsApiErrorDomain;
extern NSInteger kSWGBRERuleEngineExpressionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a list of 'lookup' type expressions
/// These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGLookupTypeResource>*
-(NSURLSessionTask*) getLookupTypesUsingGETWithCompletionHandler: 
    (void (^)(NSArray<SWGLookupTypeResource>* output, NSError* error)) handler;



@end
