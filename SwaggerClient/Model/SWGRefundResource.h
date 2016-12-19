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




@protocol SWGRefundResource
@end

@interface SWGRefundResource : SWGObject

/* The amount refunded [optional]
 */
@property(nonatomic) NSNumber* amount;
/* The id of the refund transaction [optional]
 */
@property(nonatomic) NSNumber* refundTransactionId;
/* The id of the original transaction [optional]
 */
@property(nonatomic) NSNumber* transactionId;

@end