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





@protocol JSAPIQuickBuyRequest
@end

@interface JSAPIQuickBuyRequest : JSAPIObject

/* SKU of item being purchased 
 */
@property(nonatomic) NSString* sku;
/* ID of the user making the purchase. If null, currently logged in user will be used. [optional]
 */
@property(nonatomic) NSNumber* userId;

+ (NSDictionary *)modalDictionary;

@end
