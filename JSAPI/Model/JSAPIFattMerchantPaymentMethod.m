#import "JSAPIFattMerchantPaymentMethod.h"

@implementation JSAPIFattMerchantPaymentMethod

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

  return @{ @"address1": @"address1", @"address2": @"address2", @"addressCity": @"address_city", @"addressCountry": @"address_country", @"addressState": @"address_state", @"addressZip": @"address_zip", @"cardLastFour": @"card_last_four", @"createdAt": @"created_at", @"customerId": @"customer_id", @"deletedAt": @"deleted_at", @"_id": @"id", @"nickname": @"nickname", @"updatedAt": @"updated_at" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"address1", @"address2", @"addressCity", @"addressCountry", @"addressState", @"addressZip", @"createdAt", @"deletedAt", @"_id", @"updatedAt"];

  return [optionalProperties containsObject:propertyName];
}

@end
