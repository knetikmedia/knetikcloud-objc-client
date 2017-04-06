#import <Foundation/Foundation.h>
#import "JSAPIPageResourceUserRelationshipResource_.h"
#import "JSAPIResult.h"
#import "JSAPIUserRelationshipResource.h"
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



@interface JSAPIUsersRelationshipsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUsersRelationshipsApiErrorDomain;
extern NSInteger kJSAPIUsersRelationshipsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a user relationship
/// 
///
/// @param relationship The new relationship (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIUserRelationshipResource*
-(NSURLSessionTask*) createUserRelationshipWithRelationship: (JSAPIUserRelationshipResource*) relationship
    completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;


/// Delete a user relationship
/// 
///
/// @param _id The id of the relationship
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteUserRelationshipWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a user relationship
/// 
///
/// @param _id The id of the relationship
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIUserRelationshipResource*
-(NSURLSessionTask*) getUserRelationshipWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;


/// Get a list of user relationships
/// 
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceUserRelationshipResource_*
-(NSURLSessionTask*) getUserRelationshipsWithCompletionHandler: 
    (void (^)(JSAPIPageResourceUserRelationshipResource_* output, NSError* error)) handler;


/// Update a user relationship
/// 
///
/// @param _id The id of the relationship
/// @param relationship The new relationship (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIUserRelationshipResource*
-(NSURLSessionTask*) updateUserRelationshipWithId: (NSNumber*) _id
    relationship: (JSAPIUserRelationshipResource*) relationship
    completionHandler: (void (^)(JSAPIUserRelationshipResource* output, NSError* error)) handler;



@end
