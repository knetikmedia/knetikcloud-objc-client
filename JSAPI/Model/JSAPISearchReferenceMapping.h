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





@protocol JSAPISearchReferenceMapping
@end

@interface JSAPISearchReferenceMapping : JSAPIObject

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

+ (NSDictionary *)modalDictionary;

@end