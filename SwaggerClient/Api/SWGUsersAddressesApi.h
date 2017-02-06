#import <Foundation/Foundation.h>
#import "SWGPageResourceSavedAddressResource_.h"
#import "SWGSavedAddressResource.h"
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



@interface SWGUsersAddressesApi: NSObject <SWGApi>

extern NSString* kSWGUsersAddressesApiErrorDomain;
extern NSInteger kSWGUsersAddressesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new address
/// 
///
/// @param userId The id of the user
/// @param savedAddressResource The new address (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSavedAddressResource*
-(NSURLSessionTask*) createAddressWithUserId: (NSString*) userId
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
    completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;


/// Delete an address
/// 
///
/// @param userId The id of the user
/// @param _id The id of the address
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
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
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGSavedAddressResource*
-(NSURLSessionTask*) getAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(SWGSavedAddressResource* output, NSError* error)) handler;


/// List and search addresses
/// 
///
/// @param userId The id of the user
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceSavedAddressResource_*
-(NSURLSessionTask*) getAddressesWithUserId: (NSString*) userId
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSavedAddressResource_* output, NSError* error)) handler;


/// Update an address
/// 
///
/// @param userId The id of the user
/// @param _id The id of the address
/// @param savedAddressResource The saved address resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateAddressWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    savedAddressResource: (SWGSavedAddressResource*) savedAddressResource
    completionHandler: (void (^)(NSError* error)) handler;



@end