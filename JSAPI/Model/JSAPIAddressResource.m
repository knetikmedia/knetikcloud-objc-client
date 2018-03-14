#import "JSAPIAddressResource.h"

@implementation JSAPIAddressResource

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

  return @{ @"address1": @"address1", @"address2": @"address2", @"city": @"city", @"countryCode": @"country_code", @"postalCode": @"postal_code", @"stateCode": @"state_code" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"address2", @"postalCode", @"stateCode"];

  return [optionalProperties containsObject:propertyName];
}

@end
