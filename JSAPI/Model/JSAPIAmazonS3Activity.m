#import "JSAPIAmazonS3Activity.h"

@implementation JSAPIAmazonS3Activity

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

  return @{ @"action": @"action", @"cdnUrl": @"cdn_url", @"createdDate": @"created_date", @"filename": @"filename", @"_id": @"id", @"objectKey": @"object_key", @"url": @"url", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"action", @"cdnUrl", @"createdDate", @"filename", @"_id", @"objectKey", @"url", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
