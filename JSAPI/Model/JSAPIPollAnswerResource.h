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




@protocol JSAPIPollAnswerResource
@end

@interface JSAPIPollAnswerResource : JSAPIObject

/* The number of users that selected this answer [optional]
 */
@property(nonatomic) NSNumber* count;
/* The key to the answer (for code reference) 
 */
@property(nonatomic) NSString* key;
/* The text of the answer (for user display) 
 */
@property(nonatomic) NSString* text;

@end
