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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:[self modalDictionary]];
}

+ (NSDictionary *)modalDictionary {
  NSMutableDictionary * mutableDictionary = [[NSMutableDictionary alloc] initWithDictionary:[super modalDictionary] copyItems:NO];
    
  [mutableDictionary addEntriesFromDictionary:@{ @"displayable": @"displayable", @"geoCountryList": @"geo_country_list", @"geoPolicyType": @"geo_policy_type", @"shippingTier": @"shipping_tier", @"skus": @"skus", @"storeEnd": @"store_end", @"storeStart": @"store_start", @"vendorId": @"vendor_id" }];
    
  return mutableDictionary;
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"displayable", @"geoCountryList", @"geoPolicyType", @"shippingTier", @"storeEnd", @"storeStart", ];
  return [super propertyIsOptional:propertyName] | [optionalProperties containsObject:propertyName];
}

@end
