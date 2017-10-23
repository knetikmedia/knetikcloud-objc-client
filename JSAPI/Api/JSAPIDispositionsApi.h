#import <Foundation/Foundation.h>
#import "JSAPIDispositionCount.h"
#import "JSAPIDispositionResource.h"
#import "JSAPIPageResourceDispositionResource_.h"
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



@interface JSAPIDispositionsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIDispositionsApiErrorDomain;
extern NSInteger kJSAPIDispositionsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add a new disposition
/// 
///
/// @param disposition The new disposition record (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDispositionResource*
-(NSURLSessionTask*) addDispositionWithDisposition: (JSAPIDispositionResource*) disposition
    completionHandler: (void (^)(JSAPIDispositionResource* output, NSError* error)) handler;


/// Delete a disposition
/// 
///
/// @param _id The id of the disposition record
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteDispositionWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns a disposition
/// 
///
/// @param _id The id of the disposition record
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDispositionResource*
-(NSURLSessionTask*) getDispositionWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIDispositionResource* output, NSError* error)) handler;


/// Returns a list of disposition counts
/// 
///
/// @param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context&#x3D;video:47 (optional)
/// @param filterOwner Filter for dispositions from a specific user by id or &#39;me&#39; (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIDispositionCount>*
-(NSURLSessionTask*) getDispositionCountsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
    completionHandler: (void (^)(NSArray<JSAPIDispositionCount>* output, NSError* error)) handler;


/// Returns a page of dispositions
/// 
///
/// @param filterContext Filter for dispositions within a context type (games, articles, polls, etc). Optionally with a specific id like filter_context&#x3D;video:47 (optional)
/// @param filterOwner Filter for dispositions from a specific user by id or &#39;me&#39; (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceDispositionResource_*
-(NSURLSessionTask*) getDispositionsWithFilterContext: (NSString*) filterContext
    filterOwner: (NSString*) filterOwner
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceDispositionResource_* output, NSError* error)) handler;



@end
