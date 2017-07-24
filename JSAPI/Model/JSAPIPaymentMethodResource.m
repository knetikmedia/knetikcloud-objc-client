#import "JSAPIPaymentMethodResource.h"

@implementation JSAPIPaymentMethodResource

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

  return @{ @"createdDate": @"created_date", @"_default": @"default", @"disabled": @"disabled", @"expirationDate": @"expiration_date", @"expirationMonth": @"expiration_month", @"expirationYear": @"expiration_year", @"_id": @"id", @"last4": @"last4", @"name": @"name", @"paymentMethodType": @"payment_method_type", @"paymentType": @"payment_type", @"sort": @"sort", @"token": @"token", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date", @"userId": @"user_id", @"verified": @"verified" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_default", @"disabled", @"expirationDate", @"expirationMonth", @"expirationYear", @"_id", @"last4", @"paymentType", @"sort", @"token", @"uniqueKey", @"updatedDate", @"userId", @"verified"];

  return [optionalProperties containsObject:propertyName];
}

@end
