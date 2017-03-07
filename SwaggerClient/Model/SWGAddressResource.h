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




@protocol SWGAddressResource
@end

@interface SWGAddressResource : SWGObject

/* The first line of the address 
 */
@property(nonatomic) NSString* address1;
/* A second line of the address [optional]
 */
@property(nonatomic) NSString* address2;
/* The city 
 */
@property(nonatomic) NSString* city;
/* The iso3 code for the country 
 */
@property(nonatomic) NSString* countryCode;
/* The postal code [optional]
 */
@property(nonatomic) NSString* postalCode;
/* The code for the state. Required if the country has states/provinces/equivalent [optional]
 */
@property(nonatomic) NSString* stateCode;

@end
