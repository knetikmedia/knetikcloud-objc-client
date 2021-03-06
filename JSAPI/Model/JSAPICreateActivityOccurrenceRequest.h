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


#import "JSAPICoreActivityOccurrenceSettings.h"
#import "JSAPIItemIdRequest.h"
#import "JSAPIParticipant.h"
#import "JSAPISelectedSettingRequest.h"
@protocol JSAPICoreActivityOccurrenceSettings;
@class JSAPICoreActivityOccurrenceSettings;
@protocol JSAPIItemIdRequest;
@class JSAPIItemIdRequest;
@protocol JSAPIParticipant;
@class JSAPIParticipant;
@protocol JSAPISelectedSettingRequest;
@class JSAPISelectedSettingRequest;



@protocol JSAPICreateActivityOccurrenceRequest
@end

@interface JSAPICreateActivityOccurrenceRequest : JSAPIObject

/* The id of the activity, only needed when outside of challenge/event [optional]
 */
@property(nonatomic) NSNumber* activityId;
/* The id of the challenge activity (required if playing in a challenge/event). Note that this is the challenge_activity_id in case the same activity apears twice in the challenge. [optional]
 */
@property(nonatomic) NSNumber* challengeActivityId;
/* Defines core settings about the activity that affect how it can be created/played by users. [optional]
 */
@property(nonatomic) JSAPICoreActivityOccurrenceSettings* coreSettings;
/* The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity [optional]
 */
@property(nonatomic) JSAPIItemIdRequest* entitlement;
/* The id of the event this occurence is a part of, if any [optional]
 */
@property(nonatomic) NSNumber* eventId;
/* The host of the occurrence, if not a participant (will be left out of users array). Must be the caller that creates the occurrence unless admin. Requires activity/challenge to allow host_option of 'non_player' if not admin as well [optional]
 */
@property(nonatomic) NSNumber* host;
/* The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity. [optional]
 */
@property(nonatomic) NSArray<JSAPISelectedSettingRequest>* settings;
/* Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials [optional]
 */
@property(nonatomic) NSNumber* simulated;
/* The current status of the occurrence (default: SETUP). [optional]
 */
@property(nonatomic) NSString* status;
/* The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission [optional]
 */
@property(nonatomic) NSArray<JSAPIParticipant>* users;

+ (NSDictionary *)modalDictionary;

@end
