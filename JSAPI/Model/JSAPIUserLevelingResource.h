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





@protocol JSAPIUserLevelingResource
@end

@interface JSAPIUserLevelingResource : JSAPIObject

/* The name of the last tier the user has qualified for 
 */
@property(nonatomic) NSString* lastTierName;
/* The progress level of the last tier the user has qualified for 
 */
@property(nonatomic) NSNumber* lastTierProgress;
/* The name of the level schema 
 */
@property(nonatomic) NSString* levelName;
/* The name of the next tier the user can qualify for 
 */
@property(nonatomic) NSString* nextTierName;
/* The progress needed to qualify for the next tier 
 */
@property(nonatomic) NSNumber* nextTierProgress;
/* The amount of progress the user has 
 */
@property(nonatomic) NSNumber* progress;
/* The names of the tiers the user has qualified for 
 */
@property(nonatomic) NSArray<NSString*>* tierNames;
/* The ID of the user 
 */
@property(nonatomic) NSNumber* userId;

+ (NSDictionary *)modalDictionary;

@end