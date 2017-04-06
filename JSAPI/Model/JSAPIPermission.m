#import "JSAPIPermission.h"

@implementation JSAPIPermission

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"createdDate": @"created_date", @"_description": @"description", @"_id": @"id", @"locked": @"locked", @"name": @"name", @"parent": @"parent", @"permission": @"permission", @"updatedDate": @"updated_date" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_description", @"_id", @"locked", @"name", @"parent", @"permission", @"updatedDate"];
  return [optionalProperties containsObject:propertyName];
}

@end
