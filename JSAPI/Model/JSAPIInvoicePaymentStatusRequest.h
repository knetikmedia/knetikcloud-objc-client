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




@protocol JSAPIInvoicePaymentStatusRequest
@end

@interface JSAPIInvoicePaymentStatusRequest : JSAPIObject

/* If included, will set the payment method used on the invoice [optional]
 */
@property(nonatomic) NSNumber* paymentMethodId;
/* The new status for the invoice. Additional options may be available based on configuration.  Allowable values: 'new', 'paid', 'hold', 'canceled', 'payment failed', 'partial refund', 'refund' 
 */
@property(nonatomic) NSString* status;

+ (NSDictionary *)modalDictionary;

@end
