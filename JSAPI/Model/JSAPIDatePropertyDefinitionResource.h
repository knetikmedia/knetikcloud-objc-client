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


@protocol JSAPIDatePropertyDefinitionResource
@end

@interface JSAPIDatePropertyDefinitionResource : JSAPIPropertyDefinitionResource

/* If provided, the maximum value [optional]
 */
@property(nonatomic) NSNumber* max;
/* If provided, the minimum value [optional]
 */
@property(nonatomic) NSNumber* min;

@end
