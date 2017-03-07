#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGDeltaResource
@end

@interface SWGDeltaResource : SWGObject

/* The id of the category for question [optional]
 */
@property(nonatomic) NSString* categoryId;
/* The media type of the question [optional]
 */
@property(nonatomic) NSString* mediaType;
/* The id of the question [optional]
 */
@property(nonatomic) NSString* questionId;
/* Whether the question was updated or removed [optional]
 */
@property(nonatomic) NSString* state;
/* The tags for the question [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* The date this question was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

@end
