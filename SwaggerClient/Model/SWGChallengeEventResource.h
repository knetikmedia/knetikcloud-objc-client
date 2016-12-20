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




@protocol SWGChallengeEventResource
@end

@interface SWGChallengeEventResource : SWGObject

/* The id of the challenge [optional]
 */
@property(nonatomic) NSNumber* challengeId;
/* The end date in seconds [optional]
 */
@property(nonatomic) NSNumber* endDate;
/* The id of the challenge event [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Indicate if the rewards have been given out already  [optional]
 */
@property(nonatomic) NSString* rewardStatus;
/* The start date in seconds [optional]
 */
@property(nonatomic) NSNumber* startDate;

@end