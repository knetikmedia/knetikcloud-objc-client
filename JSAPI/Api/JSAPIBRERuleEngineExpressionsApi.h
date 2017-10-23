#import <Foundation/Foundation.h>
#import "JSAPIExpressionResource.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
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



@interface JSAPIBRERuleEngineExpressionsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIBRERuleEngineExpressionsApiErrorDomain;
extern NSInteger kJSAPIBRERuleEngineExpressionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Lookup a specific expression
/// 
///
/// @param type Specifiy the type of expression as returned by the listing endpoint
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIExpressionResource*
-(NSURLSessionTask*) getBREExpressionWithType: (NSString*) type
    completionHandler: (void (^)(JSAPIExpressionResource* output, NSError* error)) handler;


/// Get a list of supported expressions to use in conditions or actions.
/// Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule.
///
/// @param filterTypeGroup Filter for expressions by type group (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIExpressionResource>*
-(NSURLSessionTask*) getBREExpressionsWithFilterTypeGroup: (NSString*) filterTypeGroup
    completionHandler: (void (^)(NSArray<JSAPIExpressionResource>* output, NSError* error)) handler;


/// Returns the textual representation of an expression
/// 
///
/// @param expression The expression resource to be converted (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIStringWrapper*
-(NSURLSessionTask*) getExpressionAsTextWithExpression: (JSAPIExpressionResource*) expression
    completionHandler: (void (^)(JSAPIStringWrapper* output, NSError* error)) handler;



@end
