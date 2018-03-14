#import "JSAPIChatBlacklistResource.h"

@implementation JSAPIChatBlacklistResource

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

  return @{ @"blacklistedUser": @"blacklisted_user", @"createdDate": @"created_date", @"_id": @"id", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"blacklistedUser", @"createdDate", @"_id", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
