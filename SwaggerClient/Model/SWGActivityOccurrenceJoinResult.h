#import <Foundation/Foundation.h>
#import "SWGObject.h"

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


#import "SWGActivityEntitlementResource.h"


@protocol SWGActivityOccurrenceJoinResult
@end

@interface SWGActivityOccurrenceJoinResult : SWGObject

/* The details on the entitlement object needed to enter the occurrence (if any) [optional]
 */
@property(nonatomic) SWGActivityEntitlementResource* entitlement;
/* Zero if the user was/could be added to the occurrence. Jsapi error code indicating the reason of the failure otherwise 
 */
@property(nonatomic) NSNumber* errorCode;
/* An error message if failure [optional]
 */
@property(nonatomic) NSString* message;
/* The user's id 
 */
@property(nonatomic) NSNumber* userId;

@end
