#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

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


#import "JSAPIPermissionResource.h"


@protocol JSAPIRoleResource
@end

@interface JSAPIRoleResource : JSAPIObject

/* The number of clients this role is assigned to [optional]
 */
@property(nonatomic) NSNumber* clientCount;
/* The date the role was added. Unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* Whether a role is locked from being deleted [optional]
 */
@property(nonatomic) NSNumber* locked;
/* The name of the role used for display purposes 
 */
@property(nonatomic) NSString* name;
/* The keyword that defines the role 
 */
@property(nonatomic) NSString* role;
/* The list of permissions this role has [optional]
 */
@property(nonatomic) NSArray<JSAPIPermissionResource>* rolePermission;
/* The number of users this role is assigned to [optional]
 */
@property(nonatomic) NSNumber* userCount;

+ (NSDictionary *)modalDictionary;

@end
