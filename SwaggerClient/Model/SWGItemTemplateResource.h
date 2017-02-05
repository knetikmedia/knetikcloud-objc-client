#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGItemBehaviorDefinitionResource.h"
#import "SWGPropertyDefinitionResource.h"


@protocol SWGItemTemplateResource
@end

@interface SWGItemTemplateResource : SWGObject

/* The customized behaviors that are required or default for this type of item [optional]
 */
@property(nonatomic) NSArray<SWGItemBehaviorDefinitionResource>* behaviors;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The id of the template [optional]
 */
@property(nonatomic) NSString* _id;
/* The name of the template 
 */
@property(nonatomic) NSString* name;
/* The customized properties that are present [optional]
 */
@property(nonatomic) NSArray<SWGPropertyDefinitionResource>* properties;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end
