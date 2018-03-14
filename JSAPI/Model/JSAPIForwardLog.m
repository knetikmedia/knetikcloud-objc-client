#import "JSAPIForwardLog.h"

@implementation JSAPIForwardLog

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

  return @{ @"endDate": @"end_date", @"errorMsg": @"error_msg", @"eventId": @"event_id", @"headers": @"headers", @"httpStatusCode": @"http_status_code", @"_id": @"id", @"method": @"method", @"payload": @"payload", @"response": @"response", @"retryCount": @"retry_count", @"retryable": @"retryable", @"ruleId": @"rule_id", @"startDate": @"start_date", @"success": @"success", @"url": @"url" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"endDate", @"errorMsg", @"eventId", @"headers", @"httpStatusCode", @"_id", @"method", @"payload", @"response", @"retryCount", @"retryable", @"ruleId", @"startDate", @"success", @"url"];

  return [optionalProperties containsObject:propertyName];
}

@end
