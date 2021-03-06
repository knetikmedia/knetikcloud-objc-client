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





@protocol JSAPIBareActivityResource
@end

@interface JSAPIBareActivityResource : JSAPIObject

/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Details about how to launch the activity [optional]
 */
@property(nonatomic) NSString* launch;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The user friendly name of that resource 
 */
@property(nonatomic) NSString* name;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* Whether this activity is a template for other activities. Default: false [optional]
 */
@property(nonatomic) NSNumber* template;
/* The type of the activity [optional]
 */
@property(nonatomic) NSString* type;
/* The unique key (for static reference in code) of the activity [optional]
 */
@property(nonatomic) NSString* uniqueKey;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end
