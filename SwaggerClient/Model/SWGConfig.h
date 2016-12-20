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




@protocol SWGConfig
@end

@interface SWGConfig : SWGObject

/* The name of the config 
 */
@property(nonatomic) NSString* name;
/* Whether the config is public for viewing. True means that it can be publicly viewed by all. Default: false [optional]
 */
@property(nonatomic) NSNumber* publicRead;
/* The value of the config [optional]
 */
@property(nonatomic) NSString* value;

@end