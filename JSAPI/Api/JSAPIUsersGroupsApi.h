#import <Foundation/Foundation.h>
#import "JSAPIChatMessageRequest.h"
#import "JSAPIChatMessageResource.h"
#import "JSAPIGroupMemberResource.h"
#import "JSAPIGroupResource.h"
#import "JSAPIPageResourceChatMessageResource_.h"
#import "JSAPIPageResourceGroupMemberResource_.h"
#import "JSAPIPageResourceGroupResource_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIResult.h"
#import "JSAPIStringWrapper.h"
#import "JSAPITemplateResource.h"
#import "JSAPIValueWrapperBoolean_.h"
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



@interface JSAPIUsersGroupsApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUsersGroupsApiErrorDomain;
extern NSInteger kJSAPIUsersGroupsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Adds a new member to the group
/// <b>Permissions Needed:</b> GROUP_ADMIN or self if open
///
/// @param uniqueName The group unique name
/// @param user The id and status for a user to add to the group
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIGroupMemberResource*
-(NSURLSessionTask*) addMemberToGroupWithUniqueName: (NSString*) uniqueName
    user: (JSAPIGroupMemberResource*) user
    completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;


/// Adds multiple members to the group
/// <b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param uniqueName The group unique name
/// @param users The id and status for a list of users to add to the group
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIGroupMemberResource>*
-(NSURLSessionTask*) addMembersToGroupWithUniqueName: (NSString*) uniqueName
    users: (NSArray<JSAPIGroupMemberResource>*) users
    completionHandler: (void (^)(NSArray<JSAPIGroupMemberResource>* output, NSError* error)) handler;


/// Create a group
/// <b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param groupResource The new group (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIGroupResource*
-(NSURLSessionTask*) createGroupWithGroupResource: (JSAPIGroupResource*) groupResource
    completionHandler: (void (^)(JSAPIGroupResource* output, NSError* error)) handler;


/// Create an group member template
/// GroupMember Templates define a type of group member and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param groupMemberTemplateResource The group member template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createGroupMemberTemplateWithGroupMemberTemplateResource: (JSAPITemplateResource*) groupMemberTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Create a group template
/// Group Templates define a type of group and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param groupTemplateResource The group template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) createGroupTemplateWithGroupTemplateResource: (JSAPITemplateResource*) groupTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Removes a group from the system
/// All groups listing this as the parent are also removed and users are in turn removed from this and those groups. This may result in users no longer being in this group's parent if they were not added to it directly as well. <br><br><b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param uniqueName The group unique name
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteGroupWithUniqueName: (NSString*) uniqueName
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an group member template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteGroupMemberTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a group template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteGroupTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Enable or disable notification of group messages
/// 
///
/// @param uniqueName The group unique name
/// @param userId The user id of the member or &#39;me&#39;
/// @param disabled disabled
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) disableGroupNotificationWithUniqueName: (NSString*) uniqueName
    userId: (NSString*) userId
    disabled: (JSAPIValueWrapperBoolean_*) disabled
    completionHandler: (void (^)(NSError* error)) handler;


/// Loads a specific group's details
/// <b>Permissions Needed:</b> ANY
///
/// @param uniqueName The group unique name
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIGroupResource*
-(NSURLSessionTask*) getGroupWithUniqueName: (NSString*) uniqueName
    completionHandler: (void (^)(JSAPIGroupResource* output, NSError* error)) handler;


/// Get group ancestors
/// Returns a list of ancestor groups in reverse order (parent, then grandparent, etc). <br><br><b>Permissions Needed:</b> ANY
///
/// @param uniqueName The group unique name
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<JSAPIGroupResource>*
-(NSURLSessionTask*) getGroupAncestorsWithUniqueName: (NSString*) uniqueName
    completionHandler: (void (^)(NSArray<JSAPIGroupResource>* output, NSError* error)) handler;


/// Get a user from a group
/// <b>Permissions Needed:</b> ANY
///
/// @param uniqueName The group unique name
/// @param userId The id of the user
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIGroupMemberResource*
-(NSURLSessionTask*) getGroupMemberWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    completionHandler: (void (^)(JSAPIGroupMemberResource* output, NSError* error)) handler;


/// Get a single group member template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getGroupMemberTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search group member templates
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
///
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
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getGroupMemberTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// Lists members of the group
/// <b>Permissions Needed:</b> ANY
///
/// @param uniqueName The group unique name
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to order:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceGroupMemberResource_*
-(NSURLSessionTask*) getGroupMembersWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceGroupMemberResource_* output, NSError* error)) handler;


