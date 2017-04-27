#import "JSAPIOAuth2Resource.h"

@implementation JSAPIOAuth2Resource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"accessToken": @"access_token", @"expiresIn": @"expires_in", @"scope": @"scope", @"tokenType": @"token_type" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"accessToken", @"expiresIn", @"scope", @"tokenType"];
  return [optionalProperties containsObject:propertyName];
}

@end
