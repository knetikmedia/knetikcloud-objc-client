#import <Foundation/Foundation.h>
#import "SWGVariableTypeResource.h"
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



@interface SWGBRERuleEngineVariablesApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineVariablesApiErrorDomain;
extern NSInteger kSWGBRERuleEngineVariablesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Get a list of variable types available
/// Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing.
///
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGVariableTypeResource>*
-(NSNumber*) getListUsingGETWithCompletionHandler: 
    (void (^)(NSArray<SWGVariableTypeResource>* output, NSError* error)) handler;



@end
