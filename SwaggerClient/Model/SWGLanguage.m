#import "SWGLanguage.h"

@implementation SWGLanguage

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"code": @"code", @"dateCreated": @"date_created", @"dateUpdated": @"date_updated", @"_description": @"description", @"direction": @"direction", @"_id": @"id", @"isPrimary": @"is_primary", @"name": @"name" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"code", @"dateCreated", @"dateUpdated", @"_description", @"direction", @"_id", @"isPrimary", @"name"];
  return [optionalProperties containsObject:propertyName];
}

@end