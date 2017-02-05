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


#import "SWGPropertyDefinitionResource.h"


@protocol SWGQuestionTemplateResource
@end

@interface SWGQuestionTemplateResource : SWGObject

/* A property definition for all answers. If included each answer must match this definition's type and be valid [optional]
 */
@property(nonatomic) SWGPropertyDefinitionResource* answerProperty;
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
/* A property definition for the question itself. If included the answer must match this definition's type and be valid [optional]
 */
@property(nonatomic) SWGPropertyDefinitionResource* questionProperty;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end
