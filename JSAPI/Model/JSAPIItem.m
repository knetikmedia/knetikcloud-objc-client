#import "JSAPIItem.h"

@implementation JSAPIItem

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
    NSString * discriminatedClassName = [dict valueForKey:@"type_hint"];
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

  return @{ @"additionalProperties": @"additional_properties", @"behaviors": @"behaviors", @"category": @"category", @"createdDate": @"created_date", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"shortDescription": @"short_description", @"sort": @"sort", @"tags": @"tags", @"template": @"template", @"typeHint": @"type_hint", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"behaviors", @"category", @"createdDate", @"_id", @"longDescription", @"shortDescription", @"sort", @"tags", @"template", @"uniqueKey", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
