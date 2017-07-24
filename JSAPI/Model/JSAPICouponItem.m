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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {
  NSMutableDictionary * mutableDictionary = [[NSMutableDictionary alloc] initWithDictionary:[super modalDictionary] copyItems:NO];
    
  [mutableDictionary addEntriesFromDictionary:@{ @"couponTypeHint": @"coupon_type_hint", @"discountMax": @"discount_max", @"discountMinCartValue": @"discount_min_cart_value", @"discountType": @"discount_type", @"discountValue": @"discount_value", @"exclusive": @"exclusive", @"itemId": @"item_id", @"maxQuantity": @"max_quantity", @"selfExclusive": @"self_exclusive", @"validForTags": @"valid_for_tags" }];
    
  return mutableDictionary;
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"discountMax", @"discountMinCartValue", @"exclusive", @"itemId", @"maxQuantity", @"selfExclusive", @"validForTags"];
  return [super propertyIsOptional:propertyName] | [optionalProperties containsObject:propertyName];
}

@end
