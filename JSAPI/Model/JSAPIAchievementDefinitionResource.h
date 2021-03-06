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


#import "JSAPIProperty.h"
@protocol JSAPIProperty;
@class JSAPIProperty;



@protocol JSAPIAchievementDefinitionResource
@end

@interface JSAPIAchievementDefinitionResource : JSAPIObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The description of the achievement. Must be at least 2 characters in length. [optional]
 */
@property(nonatomic) NSString* _description;
/* Whether the achievement is hidden from the user 
 */
@property(nonatomic) NSNumber* hidden;
/* The name of the achievement. Must be at least 6 characters in length. IMMUTABLE 
 */
@property(nonatomic) NSString* name;
/* The required progress for the achievement definition 
 */
@property(nonatomic) NSNumber* requiredProgress;
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

+ (NSDictionary *)modalDictionary;

@end
