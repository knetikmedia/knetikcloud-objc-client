#import "JSAPIQuestionResource.h"

@implementation JSAPIQuestionResource

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

  return @{ @"additionalProperties": @"additional_properties", @"answers": @"answers", @"category": @"category", @"createdDate": @"created_date", @"difficulty": @"difficulty", @"_id": @"id", @"importId": @"import_id", @"publishedDate": @"published_date", @"question": @"question", @"source1": @"source1", @"source2": @"source2", @"tags": @"tags", @"template": @"template", @"updatedDate": @"updated_date", @"vendor": @"vendor" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"answers", @"createdDate", @"_id", @"importId", @"publishedDate", @"source1", @"source2", @"tags", @"template", @"updatedDate", @"vendor"];

  return [optionalProperties containsObject:propertyName];
}

@end
