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




@protocol JSAPICatalogSale
@end

@interface JSAPICatalogSale : JSAPIObject

/* The iso3 code for the currency for this discountValue.  The sku purchased will have to match for it this sale to apply 
 */
@property(nonatomic) NSString* currencyCode;
/* The way in which the price is reduced. 'value' means subtracting directly, 'percentage' means subtracting by the price times the discountValue (1.0 == 100%) 
 */
@property(nonatomic) NSString* discountType;
/* The amount deducted from the price, in the same currencyCode as the item [optional]
 */
@property(nonatomic) NSNumber* discountValue;
/* The id of the sale [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The id of the item this sale applies to.  Leave null to use other filters [optional]
 */
@property(nonatomic) NSNumber* item;
/* The long description of the sale [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The name of the sale.  Max 40 characters 
 */
@property(nonatomic) NSString* name;
/* The date the sale ends, null for never.  Unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* saleEndDate;
/* The date the sale begins.  Unix timestamp in seconds 
 */
@property(nonatomic) NSNumber* saleStartDate;
/* The short description of the sale.  Max 140 characters [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The tag this sale applies to.  Leave null to skip this filter (applies to all tags) [optional]
 */
@property(nonatomic) NSString* tag;
/* The id of the vendor this sale applies to.  Leave null to skip this filter (applies to all vendors) [optional]
 */
@property(nonatomic) NSNumber* vendor;

+ (NSDictionary *)modalDictionary;

@end
