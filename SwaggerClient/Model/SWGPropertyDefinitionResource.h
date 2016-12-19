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




@protocol SWGPropertyDefinitionResource
@end

@interface SWGPropertyDefinitionResource : SWGObject

/* The name of the property 
 */
@property(nonatomic) NSString* name;
/* Whether the property is required 
 */
@property(nonatomic) NSNumber* required;
/* The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties. 
 */
@property(nonatomic) NSString* type;

@end
