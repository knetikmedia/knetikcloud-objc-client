#import "JSAPIInvoiceItemResource.h"

@implementation JSAPIInvoiceItemResource

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

  return @{ @"bundleSku": @"bundle_sku", @"currentFulfillmentStatus": @"current_fulfillment_status", @"_id": @"id", @"invoiceId": @"invoice_id", @"itemId": @"item_id", @"itemName": @"item_name", @"originalTotalPrice": @"original_total_price", @"originalUnitPrice": @"original_unit_price", @"qty": @"qty", @"saleName": @"sale_name", @"sku": @"sku", @"skuDescription": @"sku_description", @"systemPrice": @"system_price", @"totalPrice": @"total_price", @"typeHint": @"type_hint", @"unitPrice": @"unit_price" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"bundleSku", @"currentFulfillmentStatus", @"_id", @"invoiceId", @"itemId", @"itemName", @"originalTotalPrice", @"originalUnitPrice", @"qty", @"saleName", @"sku", @"skuDescription", @"systemPrice", @"totalPrice", @"typeHint", @"unitPrice"];

  return [optionalProperties containsObject:propertyName];
}

@end
