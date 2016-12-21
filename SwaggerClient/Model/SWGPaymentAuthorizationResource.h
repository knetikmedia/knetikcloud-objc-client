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


#import "SWGSimpleReferenceResourceInt_.h"


@protocol SWGPaymentAuthorizationResource
@end

@interface SWGPaymentAuthorizationResource : SWGObject

/* Whether this authorization has been captured [optional]
 */
@property(nonatomic) NSNumber* captured;
/* The date this authorization was received, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* created;
/* The details for this authorization. Format dependent on payment provider [optional]
 */
@property(nonatomic) NSObject* details;
/* The id of the authorization [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The invoice this authorization is intended to pay [optional]
 */
@property(nonatomic) NSNumber* invoice;
/* The payment type (which provider) this payment is through 
 */
@property(nonatomic) SWGSimpleReferenceResourceInt_* paymentType;

@end
