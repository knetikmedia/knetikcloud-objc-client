#import "JSAPIUserNotificationResource.h"

@implementation JSAPIUserNotificationResource

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

  return @{ @"data": @"data", @"notificationId": @"notification_id", @"notificationTypeId": @"notification_type_id", @"recipient": @"recipient", @"recipientType": @"recipient_type", @"retrieveDate": @"retrieve_date", @"sendDate": @"send_date", @"status": @"status", @"userId": @"user_id" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"data", @"retrieveDate", @"sendDate", @"status", ];

  return [optionalProperties containsObject:propertyName];
}

@end
