#import "SWGOrder.h"

@implementation SWGOrder

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"ascending": @"ascending", @"direction": @"direction", @"ignoreCase": @"ignore_case", @"nullHandling": @"null_handling", @"_property": @"property" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"ascending", @"direction", @"ignoreCase", @"nullHandling", @"_property"];
  return [optionalProperties containsObject:propertyName];
}

@end