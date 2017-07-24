#import "JSAPIImportJobResource.h"

@implementation JSAPIImportJobResource

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

  return @{ @"categoryId": @"category_id", @"createdDate": @"created_date", @"_id": @"id", @"name": @"name", @"output": @"output", @"recordCount": @"record_count", @"status": @"status", @"updatedDate": @"updated_date", @"url": @"url", @"vendor": @"vendor" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_id", @"output", @"recordCount", @"status", @"updatedDate", ];

  return [optionalProperties containsObject:propertyName];
}

@end
