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




@protocol SWGFinalizeBillingAgreementRequest
@end

@interface SWGFinalizeBillingAgreementRequest : SWGObject

/* The ID of the invoice being paid along with the creation of this agreement [optional]
 */
@property(nonatomic) NSNumber* invoiceId;
/* Whether the new payment method created should be the user's default [optional]
 */
@property(nonatomic) NSNumber* varNewDefault;
/* The payer ID from PayPal (passed as a parameter in the return URL). Only required if an invoice ID was included [optional]
 */
@property(nonatomic) NSString* payerId;
/* The token from PayPal (passed as a parameter in the return URL) 
 */
@property(nonatomic) NSString* token;
/* The ID of the user. Defaults to the logged in user [optional]
 */
@property(nonatomic) NSNumber* userId;

@end