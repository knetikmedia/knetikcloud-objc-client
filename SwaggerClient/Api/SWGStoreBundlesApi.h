#import <Foundation/Foundation.h>
#import "SWGBundleItem.h"
#import "SWGItemTemplateResource.h"
#import "SWGPageItemTemplateResource_.h"
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



@interface SWGStoreBundlesApi: NSObject <SWGApi>

extern NSString* kSWGStoreBundlesApiErrorDomain;
extern NSInteger kSWGStoreBundlesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create a bundle item
/// The SKU for the bundle itself must be unique and there can only be one SKU.  Extra notes for price_override:  The price of all the items (multiplied by the quantity) must equal the price of the bundle.  With individual prices set, items will be processed individually and can be refunded as such.  However, if all prices are set to null, the price of the bundle will be used and will be treated as one item.
///
/// @param bundleItem The bundle item object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBundleItem*
-(NSNumber*) createBundleItemUsingPOSTWithBundleItem: (SWGBundleItem*) bundleItem
    completionHandler: (void (^)(SWGBundleItem* output, NSError* error)) handler;


/// Create a bundle template
/// Bundle Templates define a type of bundle and the properties they have.
///
/// @param bundleTemplateResource The new bundle template (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGItemTemplateResource*
-(NSNumber*) createBundleTemplateUsingPOSTWithBundleTemplateResource: (SWGItemTemplateResource*) bundleTemplateResource
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;


/// Delete a bundle template
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
-(NSNumber*) deleteBundleTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a bundle item
/// 
///
/// @param _id The id of the bundle
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteStoreItemUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single bundle template
/// Bundle Templates define a type of bundle and the properties they have.
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGItemTemplateResource*
-(NSNumber*) getBundleTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;


/// List and search bundle templates
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
/// @return SWGPageItemTemplateResource_*
-(NSNumber*) getBundleTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageItemTemplateResource_* output, NSError* error)) handler;


/// Get a single bundle item
/// 
///
/// @param _id The id of the bundle
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGBundleItem*
-(NSNumber*) getStoreItemUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGBundleItem* output, NSError* error)) handler;


/// Update a bundle item
/// 
///
/// @param _id The id of the bundle
/// @param bundleItem The bundle item object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateBundleItemUsingPUTWithId: (NSNumber*) _id
    bundleItem: (SWGBundleItem*) bundleItem
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a bundle template
/// 
///
/// @param _id The id of the template
/// @param bundleTemplateResource The bundle template resource object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateBundleTemplateUsingPUTWithId: (NSString*) _id
    bundleTemplateResource: (SWGItemTemplateResource*) bundleTemplateResource
    completionHandler: (void (^)(NSError* error)) handler;



@end