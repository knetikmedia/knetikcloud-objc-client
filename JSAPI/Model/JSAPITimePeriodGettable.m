#import "JSAPITimePeriodGettable.h"

@implementation JSAPITimePeriodGettable

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"getLimit": @"get_limit", @"groupName": @"group_name", @"timeLength": @"time_length", @"unitOfTime": @"unit_of_time" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"groupName", ];
  return [optionalProperties containsObject:propertyName];
}

@end
