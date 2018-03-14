#import "JSAPIPaymentMethodDetails.h"

@implementation JSAPIPaymentMethodDetails

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

  return @{ @"_default": @"default", @"expirationDate": @"expiration_date", @"expirationMonth": @"expiration_month", @"expirationYear": @"expiration_year", @"last4": @"last4", @"sort": @"sort", @"uniqueKey": @"unique_key", @"verified": @"verified" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_default", @"expirationDate", @"expirationMonth", @"expirationYear", @"last4", @"sort", @"uniqueKey", @"verified"];

  return [optionalProperties containsObject:propertyName];
}

@end
