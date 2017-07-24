#import "JSAPIFinalizeBillingAgreementRequest.h"

@implementation JSAPIFinalizeBillingAgreementRequest

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

  return @{ @"invoiceId": @"invoice_id", @"varNewDefault": @"new_default", @"payerId": @"payer_id", @"token": @"token", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"invoiceId", @"varNewDefault", @"payerId", @"userId"];

  return [optionalProperties containsObject:propertyName];
}

@end
