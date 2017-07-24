#import "JSAPICartSummary.h"

@implementation JSAPICartSummary

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

  return @{ @"createdDate": @"created_date", @"currencyCode": @"currency_code", @"grandTotal": @"grand_total", @"_id": @"id", @"invoiceId": @"invoice_id", @"itemsInCart": @"items_in_cart", @"status": @"status", @"subtotal": @"subtotal" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"currencyCode", @"grandTotal", @"_id", @"invoiceId", @"itemsInCart", @"status", @"subtotal"];

  return [optionalProperties containsObject:propertyName];
}

@end
