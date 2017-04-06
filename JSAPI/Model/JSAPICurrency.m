#import "JSAPICurrency.h"

@implementation JSAPICurrency

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"active": @"active", @"code": @"code", @"dateCreated": @"date_created", @"dateUpdated": @"date_updated", @"factor": @"factor", @"icon": @"icon", @"_id": @"id", @"name": @"name", @"type": @"type", @"virtual": @"virtual" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"code", @"dateCreated", @"dateUpdated", @"factor", @"icon", @"_id", @"name", @"type", @"virtual"];
  return [optionalProperties containsObject:propertyName];
}

@end
