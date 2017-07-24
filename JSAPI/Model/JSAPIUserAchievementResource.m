#import "JSAPIUserAchievementResource.h"

@implementation JSAPIUserAchievementResource

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

  return @{ @"achieved": @"achieved", @"achievementName": @"achievement_name", @"createdDate": @"created_date", @"earnedDate": @"earned_date", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"achieved", @"createdDate", @"earnedDate", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
