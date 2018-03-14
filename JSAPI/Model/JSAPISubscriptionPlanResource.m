#import "JSAPISubscriptionPlanResource.h"

@implementation JSAPISubscriptionPlanResource

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

  return @{ @"additionalProperties": @"additional_properties", @"billingCycleLength": @"billing_cycle_length", @"billingCycleUnit": @"billing_cycle_unit", @"consolidated": @"consolidated", @"currencyCode": @"currency_code", @"endDate": @"end_date", @"firstBillingCycleLength": @"first_billing_cycle_length", @"firstBillingCycleUnit": @"first_billing_cycle_unit", @"gracePeriod": @"grace_period", @"_id": @"id", @"initialFee": @"initial_fee", @"initialSku": @"initial_sku", @"latePaymentFee": @"late_payment_fee", @"latePaymentSku": @"late_payment_sku", @"locked": @"locked", @"maxBillAttempts": @"max_bill_attempts", @"maxCycles": @"max_cycles", @"migrateToPlan": @"migrate_to_plan", @"minCycles": @"min_cycles", @"name": @"name", @"published": @"published", @"reactivationFee": @"reactivation_fee", @"reactivationSku": @"reactivation_sku", @"recurringFee": @"recurring_fee", @"recurringSku": @"recurring_sku", @"startDate": @"start_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"endDate", @"firstBillingCycleLength", @"firstBillingCycleUnit", @"_id", @"initialSku", @"latePaymentSku", @"locked", @"maxCycles", @"migrateToPlan", @"minCycles", @"reactivationSku", @"recurringSku", @"startDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
