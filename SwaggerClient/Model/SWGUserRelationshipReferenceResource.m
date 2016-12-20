#import "SWGUserRelationshipReferenceResource.h"

@implementation SWGUserRelationshipReferenceResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"avatarUrl": @"avatar_url", @"context": @"context", @"displayName": @"display_name", @"_id": @"id", @"relationshipId": @"relationship_id", @"username": @"username" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"avatarUrl", @"context", @"displayName", @"relationshipId", @"username"];
  return [optionalProperties containsObject:propertyName];
}

@end
