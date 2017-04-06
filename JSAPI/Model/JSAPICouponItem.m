#import "JSAPICouponItem.h"

@implementation JSAPICouponItem

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"behaviors": @"behaviors", @"category": @"category", @"couponTypeHint": @"coupon_type_hint", @"createdDate": @"created_date", @"discountMax": @"discount_max", @"discountMinCartValue": @"discount_min_cart_value", @"discountType": @"discount_type", @"discountValue": @"discount_value", @"displayable": @"displayable", @"exclusive": @"exclusive", @"geoCountryList": @"geo_country_list", @"geoPolicyType": @"geo_policy_type", @"_id": @"id", @"itemId": @"item_id", @"longDescription": @"long_description", @"maxQuantity": @"max_quantity", @"name": @"name", @"selfExclusive": @"self_exclusive", @"shippingTier": @"shipping_tier", @"shortDescription": @"short_description", @"skus": @"skus", @"sort": @"sort", @"storeEnd": @"store_end", @"storeStart": @"store_start", @"tags": @"tags", @"template": @"template", @"typeHint": @"type_hint", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date", @"validForTags": @"valid_for_tags", @"vendorId": @"vendor_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"behaviors", @"category", @"createdDate", @"discountMax", @"discountMinCartValue", @"displayable", @"exclusive", @"geoCountryList", @"geoPolicyType", @"_id", @"itemId", @"longDescription", @"maxQuantity", @"selfExclusive", @"shippingTier", @"shortDescription", @"sort", @"storeEnd", @"storeStart", @"tags", @"template", @"uniqueKey", @"updatedDate", @"validForTags", ];
  return [optionalProperties containsObject:propertyName];
}

@end
