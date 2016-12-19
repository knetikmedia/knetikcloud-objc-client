#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGUserInventoryAddRequest
@end

@interface SWGUserInventoryAddRequest : SWGObject

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

@end
