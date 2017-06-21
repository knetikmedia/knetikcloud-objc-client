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




@protocol JSAPIRefundResource
@end

@interface JSAPIRefundResource : JSAPIObject

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
