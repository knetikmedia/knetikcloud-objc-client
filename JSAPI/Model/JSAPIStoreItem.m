#import "JSAPIStoreItem.h"

@implementation JSAPIStoreItem

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"behaviors": @"behaviors", @"category": @"category", @"createdDate": @"created_date", @"displayable": @"displayable", @"geoCountryList": @"geo_country_list", @"geoPolicyType": @"geo_policy_type", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"shippingTier": @"shipping_tier", @"shortDescription": @"short_description", @"skus": @"skus", @"sort": @"sort", @"storeEnd": @"store_end", @"storeStart": @"store_start", @"tags": @"tags", @"template": @"template", @"typeHint": @"type_hint", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date", @"vendorId": @"vendor_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"behaviors", @"category", @"createdDate", @"displayable", @"geoCountryList", @"geoPolicyType", @"_id", @"longDescription", @"shippingTier", @"shortDescription", @"sort", @"storeEnd", @"storeStart", @"tags", @"template", @"uniqueKey", @"updatedDate", ];
  return [optionalProperties containsObject:propertyName];
}

@end
