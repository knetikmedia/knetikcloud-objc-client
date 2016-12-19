#import <Foundation/Foundation.h>
#import "SWGPageStoreItemTemplateResource_.h"
#import "SWGPageStoreItem_.h"
#import "SWGStoreItem.h"
#import "SWGStoreItemTemplateResource.h"
#import "SWGStoreListRequest.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGStoreApi: NSObject <SWGApi>

extern NSString* kSWGStoreApiErrorDomain;
extern NSInteger kSWGStoreApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create an item template
/// Item Templates define a type of item and the properties they have.
///
/// @param itemTemplateResource The new item template (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGStoreItemTemplateResource*
-(NSNumber*) createItemTemplateUsingPOSTWithItemTemplateResource: (SWGStoreItemTemplateResource*) itemTemplateResource
    completionHandler: (void (^)(SWGStoreItemTemplateResource* output, NSError* error)) handler;


/// Create a store item
/// SKUs have to be unique in the entire store. If a duplicate SKU is found, a 400 error is generated and the response will have a \"parameters\" field that is a list of duplicates. A duplicate is an object like {item_id, offending_sku_list}. Ex:<br /> {..., parameters: [[{item: 1, skus: [\"SKU-1\"]}]]}<br /> If an item is brand new and has duplicate SKUs within itself, the item ID will be 0.  Item subclasses are not allowed here, you will have to use their respective endpoints.
///
/// @param storeItem The store item object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGStoreItem*
-(NSNumber*) createStoreItemExternalUsingPOSTWithStoreItem: (SWGStoreItem*) storeItem
    completionHandler: (void (^)(SWGStoreItem* output, NSError* error)) handler;


/// Delete an item template
/// 
///
/// @param _id The id of the template
/// @param cascade force deleting the template if it&#39;s attached to other objects, cascade &#x3D; detach (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteItemTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a store item
/// 
///
/// @param _id The id of the item
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteStoreItemUsingDELETE1WithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single item template
/// Item Templates define a type of item and the properties they have.
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGStoreItemTemplateResource*
-(NSNumber*) getItemTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGStoreItemTemplateResource* output, NSError* error)) handler;


/// List and search item templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageStoreItemTemplateResource_*
-(NSNumber*) getItemTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageStoreItemTemplateResource_* output, NSError* error)) handler;


/// Get a single store item
/// 
///
/// @param _id The id of the item
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGStoreItem*
-(NSNumber*) getStoreItemUsingGET1WithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGStoreItem* output, NSError* error)) handler;


/// List and search store items
/// 
///
/// @param filterNameSearch Filter for items whose name starts with a given string. (optional)
/// @param filterUniqueKey Filter for items whose unique_key is a given string. (optional)
/// @param filterPublished Filter for skus that have been published. (optional)
/// @param filterDisplayable Filter for items that are displayable. (optional)
/// @param filterStart A comma separated string without spaces.  First value is the operator to search on, second value is the store start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
/// @param filterEnd A comma separated string without spaces.  First value is the operator to search on, second value is the store end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
/// @param filterStartDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku start date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
/// @param filterStopDate A comma separated string without spaces.  First value is the operator to search on, second value is the sku end date, a unix timestamp in seconds.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
/// @param filterSku Filter for skus whose name starts with a given string. (optional)
/// @param filterPrice A colon separated string without spaces.  First value is the operator to search on, second value is the price of a sku.  Allowed operators: (LT, GT, LTE, GTE, EQ). (optional)
/// @param filterTag A comma separated list without spaces of the names of tags. Will only return items with at least one of the tags. (optional)
/// @param filterItemsByType Filter for item type based on its type hint. (optional)
/// @param filterBundledSkus Filter for skus inside bundles whose name starts with a given string.  Used only when type hint is &#39;bundle_item&#39; (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageStoreItem_*
-(NSNumber*) getStoreItemsUsingGETWithFilterNameSearch: (NSString*) filterNameSearch
    filterUniqueKey: (NSString*) filterUniqueKey
    filterPublished: (NSNumber*) filterPublished
    filterDisplayable: (NSNumber*) filterDisplayable
    filterStart: (NSString*) filterStart
    filterEnd: (NSString*) filterEnd
    filterStartDate: (NSString*) filterStartDate
    filterStopDate: (NSString*) filterStopDate
    filterSku: (NSString*) filterSku
    filterPrice: (NSString*) filterPrice
    filterTag: (NSString*) filterTag
    filterItemsByType: (NSString*) filterItemsByType
    filterBundledSkus: (NSString*) filterBundledSkus
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageStoreItem_* output, NSError* error)) handler;


/// Get a listing of store items
/// The exact structure of each items may differ to include fields specific to the type. The same is true for behaviors.
///
/// @param storeListRequest The store list request object (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageStoreItem_*
-(NSNumber*) getUsingGET2WithStoreListRequest: (SWGStoreListRequest*) storeListRequest
    completionHandler: (void (^)(SWGPageStoreItem_* output, NSError* error)) handler;


/// Update an item template
/// 
///
/// @param _id The id of the template
/// @param itemTemplateResource The item template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateItemTemplateUsingPUTWithId: (NSString*) _id
    itemTemplateResource: (SWGStoreItemTemplateResource*) itemTemplateResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a store item
/// 
///
/// @param _id The id of the item
/// @param storeItem The store item object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateStoreItemExternalUsingPUTWithId: (NSNumber*) _id
    storeItem: (SWGStoreItem*) storeItem
    completionHandler: (void (^)(NSError* error)) handler;



@end