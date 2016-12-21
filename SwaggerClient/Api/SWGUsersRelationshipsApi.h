#import <Foundation/Foundation.h>
#import "SWGPageResourceUserRelationshipResource_.h"
#import "SWGUserRelationshipResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGUsersRelationshipsApi: NSObject <SWGApi>

extern NSString* kSWGUsersRelationshipsApiErrorDomain;
extern NSInteger kSWGUsersRelationshipsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a user relationship
///
/// @param relationship The new relationship (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGUserRelationshipResource*
-(NSNumber*) addRelationshipUsingPOSTWithRelationship: (SWGUserRelationshipResource*) relationship
    completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;

/// Delete a user relationship
///
/// @param _id The id of the relationship
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteRelationshipUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a user relationship
///
/// @param _id The id of the relationship
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGUserRelationshipResource*
-(NSNumber*) getRelationshipUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;

/// Get a list of user relationships
///
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceUserRelationshipResource_*
-(NSNumber*) getRelationshipsUsingGETWithCompletionHandler: 
    (void (^)(SWGPageResourceUserRelationshipResource_* output, NSError* error)) handler;

/// Update a user relationship
///
/// @param _id The id of the relationship
/// @param relationship The new relationship (optional)
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGUserRelationshipResource*
-(NSNumber*) updateRelationshipUsingPUTWithId: (NSNumber*) _id
    relationship: (SWGUserRelationshipResource*) relationship
    completionHandler: (void (^)(SWGUserRelationshipResource* output, NSError* error)) handler;


@end
