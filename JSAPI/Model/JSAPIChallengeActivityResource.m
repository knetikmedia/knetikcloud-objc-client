#import "JSAPIChallengeActivityResource.h"

@implementation JSAPIChallengeActivityResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"activityId": @"activity_id", @"challengeId": @"challenge_id", @"entitlement": @"entitlement", @"_id": @"id", @"rewardSet": @"reward_set", @"settings": @"settings" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"challengeId", @"entitlement", @"_id", @"rewardSet", @"settings"];
  return [optionalProperties containsObject:propertyName];
}

@end
