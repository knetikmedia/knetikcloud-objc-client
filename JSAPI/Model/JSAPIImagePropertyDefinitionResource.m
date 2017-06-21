#import "JSAPIImagePropertyDefinitionResource.h"

@implementation JSAPIImagePropertyDefinitionResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"fileType": @"file_type", @"maxHeight": @"max_height", @"maxWidth": @"max_width", @"minHeight": @"min_height", @"minWidth": @"min_width" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"fileType", @"maxHeight", @"maxWidth", @"minHeight", @"minWidth"];
  return [optionalProperties containsObject:propertyName];
}

@end
