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




@protocol JSAPIApplyPaymentRequest
@end

@interface JSAPIApplyPaymentRequest : JSAPIObject

/* The id of the local invoice being paid. 
 */
@property(nonatomic) NSNumber* invoiceId;
/* The encoded receipt string from Apple's services. 
 */
@property(nonatomic) NSString* receipt;
/* The id of the specific transaction from Apple's services. 
 */
@property(nonatomic) NSString* transactionId;

@end
