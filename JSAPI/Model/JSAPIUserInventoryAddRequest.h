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




@protocol JSAPIUserInventoryAddRequest
@end

@interface JSAPIUserInventoryAddRequest : JSAPIObject

/* A note to be passed to the invoice or transaction 
 */
@property(nonatomic) NSString* note;
/* A list of behaviors to ignore explicitely.  Ex: 'limited_gettable' [optional]
 */
@property(nonatomic) NSArray<NSString*>* overrides;
/* If set to true will cause the endpoint to skip creation of cart and invoice to track the inventory change 
 */
@property(nonatomic) NSNumber* skipInvoice;
/* The specific SKU of the item to be added to the inventory 
 */
@property(nonatomic) NSString* sku;

+ (NSDictionary *)modalDictionary;

@end
