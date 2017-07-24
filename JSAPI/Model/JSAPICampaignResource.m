#import "JSAPICampaignResource.h"

@implementation JSAPICampaignResource

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

  return @{ @"active": @"active", @"additionalProperties": @"additional_properties", @"createdDate": @"created_date", @"_id": @"id", @"leaderboardStrategy": @"leaderboard_strategy", @"longDescription": @"long_description", @"name": @"name", @"nextChallenge": @"next_challenge", @"nextChallengeDate": @"next_challenge_date", @"rewardSet": @"reward_set", @"rewardStatus": @"reward_status", @"shortDescription": @"short_description", @"template": @"template", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"additionalProperties", @"createdDate", @"_id", @"leaderboardStrategy", @"longDescription", @"nextChallenge", @"nextChallengeDate", @"rewardSet", @"rewardStatus", @"shortDescription", @"template", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
