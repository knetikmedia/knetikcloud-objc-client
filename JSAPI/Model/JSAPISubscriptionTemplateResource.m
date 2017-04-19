#import "JSAPISubscriptionTemplateResource.h"

@implementation JSAPISubscriptionTemplateResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"createdDate": @"created_date", @"_id": @"id", @"name": @"name", @"planTemplate": @"plan_template", @"properties": @"properties", @"updatedDate": @"updated_date" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_id", @"planTemplate", @"properties", @"updatedDate"];
  return [optionalProperties containsObject:propertyName];
}

@end
