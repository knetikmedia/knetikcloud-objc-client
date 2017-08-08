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
#import "JSAPISchedule.h"
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPIRewardSetResource;
@class JSAPIRewardSetResource;
@protocol JSAPISchedule;
@class JSAPISchedule;



@protocol JSAPIChallengeResource
@end

@interface JSAPIChallengeResource : JSAPIObject

/* The number of activities allowed to this challenge [optional]
 */
@property(nonatomic) NSNumber* activities;
/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The id of the campaign this challenge is a part of. The challenge must be tied to an active campaign before it will spawn events [optional]
 */
@property(nonatomic) NSNumber* campaignId;
/* The ID of the original challenge it was copied from [optional]
 */
@property(nonatomic) NSNumber* varCopyOf;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The end date of this challenge in seconds since epoch. required if part of a campaign [optional]
 */
@property(nonatomic) NSNumber* endDate;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service. [optional]
 */
@property(nonatomic) NSString* leaderboardStrategy;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The user friendly name of that resource 
 */
@property(nonatomic) NSString* name;
/* The next date this challenge will be occur in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* nextEventDate;
/* The number of minutes minimum to wait at the end of this challenge before running rewards, to allow activities to complete [optional]
 */
@property(nonatomic) NSNumber* rewardLagMinutes;
/* The rewards to give at the end of the challenge. When creating/updating only id is used. Reward set must be pre-existing [optional]
 */
@property(nonatomic) JSAPIRewardSetResource* rewardSet;
/* The repeat schedule for the challenge [optional]
 */
@property(nonatomic) JSAPISchedule* schedule;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The start date of this challenge in seconds since epoch. required if part of a campaign [optional]
 */
@property(nonatomic) NSNumber* startDate;
/* A challenge template this challenge is validated against (private). May be null and no validation of additional_properties will be done [optional]
 */
@property(nonatomic) NSString* template;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end
