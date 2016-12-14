#import "SWGUserResource.h"

@implementation SWGUserResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"address": @"address", @"address2": @"address2", @"avatarUrl": @"avatar_url", @"city": @"city", @"countryCode": @"country_code", @"currencyCode": @"currency_code", @"dateOfBirth": @"date_of_birth", @"_description": @"description", @"displayName": @"display_name", @"email": @"email", @"firstName": @"first_name", @"fullname": @"fullname", @"gender": @"gender", @"_id": @"id", @"languageCode": @"language_code", @"lastName": @"last_name", @"mobileNumber": @"mobile_number", @"password": @"password", @"postalCode": @"postal_code", @"state": @"state", @"template": @"template", @"timezoneCode": @"timezone_code", @"username": @"username" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"address", @"address2", @"avatarUrl", @"city", @"countryCode", @"currencyCode", @"dateOfBirth", @"_description", @"displayName", @"firstName", @"fullname", @"gender", @"_id", @"languageCode", @"lastName", @"mobileNumber", @"password", @"postalCode", @"state", @"template", @"timezoneCode", ];
  return [optionalProperties containsObject:propertyName];
}

@end
