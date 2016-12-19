#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGReactivateSubscriptionRequest
@end

@interface SWGReactivateSubscriptionRequest : SWGObject

/* The inventory to reactivate. Only required if using the deprecated subscriptions service [optional]
 */
@property(nonatomic) NSNumber* inventoryId;
/* Whether to add the additional reactivation fee in addition to the recurring fee [optional]
 */
@property(nonatomic) NSNumber* reactivationFee;

@end
