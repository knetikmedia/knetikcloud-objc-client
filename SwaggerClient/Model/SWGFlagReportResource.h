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




@protocol SWGFlagReportResource
@end

@interface SWGFlagReportResource : SWGObject

/* The context of that resource  [optional]
 */
@property(nonatomic) NSString* context;
/* The context ID of that resource [optional]
 */
@property(nonatomic) NSString* contextId;
/* The date/time this resource was created in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The reason of that resource required only in case of active resolution [optional]
 */
@property(nonatomic) NSString* reason;
/* The resolution of that resource 
 */
@property(nonatomic) NSString* resolution;
/* The date/time this report was resolved in seconds since epoch. Null if not resolved yet [optional]
 */
@property(nonatomic) NSNumber* resolved;
/* The date/time this resource was last updated in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end