#import "SWGAchievementDefinitionResource.h"

@implementation SWGAchievementDefinitionResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"createdDate": @"created_date", @"_description": @"description", @"hidden": @"hidden", @"maxValue": @"max_value", @"minValue": @"min_value", @"name": @"name", @"ruleId": @"rule_id", @"tags": @"tags", @"template": @"template", @"triggerEventName": @"trigger_event_name", @"updatedDate": @"updated_date" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"createdDate", @"_description", @"ruleId", @"tags", @"template", @"triggerEventName", @"updatedDate"];
  return [optionalProperties containsObject:propertyName];
}

@end
