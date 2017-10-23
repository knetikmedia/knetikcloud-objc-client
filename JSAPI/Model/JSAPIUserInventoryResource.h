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


#import "JSAPISimpleUserResource.h"
@protocol JSAPISimpleUserResource;
@class JSAPISimpleUserResource;



@protocol JSAPIUserInventoryResource
@end

@interface JSAPIUserInventoryResource : JSAPIObject

/* A map of data for behaviors [optional]
 */
@property(nonatomic) NSObject* behaviorData;
/* The date/time this resource was created in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The date/time this resource exires in seconds since epoch. Null for no expiration. For subscriptions, this is the end of the 'grace period' if left unpaid [optional]
 */
@property(nonatomic) NSNumber* expires;
/* The id of the inventory [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The id of the invoice that resulted in this inventory, if any [optional]
 */
@property(nonatomic) NSNumber* invoiceId;
/* The id of the item [optional]
 */
@property(nonatomic) NSNumber* itemId;
/* The name of the item [optional]
 */
@property(nonatomic) NSString* itemName;
/* The type hint of the item [optional]
 */
@property(nonatomic) NSString* itemTypeHint;
/* The status of the inventory. Pending inventory is not yet ready for use. Inactive inventory has expired or been used up [optional]
 */
@property(nonatomic) NSString* status;
/* The date/time this resource was last updated in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The id of the user this inventory belongs to [optional]
 */
@property(nonatomic) JSAPISimpleUserResource* user;

+ (NSDictionary *)modalDictionary;

@end
