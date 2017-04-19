#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol JSAPICouponDefinition
@end

@interface JSAPICouponDefinition : JSAPIObject

/* A unique identifier for the discount. Can be used to remove the discount, and uniqueness within the cart will be enforced. 
 */
@property(nonatomic) NSString* code;
/* A description for the discount. [optional]
 */
@property(nonatomic) NSString* _description;
/* The type of discount in terms of how it deducts price. 
 */
@property(nonatomic) NSString* discountType;
/* Whether this discount is exclusive and cannot be used in conjunction with other discounts/coupons. default=false [optional]
 */
@property(nonatomic) NSNumber* exclusive;
/* For coupon_cart, a minimum total price that the cart must meet to be valid. [optional]
 */
@property(nonatomic) NSNumber* maxDiscount;
/* The maximum number of items to count this discount for (not for cart_coupon). [optional]
 */
@property(nonatomic) NSNumber* maxQuantity;
/* For coupon_cart, a minimum total price that the cart must meet to be valid. [optional]
 */
@property(nonatomic) NSNumber* minCartTotal;
/* A name for the discount. 
 */
@property(nonatomic) NSString* name;
/* Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false [optional]
 */
@property(nonatomic) NSNumber* selfExclusive;
/* The id of the item this discount applies to, which must be present in the cart. Applies if coupon_type_hint is coupon_single_item or coupon_voucher. [optional]
 */
@property(nonatomic) NSNumber* targetItemId;
/* The type of discount in terms of what it applies to. coupon_cart applies to the cart as a whole, other types apply to specific items based on different criteria. 
 */
@property(nonatomic) NSString* type;
/* A unique identifier string for the discount. 
 */
@property(nonatomic) NSString* uniqueKey;
/* Which tags this applies for (item must have at least one of them), if coupon_type is coupon_tag. [optional]
 */
@property(nonatomic) NSArray<NSString*>* validForTags;
/* The amount of the discount. If discount_type is value then this is the raw currency amount to remove. If discount_type is percentage then this will be multiplied by the cart total or item price to get the discount amount (0.5 is half price). 
 */
@property(nonatomic) NSNumber* value;
/* Which vendor this applies for, if coupon_type is coupon_vendor. [optional]
 */
@property(nonatomic) NSNumber* vendorId;

@end
