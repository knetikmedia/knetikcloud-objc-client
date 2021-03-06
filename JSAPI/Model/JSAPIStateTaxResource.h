#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol JSAPIStateTaxResource
@end

@interface JSAPIStateTaxResource : JSAPIObject

/* The iso3 code of the country, cannot be changed 
 */
@property(nonatomic) NSString* countryIso3;
/* Whether the state is exempt from paying the country tax 
 */
@property(nonatomic) NSNumber* federallyExempt;
/* The name of the tax 
 */
@property(nonatomic) NSString* name;
/* The tax rate as a percentage to a maximum of two decimal places (1.5 means 1.5%) 
 */
@property(nonatomic) NSNumber* rate;
/* The code of the state, cannot be changed 
 */
@property(nonatomic) NSString* stateCode;
/* Whether the tax applies to shipping costs 
 */
@property(nonatomic) NSNumber* taxShipping;

+ (NSDictionary *)modalDictionary;

@end
