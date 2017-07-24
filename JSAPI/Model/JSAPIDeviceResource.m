#import "JSAPIDeviceResource.h"

@implementation JSAPIDeviceResource

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

  return @{ @"authorization": @"authorization", @"condition": @"condition", @"createdDate": @"created_date", @"data": @"data", @"_description": @"description", @"deviceType": @"device_type", @"_id": @"id", @"location": @"location", @"macAddress": @"mac_address", @"make": @"make", @"model": @"model", @"name": @"name", @"os": @"os", @"serial": @"serial", @"status": @"status", @"updatedDate": @"updated_date", @"user": @"user", @"users": @"users" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"authorization", @"condition", @"createdDate", @"data", @"_description", @"deviceType", @"location", @"macAddress", @"make", @"model", @"name", @"os", @"serial", @"status", @"updatedDate", @"user", @"users"];

  return [optionalProperties containsObject:propertyName];
}

@end
