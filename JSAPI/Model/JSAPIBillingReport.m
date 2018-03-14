#import "JSAPIBillingReport.h"

@implementation JSAPIBillingReport

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

  return @{ @"created": @"created", @"_id": @"id", @"lastKnownFailures": @"last_known_failures", @"statistics": @"statistics" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"created", @"_id", @"lastKnownFailures", @"statistics"];

  return [optionalProperties containsObject:propertyName];
}

@end
