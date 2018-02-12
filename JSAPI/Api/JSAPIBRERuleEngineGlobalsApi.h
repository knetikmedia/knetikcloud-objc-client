#import <Foundation/Foundation.h>
#import "JSAPIBreGlobalResource.h"
#import "JSAPIPageResourceBreGlobalResource_.h"
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



@interface JSAPIBRERuleEngineGlobalsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIBRERuleEngineGlobalsApiErrorDomain;
extern NSInteger kJSAPIBRERuleEngineGlobalsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a global definition
/// Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_GLOBALS_ADMIN
///
/// @param breGlobalResource The BRE global resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBreGlobalResource*
-(NSURLSessionTask*) createBREGlobalWithBreGlobalResource: (JSAPIBreGlobalResource*) breGlobalResource
    completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;


/// Delete a global
/// May fail if there are existing rules against it. Cannot delete core globals. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_GLOBALS_ADMIN
///
/// @param _id The id of the global definition
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteBREGlobalWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single global definition
/// <b>Permissions Needed:</b> BRE_RULE_ENGINE_GLOBALS_USER
///
/// @param _id The id of the global definition
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBreGlobalResource*
-(NSURLSessionTask*) getBREGlobalWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;


/// List global definitions
/// <b>Permissions Needed:</b> BRE_RULE_ENGINE_GLOBALS_USER
///
/// @param filterSystem Filter for globals that are system globals when true, or not when false. Leave off for both mixed (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceBreGlobalResource_*
-(NSURLSessionTask*) getBREGlobalsWithFilterSystem: (NSNumber*) filterSystem
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceBreGlobalResource_* output, NSError* error)) handler;


/// Update a global definition
/// May fail if new parameters mismatch requirements of existing rules. Cannot update core globals. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_GLOBALS_ADMIN
///
/// @param _id The id of the global definition
/// @param breGlobalResource The BRE global resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIBreGlobalResource*
-(NSURLSessionTask*) updateBREGlobalWithId: (NSString*) _id
    breGlobalResource: (JSAPIBreGlobalResource*) breGlobalResource
    completionHandler: (void (^)(JSAPIBreGlobalResource* output, NSError* error)) handler;



@end
