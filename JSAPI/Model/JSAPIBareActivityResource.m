#import "JSAPIBareActivityResource.h"

@implementation JSAPIBareActivityResource

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

  return @{ @"createdDate": @"created_date", @"_id": @"id", @"launch": @"launch", @"longDescription": @"long_description", @"name": @"name", @"shortDescription": @"short_description", @"template": @"template", @"type": @"type", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_id", @"launch", @"longDescription", @"shortDescription", @"template", @"type", @"uniqueKey", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
