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


#import "SWGActivityEntitlementResource.h"
#import "SWGActivityUserResource.h"
#import "SWGSelectedSettingResource.h"


@protocol SWGActivityOccurrenceResource
@end

@interface SWGActivityOccurrenceResource : SWGObject

/* The id of the activity 
 */
@property(nonatomic) NSNumber* activityId;
/* The id of the challenge activity (as part of the event, required if eventId set) [optional]
 */
@property(nonatomic) NSNumber* challengeActivityId;
/* The date this occurrence was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity [optional]
 */
@property(nonatomic) SWGActivityEntitlementResource* entitlement;
/* The id of the event [optional]
 */
@property(nonatomic) NSNumber* eventId;
/* The id of the activity occurrence [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Indicate if the rewards have been given out already [optional]
 */
@property(nonatomic) NSString* rewardStatus;
/* The list of settings and their options available for this activity. Should be null on create if and only if part of an event [optional]
 */
@property(nonatomic) NSArray<SWGSelectedSettingResource>* settings;
/* Whether this occurrence will be played as a simulation. [optional]
 */
@property(nonatomic) NSNumber* simulated;
/* The date this occurrence was started, unix timestamp in seconds. null if not yet started [optional]
 */
@property(nonatomic) NSNumber* startDate;
/* The current status of the occurrence (default: OPEN) [optional]
 */
@property(nonatomic) NSString* status;
/* The date this occurrence was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The list of users playing in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission [optional]
 */
@property(nonatomic) NSArray<SWGActivityUserResource>* users;

@end
