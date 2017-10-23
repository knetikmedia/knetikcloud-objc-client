#import "JSAPIQuestionTemplateResource.h"

@implementation JSAPIQuestionTemplateResource

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

  return @{ @"allowAdditional": @"allow_additional", @"answerProperty": @"answer_property", @"createdDate": @"created_date", @"_id": @"id", @"name": @"name", @"properties": @"properties", @"questionProperty": @"question_property", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"allowAdditional", @"answerProperty", @"createdDate", @"_id", @"properties", @"questionProperty", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
