#import "JSAPINotificationTypeResource.h"

@implementation JSAPINotificationTypeResource

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

  return @{ @"createdDate": @"created_date", @"emailBodyTemplateExternal": @"email_body_template_external", @"emailBodyTemplateId": @"email_body_template_id", @"emailSubjectTemplateId": @"email_subject_template_id", @"_id": @"id", @"name": @"name", @"smsTemplateId": @"sms_template_id", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"createdDate", @"emailBodyTemplateExternal", @"emailBodyTemplateId", @"emailSubjectTemplateId", @"_id", @"smsTemplateId", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
