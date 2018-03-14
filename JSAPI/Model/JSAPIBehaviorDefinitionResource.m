#import "JSAPIBehaviorDefinitionResource.h"

@implementation JSAPIBehaviorDefinitionResource

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

  return @{ @"_description": @"description", @"prerequisiteBehaviors": @"prerequisite_behaviors", @"properties": @"properties", @"typeHint": @"type_hint" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_description", @"prerequisiteBehaviors", ];

  return [optionalProperties containsObject:propertyName];
}

@end
