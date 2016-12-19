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


#import "SWGSimpleUserResource.h"


@protocol SWGLeaderboardEntryResource
@end

@interface SWGLeaderboardEntryResource : SWGObject

/* The position of the user in the leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* rank;
/* The raw score in this leaderboard. Null means non-compete or disqualification [optional]
 */
@property(nonatomic) NSNumber* score;
/* The player for this entry 
 */
@property(nonatomic) SWGSimpleUserResource* user;

@end
