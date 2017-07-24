#import "JSAPIUserBaseResource.h"

@implementation JSAPIUserBaseResource

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

  return @{ @"avatarUrl": @"avatar_url", @"displayName": @"display_name", @"email": @"email", @"fullname": @"fullname", @"_id": @"id", @"lastActivity": @"last_activity", @"lastUpdated": @"last_updated", @"memberSince": @"member_since", @"username": @"username" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"avatarUrl", @"displayName", @"fullname", @"_id", @"lastActivity", @"lastUpdated", @"memberSince", ];

  return [optionalProperties containsObject:propertyName];
}

@end
