#import "JSAPICatalogSale.h"

@implementation JSAPICatalogSale

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

  return @{ @"currencyCode": @"currency_code", @"discountType": @"discount_type", @"discountValue": @"discount_value", @"_id": @"id", @"item": @"item", @"longDescription": @"long_description", @"name": @"name", @"saleEndDate": @"sale_end_date", @"saleStartDate": @"sale_start_date", @"shortDescription": @"short_description", @"tag": @"tag", @"vendor": @"vendor" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"discountValue", @"_id", @"item", @"longDescription", @"saleEndDate", @"shortDescription", @"tag", @"vendor"];

  return [optionalProperties containsObject:propertyName];
}

@end
