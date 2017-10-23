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


#import "JSAPISimpleReferenceResourceLong_.h"
@protocol JSAPISimpleReferenceResourceLong_;
@class JSAPISimpleReferenceResourceLong_;



@protocol JSAPIContributionResource
@end

@interface JSAPIContributionResource : JSAPIObject

/* A reference to the contributing artist 
 */
@property(nonatomic) JSAPISimpleReferenceResourceLong_* artist;
/* A reference to the media being contributed to 
 */
@property(nonatomic) JSAPISimpleReferenceResourceLong_* media;
/* The nature of the contribution (role of the artist as in 'producer', 'performer', etc) 
 */
@property(nonatomic) NSString* role;

+ (NSDictionary *)modalDictionary;

@end
