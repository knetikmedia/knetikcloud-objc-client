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


#import "SWGPaymentMethodTypeResource.h"


@protocol SWGPaymentMethodResource
@end

@interface SWGPaymentMethodResource : SWGObject

/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;

@property(nonatomic) NSNumber* _default;
/* Whether this payment method is disabled or not [optional]
 */
@property(nonatomic) NSNumber* disabled;
/* The expiration date for the payment method, expressed as seconds since epoch. Typically used for credit card payment methods [optional]
 */
@property(nonatomic) NSNumber* expirationDate;
/* The expiration month (1 - 12) for the payment method. Typically used for credit card payment methods [optional]
 */
@property(nonatomic) NSNumber* expirationMonth;
/* The expiration year for the payment method. Typically used for credit card payment methods [optional]
 */
@property(nonatomic) NSNumber* expirationYear;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The last 4 digits of the account number for the payment method. Typically used for credit card payment methods [optional]
 */
@property(nonatomic) NSString* last4;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The user friendly name of that resource 
 */
@property(nonatomic) NSString* name;
/* The type of payment method. Must be a pre-existing value 
 */
@property(nonatomic) SWGPaymentMethodTypeResource* paymentMethodType;
/* The generic payment type. Default is card [optional]
 */
@property(nonatomic) NSString* paymentType;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The sort value for the payment method [optional]
 */
@property(nonatomic) NSNumber* sort;
/* The unique token for the payment method [optional]
 */
@property(nonatomic) NSString* token;
/* An optional unique identifier [optional]
 */
@property(nonatomic) NSString* uniqueKey;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The user's id. If null, indicates a shared payment method that any user can use (i.e., 'wallet') [optional]
 */
@property(nonatomic) NSNumber* userId;

@property(nonatomic) NSNumber* verified;

@end
