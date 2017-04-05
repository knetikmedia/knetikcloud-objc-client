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




@protocol JSAPICartShippingAddressRequest
@end

@interface JSAPICartShippingAddressRequest : JSAPIObject

/* The city of the user [optional]
 */
@property(nonatomic) NSString* city;
/* The country code of the user [optional]
 */
@property(nonatomic) NSString* countryCodeIso3;
/* The email of the user [optional]
 */
@property(nonatomic) NSString* email;
/* The first name of the user [optional]
 */
@property(nonatomic) NSString* firstName;
/* The last name of the user [optional]
 */
@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* namePrefix;
/* The order notes the user [optional]
 */
@property(nonatomic) NSString* orderNotes;
/* The phone number of the user [optional]
 */
@property(nonatomic) NSString* phoneNumber;
/* The postal state code of the user [optional]
 */
@property(nonatomic) NSString* postalStateCode;
/* The shipping address of the user, first line [optional]
 */
@property(nonatomic) NSString* shippingAddressLine1;
/* The shipping address of the user, second line [optional]
 */
@property(nonatomic) NSString* shippingAddressLine2;
/* The zipcode of the user [optional]
 */
@property(nonatomic) NSString* zip;

@end
