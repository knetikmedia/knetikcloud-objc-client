#import "SWGPaymentMethodResource.h"

@implementation SWGPaymentMethodResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"createdDate": @"created_date", @"_default": @"default", @"disabled": @"disabled", @"expirationDate": @"expiration_date", @"expirationMonth": @"expiration_month", @"expirationYear": @"expiration_year", @"_id": @"id", @"last4": @"last4", @"longDescription": @"long_description", @"name": @"name", @"paymentMethodType": @"payment_method_type", @"paymentType": @"payment_type", @"shortDescription": @"short_description", @"sort": @"sort", @"token": @"token", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date", @"userId": @"user_id", @"verified": @"verified" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"_default", @"disabled", @"expirationDate", @"expirationMonth", @"expirationYear", @"_id", @"last4", @"longDescription", @"paymentType", @"shortDescription", @"sort", @"token", @"uniqueKey", @"updatedDate", @"userId", @"verified"];
  return [optionalProperties containsObject:propertyName];
}

@end
