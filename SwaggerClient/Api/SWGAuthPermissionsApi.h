#import <Foundation/Foundation.h>
#import "SWGPageResourcePermissionResource_.h"
#import "SWGPermissionResource.h"
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



@interface SWGAuthPermissionsApi: NSObject <SWGApi>

extern NSString* kSWGAuthPermissionsApiErrorDomain;
extern NSInteger kSWGAuthPermissionsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a new permission
///
/// @param permissionResource The permission resource object (optional)
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPermissionResource*
-(NSNumber*) createPermissionUsingPOSTWithPermissionResource: (SWGPermissionResource*) permissionResource
    completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;

/// Delete a permission
///
/// @param permission The permission value
/// @param force If true, removes permission assigned to roles (optional)
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deletePermissionUsingDELETEWithPermission: (NSString*) permission
    force: (NSNumber*) force
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a single permission
///
/// @param permission The permission value
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPermissionResource*
-(NSNumber*) getPermissionUsingGETWithPermission: (NSString*) permission
    completionHandler: (void (^)(SWGPermissionResource* output, NSError* error)) handler;

/// List and search permissions
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to permission:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourcePermissionResource_*
-(NSNumber*) getPermissionUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourcePermissionResource_* output, NSError* error)) handler;

/// Update a permission
///
/// @param permission The permission value
/// @param permissionResource The permission resource object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updatePermissionUsingPUTWithPermission: (NSString*) permission
    permissionResource: (SWGPermissionResource*) permissionResource
    completionHandler: (void (^)(NSError* error)) handler;


@end
