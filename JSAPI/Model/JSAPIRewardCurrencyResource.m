#import "JSAPIRewardCurrencyResource.h"

@implementation JSAPIRewardCurrencyResource

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

  return @{ @"currencyCode": @"currency_code", @"currencyName": @"currency_name", @"maxRank": @"max_rank", @"minRank": @"min_rank", @"percent": @"percent", @"value": @"value" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"currencyName", ];

  return [optionalProperties containsObject:propertyName];
}

@end
