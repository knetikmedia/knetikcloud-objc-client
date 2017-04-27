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


#import "JSAPIBehavior.h"
#import "JSAPIProperty.h"
#import "JSAPISku.h"


@protocol JSAPICouponItem
@end

@interface JSAPICouponItem : JSAPIObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The behaviors linked to the item, describing various options and interactions. May not be included in item lists [optional]
 */
@property(nonatomic) NSArray<JSAPIBehavior>* behaviors;
/* A category for filtering items [optional]
 */
@property(nonatomic) NSString* category;
/* The type of coupon 
 */
@property(nonatomic) NSString* couponTypeHint;
/* The date the item was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The amount this coupon is maxed out at.  Applies if coupon_type_hint is coupon_cart [optional]
 */
@property(nonatomic) NSNumber* discountMax;
/* The minimium amount needed in the cart for the coupon to apply.  Applies if coupon_type_hint is coupon_cart [optional]
 */
@property(nonatomic) NSNumber* discountMinCartValue;
/* The type of discount in terms of how it deducts price. Value based discount not available for coupon_cart type coupons 
 */
@property(nonatomic) NSString* discountType;
/* The amount the coupon will discount the item. If discount_type is 'value' this will be a flat amount of currency. If discount type is 'percentage' this will be a fraction (0.2 for 20% off) multiplied by the price of the matching item or items. 
 */
@property(nonatomic) NSNumber* discountValue;
/* Whether or not the item is currently displayable.  Default = true [optional]
 */
@property(nonatomic) NSNumber* displayable;
/* Whether this coupon is exclusive or not (true means cannot be in same cart as another).  Default = false [optional]
 */
@property(nonatomic) NSNumber* exclusive;
/* A list of country ID to include in the blacklist/whitelist geo policy [optional]
 */
@property(nonatomic) NSArray<NSString*>* geoCountryList;
/* Whether to use the geo_country_list as a black list or white list for item geographical availability [optional]
 */
@property(nonatomic) NSString* geoPolicyType;
/* The id of the item [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The id of the item the coupon is applied to.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher [optional]
 */
@property(nonatomic) NSNumber* itemId;
/* A long description of the item [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The maximum quantity of items the coupon can apply to, null if no limit and minimum 1 otherwise.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher [optional]
 */
@property(nonatomic) NSNumber* maxQuantity;
/* The name of the item 
 */
@property(nonatomic) NSString* name;
/* Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default = false [optional]
 */
@property(nonatomic) NSNumber* selfExclusive;
/* Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default = 0 [optional]
 */
@property(nonatomic) NSNumber* shippingTier;
/* A short description of the item, max 255 chars [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart 
 */
@property(nonatomic) NSArray<JSAPISku>* skus;
/* A number to use in sorting items.  Default 500 [optional]
 */
@property(nonatomic) NSNumber* sort;
/* The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store [optional]
 */
@property(nonatomic) NSNumber* storeEnd;
/* The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately [optional]
 */
@property(nonatomic) NSNumber* storeStart;
/* List of tags used for filtering items [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null [optional]
 */
@property(nonatomic) NSString* template;
/* The type of the item 
 */
@property(nonatomic) NSString* typeHint;
/* The unique key for the item [optional]
 */
@property(nonatomic) NSString* uniqueKey;
/* The date the item was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* A list of tags for a coupon.  The coupon can only apply to an item that has at least one of these tags.  Applies if coupon_type_hint is coupon_tag [optional]
 */
@property(nonatomic) NSArray<NSString*>* validForTags;
/* The vendor who provides the item 
 */
@property(nonatomic) NSNumber* vendorId;

@end
