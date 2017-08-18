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
#import "JSAPIRewardSetResource.h"
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPIRewardSetResource;
@class JSAPIRewardSetResource;



@protocol JSAPICampaignResource
@end

@interface JSAPICampaignResource : JSAPIObject

/* Whether the campaign is active or not.  Defaults to false [optional]
 */
@property(nonatomic) NSNumber* active;
/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service [optional]
 */
@property(nonatomic) NSString* leaderboardStrategy;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The user friendly name of that resource 
 */
@property(nonatomic) NSString* name;
/* The name of the next challenge coming up [optional]
 */
@property(nonatomic) NSString* nextChallenge;
/* The date/time of the next challenge coming up [optional]
 */
@property(nonatomic) NSNumber* nextChallengeDate;
/* The rewards to give at the end of the campaign. When creating/updating only id is used. Reward set must be pre-existing [optional]
 */
@property(nonatomic) JSAPIRewardSetResource* rewardSet;
/* Indicate if the rewards have been given out already [optional]
 */
@property(nonatomic) NSString* rewardStatus;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* A campaign template this campaign is validated against (private). May be null and no validation of additional_properties will be done [optional]
 */
@property(nonatomic) NSString* template;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end