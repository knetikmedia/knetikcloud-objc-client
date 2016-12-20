#import "SWGPaymentAuthorizationResource.h"

@implementation SWGPaymentAuthorizationResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"captured": @"captured", @"created": @"created", @"details": @"details", @"_id": @"id", @"invoice": @"invoice", @"paymentType": @"payment_type" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"captured", @"created", @"details", @"_id", @"invoice", ];
  return [optionalProperties containsObject:propertyName];
}

@end
