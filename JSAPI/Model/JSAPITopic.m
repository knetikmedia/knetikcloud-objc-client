#import "JSAPITopic.h"

@implementation JSAPITopic

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

  return @{ @"createdDate": @"created_date", @"displayName": @"display_name", @"_id": @"id", @"locked": @"locked", @"tags": @"tags", @"topicMap": @"topic_map", @"updatedDate": @"updated_date", @"userCount": @"user_count" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"displayName", @"_id", @"locked", @"tags", @"topicMap", @"updatedDate", @"userCount"];

  return [optionalProperties containsObject:propertyName];
}

@end
