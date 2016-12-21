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




@protocol SWGActivityEntitlementResource
@end

@interface SWGActivityEntitlementResource : SWGObject

/* The ISO3 currency code the price is in, if available [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* The id of the entitlement item 
 */
@property(nonatomic) NSNumber* itemId;
/* The name of the entitlement item [optional]
 */
@property(nonatomic) NSString* name;
/* The price of the sku, if available [optional]
 */
@property(nonatomic) NSNumber* price;
/* The sku id, if available. If multiple are available, then first one is returned [optional]
 */
@property(nonatomic) NSString* sku;

@end
