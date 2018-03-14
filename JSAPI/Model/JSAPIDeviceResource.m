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
 * Maps "discriminator" value to the sub-class name, so that inheritance is supported.
 */
- (id)initWithDictionary:(NSDictionary *)dict error:(NSError *__autoreleasing *)err {
    NSString * discriminatedClassName = [dict valueForKey:@"device_type"];
    if(discriminatedClassName == nil ){
         return [super initWithDictionary:dict error:err];
    }
    Class class = NSClassFromString([@"JSAPI" stringByAppendingString:discriminatedClassName]);
    if(!class) {
        class = NSClassFromString([@"JSAPI" stringByAppendingString:[discriminatedClassName capitalizedString]]);
    }
    if([self class ] == class) {
        return [super initWithDictionary:dict error:err];
    }
    return [[class alloc] initWithDictionary:dict error: err];
}

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {

  return @{ @"additionalProperties": @"additional_properties", @"createdDate": @"created_date", @"_description": @"description", @"deviceType": @"device_type", @"_id": @"id", @"location": @"location", @"macAddress": @"mac_address", @"make": @"make", @"model": @"model", @"name": @"name", @"os": @"os", @"owner": @"owner", @"serial": @"serial", @"tags": @"tags", @"template": @"template", @"updatedDate": @"updated_date", @"users": @"users" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"createdDate", @"_description", @"deviceType", @"_id", @"location", @"macAddress", @"make", @"model", @"name", @"os", @"owner", @"serial", @"tags", @"template", @"updatedDate", @"users"];

  return [optionalProperties containsObject:propertyName];
}

@end
