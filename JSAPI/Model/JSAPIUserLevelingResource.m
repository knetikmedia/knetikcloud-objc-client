#import "JSAPIUserLevelingResource.h"

@implementation JSAPIUserLevelingResource

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

  return @{ @"lastTierName": @"last_tier_name", @"lastTierProgress": @"last_tier_progress", @"levelName": @"level_name", @"nextTierName": @"next_tier_name", @"nextTierProgress": @"next_tier_progress", @"progress": @"progress", @"tierNames": @"tier_names", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[];

  return [optionalProperties containsObject:propertyName];
}

@end
