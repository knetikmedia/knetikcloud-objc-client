#import "JSAPIPollResource.h"

@implementation JSAPIPollResource

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

  return @{ @"active": @"active", @"additionalProperties": @"additional_properties", @"answers": @"answers", @"category": @"category", @"createdDate": @"created_date", @"_id": @"id", @"tags": @"tags", @"template": @"template", @"text": @"text", @"type": @"type", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"createdDate", @"_id", @"tags", @"template", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
