#import "JSAPIBreTriggerResource.h"

@implementation JSAPIBreTriggerResource

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

  return @{ @"category": @"category", @"eventName": @"event_name", @"parameters": @"parameters", @"systemTrigger": @"system_trigger", @"tags": @"tags", @"triggerDescription": @"trigger_description", @"triggerName": @"trigger_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"category", @"parameters", @"systemTrigger", @"tags", ];

  return [optionalProperties containsObject:propertyName];
}

@end
