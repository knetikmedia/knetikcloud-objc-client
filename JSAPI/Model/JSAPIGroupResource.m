#import "JSAPIGroupResource.h"

@implementation JSAPIGroupResource

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

  return @{ @"additionalProperties": @"additional_properties", @"_description": @"description", @"memberCount": @"member_count", @"messageOfTheDay": @"message_of_the_day", @"name": @"name", @"parent": @"parent", @"status": @"status", @"subMemberCount": @"sub_member_count", @"tags": @"tags", @"template": @"template", @"uniqueName": @"unique_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"_description", @"memberCount", @"messageOfTheDay", @"parent", @"subMemberCount", @"tags", @"template", @"uniqueName"];

  return [optionalProperties containsObject:propertyName];
}

@end
