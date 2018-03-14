#import "JSAPIChallengeEventResource.h"

@implementation JSAPIChallengeEventResource

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

  return @{ @"challengeId": @"challenge_id", @"endDate": @"end_date", @"_id": @"id", @"rewardStatus": @"reward_status", @"startDate": @"start_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"challengeId", @"endDate", @"_id", @"rewardStatus", @"startDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
