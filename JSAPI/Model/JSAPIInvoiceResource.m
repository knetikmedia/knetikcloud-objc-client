#import "JSAPIInvoiceResource.h"

@implementation JSAPIInvoiceResource

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

  return @{ @"billingAddress1": @"billing_address1", @"billingAddress2": @"billing_address2", @"billingCityName": @"billing_city_name", @"billingCountryName": @"billing_country_name", @"billingFullName": @"billing_full_name", @"billingPostalCode": @"billing_postal_code", @"billingStateName": @"billing_state_name", @"cartId": @"cart_id", @"createdDate": @"created_date", @"currency": @"currency", @"currentFulfillmentStatus": @"current_fulfillment_status", @"currentPaymentStatus": @"current_payment_status", @"discount": @"discount", @"email": @"email", @"externalRef": @"external_ref", @"fedTax": @"fed_tax", @"grandTotal": @"grand_total", @"_id": @"id", @"invoiceNumber": @"invoice_number", @"items": @"items", @"namePrefix": @"name_prefix", @"orderNotes": @"order_notes", @"parentInvoiceId": @"parent_invoice_id", @"paymentMethodId": @"payment_method_id", @"phone": @"phone", @"phoneNumber": @"phone_number", @"remainingBalance": @"remaining_balance", @"shipping": @"shipping", @"shippingAddress1": @"shipping_address1", @"shippingAddress2": @"shipping_address2", @"shippingCityName": @"shipping_city_name", @"shippingCountryName": @"shipping_country_name", @"shippingFullName": @"shipping_full_name", @"shippingPostalCode": @"shipping_postal_code", @"shippingStateName": @"shipping_state_name", @"sort": @"sort", @"stateTax": @"state_tax", @"subtotal": @"subtotal", @"updatedDate": @"updated_date", @"user": @"user", @"vendorId": @"vendor_id", @"vendorName": @"vendor_name" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"billingAddress1", @"billingAddress2", @"billingCityName", @"billingCountryName", @"billingFullName", @"billingPostalCode", @"billingStateName", @"cartId", @"createdDate", @"currency", @"currentFulfillmentStatus", @"currentPaymentStatus", @"discount", @"email", @"externalRef", @"fedTax", @"grandTotal", @"_id", @"invoiceNumber", @"items", @"namePrefix", @"orderNotes", @"parentInvoiceId", @"paymentMethodId", @"phone", @"phoneNumber", @"remainingBalance", @"shipping", @"shippingAddress1", @"shippingAddress2", @"shippingCityName", @"shippingCountryName", @"shippingFullName", @"shippingPostalCode", @"shippingStateName", @"sort", @"stateTax", @"subtotal", @"updatedDate", @"user", @"vendorId", @"vendorName"];

  return [optionalProperties containsObject:propertyName];
}

@end
