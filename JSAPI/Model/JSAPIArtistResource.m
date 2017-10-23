#import "JSAPIArtistResource.h"

@implementation JSAPIArtistResource

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

  return @{ @"additionalProperties": @"additional_properties", @"born": @"born", @"contributionCount": @"contribution_count", @"contributions": @"contributions", @"createdDate": @"created_date", @"died": @"died", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"priority": @"priority", @"shortDescription": @"short_description", @"template": @"template", @"updatedDate": @"updated_date" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"born", @"contributionCount", @"contributions", @"createdDate", @"died", @"_id", @"longDescription", @"priority", @"shortDescription", @"template", @"updatedDate"];

  return [optionalProperties containsObject:propertyName];
}

@end
