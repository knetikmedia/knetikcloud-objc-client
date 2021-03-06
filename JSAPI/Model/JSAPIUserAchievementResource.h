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





@protocol JSAPIUserAchievementResource
@end

@interface JSAPIUserAchievementResource : JSAPIObject

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

+ (NSDictionary *)modalDictionary;

@end
