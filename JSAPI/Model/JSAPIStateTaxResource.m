#import "JSAPIStateTaxResource.h"

@implementation JSAPIStateTaxResource

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

  return @{ @"countryIso3": @"country_iso3", @"federallyExempt": @"federally_exempt", @"name": @"name", @"rate": @"rate", @"stateCode": @"state_code", @"taxShipping": @"tax_shipping" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[];

  return [optionalProperties containsObject:propertyName];
}

@end
