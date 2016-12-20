#import "SWGStoreListRequest.h"

@implementation SWGStoreListRequest

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"ignoreLocation": @"ignore_location", @"inStockOnly": @"in_stock_only", @"limit": @"limit", @"page": @"page", @"useCatalog": @"use_catalog" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"ignoreLocation", @"inStockOnly", @"limit", @"page", @"useCatalog"];
  return [optionalProperties containsObject:propertyName];
}

@end
