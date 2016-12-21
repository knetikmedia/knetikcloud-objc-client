#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGBreTriggerParameterDefinition
@end

@interface SWGBreTriggerParameterDefinition : SWGObject

/* The name of the parameter. This is used as the unique identifier of this parameter 
 */
@property(nonatomic) NSString* name;
/* The variable type of this parameter. See Bre Variables endpoint for list 
 */
@property(nonatomic) NSString* type;

@end
