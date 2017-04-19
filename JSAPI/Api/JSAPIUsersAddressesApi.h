#import <Foundation/Foundation.h>
#import "JSAPIPageResourceSavedAddressResource_.h"
#import "JSAPIResult.h"
#import "JSAPISavedAddressResource.h"
#import "JSAPIApi.h"

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



@interface JSAPIUsersAddressesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUsersAddressesApiErrorDomain;
extern NSInteger kJSAPIUsersAddressesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new address
/// 
///
/// @param userId The id of the user
/// @param savedAddressResource The new address (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPISavedAddressResource*
-(NSURLSessionTask*) createAddressWithUserId: (NSString*) userId
    savedAddressResource: (JSAPISavedAddressResource*) savedAddressResource
    completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;


/// Delete an address
/// 
///
/// @param userId The id of the user
/// @param _id The id of the address
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single address
/// 
///
/// @param userId The id of the user
/// @param _id The id of the address
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPISavedAddressResource*
-(NSURLSessionTask*) getAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;


/// List and search addresses
/// 
///
/// @param userId The id of the user
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
/// @return JSAPIPageResourceSavedAddressResource_*
-(NSURLSessionTask*) getAddressesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceSavedAddressResource_* output, NSError* error)) handler;


/// Update an address
/// 
///
/// @param userId The id of the user
/// @param _id The id of the address
/// @param savedAddressResource The saved address resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPISavedAddressResource*
-(NSURLSessionTask*) updateAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    savedAddressResource: (JSAPISavedAddressResource*) savedAddressResource
    completionHandler: (void (^)(JSAPISavedAddressResource* output, NSError* error)) handler;



@end
