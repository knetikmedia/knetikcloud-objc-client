#import "JSAPIFlagResource.h"

@implementation JSAPIFlagResource

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

  return @{ @"context": @"context", @"contextId": @"context_id", @"createdDate": @"created_date", @"_id": @"id", @"reason": @"reason", @"updatedDate": @"updated_date", @"user": @"user" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_id", @"reason", @"updatedDate", @"user"];

  return [optionalProperties containsObject:propertyName];
}

@end
