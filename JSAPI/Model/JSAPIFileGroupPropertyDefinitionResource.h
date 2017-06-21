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


#import "JSAPIPropertyDefinitionResource.h"
#import "JSAPIPropertyFieldListResource.h"


@protocol JSAPIFileGroupPropertyDefinitionResource
@end

@interface JSAPIFileGroupPropertyDefinitionResource : JSAPIPropertyDefinitionResource

/* If provided, a file type that the property must match [optional]
 */
@property(nonatomic) NSString* fileType;
/* If provided, the maximum number of files in the group [optional]
 */
@property(nonatomic) NSNumber* maxCount;
/* If provided, the maximum allowed size per file in bytes [optional]
 */
@property(nonatomic) NSNumber* maxFileSize;
/* If provided, the minimum number of files in the group [optional]
 */
@property(nonatomic) NSNumber* minCount;

@end
