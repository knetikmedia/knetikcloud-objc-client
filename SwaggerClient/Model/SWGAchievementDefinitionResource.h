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


#import "SWGProperty.h"


@protocol SWGAchievementDefinitionResource
@end

@interface SWGAchievementDefinitionResource : SWGObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type [optional]
 */
@property(nonatomic) NSDictionary<SWGProperty>* additionalProperties;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The description of the achievement. Must be at least 2 characters in length. [optional]
 */
@property(nonatomic) NSString* _description;
/* Whether the achievement is hidden from the user 
 */
@property(nonatomic) NSNumber* hidden;
/* The maximum value for the achievement definition. Must be greater than or equal to min_value. 
 */
@property(nonatomic) NSNumber* maxValue;
/* The minimum value for the achievement definition. Must be greater than zero. 
 */
@property(nonatomic) NSNumber* minValue;
/* The name of the achievement. Must be at least 6 characters in length. IMMUTABLE 
 */
@property(nonatomic) NSString* name;
/* The id of the rule generated for this achievement [optional]
 */
@property(nonatomic) NSString* ruleId;
/* The tags for the achievement definition [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* An achievement template this achievement is validated against (private). May be null and no validation of additional_properties will be done [optional]
 */
@property(nonatomic) NSString* template;
/* The name of the trigger event associated with this achievement [optional]
 */
@property(nonatomic) NSString* triggerEventName;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end
