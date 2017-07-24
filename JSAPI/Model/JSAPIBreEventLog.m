#import "JSAPIBreEventLog.h"

@implementation JSAPIBreEventLog

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

  return @{ @"customer": @"customer", @"eventId": @"event_id", @"eventName": @"event_name", @"eventStartDate": @"event_start_date", @"_id": @"id", @"parameters": @"parameters", @"rules": @"rules" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"customer", @"eventId", @"eventName", @"eventStartDate", @"_id", @"parameters", @"rules"];

  return [optionalProperties containsObject:propertyName];
}

@end
