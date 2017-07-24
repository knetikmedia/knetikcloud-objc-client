#import "JSAPIMongoDatabaseConfig.h"

@implementation JSAPIMongoDatabaseConfig

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

  return @{ @"dbName": @"db_name", @"options": @"options", @"password": @"password", @"servers": @"servers", @"username": @"username" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"dbName", @"options", @"password", @"servers", @"username"];

  return [optionalProperties containsObject:propertyName];
}

@end
