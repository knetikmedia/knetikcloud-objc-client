#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGGroupMemberResource
@end

@interface SWGGroupMemberResource : SWGObject

/* The url of the user's avatar image [optional]
 */
@property(nonatomic) NSString* avatarUrl;
/* The public username of the user [optional]
 */
@property(nonatomic) NSString* displayName;
/* The id of the user 
 */
@property(nonatomic) NSNumber* _id;
/* The member's access level. Default: member 
 */
@property(nonatomic) NSString* status;
/* The username of the user [optional]
 */
@property(nonatomic) NSString* username;

@end
