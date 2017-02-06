#import "SWGVideo.h"

@implementation SWGVideo

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"active": @"active", @"author": @"author", @"authored": @"authored", @"banned": @"banned", @"categoryId": @"category_id", @"categoryName": @"category_name", @"contributors": @"contributors", @"created": @"created", @"embed": @"embed", @"extension": @"extension", @"height": @"height", @"_id": @"id", @"length": @"length", @"location": @"location", @"longDescription": @"long_description", @"mimeType": @"mime_type", @"name": @"name", @"priority": @"priority", @"privacy": @"privacy", @"published": @"published", @"shortDescription": @"short_description", @"size": @"size", @"tags": @"tags", @"thumbnail": @"thumbnail", @"updated": @"updated", @"uploader": @"uploader", @"views": @"views", @"whitelist": @"whitelist", @"width": @"width" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"author", @"authored", @"banned", @"categoryId", @"categoryName", @"contributors", @"created", @"embed", @"extension", @"height", @"_id", @"length", @"location", @"longDescription", @"mimeType", @"name", @"priority", @"privacy", @"published", @"shortDescription", @"size", @"tags", @"thumbnail", @"updated", @"uploader", @"views", @"whitelist", @"width"];
  return [optionalProperties containsObject:propertyName];
}

@end
