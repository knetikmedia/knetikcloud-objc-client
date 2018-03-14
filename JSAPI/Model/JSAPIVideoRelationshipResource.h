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



@protocol JSAPIVideoRelationshipResource
@end

@interface JSAPIVideoRelationshipResource : JSAPIObject

/* The owner of the relationship [optional]
 */
@property(nonatomic) JSAPISimpleReferenceResourceLong_* from;
/* The id of the relationship [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Details about the relationship such as type or other information. Max length 10 characters 
 */
@property(nonatomic) NSString* relationshipDetails;
/* The target of the relationship. 
 */
@property(nonatomic) JSAPISimpleReferenceResourceLong_* to;

+ (NSDictionary *)modalDictionary;

@end
