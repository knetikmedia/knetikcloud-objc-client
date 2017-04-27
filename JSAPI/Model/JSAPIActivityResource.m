#import "JSAPIActivityResource.h"

@implementation JSAPIActivityResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"createdDate": @"created_date", @"entitlements": @"entitlements", @"_id": @"id", @"launch": @"launch", @"longDescription": @"long_description", @"name": @"name", @"rewardSet": @"reward_set", @"settings": @"settings", @"shortDescription": @"short_description", @"template": @"template", @"templateId": @"template_id", @"type": @"type", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"createdDate", @"entitlements", @"_id", @"launch", @"longDescription", @"rewardSet", @"settings", @"shortDescription", @"template", @"templateId", @"uniqueKey", @"updatedDate"];
  return [optionalProperties containsObject:propertyName];
}

@end
