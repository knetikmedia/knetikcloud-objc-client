#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGSimpleUserResource.h"


@protocol SWGUserRelationshipResource
@end

@interface SWGUserRelationshipResource : SWGObject

/* The child in the relationship 
 */
@property(nonatomic) SWGSimpleUserResource* child;
/* Context about the relationship or its type [optional]
 */
@property(nonatomic) NSString* context;
/* A generated unique id. Read-Only [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The parent in the relationship 
 */
@property(nonatomic) SWGSimpleUserResource* parent;

@end