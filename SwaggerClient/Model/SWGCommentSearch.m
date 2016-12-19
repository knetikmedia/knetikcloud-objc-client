#import "SWGCommentSearch.h"

@implementation SWGCommentSearch

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"content": @"content", @"context": @"context", @"contextId": @"context_id", @"_id": @"id", @"ownerId": @"owner_id", @"ownerUsername": @"owner_username" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"content", @"context", @"contextId", @"_id", @"ownerId", @"ownerUsername"];
  return [optionalProperties containsObject:propertyName];
}

@end
