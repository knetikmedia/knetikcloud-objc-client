#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

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




@protocol JSAPILimitedGettableGroup
@end

@interface JSAPILimitedGettableGroup : JSAPIObject

/* Whether to get active items only 
 */
@property(nonatomic) NSNumber* activeOnly;
/* The name of the group. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that owned_limit and active_only will be the same for all, but this is not enforced and the item being recieved will use its settings. [optional]
 */
@property(nonatomic) NSString* name;
/* The max number of items that can be purchased 
 */
@property(nonatomic) NSNumber* ownedLimit;

@end
