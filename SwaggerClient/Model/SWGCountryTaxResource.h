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




@protocol SWGCountryTaxResource
@end

@interface SWGCountryTaxResource : SWGObject

/* The iso3 code of the country, cannot be changed 
 */
@property(nonatomic) NSString* countryIso3;
/* The name of the tax 
 */
@property(nonatomic) NSString* name;
/* The tax rate as a percentage to a maximum of two decimal places (1.5 means 1.5%) 
 */
@property(nonatomic) NSNumber* rate;
/* Whether the tax applies to shipping costs 
 */
@property(nonatomic) NSNumber* taxShipping;

@end
