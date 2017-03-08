#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGBehavior.h"
#import "SWGProperty.h"
#import "SWGSku.h"


@protocol SWGStoreItem
@end

@interface SWGStoreItem : SWGObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template [optional]
 */
@property(nonatomic) NSDictionary<SWGProperty>* additionalProperties;
/* The behaviors linked to the item, describing various options and interactions. May not be included in item lists [optional]
 */
@property(nonatomic) NSArray<SWGBehavior>* behaviors;
/* A category for filtering items [optional]
 */
@property(nonatomic) NSString* category;
/* The date the item was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* Whether or not the item is currently displayable.  Default = true [optional]
 */
@property(nonatomic) NSNumber* displayable;
/* A list of country ID to include in the blacklist/whitelist geo policy [optional]
 */
@property(nonatomic) NSArray<NSString*>* geoCountryList;
/* Whether to use the geo_country_list as a black list or white list for item geographical availability [optional]
 */
@property(nonatomic) NSString* geoPolicyType;
/* The id of the item [optional]
 */
@property(nonatomic) NSNumber* _id;
/* A long description of the item [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The name of the item 
 */
@property(nonatomic) NSString* name;
/* Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default = 0 [optional]
 */
@property(nonatomic) NSNumber* shippingTier;
/* A short description of the item, max 255 chars [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart 
 */
@property(nonatomic) NSArray<SWGSku>* skus;
/* A number to use in sorting items.  Default 500 [optional]
 */
@property(nonatomic) NSNumber* sort;
/* The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store [optional]
 */
@property(nonatomic) NSNumber* storeEnd;
/* The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately [optional]
 */
@property(nonatomic) NSNumber* storeStart;
/* List of tags used for filtering items [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null [optional]
 */
@property(nonatomic) NSString* template;
/* The type of the item 
 */
@property(nonatomic) NSString* typeHint;
/* The unique key for the item [optional]
 */
@property(nonatomic) NSString* uniqueKey;
/* The date the item was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The vendor who provides the item 
 */
@property(nonatomic) NSNumber* vendorId;

@end
