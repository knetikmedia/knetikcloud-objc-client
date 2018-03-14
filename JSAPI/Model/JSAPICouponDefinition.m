#import "JSAPICouponDefinition.h"

@implementation JSAPICouponDefinition

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"code": @"code", @"_description": @"description", @"discountType": @"discount_type", @"exclusive": @"exclusive", @"maxDiscount": @"max_discount", @"maxQuantity": @"max_quantity", @"minCartTotal": @"min_cart_total", @"name": @"name", @"selfExclusive": @"self_exclusive", @"targetItemId": @"target_item_id", @"type": @"type", @"uniqueKey": @"unique_key", @"validForTags": @"valid_for_tags", @"value": @"value", @"vendorId": @"vendor_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_description", @"exclusive", @"maxDiscount", @"maxQuantity", @"minCartTotal", @"selfExclusive", @"targetItemId", @"validForTags", @"vendorId"];

  return [optionalProperties containsObject:propertyName];
}

@end
