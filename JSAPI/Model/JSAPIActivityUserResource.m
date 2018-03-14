#import "JSAPIActivityUserResource.h"

@implementation JSAPIActivityUserResource

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

  return @{ @"host": @"host", @"_id": @"id", @"joinedDate": @"joined_date", @"leftDate": @"left_date", @"metric": @"metric", @"status": @"status", @"user": @"user" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"host", @"_id", @"joinedDate", @"leftDate", @"metric", @"status", ];

  return [optionalProperties containsObject:propertyName];
}

@end
