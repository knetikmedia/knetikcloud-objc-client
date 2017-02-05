#import <Foundation/Foundation.h>
#import "SWGBreGlobalResource.h"
#import "SWGPageResourceBreGlobalResource_.h"
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



@interface SWGBRERuleEngineGlobalsApi: NSObject <SWGApi>

extern NSString* kSWGBRERuleEngineGlobalsApiErrorDomain;
extern NSInteger kSWGBRERuleEngineGlobalsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a global definition
/// Once created you can then use in a custom rule. Note that global definitions cannot be modified or deleted if in use.
///
/// @param breGlobalResource The BRE global resource object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBreGlobalResource*
-(NSURLSessionTask*) createGlobalUsingPOSTWithBreGlobalResource: (SWGBreGlobalResource*) breGlobalResource
    completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;


/// Delete a global
/// May fail if there are existing rules against it. Cannot delete core globals
///
/// @param _id The id of the global definition
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteGlobalUsingDELETEWithId: (NSString*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single global definition
/// 
///
/// @param _id The id of the global definition
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBreGlobalResource*
-(NSURLSessionTask*) getGlobalUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGBreGlobalResource* output, NSError* error)) handler;


/// List global definitions
/// 
///
/// @param filterSystem Filter for globals that are system globals when true, or not when false. Leave off for both mixed (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceBreGlobalResource_*
-(NSURLSessionTask*) getGlobalsUsingGETWithFilterSystem: (NSNumber*) filterSystem
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceBreGlobalResource_* output, NSError* error)) handler;


/// Update a global definition
/// May fail if new parameters mismatch requirements of existing rules. Cannot update core globals
///
/// @param _id The id of the global definition
/// @param breGlobalResource The BRE global resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateGlobalUsingPUTWithId: (NSString*) _id
    breGlobalResource: (SWGBreGlobalResource*) breGlobalResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
