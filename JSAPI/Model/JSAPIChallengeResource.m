#import "JSAPIChallengeResource.h"

@implementation JSAPIChallengeResource

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

  return @{ @"activities": @"activities", @"additionalProperties": @"additional_properties", @"campaignId": @"campaign_id", @"varCopyOf": @"copy_of", @"createdDate": @"created_date", @"endDate": @"end_date", @"_id": @"id", @"leaderboardStrategy": @"leaderboard_strategy", @"longDescription": @"long_description", @"name": @"name", @"nextEventDate": @"next_event_date", @"rewardLagMinutes": @"reward_lag_minutes", @"rewardSet": @"reward_set", @"schedule": @"schedule", @"shortDescription": @"short_description", @"startDate": @"start_date", @"template": @"template", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"activities", @"additionalProperties", @"campaignId", @"varCopyOf", @"createdDate", @"endDate", @"_id", @"leaderboardStrategy", @"longDescription", @"nextEventDate", @"rewardLagMinutes", @"rewardSet", @"schedule", @"shortDescription", @"startDate", @"template", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
