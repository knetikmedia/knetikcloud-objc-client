#import "JSAPIPageResourceChallengeEventParticipantResource_.h"

@implementation JSAPIPageResourceChallengeEventParticipantResource_

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

  return @{ @"content": @"content", @"first": @"first", @"last": @"last", @"number": @"number", @"numberOfElements": @"number_of_elements", @"size": @"size", @"sort": @"sort", @"totalElements": @"total_elements", @"totalPages": @"total_pages" };
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"content", @"first", @"last", @"number", @"numberOfElements", @"size", @"sort", @"totalElements", @"totalPages"];

  return [optionalProperties containsObject:propertyName];
}

@end
