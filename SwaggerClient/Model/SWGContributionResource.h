#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGSimpleReferenceResourceLong_.h"


@protocol SWGContributionResource
@end

@interface SWGContributionResource : SWGObject

/* A reference to the contributing artist 
 */
@property(nonatomic) SWGSimpleReferenceResourceLong_* artist;
/* A reference to the media being contributed to 
 */
@property(nonatomic) SWGSimpleReferenceResourceLong_* media;
/* The nature of the contribution (role of the artist as in 'producer', 'performer', etc) 
 */
@property(nonatomic) NSString* role;

@end