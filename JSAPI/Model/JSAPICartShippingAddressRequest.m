#import "JSAPICartShippingAddressRequest.h"

@implementation JSAPICartShippingAddressRequest

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

  return @{ @"city": @"city", @"countryCodeIso3": @"country_code_iso3", @"email": @"email", @"firstName": @"first_name", @"lastName": @"last_name", @"namePrefix": @"name_prefix", @"orderNotes": @"order_notes", @"phoneNumber": @"phone_number", @"postalStateCode": @"postal_state_code", @"shippingAddressLine1": @"shipping_address_line1", @"shippingAddressLine2": @"shipping_address_line2", @"zip": @"zip" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"city", @"countryCodeIso3", @"email", @"firstName", @"lastName", @"namePrefix", @"orderNotes", @"phoneNumber", @"postalStateCode", @"shippingAddressLine1", @"shippingAddressLine2", @"zip"];

  return [optionalProperties containsObject:propertyName];
}

@end
