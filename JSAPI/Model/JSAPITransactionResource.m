#import "JSAPITransactionResource.h"

@implementation JSAPITransactionResource

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

  return @{ @"createDate": @"create_date", @"currencyCode": @"currency_code", @"details": @"details", @"_id": @"id", @"invoiceId": @"invoice_id", @"isRefunded": @"is_refunded", @"response": @"response", @"source": @"source", @"successful": @"successful", @"transactionId": @"transaction_id", @"type": @"type", @"typeHint": @"type_hint", @"value": @"value" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createDate", @"currencyCode", @"details", @"_id", @"invoiceId", @"isRefunded", @"response", @"source", @"successful", @"transactionId", @"type", @"typeHint", @"value"];

  return [optionalProperties containsObject:propertyName];
}

@end
