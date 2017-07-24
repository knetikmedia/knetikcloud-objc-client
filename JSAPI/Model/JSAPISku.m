#import "JSAPISku.h"

@implementation JSAPISku

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

  return @{ @"additionalProperties": @"additional_properties", @"currencyCode": @"currency_code", @"_description": @"description", @"inventory": @"inventory", @"minInventoryThreshold": @"min_inventory_threshold", @"originalPrice": @"original_price", @"price": @"price", @"published": @"published", @"saleId": @"sale_id", @"saleName": @"sale_name", @"sku": @"sku", @"startDate": @"start_date", @"stopDate": @"stop_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"inventory", @"minInventoryThreshold", @"price", @"published", @"saleId", @"saleName", @"startDate", @"stopDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
