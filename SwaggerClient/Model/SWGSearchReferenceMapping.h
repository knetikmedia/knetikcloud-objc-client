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




@protocol SWGSearchReferenceMapping
@end

@interface SWGSearchReferenceMapping : SWGObject

/* Unique identifier for the mapping to protect against duplicates 
 */
@property(nonatomic) NSString* _id;
/* The field within the type that contains the id from the refType 
 */
@property(nonatomic) NSString* refIdField;
/* The index type that the mapping pulls data from 
 */
@property(nonatomic) NSString* refType;
/* A map whose keys are the field names in the refType and values are the field name in the type 
 */
@property(nonatomic) NSDictionary<NSString*, NSString*>* sourceFieldToDestinationField;
/* The index type that the mapping is for 
 */
@property(nonatomic) NSString* type;

@end
