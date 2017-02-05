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




@protocol SWGFinalizePayPalPaymentRequest
@end

@interface SWGFinalizePayPalPaymentRequest : SWGObject

/* The ID of the invoice that is being paid. Must match the invoice sent in originally 
 */
@property(nonatomic) NSNumber* invoiceId;
/* The ID of the payer that PayPal returned with the user at the return URL 
 */
@property(nonatomic) NSString* payerId;
/* The token that PayPal returned with the user in the return URL 
 */
@property(nonatomic) NSString* token;

@end
