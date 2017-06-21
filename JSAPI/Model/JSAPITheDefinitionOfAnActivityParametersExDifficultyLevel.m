#import "JSAPITheDefinitionOfAnActivityParametersExDifficultyLevel.h"

@implementation JSAPITheDefinitionOfAnActivityParametersExDifficultyLevel

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"advancedOption": @"advanced_option", @"defaultValue": @"default_value", @"_description": @"description", @"key": @"key", @"name": @"name", @"options": @"options" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"advancedOption", @"_description", ];
  return [optionalProperties containsObject:propertyName];
}

@end
