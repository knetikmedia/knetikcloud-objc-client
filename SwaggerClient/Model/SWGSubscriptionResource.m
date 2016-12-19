#import "SWGSubscriptionResource.h"

@implementation SWGSubscriptionResource

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"additionalProperties": @"additional_properties", @"availability": @"availability", @"category": @"category", @"consolidationDayOfMonth": @"consolidation_day_of_month", @"createdDate": @"created_date", @"geoCountryList": @"geo_country_list", @"geoPolicyType": @"geo_policy_type", @"_id": @"id", @"longDescription": @"long_description", @"name": @"name", @"plans": @"plans", @"shortDescription": @"short_description", @"sort": @"sort", @"storeEnd": @"store_end", @"storeStart": @"store_start", @"tags": @"tags", @"template": @"template", @"uniqueKey": @"unique_key", @"updatedDate": @"updated_date", @"vendorId": @"vendor_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"additionalProperties", @"availability", @"category", @"consolidationDayOfMonth", @"createdDate", @"geoCountryList", @"geoPolicyType", @"_id", @"longDescription", @"plans", @"shortDescription", @"sort", @"storeEnd", @"storeStart", @"tags", @"template", @"uniqueKey", @"updatedDate", ];
  return [optionalProperties containsObject:propertyName];
}

@end