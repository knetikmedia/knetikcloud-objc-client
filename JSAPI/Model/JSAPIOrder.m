#import "JSAPIOrder.h"

@implementation JSAPIOrder

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

  return @{ @"ascending": @"ascending", @"descending": @"descending", @"direction": @"direction", @"ignoreCase": @"ignore_case", @"nullHandling": @"null_handling", @"_property": @"property" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"ascending", @"descending", @"direction", @"ignoreCase", @"nullHandling", @"_property"];

  return [optionalProperties containsObject:propertyName];
}

@end
