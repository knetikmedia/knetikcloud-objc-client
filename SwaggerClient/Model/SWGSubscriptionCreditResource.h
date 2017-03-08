#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGSubscriptionCreditResource
@end

@interface SWGSubscriptionCreditResource : SWGObject

/* The amount of the credit, negative for debt 
 */
@property(nonatomic) NSNumber* amount;
/* The date this credit was added, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The id of the credit record [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The id of the subscription inventory entry [optional]
 */
@property(nonatomic) NSNumber* inventoryId;
/* The reason for the subscription credit 
 */
@property(nonatomic) NSString* reason;

@end