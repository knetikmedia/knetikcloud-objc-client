#import "JSAPIFlagReportResource.h"

@implementation JSAPIFlagReportResource

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

  return @{ @"context": @"context", @"contextId": @"context_id", @"createdDate": @"created_date", @"_id": @"id", @"reason": @"reason", @"resolution": @"resolution", @"resolved": @"resolved", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"context", @"contextId", @"createdDate", @"_id", @"reason", @"resolved", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
