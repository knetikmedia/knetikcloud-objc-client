#import "JSAPIInventorySubscriptionResource.h"

@implementation JSAPIInventorySubscriptionResource

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

  return @{ @"billDate": @"bill_date", @"credit": @"credit", @"creditLog": @"credit_log", @"graceEnd": @"grace_end", @"inventoryId": @"inventory_id", @"inventoryStatus": @"inventory_status", @"itemId": @"item_id", @"paymentMethod": @"payment_method", @"priceOverride": @"price_override", @"priceOverrideReason": @"price_override_reason", @"recurringPrice": @"recurring_price", @"sku": @"sku", @"startDate": @"start_date", @"subscriptionStatus": @"subscription_status", @"user": @"user" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"billDate", @"credit", @"creditLog", @"graceEnd", @"inventoryId", @"inventoryStatus", @"itemId", @"paymentMethod", @"priceOverride", @"priceOverrideReason", @"recurringPrice", @"sku", @"startDate", @"subscriptionStatus", @"user"];

  return [optionalProperties containsObject:propertyName];
}

@end
