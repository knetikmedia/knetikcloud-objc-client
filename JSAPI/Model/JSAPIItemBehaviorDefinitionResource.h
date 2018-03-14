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


#import "JSAPIBehavior.h"
@protocol JSAPIBehavior;
@class JSAPIBehavior;



@protocol JSAPIItemBehaviorDefinitionResource
@end

@interface JSAPIItemBehaviorDefinitionResource : JSAPIObject

/* The default version of the behavior 
 */
@property(nonatomic) JSAPIBehavior* behavior;
/* Whether the behavior's values can be modified 
 */
@property(nonatomic) NSNumber* modifiable;
/* Whether the behavior can be removed 
 */
@property(nonatomic) NSNumber* required;

+ (NSDictionary *)modalDictionary;

@end
