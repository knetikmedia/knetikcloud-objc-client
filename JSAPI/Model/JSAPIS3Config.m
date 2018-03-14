#import "JSAPIS3Config.h"

@implementation JSAPIS3Config

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

  return @{ @"bucketName": @"bucket_name", @"cdnUrl": @"cdn_url", @"region": @"region", @"uploadPrefix": @"upload_prefix" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"bucketName", @"cdnUrl", @"region", @"uploadPrefix"];

  return [optionalProperties containsObject:propertyName];
}

@end
