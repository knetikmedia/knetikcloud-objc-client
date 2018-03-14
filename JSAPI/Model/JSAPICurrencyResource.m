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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"active": @"active", @"code": @"code", @"createdDate": @"created_date", @"defaultCurrency": @"default_currency", @"factor": @"factor", @"icon": @"icon", @"name": @"name", @"type": @"type", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"createdDate", @"defaultCurrency", @"icon", @"type", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
