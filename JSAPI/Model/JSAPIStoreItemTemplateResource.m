#import "JSAPIStoreItemTemplateResource.h"

@implementation JSAPIStoreItemTemplateResource

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

  return @{ @"allowAdditional": @"allow_additional", @"behaviors": @"behaviors", @"createdDate": @"created_date", @"_id": @"id", @"name": @"name", @"properties": @"properties", @"skuTemplate": @"sku_template", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"allowAdditional", @"behaviors", @"createdDate", @"_id", @"properties", @"skuTemplate", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
