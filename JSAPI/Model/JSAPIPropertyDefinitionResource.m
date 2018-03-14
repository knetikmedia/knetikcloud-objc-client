#import "JSAPIPropertyDefinitionResource.h"

@implementation JSAPIPropertyDefinitionResource

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
    NSString * discriminatedClassName = [dict valueForKey:@"type"];
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

  return @{ @"_description": @"description", @"fieldList": @"field_list", @"friendlyName": @"friendly_name", @"name": @"name", @"optionLabelPath": @"option_label_path", @"optionValuePath": @"option_value_path", @"optionsUrl": @"options_url", @"required": @"required", @"type": @"type" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_description", @"fieldList", @"friendlyName", @"optionLabelPath", @"optionValuePath", @"optionsUrl", ];

  return [optionalProperties containsObject:propertyName];
}

@end
