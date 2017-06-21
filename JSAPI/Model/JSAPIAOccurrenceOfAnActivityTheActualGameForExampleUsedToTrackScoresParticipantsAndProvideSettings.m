#import "JSAPIAOccurrenceOfAnActivityTheActualGameForExampleUsedToTrackScoresParticipantsAndProvideSettings.h"

@implementation JSAPIAOccurrenceOfAnActivityTheActualGameForExampleUsedToTrackScoresParticipantsAndProvideSettings

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"activityId": @"activity_id", @"challengeActivityId": @"challenge_activity_id", @"createdDate": @"created_date", @"entitlement": @"entitlement", @"eventId": @"event_id", @"_id": @"id", @"rewardStatus": @"reward_status", @"settings": @"settings", @"simulated": @"simulated", @"startDate": @"start_date", @"status": @"status", @"updatedDate": @"updated_date", @"users": @"users" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"challengeActivityId", @"createdDate", @"entitlement", @"eventId", @"_id", @"rewardStatus", @"settings", @"simulated", @"startDate", @"status", @"updatedDate", @"users"];
  return [optionalProperties containsObject:propertyName];
}

@end
