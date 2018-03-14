#import "JSAPIOperationDefinitionResource.h"

@implementation JSAPIOperationDefinitionResource

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

  return @{ @"arguments": @"arguments", @"_description": @"description", @"operator": @"operator", @"returnType": @"return_type", @"template": @"template" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"arguments", @"_description", @"operator", @"returnType", @"template"];

  return [optionalProperties containsObject:propertyName];
}

@end
