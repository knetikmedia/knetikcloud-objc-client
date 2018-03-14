#import "JSAPILookupResource.h"

@implementation JSAPILookupResource

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

  return @{ @"definition": @"definition", @"lookupKey": @"lookup_key", @"requiredKeyType": @"required_key_type", @"type": @"type", @"valueType": @"value_type" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"definition", @"lookupKey", @"requiredKeyType", @"type", @"valueType"];

  return [optionalProperties containsObject:propertyName];
}

@end
