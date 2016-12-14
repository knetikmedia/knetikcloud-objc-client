#import "SWGUserAchievementResource.h"

@implementation SWGUserAchievementResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"achieved": @"achieved", @"achievementName": @"achievement_name", @"createdDate": @"created_date", @"earnedDate": @"earned_date", @"_id": @"id", @"progress": @"progress", @"updatedDate": @"updated_date", @"userId": @"user_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"achieved", @"createdDate", @"earnedDate", @"_id", @"updatedDate", ];
  return [optionalProperties containsObject:propertyName];
}

@end
