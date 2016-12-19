#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGSavedAddressResource
@end

@interface SWGSavedAddressResource : SWGObject

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

@property(nonatomic) NSNumber* _default;
/* The first name of the user 
 */
@property(nonatomic) NSString* firstName;
/* The id of the address [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The last name of the user 
 */
@property(nonatomic) NSString* lastName;
/* The name of the address 
 */
@property(nonatomic) NSString* name;
/* The first phone number of the user [optional]
 */
@property(nonatomic) NSString* phone1;
/* The second phone number of the user [optional]
 */
@property(nonatomic) NSString* phone2;
/* The postal code [optional]
 */
@property(nonatomic) NSString* postalCode;
/* The code for the state. Required if the country has states/provinces/equivalent [optional]
 */
@property(nonatomic) NSString* stateCode;

@end
