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




@protocol SWGPayBySavedMethodRequest
@end

@interface SWGPayBySavedMethodRequest : SWGObject

/* The id of the payment method to use. Must belong to the caller, be public or have PAYMENTS_ADMIN permission 
 */
@property(nonatomic) NSNumber* paymentMethod;

@end
