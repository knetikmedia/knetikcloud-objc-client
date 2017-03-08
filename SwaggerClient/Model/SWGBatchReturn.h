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




@protocol SWGBatchReturn
@end

@interface SWGBatchReturn : SWGObject

/* The result body 
 */
@property(nonatomic) NSObject* body;
/* The HTTP response code 
 */
@property(nonatomic) NSNumber* code;
/* Full URI of REST call 
 */
@property(nonatomic) NSString* uri;

@end
