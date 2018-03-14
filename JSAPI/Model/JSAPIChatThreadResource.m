#import "JSAPIChatThreadResource.h"

@implementation JSAPIChatThreadResource

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

  return @{ @"activeUsers": @"active_users", @"count": @"count", @"createdDate": @"created_date", @"_id": @"id", @"recipientId": @"recipient_id", @"recipientType": @"recipient_type", @"subject": @"subject", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"activeUsers", @"count", @"createdDate", @"_id", @"subject", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
