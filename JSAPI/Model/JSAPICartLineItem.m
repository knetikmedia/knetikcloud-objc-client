#import "JSAPICartLineItem.h"

@implementation JSAPICartLineItem

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

  return @{ @"currencyCode": @"currency_code", @"_description": @"description", @"discount": @"discount", @"lineTotal": @"line_total", @"name": @"name", @"originalLineTotal": @"original_line_total", @"originalUnitPrice": @"original_unit_price", @"qty": @"qty", @"saleName": @"sale_name", @"sku": @"sku", @"skuDescription": @"sku_description", @"storeItemId": @"store_item_id", @"tags": @"tags", @"thumbUrl": @"thumb_url", @"uniqueKey": @"unique_key", @"unitPrice": @"unit_price", @"vendorId": @"vendor_id", @"vendorName": @"vendor_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"currencyCode", @"_description", @"discount", @"lineTotal", @"name", @"originalLineTotal", @"originalUnitPrice", @"qty", @"saleName", @"sku", @"skuDescription", @"storeItemId", @"tags", @"thumbUrl", @"uniqueKey", @"unitPrice", @"vendorId", @"vendorName"];

  return [optionalProperties containsObject:propertyName];
}

@end
