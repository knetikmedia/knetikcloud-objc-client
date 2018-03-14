#import "JSAPIClientResource.h"

@implementation JSAPIClientResource

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

  return @{ @"accessTokenValiditySeconds": @"access_token_validity_seconds", @"clientKey": @"client_key", @"grantTypes": @"grant_types", @"_id": @"id", @"isPublic": @"is_public", @"locked": @"locked", @"name": @"name", @"redirectUris": @"redirect_uris", @"refreshTokenValiditySeconds": @"refresh_token_validity_seconds", @"secret": @"secret" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"accessTokenValiditySeconds", @"grantTypes", @"_id", @"isPublic", @"locked", @"redirectUris", @"refreshTokenValiditySeconds", ];

  return [optionalProperties containsObject:propertyName];
}

@end
