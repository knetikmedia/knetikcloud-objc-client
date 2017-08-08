#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "JSAPIBehavior.h"
#import "JSAPIItem.h"
#import "JSAPIProperty.h"
#import "JSAPISku.h"
@protocol JSAPIBehavior;
@class JSAPIBehavior;
@protocol JSAPIItem;
@class JSAPIItem;
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPISku;
@class JSAPISku;



@protocol JSAPIStoreItem
@end

@interface JSAPIStoreItem : JSAPIItem

/* Whether or not the item is currently displayable.  Default = true [optional]
 */
@property(nonatomic) NSNumber* displayable;
/* A list of country ID to include in the blacklist/whitelist geo policy [optional]
 */
@property(nonatomic) NSArray<NSString*>* geoCountryList;
/* Whether to use the geo_country_list as a black list or white list for item geographical availability [optional]
 */
@property(nonatomic) NSString* geoPolicyType;
/* Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default = 0 [optional]
 */
@property(nonatomic) NSNumber* shippingTier;
/* The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart 
 */
@property(nonatomic) NSArray<JSAPISku>* skus;
/* The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store [optional]
 */
@property(nonatomic) NSNumber* storeEnd;
/* The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately [optional]
 */
@property(nonatomic) NSNumber* storeStart;
/* The vendor who provides the item 
 */
@property(nonatomic) NSNumber* vendorId;


@end
