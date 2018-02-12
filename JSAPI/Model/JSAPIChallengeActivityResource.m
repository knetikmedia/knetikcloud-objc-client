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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"activityId": @"activity_id", @"additionalProperties": @"additional_properties", @"challengeId": @"challenge_id", @"coreSettings": @"core_settings", @"entitlement": @"entitlement", @"_id": @"id", @"rewardSet": @"reward_set", @"settings": @"settings", @"template": @"template" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"challengeId", @"coreSettings", @"entitlement", @"_id", @"rewardSet", @"settings", @"template"];

  return [optionalProperties containsObject:propertyName];
}

@end
