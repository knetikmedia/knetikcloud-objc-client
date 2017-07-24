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




@protocol JSAPISelectedSettingResource
@end

@interface JSAPISelectedSettingResource : JSAPIObject

/* The unique ID for the setting 
 */
@property(nonatomic) NSString* key;
/* The textual name of the setting 
 */
@property(nonatomic) NSString* keyName;
/* The unique ID for the option. Must match one of the options from this setting in the activity, if not part of a challenge 
 */
@property(nonatomic) NSString* value;
/* The textual name of the option 
 */
@property(nonatomic) NSString* valueName;

+ (NSDictionary *)modalDictionary;

@end
