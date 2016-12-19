#import "SWGVendorResource.h"

@implementation SWGVendorResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"active": @"active", @"createDate": @"create_date", @"_description": @"description", @"_id": @"id", @"imageUrl": @"image_url", @"manualApproval": @"manual_approval", @"name": @"name", @"primaryContactEmail": @"primary_contact_email", @"primaryContactName": @"primary_contact_name", @"primaryContactPhone": @"primary_contact_phone", @"salesEmail": @"sales_email", @"supportEmail": @"support_email", @"updateDate": @"update_date", @"url": @"url" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"createDate", @"_description", @"_id", @"imageUrl", @"manualApproval", @"primaryContactEmail", @"primaryContactName", @"primaryContactPhone", @"salesEmail", @"supportEmail", @"updateDate", @"url"];
  return [optionalProperties containsObject:propertyName];
}

@end
