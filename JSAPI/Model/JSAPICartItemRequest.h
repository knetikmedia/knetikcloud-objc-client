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




@protocol JSAPICartItemRequest
@end

@interface JSAPICartItemRequest : JSAPIObject

/* The affiliate key of the item [optional]
 */
@property(nonatomic) NSString* affiliateKey;
/* The catalog SKU of the item 
 */
@property(nonatomic) NSString* catalogSku;
/* Allows to override the price of an item, if the behavior configuration permits it 
 */
@property(nonatomic) NSNumber* priceOverride;
/* The quantity of the item 
 */
@property(nonatomic) NSNumber* quantity;

+ (NSDictionary *)modalDictionary;

@end
