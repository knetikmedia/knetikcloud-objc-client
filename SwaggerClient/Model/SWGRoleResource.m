#import "SWGRoleResource.h"

@implementation SWGRoleResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"clientCount": @"client_count", @"createdDate": @"created_date", @"locked": @"locked", @"name": @"name", @"role": @"role", @"rolePermission": @"role_permission", @"userCount": @"user_count" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"clientCount", @"createdDate", @"locked", @"name", @"role", @"rolePermission", @"userCount"];
  return [optionalProperties containsObject:propertyName];
}

@end
