#import "JSAPISimpleWallet.h"

@implementation JSAPISimpleWallet

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

  return @{ @"balance": @"balance", @"code": @"code", @"currencyName": @"currency_name", @"_id": @"id", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"balance", @"code", @"currencyName", @"_id", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
