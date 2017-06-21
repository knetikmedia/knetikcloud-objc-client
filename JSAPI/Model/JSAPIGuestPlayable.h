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


#import "JSAPIBehavior.h"


@protocol JSAPIGuestPlayable
@end

@interface JSAPIGuestPlayable : JSAPIBehavior

/* Whether guests are allowed to use items [optional]
 */
@property(nonatomic) NSNumber* allowed;
/* Whether guests are allowed on the leaderboard [optional]
 */
@property(nonatomic) NSNumber* leaderboard;

@end
