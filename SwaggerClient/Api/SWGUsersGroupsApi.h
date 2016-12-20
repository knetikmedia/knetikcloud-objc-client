#import <Foundation/Foundation.h>
#import "SWGGroupMemberResource.h"
#import "SWGGroupResource.h"
#import "SWGPageResourceGroupMemberResource_.h"
#import "SWGPageResourceGroupResource_.h"
#import "SWGPageResourceTemplateResource_.h"
#import "SWGTemplateResource.h"
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



@interface SWGUsersGroupsApi: NSObject <SWGApi>

extern NSString* kSWGUsersGroupsApiErrorDomain;
extern NSInteger kSWGUsersGroupsApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Adds a new group in the system
///
/// @param groupResource The new group (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGGroupResource*
-(NSNumber*) addGroupUsingPOSTWithGroupResource: (SWGGroupResource*) groupResource
    completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;

/// Adds a new member to the group
///
/// @param uniqueName The group unique name
/// @param username The username of a user to add to the group
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGGroupMemberResource*
-(NSNumber*) addMemberUsingPOSTWithUniqueName: (NSString*) uniqueName
    username: (SWGGroupMemberResource*) username
    completionHandler: (void (^)(SWGGroupMemberResource* output, NSError* error)) handler;

/// Create a group template
/// Group Templates define a type of group and the properties they have
///
/// @param groupTemplateResource The group template resource object (optional)
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGTemplateResource*
-(NSNumber*) createGroupTemplateUsingPOSTWithGroupTemplateResource: (SWGTemplateResource*) groupTemplateResource
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;

/// Delete a group template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteGroupTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;

/// Removes a user from a group
///
/// @param uniqueName The group unique name
/// @param userId The id of the user to remove
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteGroupUsingDELETEWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    completionHandler: (void (^)(NSError* error)) handler;

/// Removes a group from the system IF no resources are attached to it
///
/// @param uniqueName The group unique name
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
-(NSNumber*) deleteGroupUsingDELETE1WithUniqueName: (NSString*) uniqueName
    completionHandler: (void (^)(NSError* error)) handler;

/// Get a single group template
///
/// @param _id The id of the template
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGTemplateResource*
-(NSNumber*) getGroupTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;

/// List and search group templates
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceTemplateResource_*
-(NSNumber*) getGroupTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;

/// Loads a specific group's details
///
/// @param uniqueName The group unique name
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGGroupResource*
-(NSNumber*) getGroupUsingGETWithUniqueName: (NSString*) uniqueName
    completionHandler: (void (^)(SWGGroupResource* output, NSError* error)) handler;

/// Lists members of the group
///
/// @param uniqueName The group unique name
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceGroupMemberResource_*
-(NSNumber*) searchGroupsUsingGETWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceGroupMemberResource_* output, NSError* error)) handler;

/// List and search groups
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
/// @return SWGPageResourceGroupResource_*
-(NSNumber*) searchGroupsUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceGroupResource_* output, NSError* error)) handler;

/// Update a group template
///
/// @param _id The id of the template
/// @param groupTemplateResource The group template resource object (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateGroupTemplateUsingPUTWithId: (NSString*) _id
    groupTemplateResource: (SWGTemplateResource*) groupTemplateResource
    completionHandler: (void (^)(NSError* error)) handler;

/// Modifies a group's details
///
/// @param uniqueName The group unique name
/// @param groupResource The updated group (optional)
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateGroupUsingPUTWithUniqueName: (NSString*) uniqueName
    groupResource: (SWGGroupResource*) groupResource
    completionHandler: (void (^)(NSError* error)) handler;

/// Change a user's status
///
/// @param uniqueName The group unique name
/// @param userId The user id of the member to modify
/// @param status The new status for the user
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
-(NSNumber*) updateMemberStatusUsingPUTWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (NSString*) status
    completionHandler: (void (^)(NSError* error)) handler;


@end
