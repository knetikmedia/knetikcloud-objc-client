#import "JSAPIVideoResource.h"

@implementation JSAPIVideoResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"active": @"active", @"author": @"author", @"authored": @"authored", @"banned": @"banned", @"category": @"category", @"comments": @"comments", @"contributors": @"contributors", @"createdDate": @"created_date", @"embed": @"embed", @"extension": @"extension", @"height": @"height", @"_id": @"id", @"length": @"length", @"location": @"location", @"longDescription": @"long_description", @"mimeType": @"mime_type", @"name": @"name", @"priority": @"priority", @"privacy": @"privacy", @"published": @"published", @"shortDescription": @"short_description", @"size": @"size", @"tags": @"tags", @"thumbnail": @"thumbnail", @"updatedDate": @"updated_date", @"uploader": @"uploader", @"views": @"views", @"width": @"width" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"active", @"author", @"authored", @"banned", @"comments", @"contributors", @"createdDate", @"embed", @"_id", @"longDescription", @"mimeType", @"priority", @"privacy", @"published", @"shortDescription", @"size", @"tags", @"thumbnail", @"updatedDate", @"uploader", @"views", ];
  return [optionalProperties containsObject:propertyName];
}

@end
