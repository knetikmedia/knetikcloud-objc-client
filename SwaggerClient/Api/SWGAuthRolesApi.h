#import <Foundation/Foundation.h>
#import "SWGClientResource.h"
#import "SWGPageResourceRoleResource_.h"
#import "SWGRoleResource.h"
#import "SWGUserResource.h"
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



@interface SWGAuthRolesApi: NSObject <SWGApi>

extern NSString* kSWGAuthRolesApiErrorDomain;
extern NSInteger kSWGAuthRolesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

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
-(NSURLSessionTask*) assignClientRolesUsingPUTWithClientKey: (NSString*) clientKey
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
-(NSURLSessionTask*) assignPermissionsUsingPUTWithRole: (NSString*) role
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
-(NSURLSessionTask*) assignUserRolesExternalUsingPUTWithUserId: (NSNumber*) userId
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
-(NSURLSessionTask*) createRoleUsingPOSTWithRoleResource: (SWGRoleResource*) roleResource
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
-(NSURLSessionTask*) deleteRoleUsingDELETEWithRole: (NSString*) role
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
-(NSURLSessionTask*) getClientRolesUsingGETWithClientKey: (NSString*) clientKey
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
-(NSURLSessionTask*) getRoleUsingGETWithRole: (NSString*) role
    completionHandler: (void (^)(SWGRoleResource* output, NSError* error)) handler;


/// List and search roles
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceRoleResource_*
-(NSURLSessionTask*) getRolesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceRoleResource_* output, NSError* error)) handler;


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
-(NSURLSessionTask*) getUserRolesUsingGETWithUserId: (NSNumber*) userId
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
-(NSURLSessionTask*) updateRoleUsingPUTWithRole: (NSString*) role
    roleResource: (SWGRoleResource*) roleResource
    completionHandler: (void (^)(NSError* error)) handler;



@end
