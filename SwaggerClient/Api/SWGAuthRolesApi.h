#import <Foundation/Foundation.h>
#import "SWGClientResource.h"
#import "SWGPageRoleResource_.h"
#import "SWGRoleResource.h"
#import "SWGUserResource.h"
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



@interface SWGAuthRolesApi: NSObject <SWGApi>

extern NSString* kSWGAuthRolesApiErrorDomain;
extern NSInteger kSWGAuthRolesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Set roles for a client
/// 
///
/// @param clientKey The client key
/// @param rolesList The list of unique roles (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) assignClientRolesUsingPUTWithClientKey: (NSString*) clientKey
    rolesList: (NSArray<NSString*>*) rolesList
    completionHandler: (void (^)(NSError* error)) handler;


/// Set permissions for a role
/// 
///
/// @param role The role value
/// @param permissionsList The list of unique permissions (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) assignPermissionsUsingPUTWithRole: (NSString*) role
    permissionsList: (NSArray<NSString*>*) permissionsList
    completionHandler: (void (^)(NSError* error)) handler;


/// Set roles for a user
/// 
///
/// @param userId The user&#39;s id
/// @param rolesList The list of unique roles (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) assignUserRolesExternalUsingPUTWithUserId: (NSNumber*) userId
    rolesList: (NSArray<NSString*>*) rolesList
    completionHandler: (void (^)(NSError* error)) handler;


/// Create a new role
/// 
///
/// @param roleResource The role resource object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRoleResource*
-(NSNumber*) createRoleUsingPOSTWithRoleResource: (SWGRoleResource*) roleResource
    completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;


/// Delete a role
/// 
///
/// @param role The role value
/// @param force If true, removes role from users/clients (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteRoleUsingDELETEWithRole: (NSString*) role
    force: (NSNumber*) force
    completionHandler: (void (^)(NSError* error)) handler;


/// Get roles for a client
/// 
///
/// @param clientKey The client key
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGRoleResource>*
-(NSNumber*) getClientRolesUsingGETWithClientKey: (NSString*) clientKey
    completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;


/// Get a single role
/// 
///
/// @param role The role value
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGRoleResource*
-(NSNumber*) getRoleUsingGETWithRole: (NSString*) role
    completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;


/// List and search roles
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageRoleResource_*
-(NSNumber*) getRolesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageRoleResource_* output, NSError* error)) handler;


/// Get roles for a user
/// 
///
/// @param userId The user&#39;s id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGRoleResource>*
-(NSNumber*) getUserRolesUsingGETWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(NSArray<SWGRoleResource>* output, NSError* error)) handler;


/// Update a role
/// 
///
/// @param role The role value
/// @param roleResource The role resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateRoleUsingPUTWithRole: (NSString*) role
    roleResource: (SWGRoleResource*) roleResource
    completionHandler: (void (^)(NSError* error)) handler;



@end