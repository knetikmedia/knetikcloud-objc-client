#import "JSAPIRevenueProductReportResource.h"

@implementation JSAPIRevenueProductReportResource

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

  return @{ @"itemId": @"item_id", @"itemName": @"item_name", @"revenue": @"revenue", @"volume": @"volume" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"itemId", @"itemName", @"revenue", @"volume"];

  return [optionalProperties containsObject:propertyName];
}

@end
