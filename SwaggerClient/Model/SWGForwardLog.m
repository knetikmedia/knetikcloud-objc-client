#import "SWGForwardLog.h"

@implementation SWGForwardLog

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"endDate": @"end_date", @"errorMsg": @"error_msg", @"httpStatusCode": @"http_status_code", @"_id": @"id", @"payload": @"payload", @"response": @"response", @"retryCount": @"retry_count", @"startDate": @"start_date", @"url": @"url" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"endDate", @"errorMsg", @"httpStatusCode", @"_id", @"payload", @"response", @"retryCount", @"startDate", @"url"];
  return [optionalProperties containsObject:propertyName];
}

@end
