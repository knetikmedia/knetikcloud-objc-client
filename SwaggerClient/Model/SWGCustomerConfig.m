#import "SWGCustomerConfig.h"

@implementation SWGCustomerConfig

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"aliases": @"aliases", @"database": @"database", @"name": @"name", @"uploadBucket": @"upload_bucket" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"aliases", @"database", @"name", @"uploadBucket"];
  return [optionalProperties containsObject:propertyName];
}

@end
