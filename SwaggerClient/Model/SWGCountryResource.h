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




@protocol SWGCountryResource
@end

@interface SWGCountryResource : SWGObject

/* The iso2 of the country [optional]
 */
@property(nonatomic) NSString* iso2;
/* The iso3 of the country [optional]
 */
@property(nonatomic) NSString* iso3;
/* The name of the country resource [optional]
 */
@property(nonatomic) NSString* name;

@end
