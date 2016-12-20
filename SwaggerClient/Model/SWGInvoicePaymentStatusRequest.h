#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGInvoicePaymentStatusRequest
@end

@interface SWGInvoicePaymentStatusRequest : SWGObject

/* If included, will set the payment method used on the invoice [optional]
 */
@property(nonatomic) NSNumber* paymentMethodId;
/* The new status for the invoice. Additional options may be available based on configuration.  Allowable values: 'new', 'paid', 'hold', 'canceled', 'payment failed', 'partial refund', 'refund' 
 */
@property(nonatomic) NSString* status;

@end
