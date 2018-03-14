#import "JSAPIAvailableSettingResource.h"

@implementation JSAPIAvailableSettingResource

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

  return @{ @"advancedOption": @"advanced_option", @"defaultValue": @"default_value", @"_description": @"description", @"key": @"key", @"name": @"name", @"options": @"options", @"type": @"type" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"advancedOption", @"defaultValue", @"_description", @"options", ];

  return [optionalProperties containsObject:propertyName];
}

@end
