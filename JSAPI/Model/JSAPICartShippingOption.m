#import "JSAPICartShippingOption.h"

@implementation JSAPICartShippingOption

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

  return @{ @"currencyCode": @"currency_code", @"_description": @"description", @"name": @"name", @"originalPrice": @"original_price", @"price": @"price", @"shippingItemId": @"shipping_item_id", @"sku": @"sku", @"taxable": @"taxable", @"vendorId": @"vendor_id", @"vendorName": @"vendor_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"currencyCode", @"_description", @"name", @"originalPrice", @"price", @"shippingItemId", @"sku", @"taxable", @"vendorId", @"vendorName"];

  return [optionalProperties containsObject:propertyName];
}

@end
