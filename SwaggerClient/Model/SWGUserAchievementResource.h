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




@protocol SWGUserAchievementResource
@end

@interface SWGUserAchievementResource : SWGObject

/* Flag indicating whether the user has earned the achievement [optional]
 */
@property(nonatomic) NSNumber* achieved;
/* The achievement being tracked.  If used for Leveling, this represents the tier name 
 */
@property(nonatomic) NSString* achievementName;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The date/time the achievement was earned as a unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* earnedDate;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end