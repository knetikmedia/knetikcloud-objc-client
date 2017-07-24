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


#import "JSAPIBehavior.h"


@protocol JSAPIFulfillable
@end

@interface JSAPIFulfillable : JSAPIBehavior

/* The name of the fulfillment type that describes how the item should be fulfilled.  Examples: inventory, wallet, amazon 
 */
@property(nonatomic) NSString* typeName;


@end