/// Get a list of group messages
/// <b>Permissions Needed:</b> ANY
///
/// @param uniqueName The group unique name
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceChatMessageResource_*
-(NSURLSessionTask*) getGroupMessagesWithUniqueName: (NSString*) uniqueName
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceChatMessageResource_* output, NSError* error)) handler;


/// Get a single group template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) getGroupTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// List and search group templates
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or GROUP_ADMIN
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceTemplateResource_*
-(NSURLSessionTask*) getGroupTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;


/// List groups a user is in
/// <b>Permissions Needed:</b> ANY
///
/// @param userId The id of the user
/// @param filterChildren Whether to limit group list to children of groups only. If true, shows only groups with parents. If false, shows only groups with no parent. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return NSArray<NSString*>*
-(NSURLSessionTask*) getGroupsForUserWithUserId: (NSNumber*) userId
    filterChildren: (NSNumber*) filterChildren
    completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler;


/// List and search groups
/// <b>Permissions Needed:</b> ANY
///
/// @param filterTemplate Filter for groups using a specific template, by id (optional)
/// @param filterMemberCount Filters groups by member count. Multiple values possible for range search. Format: filter_member_count&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ). Ex: filter_member_count&#x3D;GT,14,LT,17 (optional)
/// @param filterName Filter for groups with names starting with the given string (optional)
/// @param filterUniqueName Filter for groups whose unique_name starts with provided string (optional)
/// @param filterParent Filter for groups with a specific parent, by unique name (optional)
/// @param filterStatus Filter for groups with a certain status (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to name:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceGroupResource_*
-(NSURLSessionTask*) listGroupsWithFilterTemplate: (NSString*) filterTemplate
    filterMemberCount: (NSString*) filterMemberCount
    filterName: (NSString*) filterName
    filterUniqueName: (NSString*) filterUniqueName
    filterParent: (NSString*) filterParent
    filterStatus: (NSString*) filterStatus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceGroupResource_* output, NSError* error)) handler;


/// Send a group message
/// 
///
/// @param uniqueName The group unique name
/// @param chatMessageRequest The chat message request (optional)
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIChatMessageResource*
-(NSURLSessionTask*) postGroupMessageWithUniqueName: (NSString*) uniqueName
    chatMessageRequest: (JSAPIChatMessageRequest*) chatMessageRequest
    completionHandler: (void (^)(JSAPIChatMessageResource* output, NSError* error)) handler;


/// Removes a user from a group
/// <b>Permissions Needed:</b> GROUP_ADMIN or self if open
///
/// @param uniqueName The group unique name
/// @param userId The id of the user to remove
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) removeGroupMemberWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a group
/// If adding/removing/changing parent, user membership in group/new parent groups may be modified. The parent being removed will remove members from this sub group unless they were added explicitly to the parent and the new parent will gain members unless they were already a part of it. <br><br><b>Permissions Needed:</b> GROUP_ADMIN or admin of the group
///
/// @param uniqueName The group unique name
/// @param groupResource The updated group (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateGroupWithUniqueName: (NSString*) uniqueName
    groupResource: (JSAPIGroupResource*) groupResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Change a user's order
/// <b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param uniqueName The group unique name
/// @param userId The user id of the member to modify
/// @param order The new order for the membership
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateGroupMemberPropertiesWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    order: (JSAPIStringWrapper*) order
    completionHandler: (void (^)(NSError* error)) handler;


/// Change a user's membership properties
/// <b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param uniqueName The group unique name
/// @param userId The user id of the member to modify
/// @param properties The new properties for the membership
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateGroupMemberProperties1WithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    properties: (NSObject*) properties
    completionHandler: (void (^)(NSError* error)) handler;


/// Change a user's status
/// <b>Permissions Needed:</b> GROUP_ADMIN
///
/// @param uniqueName The group unique name
/// @param userId The user id of the member to modify
/// @param status The new status for the user
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateGroupMemberStatusWithUniqueName: (NSString*) uniqueName
    userId: (NSNumber*) userId
    status: (NSString*) status
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an group member template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param _id The id of the template
/// @param groupMemberTemplateResource The group member template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateGroupMemberTemplateWithId: (NSString*) _id
    groupMemberTemplateResource: (JSAPITemplateResource*) groupMemberTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;


/// Update a group template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN
///
/// @param _id The id of the template
/// @param groupTemplateResource The group template resource object (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPITemplateResource*
-(NSURLSessionTask*) updateGroupTemplateWithId: (NSString*) _id
    groupTemplateResource: (JSAPITemplateResource*) groupTemplateResource
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;



@end
