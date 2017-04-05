#import "JSAPIArtist.h"

@implementation JSAPIArtist

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"born": @"born", @"contributionCount": @"contribution_count", @"created": @"created", @"died": @"died", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"priority": @"priority", @"propertiesString": @"properties_string", @"shortDescription": @"short_description", @"template": @"template", @"updated": @"updated" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"born", @"contributionCount", @"created", @"died", @"_id", @"longDescription", @"name", @"priority", @"propertiesString", @"shortDescription", @"template", @"updated"];
  return [optionalProperties containsObject:propertyName];
}

@end
