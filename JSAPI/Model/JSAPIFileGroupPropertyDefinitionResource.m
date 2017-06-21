#import "JSAPIFileGroupPropertyDefinitionResource.h"

@implementation JSAPIFileGroupPropertyDefinitionResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"fileType": @"file_type", @"maxCount": @"max_count", @"maxFileSize": @"max_file_size", @"minCount": @"min_count" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"fileType", @"maxCount", @"maxFileSize", @"minCount"];
  return [optionalProperties containsObject:propertyName];
}

@end
