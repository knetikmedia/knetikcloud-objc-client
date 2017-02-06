#import "SWGRevenueReportResource.h"

@implementation SWGRevenueReportResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"customerCount": @"customer_count", @"saleCount": @"sale_count", @"salesAverage": @"sales_average", @"salesTotal": @"sales_total" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"customerCount", @"saleCount", @"salesAverage", @"salesTotal"];
  return [optionalProperties containsObject:propertyName];
}

@end