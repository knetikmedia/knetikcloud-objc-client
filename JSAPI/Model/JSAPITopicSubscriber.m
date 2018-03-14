#import "JSAPITopicSubscriber.h"

@implementation JSAPITopicSubscriber

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

  return @{ @"disabled": @"disabled", @"email": @"email", @"joinDate": @"join_date", @"mobileNumber": @"mobile_number", @"topicId": @"topic_id", @"topicSubscriberMap": @"topic_subscriber_map", @"userId": @"user_id", @"username": @"username" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"disabled", @"email", @"joinDate", @"mobileNumber", @"topicId", @"topicSubscriberMap", @"userId", @"username"];

  return [optionalProperties containsObject:propertyName];
}

@end
