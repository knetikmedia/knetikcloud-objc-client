#import "JSAPIObjectResource.h"

@implementation JSAPIObjectResource

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

  return @{ @"behaviors": @"behaviors", @"category": @"category", @"createdDate": @"created_date", @"data": @"data", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"shortDescription": @"short_description", @"sort": @"sort", @"tags": @"tags", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"behaviors", @"category", @"createdDate", @"data", @"_id", @"longDescription", @"shortDescription", @"sort", @"tags", @"uniqueKey", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
