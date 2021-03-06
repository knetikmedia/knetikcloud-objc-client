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





@protocol JSAPIBreGlobalScopeDefinition
@end

@interface JSAPIBreGlobalScopeDefinition : JSAPIObject

/* The name of the scoping parameter. This is used as the unique identifier of this scope 
 */
@property(nonatomic) NSString* name;
/* The variable type of this scoping parameter. See Bre Variables endpoint for list 
 */
@property(nonatomic) NSString* type;

+ (NSDictionary *)modalDictionary;

@end
