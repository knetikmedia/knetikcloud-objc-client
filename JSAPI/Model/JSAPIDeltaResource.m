#import "JSAPIDeltaResource.h"

@implementation JSAPIDeltaResource

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

  return @{ @"categoryId": @"category_id", @"mediaType": @"media_type", @"questionId": @"question_id", @"state": @"state", @"tags": @"tags", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"categoryId", @"mediaType", @"questionId", @"state", @"tags", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
