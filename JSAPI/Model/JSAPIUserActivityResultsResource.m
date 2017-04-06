#import "JSAPIUserActivityResultsResource.h"

@implementation JSAPIUserActivityResultsResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"currencyRewards": @"currency_rewards", @"itemRewards": @"item_rewards", @"rank": @"rank", @"score": @"score", @"tags": @"tags", @"ties": @"ties", @"user": @"user" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"currencyRewards", @"itemRewards", @"rank", @"score", @"tags", @"ties", ];
  return [optionalProperties containsObject:propertyName];
}

@end
