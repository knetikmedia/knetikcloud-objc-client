#import "JSAPISavedAddressResource.h"

@implementation JSAPISavedAddressResource

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

  return @{ @"address1": @"address1", @"address2": @"address2", @"city": @"city", @"countryCode": @"country_code", @"_default": @"default", @"firstName": @"first_name", @"_id": @"id", @"lastName": @"last_name", @"name": @"name", @"phone1": @"phone1", @"phone2": @"phone2", @"postalCode": @"postal_code", @"stateCode": @"state_code" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"address2", @"_default", @"_id", @"phone1", @"phone2", @"postalCode", @"stateCode"];

  return [optionalProperties containsObject:propertyName];
}

@end
