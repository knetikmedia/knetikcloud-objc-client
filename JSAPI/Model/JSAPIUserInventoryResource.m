#import "JSAPIUserInventoryResource.h"

@implementation JSAPIUserInventoryResource

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

  return @{ @"behaviorData": @"behavior_data", @"createdDate": @"created_date", @"expires": @"expires", @"_id": @"id", @"invoiceId": @"invoice_id", @"itemId": @"item_id", @"itemName": @"item_name", @"itemTypeHint": @"item_type_hint", @"status": @"status", @"updatedDate": @"updated_date", @"user": @"user" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"behaviorData", @"createdDate", @"expires", @"_id", @"invoiceId", @"itemId", @"itemName", @"itemTypeHint", @"status", @"updatedDate", @"user"];

  return [optionalProperties containsObject:propertyName];
}

@end
