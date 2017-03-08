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




@protocol SWGXsollaPaymentRequest
@end

@interface SWGXsollaPaymentRequest : SWGObject

/* The id of an invoice to pay 
 */
@property(nonatomic) NSNumber* invoiceId;
/* The endpoint URL xsolla should forward the user to after they pay 
 */
@property(nonatomic) NSString* returnUrl;

@end
