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


#import "JSAPISimpleUserResource.h"


@protocol JSAPIPollResponseResource
@end

@interface JSAPIPollResponseResource : JSAPIObject

/* The answer to the poll 
 */
@property(nonatomic) NSString* answer;
/* The date the poll was answered, in seconds since unix epoc [optional]
 */
@property(nonatomic) NSNumber* answeredDate;
/* The id of the poll response [optional]
 */
@property(nonatomic) NSString* _id;
/* The id of the poll 
 */
@property(nonatomic) NSString* pollId;
/* The user 
 */
@property(nonatomic) JSAPISimpleUserResource* user;

+ (NSDictionary *)modalDictionary;

@end
