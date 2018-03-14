#import "JSAPIBreGlobalResource.h"

@implementation JSAPIBreGlobalResource

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

  return @{ @"_description": @"description", @"_id": @"id", @"key": @"key", @"name": @"name", @"scopes": @"scopes", @"systemGlobal": @"system_global", @"type": @"type" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_description", @"_id", @"name", @"scopes", @"systemGlobal", ];

  return [optionalProperties containsObject:propertyName];
}

@end
