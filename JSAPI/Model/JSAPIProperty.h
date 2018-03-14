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





@protocol JSAPIProperty
@end

@interface JSAPIProperty : JSAPIObject

/* The type of the property. Used for polymorphic type recognition and thus must match an expected type with additional properties. 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end
