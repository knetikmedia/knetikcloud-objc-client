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


@protocol JSAPITimePeriodGettable
@end

@interface JSAPITimePeriodGettable : JSAPIBehavior

/* The time period limit 
 */
@property(nonatomic) NSNumber* getLimit;
/* The name of a group of items. Multiple items with the same group name will be limited together, leave null to be assigned a random unique name. It is typical that the other properties here will be the same for all, but this is not enforced and the item being recieved will use its settings. [optional]
 */
@property(nonatomic) NSString* groupName;
/* The length of time 
 */
@property(nonatomic) NSNumber* timeLength;
/* The unit of time 
 */
@property(nonatomic) NSString* unitOfTime;

@end
