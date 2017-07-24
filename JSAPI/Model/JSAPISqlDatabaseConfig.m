#import "JSAPISqlDatabaseConfig.h"

@implementation JSAPISqlDatabaseConfig

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

  return @{ @"connectionPoolSize": @"connection_pool_size", @"dbName": @"db_name", @"hostname": @"hostname", @"password": @"password", @"port": @"port", @"username": @"username" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"connectionPoolSize", @"dbName", @"hostname", @"password", @"port", @"username"];

  return [optionalProperties containsObject:propertyName];
}

@end
