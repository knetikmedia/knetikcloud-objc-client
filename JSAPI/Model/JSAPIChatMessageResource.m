#import "JSAPIChatMessageResource.h"

@implementation JSAPIChatMessageResource

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

  return @{ @"content": @"content", @"createdDate": @"created_date", @"edited": @"edited", @"_id": @"id", @"messageType": @"message_type", @"recipientId": @"recipient_id", @"recipientType": @"recipient_type", @"senderId": @"sender_id", @"threadId": @"thread_id", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"edited", @"_id", @"senderId", @"threadId", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
