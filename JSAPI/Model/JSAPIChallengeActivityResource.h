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


#import "JSAPIActivityEntitlementResource.h"
#import "JSAPIProperty.h"
#import "JSAPIRewardSetResource.h"
#import "JSAPISelectedSettingResource.h"


@protocol JSAPIChallengeActivityResource
@end

@interface JSAPIChallengeActivityResource : JSAPIObject

/* The id of the activity 
 */
@property(nonatomic) NSNumber* activityId;
/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The id of the challenge [optional]
 */
@property(nonatomic) NSNumber* challengeId;
/* The entitlement item needed to participate in the activity as part of this event. Null indicates free entry. When creating/updating only id is used. Item must be pre-existing [optional]
 */
@property(nonatomic) JSAPIActivityEntitlementResource* entitlement;
/* The unique ID for this resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing [optional]
 */
@property(nonatomic) JSAPIRewardSetResource* rewardSet;
/* The list of settings and the select options [optional]
 */
@property(nonatomic) NSArray<JSAPISelectedSettingResource>* settings;
/* A challenge activity template this challenge activity is validated against (private). May be null and no validation of additional_properties will be done [optional]
 */
@property(nonatomic) NSString* template;

@end
