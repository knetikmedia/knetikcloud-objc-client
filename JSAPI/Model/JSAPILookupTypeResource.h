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





@protocol JSAPILookupTypeResource
@end

@interface JSAPILookupTypeResource : JSAPIObject

/* The description of the expression type 
 */
@property(nonatomic) NSString* _description;
/* The variable type the key expression must be, or null if it's dependent (see description for explanation in this case) 
 */
@property(nonatomic) NSString* keyType;
/* The name of the expression type 
 */
@property(nonatomic) NSString* name;
/* The variable type of the value this expression returns, or null if it's dependent (see description for explanation in this case) 
 */
@property(nonatomic) NSString* valueType;

+ (NSDictionary *)modalDictionary;

@end
