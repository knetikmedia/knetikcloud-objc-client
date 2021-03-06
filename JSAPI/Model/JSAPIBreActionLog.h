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





@protocol JSAPIBreActionLog
@end

@interface JSAPIBreActionLog : JSAPIObject

/* The name of the action [optional]
 */
@property(nonatomic) NSString* name;
/* The runtime of the action in milliseconds [optional]
 */
@property(nonatomic) NSNumber* runtime;
/* The status of the action (ran, failed) [optional]
 */
@property(nonatomic) NSString* status;

+ (NSDictionary *)modalDictionary;

@end
