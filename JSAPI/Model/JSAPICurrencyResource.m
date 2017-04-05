#import "JSAPICurrencyResource.h"

@implementation JSAPICurrencyResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"active": @"active", @"code": @"code", @"createdDate": @"created_date", @"factor": @"factor", @"icon": @"icon", @"name": @"name", @"type": @"type", @"updatedDate": @"updated_date" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"createdDate", @"icon", @"type", @"updatedDate"];
  return [optionalProperties containsObject:propertyName];
}

@end
