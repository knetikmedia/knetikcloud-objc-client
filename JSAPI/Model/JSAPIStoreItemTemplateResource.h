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


#import "JSAPIItemBehaviorDefinitionResource.h"
#import "JSAPIPropertyDefinitionResource.h"
#import "JSAPITemplateResource.h"
@protocol JSAPIItemBehaviorDefinitionResource;
@class JSAPIItemBehaviorDefinitionResource;
@protocol JSAPIPropertyDefinitionResource;
@class JSAPIPropertyDefinitionResource;
@protocol JSAPITemplateResource;
@class JSAPITemplateResource;



@protocol JSAPIStoreItemTemplateResource
@end

@interface JSAPIStoreItemTemplateResource : JSAPIObject

/* The customized behaviors that are required or default for this type of item [optional]
 */
@property(nonatomic) NSArray<JSAPIItemBehaviorDefinitionResource>* behaviors;
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
@property(nonatomic) NSArray<JSAPIPropertyDefinitionResource>* properties;
/* A template to apply to all skus on an item using this template [optional]
 */
@property(nonatomic) JSAPITemplateResource* skuTemplate;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end