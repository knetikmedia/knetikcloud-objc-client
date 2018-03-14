#import "JSAPIBreRuleLog.h"

@implementation JSAPIBreRuleLog

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

  return @{ @"actions": @"actions", @"ran": @"ran", @"reason": @"reason", @"ruleEndDate": @"rule_end_date", @"ruleId": @"rule_id", @"ruleName": @"rule_name", @"ruleStartDate": @"rule_start_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"actions", @"ran", @"reason", @"ruleEndDate", @"ruleId", @"ruleName", @"ruleStartDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
