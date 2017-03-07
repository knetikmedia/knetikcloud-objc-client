#import "SWGBreRule.h"

@implementation SWGBreRule

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"actions": @"actions", @"condition": @"condition", @"conditionText": @"condition_text", @"_description": @"description", @"enabled": @"enabled", @"endDate": @"end_date", @"eventName": @"event_name", @"_id": @"id", @"name": @"name", @"sort": @"sort", @"startDate": @"start_date", @"systemRule": @"system_rule" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"condition", @"conditionText", @"_description", @"enabled", @"endDate", @"_id", @"sort", @"startDate", @"systemRule"];
  return [optionalProperties containsObject:propertyName];
}

@end