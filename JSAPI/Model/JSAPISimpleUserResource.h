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





@protocol JSAPISimpleUserResource
@end

@interface JSAPISimpleUserResource : JSAPIObject

/* The url of the user's avatar image [optional]
 */
@property(nonatomic) NSString* avatarUrl;
/* The public username of the user [optional]
 */
@property(nonatomic) NSString* displayName;
/* The id of the user 
 */
@property(nonatomic) NSNumber* _id;
/* The username of the user [optional]
 */
@property(nonatomic) NSString* username;

+ (NSDictionary *)modalDictionary;

@end