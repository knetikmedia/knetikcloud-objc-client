#import "JSAPIRewardSetResource.h"

@implementation JSAPIRewardSetResource

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

  return @{ @"createdDate": @"created_date", @"currencyRewards": @"currency_rewards", @"_id": @"id", @"itemRewards": @"item_rewards", @"longDescription": @"long_description", @"maxPlacing": @"max_placing", @"name": @"name", @"shortDescription": @"short_description", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"currencyRewards", @"_id", @"itemRewards", @"longDescription", @"maxPlacing", @"shortDescription", @"uniqueKey", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
