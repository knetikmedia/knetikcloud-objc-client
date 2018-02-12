#import "JSAPIActivityOccurrenceResource.h"

@implementation JSAPIActivityOccurrenceResource

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

  return @{ @"activityId": @"activity_id", @"bans": @"bans", @"challengeActivityId": @"challenge_activity_id", @"coreSettings": @"core_settings", @"createdDate": @"created_date", @"entitlement": @"entitlement", @"eventId": @"event_id", @"host": @"host", @"_id": @"id", @"rewardStatus": @"reward_status", @"settings": @"settings", @"simulated": @"simulated", @"startDate": @"start_date", @"status": @"status", @"updatedDate": @"updated_date", @"users": @"users" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"bans", @"challengeActivityId", @"coreSettings", @"createdDate", @"entitlement", @"eventId", @"host", @"_id", @"rewardStatus", @"settings", @"simulated", @"startDate", @"status", @"updatedDate", @"users"];

  return [optionalProperties containsObject:propertyName];
}

@end
