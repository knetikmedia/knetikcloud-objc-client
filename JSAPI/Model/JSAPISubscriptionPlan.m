#import "JSAPISubscriptionPlan.h"

@implementation JSAPISubscriptionPlan

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

  return @{ @"additionalProperties": @"additional_properties", @"availability": @"availability", @"billGraceDays": @"bill_grace_days", @"consolidated": @"consolidated", @"firstBill": @"first_bill", @"firstBillUnitOfTime": @"first_bill_unit_of_time", @"_id": @"id", @"latePaymentSku": @"late_payment_sku", @"locked": @"locked", @"maxAutoRenew": @"max_auto_renew", @"maxBillAttempts": @"max_bill_attempts", @"migrationPlan": @"migration_plan", @"minimumTerm": @"minimum_term", @"name": @"name", @"primarySku": @"primary_sku", @"reactivationSku": @"reactivation_sku", @"recurringSku": @"recurring_sku", @"renewPeriod": @"renew_period", @"renewPeriodUnitOfTime": @"renew_period_unit_of_time", @"subscriptionId": @"subscription_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"availability", @"billGraceDays", @"consolidated", @"firstBill", @"firstBillUnitOfTime", @"_id", @"latePaymentSku", @"locked", @"maxAutoRenew", @"maxBillAttempts", @"migrationPlan", @"minimumTerm", @"name", @"primarySku", @"reactivationSku", @"recurringSku", @"renewPeriod", @"renewPeriodUnitOfTime", @"subscriptionId"];

  return [optionalProperties containsObject:propertyName];
}

@end
