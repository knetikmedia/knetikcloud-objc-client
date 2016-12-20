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


#import "SWGRewardCurrencyResource.h"
#import "SWGRewardItemResource.h"
#import "SWGSimpleUserResource.h"


@protocol SWGUserActivityResultsResource
@end

@interface SWGUserActivityResultsResource : SWGObject

/* Any currency rewarded to this user [optional]
 */
@property(nonatomic) NSArray<SWGRewardCurrencyResource>* currencyRewards;
/* Any items rewarded to this user [optional]
 */
@property(nonatomic) NSArray<SWGRewardItemResource>* itemRewards;
/* The position of the user in the leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* rank;
/* The raw score in this leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* score;
/* Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* The number of users tied at this rank, including this user. 1 means no tie [optional]
 */
@property(nonatomic) NSNumber* ties;
/* The player for this entry 
 */
@property(nonatomic) SWGSimpleUserResource* user;

@end