#import "JSAPICart.h"

@implementation JSAPICart

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

  return @{ @"availableShippingOptions": @"available_shipping_options", @"countryTax": @"country_tax", @"coupons": @"coupons", @"created": @"created", @"currencyCode": @"currency_code", @"discountTotal": @"discount_total", @"errorCode": @"error_code", @"errorMessage": @"error_message", @"grandTotal": @"grand_total", @"_id": @"id", @"invoiceId": @"invoice_id", @"items": @"items", @"owner": @"owner", @"selectedShippingOptions": @"selected_shipping_options", @"shippable": @"shippable", @"shippingAddress": @"shipping_address", @"shippingCost": @"shipping_cost", @"stateTax": @"state_tax", @"status": @"status", @"subtotal": @"subtotal", @"updated": @"updated" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"availableShippingOptions", @"countryTax", @"coupons", @"created", @"currencyCode", @"discountTotal", @"errorCode", @"errorMessage", @"grandTotal", @"_id", @"invoiceId", @"items", @"owner", @"selectedShippingOptions", @"shippable", @"shippingAddress", @"shippingCost", @"stateTax", @"status", @"subtotal", @"updated"];

  return [optionalProperties containsObject:propertyName];
}

@end
