#import "SWGRewardItemResource.h"

@implementation SWGRewardItemResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"itemId": @"item_id", @"itemName": @"item_name", @"maxRank": @"max_rank", @"minRank": @"min_rank", @"quantity": @"quantity" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"itemName", ];
  return [optionalProperties containsObject:propertyName];
}

@end
