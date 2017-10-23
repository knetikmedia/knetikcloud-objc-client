#import "JSAPIPaymentMethodTypeResource.h"

@implementation JSAPIPaymentMethodTypeResource

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

  return @{ @"_id": @"id", @"invoiceProcessingHours": @"invoice_processing_hours", @"name": @"name", @"supportsCapture": @"supports_capture", @"supportsPartial": @"supports_partial", @"supportsRebill": @"supports_rebill", @"supportsRefunds": @"supports_refunds" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"invoiceProcessingHours", @"supportsCapture", @"supportsPartial", @"supportsRebill", @"supportsRefunds"];

  return [optionalProperties containsObject:propertyName];
}

@end
